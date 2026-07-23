/*
 * XREFs of CmpAddSubKey @ 0x1408ABF2E
 * Callers:
 *     CmpCreateTombstone @ 0x14061739C (CmpCreateTombstone.c)
 * Callees:
 *     CmpAddSubKeyEx @ 0x140708778 (CmpAddSubKeyEx.c)
 */

__int64 __fastcall CmpAddSubKey(ULONG_PTR a1, ULONG_PTR a2, unsigned int a3)
{
  return CmpAddSubKeyEx(a1, a2, a3, 0);
}
