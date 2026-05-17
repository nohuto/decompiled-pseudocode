/*
 * XREFs of TppETWTimerExpiration @ 0x18012648C
 * Callers:
 *     TppSingleTimerExpiration @ 0x180030F5C (TppSingleTimerExpiration.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 */

__int64 TppETWTimerExpiration()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
