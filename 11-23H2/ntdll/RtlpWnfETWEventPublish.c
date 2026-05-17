/*
 * XREFs of RtlpWnfETWEventPublish @ 0x1800EA358
 * Callers:
 *     RtlPublishWnfStateData @ 0x180080BF0 (RtlPublishWnfStateData.c)
 *     RtlTestAndPublishWnfStateData @ 0x180086CE0 (RtlTestAndPublishWnfStateData.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A1A60 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventPublish()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
