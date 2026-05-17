/*
 * XREFs of RtlpWnfETWEventSubscribe @ 0x1800EA3E8
 * Callers:
 *     RtlpAddWnfUserSubToNameSub @ 0x18006163C (RtlpAddWnfUserSubToNameSub.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A1A60 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventSubscribe()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
