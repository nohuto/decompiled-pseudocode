/*
 * XREFs of sub_140569E30 @ 0x140569E30
 * Callers:
 *     sub_1403EBF10 @ 0x1403EBF10 (sub_1403EBF10.c)
 * Callees:
 *     <none>
 */

__int64 sub_140569E30()
{
  __int64 v0; // rcx

  v0 = *((_QWORD *)KeGetCurrentPrcb() + 41);
  return v0 & -(__int64)((v0 & 0x355) != 0);
}
