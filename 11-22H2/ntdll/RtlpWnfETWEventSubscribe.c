/*
 * XREFs of RtlpWnfETWEventSubscribe @ 0x1800E90B8
 * Callers:
 *     RtlpAddWnfUserSubToNameSub @ 0x18005BE6C (RtlpAddWnfUserSubToNameSub.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventSubscribe()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
