/*
 * XREFs of RtlpWnfETWEventCallback @ 0x1800E8ED0
 * Callers:
 *     RtlpWnfWalkUserSubscriptionList @ 0x18004DF68 (RtlpWnfWalkUserSubscriptionList.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventCallback()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
