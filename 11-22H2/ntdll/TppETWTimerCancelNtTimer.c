/*
 * XREFs of TppETWTimerCancelNtTimer @ 0x180126390
 * Callers:
 *     TppUpdateSubQueueTimer @ 0x180030DF8 (TppUpdateSubQueueTimer.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 */

__int64 TppETWTimerCancelNtTimer()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
