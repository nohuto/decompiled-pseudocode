/*
 * XREFs of KiIsThreadConstrainedBySchedulingGroup @ 0x14030932C
 * Callers:
 *     KiQueueReadyThread @ 0x1402345E0 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x14023A3A0 (KiDeferredReadySingleThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140240D60 (KiSearchForNewThreadOnProcessor.c)
 *     KiStartReadyQueueEnumeratorForRescheduleContext @ 0x140242980 (KiStartReadyQueueEnumeratorForRescheduleContext.c)
 *     KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry @ 0x140243980 (KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1402B3290 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1403081E4 (KiGroupSchedulingQuantumEnd.c)
 *     KiBeginThreadAccountingPeriod @ 0x140309040 (KiBeginThreadAccountingPeriod.c)
 *     KiIsThreadRankNonZero @ 0x140309270 (KiIsThreadRankNonZero.c)
 *     KiHandleDeferredPreemption @ 0x140309458 (KiHandleDeferredPreemption.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsThreadConstrainedBySchedulingGroup(__int64 a1)
{
  return *(char *)(a1 + 195) < 16 && (*(_DWORD *)(a1 + 120) & 0x200) == 0;
}
