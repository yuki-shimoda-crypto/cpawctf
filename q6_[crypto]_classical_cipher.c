#include<stdio.h>
#include<ctype.h>

int main(void)
{
	char	str[] = "fsdz{Fdhvdu_flskhu_lv_fodvvlfdo_flskhu}";
	
	for (int i = 0; str[i] != 0; i++)
		if (isalpha(str[i]))
			str[i] -= 3;
	printf("%s\n", str);
	return (0);
}
