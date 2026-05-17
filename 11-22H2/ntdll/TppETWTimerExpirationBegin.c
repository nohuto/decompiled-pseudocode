/*
 * XREFs of TppETWTimerExpirationBegin @ 0x18012652C
 * Callers:
 *     TppTimerQueueExpiration @ 0x180031510 (TppTimerQueueExpiration.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 */

__int64 TppETWTimerExpirationBegin()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
