/*
 * XREFs of sub_1407ED054 @ 0x1407ED054
 * Callers:
 *     sub_1407ECFCC @ 0x1407ECFCC (sub_1407ECFCC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407ED054(__int64 a1)
{
  char *v1; // r8
  char *v2; // r9
  char *v3; // r10
  char *v4; // r11
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax

  v1 = (char *)&qword_1400073C0 - a1;
  v2 = (char *)&off_1400073C8 - a1;
  v3 = (char *)&qword_1400073D0 - a1;
  v4 = (char *)&qword_1400073D8 - a1;
  v5 = a1 + 592;
  v6 = 13LL;
  do
  {
    *(_DWORD *)(v5 - 8) = *(_DWORD *)&v1[v5 - 592];
    *(_QWORD *)v5 = *(_QWORD *)&v2[v5 - 592];
    *(_QWORD *)(v5 + 8) = *(_QWORD *)&v3[v5 - 592];
    result = *(unsigned int *)&v4[v5 - 592];
    *(_DWORD *)(v5 + 16) = result;
    v5 += 32LL;
    --v6;
  }
  while ( v6 );
  return result;
}
