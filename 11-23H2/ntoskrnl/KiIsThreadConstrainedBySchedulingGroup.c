/*
 * XREFs of KiIsThreadConstrainedBySchedulingGroup @ 0x14030909C
 * Callers:
 *     KiQueueReadyThread @ 0x140234510 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x14023A2D0 (KiDeferredReadySingleThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140240C90 (KiSearchForNewThreadOnProcessor.c)
 *     KiStartReadyQueueEnumeratorForRescheduleContext @ 0x1402428B0 (KiStartReadyQueueEnumeratorForRescheduleContext.c)
 *     KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry @ 0x1402438B0 (KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1402B3000 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140307F54 (KiGroupSchedulingQuantumEnd.c)
 *     KiBeginThreadAccountingPeriod @ 0x140308DB0 (KiBeginThreadAccountingPeriod.c)
 *     KiIsThreadRankNonZero @ 0x140308FE0 (KiIsThreadRankNonZero.c)
 *     KiHandleDeferredPreemption @ 0x1403091C8 (KiHandleDeferredPreemption.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsThreadConstrainedBySchedulingGroup(__int64 a1)
{
  return *(char *)(a1 + 195) < 16 && (*(_DWORD *)(a1 + 120) & 0x200) == 0;
}
