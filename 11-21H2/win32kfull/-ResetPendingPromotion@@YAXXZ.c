/*
 * XREFs of ?ResetPendingPromotion@@YAXXZ @ 0x1C0213EA4
 * Callers:
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C02137B0 (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z @ 0x1C0213AC4 (-ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z.c)
 * Callees:
 *     <none>
 */

void ResetPendingPromotion(void)
{
  if ( qword_1C0335D78 )
    *(_DWORD *)(qword_1C0335D78 + 1144) = 0;
  word_1C0335D70 = 0;
  dword_1C0335D74 = 0;
  qword_1C0335D78 = 0LL;
  dword_1C0335D80 = 0;
}
