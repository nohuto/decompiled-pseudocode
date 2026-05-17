/*
 * XREFs of RtlpWnfETWEventCallback @ 0x1800E9E78
 * Callers:
 *     RtlpWnfWalkUserSubscriptionList @ 0x18005A9B4 (RtlpWnfWalkUserSubscriptionList.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventCallback()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
