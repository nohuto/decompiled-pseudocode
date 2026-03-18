/*
 * XREFs of CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x14091CE30
 * Callers:
 *     <none>
 * Callees:
 *     CmpDiscardKcb @ 0x14067EB68 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x14067EDC0 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14067EE40 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpInvalidateSubtree @ 0x14069E21C (CmpInvalidateSubtree.c)
 */

__int64 __fastcall CmpInvalidateAllHigherLayerKcbsPostCallback(ULONG_PTR a1, __int64 a2, unsigned int *a3)
{
  CmpInvalidateSubtree(a1, *a3, a3[1], a2, 0LL);
  if ( (a3[1] & 2) != 0 )
  {
    CmpMarkKeyUnbacked(a1, a2);
    CmpFlushNotifiesOnKeyBodyList(a1, *a3, a2, 1);
    CmpDiscardKcb(a1);
  }
  return 0LL;
}
