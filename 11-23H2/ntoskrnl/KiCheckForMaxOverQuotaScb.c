/*
 * XREFs of KiCheckForMaxOverQuotaScb @ 0x1403090BC
 * Callers:
 *     KiQueueReadyThread @ 0x140234510 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x14023A2D0 (KiDeferredReadySingleThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140240C90 (KiSearchForNewThreadOnProcessor.c)
 *     KiStartReadyQueueEnumeratorForRescheduleContext @ 0x1402428B0 (KiStartReadyQueueEnumeratorForRescheduleContext.c)
 *     KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry @ 0x1402438B0 (KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1402B3240 (KiGetThreadEffectiveRankNonZero.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140307F54 (KiGroupSchedulingQuantumEnd.c)
 *     KiBeginThreadAccountingPeriod @ 0x140308DB0 (KiBeginThreadAccountingPeriod.c)
 *     KiIsThreadRankNonZero @ 0x140308FE0 (KiIsThreadRankNonZero.c)
 *     KiHandleDeferredPreemption @ 0x1403091C8 (KiHandleDeferredPreemption.c)
 * Callees:
 *     <none>
 */

char __fastcall KiCheckForMaxOverQuotaScb(__int64 a1)
{
  while ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
  {
    a1 = *(_QWORD *)(a1 + 408);
    if ( !a1 )
      return 0;
  }
  return 1;
}
