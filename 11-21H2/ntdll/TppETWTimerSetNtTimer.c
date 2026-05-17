/*
 * XREFs of TppETWTimerSetNtTimer @ 0x180124C20
 * Callers:
 *     TppTimerQueueExpiration @ 0x18001CE00 (TppTimerQueueExpiration.c)
 *     TppUpdateSubQueueTimer @ 0x18001E8C8 (TppUpdateSubQueueTimer.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 */

__int64 TppETWTimerSetNtTimer()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
