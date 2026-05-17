/*
 * XREFs of TppETWTimerSetNtTimer @ 0x180127B10
 * Callers:
 *     TppUpdateSubQueueTimer @ 0x180030C28 (TppUpdateSubQueueTimer.c)
 *     TppTimerQueueExpiration @ 0x1800313B0 (TppTimerQueueExpiration.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A1A60 (NtTraceEvent.c)
 */

__int64 TppETWTimerSetNtTimer()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
