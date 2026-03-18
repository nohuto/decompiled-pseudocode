/*
 * XREFs of KCBIsVirtualizable @ 0x1403479C4
 * Callers:
 *     KCBNeedsVirtualImage @ 0x14034798C (KCBNeedsVirtualImage.c)
 * Callees:
 *     CmpIsKcbInsideVirtualizedHive @ 0x1406E2A40 (CmpIsKcbInsideVirtualizedHive.c)
 */

bool __fastcall KCBIsVirtualizable(__int64 a1)
{
  return CmpVEEnabled
      && (*(_DWORD *)(a1 + 184) & 0x2000000) == 0
      && (unsigned __int8)CmpIsKcbInsideVirtualizedHive() != 0;
}
