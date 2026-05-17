/*
 * XREFs of TppETWTimerExpiration @ 0x180124A4C
 * Callers:
 *     TppSingleTimerExpiration @ 0x18001EEBC (TppSingleTimerExpiration.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 */

__int64 TppETWTimerExpiration()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
