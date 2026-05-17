/*
 * XREFs of TppETWTimerCancelled @ 0x18012640C
 * Callers:
 *     TppCancelTimer @ 0x180032C88 (TppCancelTimer.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 */

__int64 TppETWTimerCancelled()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
