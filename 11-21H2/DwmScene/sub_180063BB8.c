/*
 * XREFs of sub_180063BB8 @ 0x180063BB8
 * Callers:
 *     sub_180064DC0 @ 0x180064DC0 (sub_180064DC0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180063BB8(__int64 a1, int a2)
{
  __int64 v2; // rdx
  int v3; // eax

  v2 = 3LL * a2;
  v3 = dword_180134520[v2 + 2];
  *(_QWORD *)a1 = *(_QWORD *)&dword_180134520[v2];
  *(_DWORD *)(a1 + 8) = v3;
  return a1;
}
