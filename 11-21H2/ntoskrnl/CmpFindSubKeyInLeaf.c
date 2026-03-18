/*
 * XREFs of CmpFindSubKeyInLeaf @ 0x140920C6C
 * Callers:
 *     CmpRemoveSubKeyFromList @ 0x140716F80 (CmpRemoveSubKeyFromList.c)
 * Callees:
 *     CmpFindSubKeyInLeafWithStatus @ 0x1407CD270 (CmpFindSubKeyInLeafWithStatus.c)
 */

__int64 __fastcall CmpFindSubKeyInLeaf(
        ULONG_PTR a1,
        __int64 a2,
        const UNICODE_STRING *a3,
        unsigned __int16 *a4,
        _DWORD *a5)
{
  unsigned int v6[6]; // [rsp+30h] [rbp-18h] BYREF

  v6[0] = 0;
  CmpFindSubKeyInLeafWithStatus(a1, a2, a3, a4, a5, (int *)v6);
  return v6[0];
}
