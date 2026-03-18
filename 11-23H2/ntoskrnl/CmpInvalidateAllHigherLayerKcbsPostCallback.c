/*
 * XREFs of CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x140A1FD80
 * Callers:
 *     <none>
 * Callees:
 *     CmpInvalidateSubtree @ 0x140699EE8 (CmpInvalidateSubtree.c)
 *     CmpMarkKeyUnbacked @ 0x1407107FC (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14071087C (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpDiscardKcb @ 0x14076AD08 (CmpDiscardKcb.c)
 */

__int64 __fastcall CmpInvalidateAllHigherLayerKcbsPostCallback(ULONG_PTR BugCheckParameter4, __int64 a2, int *a3)
{
  CmpInvalidateSubtree(BugCheckParameter4, *a3, a3[1], a2, 0LL);
  if ( (a3[1] & 2) != 0 )
  {
    CmpMarkKeyUnbacked(BugCheckParameter4);
    CmpFlushNotifiesOnKeyBodyList(BugCheckParameter4, *a3, a2, 1);
    CmpDiscardKcb(BugCheckParameter4);
  }
  return 0LL;
}
