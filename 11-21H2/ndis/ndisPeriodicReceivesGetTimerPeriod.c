/*
 * XREFs of ndisPeriodicReceivesGetTimerPeriod @ 0x1C0039920
 * Callers:
 *     ndisReceiveWorkerThread @ 0x1C0030DC0 (ndisReceiveWorkerThread.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER ndisPeriodicReceivesGetTimerPeriod()
{
  LARGE_INTEGER result; // rax

  result = DueTime;
  if ( !DueTime.QuadPart )
    return (LARGE_INTEGER)-1LL;
  return result;
}
