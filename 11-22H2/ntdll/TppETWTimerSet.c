/*
 * XREFs of TppETWTimerSet @ 0x1801265A8
 * Callers:
 *     TppSetTimer @ 0x180030BC8 (TppSetTimer.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 */

__int64 TppETWTimerSet()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
