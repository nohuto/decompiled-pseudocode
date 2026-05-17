/*
 * XREFs of RtlpWnfETWEventPublish @ 0x1800E9028
 * Callers:
 *     RtlPublishWnfStateData @ 0x180080580 (RtlPublishWnfStateData.c)
 *     RtlTestAndPublishWnfStateData @ 0x1800864E0 (RtlTestAndPublishWnfStateData.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventPublish()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
