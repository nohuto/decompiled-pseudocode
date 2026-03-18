/*
 * XREFs of KiShouldPreemptionBeDeferred @ 0x140307870
 * Callers:
 *     KiQueueReadyThread @ 0x140234510 (KiQueueReadyThread.c)
 *     KiStartReadyQueueEnumeratorForRescheduleContext @ 0x1402428B0 (KiStartReadyQueueEnumeratorForRescheduleContext.c)
 *     KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry @ 0x1402438B0 (KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1402B3000 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiDeferGroupSchedulingPreemption @ 0x140307584 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140307F54 (KiGroupSchedulingQuantumEnd.c)
 * Callees:
 *     <none>
 */

char __fastcall KiShouldPreemptionBeDeferred(__int64 a1)
{
  char result; // al

  result = 0;
  if ( *(_DWORD *)(a1 + 484) || *(_BYTE *)(a1 + 390) == 1 )
    return 1;
  return result;
}
