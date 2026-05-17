/*
 * XREFs of TppETWTimerCancelled @ 0x1801249CC
 * Callers:
 *     TppCancelTimer @ 0x18001C7D8 (TppCancelTimer.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 */

__int64 TppETWTimerCancelled()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
