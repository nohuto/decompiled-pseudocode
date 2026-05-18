/*
 * XREFs of sub_18005BA58 @ 0x18005BA58
 * Callers:
 *     sub_18005CAD0 @ 0x18005CAD0 (sub_18005CAD0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18005BA58(__int64 a1, int a2)
{
  __int64 v2; // rdx
  int v3; // eax

  v2 = 3LL * a2;
  v3 = dword_180112580[v2 + 2];
  *(_QWORD *)a1 = *(_QWORD *)&dword_180112580[v2];
  *(_DWORD *)(a1 + 8) = v3;
  return a1;
}
