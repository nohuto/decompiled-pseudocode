/*
 * XREFs of SdbpInitializeMatchers @ 0x18009BBC4
 * Callers:
 *     SdbInitDatabaseEx @ 0x180095D78 (SdbInitDatabaseEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SdbpInitializeMatchers(__int64 a1)
{
  char *v1; // r8
  char *v2; // r9
  char *v3; // r10
  char *v4; // r11
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax

  v1 = (char *)&unk_1800B5B90 - a1;
  v2 = (char *)&off_1800B5B98 - a1;
  v3 = (char *)&unk_1800B5BA0 - a1;
  v4 = (char *)&unk_1800B5BA8 - a1;
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
