/*
 * XREFs of TppETWTimerSet @ 0x180124B68
 * Callers:
 *     TppSetTimer @ 0x18001E794 (TppSetTimer.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 */

__int64 TppETWTimerSet()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
