/*
 * XREFs of RtlpWnfETWEventUnsubscribe @ 0x1800EA4A4
 * Callers:
 *     RtlpRemoveUserSubFromNameSub @ 0x18004C57C (RtlpRemoveUserSubFromNameSub.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A1A60 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventUnsubscribe()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
