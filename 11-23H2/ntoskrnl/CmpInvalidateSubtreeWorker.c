/*
 * XREFs of CmpInvalidateSubtreeWorker @ 0x140682700
 * Callers:
 *     <none>
 * Callees:
 *     CmpRemoveLayerLinkForDiscardedKcb @ 0x14067F518 (CmpRemoveLayerLinkForDiscardedKcb.c)
 *     CmpMarkKeyUnbacked @ 0x140710A0C (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140710A8C (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpCleanUpSubKeyInfo @ 0x14076ABB4 (CmpCleanUpSubKeyInfo.c)
 *     CmpDiscardKcb @ 0x14076AEF8 (CmpDiscardKcb.c)
 */

__int64 __fastcall CmpInvalidateSubtreeWorker(ULONG_PTR BugCheckParameter4, unsigned int *a2)
{
  __int64 v3; // rsi

  v3 = *((_QWORD *)a2 + 2);
  if ( (*(_DWORD *)(BugCheckParameter4 + 8) & 0x20000) == 0 )
  {
    CmpFlushNotifiesOnKeyBodyList(BugCheckParameter4, *a2, v3);
    CmpCleanUpSubKeyInfo(*(_QWORD *)(BugCheckParameter4 + 72), 0LL);
    CmpMarkKeyUnbacked(BugCheckParameter4, v3);
    CmpDiscardKcb(BugCheckParameter4);
  }
  if ( (a2[2] & 1) != 0 )
    CmpRemoveLayerLinkForDiscardedKcb(BugCheckParameter4);
  ++a2[1];
  return 0LL;
}
