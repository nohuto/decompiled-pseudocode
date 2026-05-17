/*
 * XREFs of RtlpWnfETWEventUnsubscribe @ 0x1800EA11C
 * Callers:
 *     RtlpRemoveUserSubFromNameSub @ 0x18005A51C (RtlpRemoveUserSubFromNameSub.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventUnsubscribe()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
