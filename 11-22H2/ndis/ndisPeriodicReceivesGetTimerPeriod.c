/*
 * XREFs of ndisPeriodicReceivesGetTimerPeriod @ 0x1C003E6F8
 * Callers:
 *     ndisReceiveWorkerThread @ 0x1C0033120 (ndisReceiveWorkerThread.c)
 * Callees:
 *     <none>
 */

__int64 ndisPeriodicReceivesGetTimerPeriod()
{
  __int64 result; // rax

  result = qword_1C00F5228;
  if ( !qword_1C00F5228 )
    return -1LL;
  return result;
}
