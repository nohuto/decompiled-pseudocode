/*
 * XREFs of CmpAddSubKey @ 0x1408AC1BE
 * Callers:
 *     CmpCreateTombstone @ 0x140616EBC (CmpCreateTombstone.c)
 * Callees:
 *     CmpAddSubKeyEx @ 0x140708618 (CmpAddSubKeyEx.c)
 */

__int64 __fastcall CmpAddSubKey(ULONG_PTR a1, ULONG_PTR a2, unsigned int a3)
{
  return CmpAddSubKeyEx(a1, a2, a3, 0);
}
