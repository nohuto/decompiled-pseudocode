/*
 * XREFs of sub_1409FCD60 @ 0x1409FCD60
 * Callers:
 *     <none>
 * Callees:
 *     sub_1409FE424 @ 0x1409FE424 (sub_1409FE424.c)
 */

bool __fastcall sub_1409FCD60(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  char v4; // [rsp+40h] [rbp+18h] BYREF

  v2 = *a1 - 0x11D293CA8BE4DF61LL;
  if ( *a1 == 0x11D293CA8BE4DF61LL )
    v2 = a1[1] + 0x73D4FC671FFFF256LL;
  return !v2 && (unsigned int)sub_1409FE424(a2, &v4);
}
