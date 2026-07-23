/*
 * XREFs of KiShouldPreemptionBeDeferred @ 0x140307B00
 * Callers:
 *     KiQueueReadyThread @ 0x1402345E0 (KiQueueReadyThread.c)
 *     KiStartReadyQueueEnumeratorForRescheduleContext @ 0x140242980 (KiStartReadyQueueEnumeratorForRescheduleContext.c)
 *     KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry @ 0x140243980 (KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1402B3290 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiDeferGroupSchedulingPreemption @ 0x140307814 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1403081E4 (KiGroupSchedulingQuantumEnd.c)
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
