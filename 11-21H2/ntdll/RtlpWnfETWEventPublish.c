/*
 * XREFs of RtlpWnfETWEventPublish @ 0x1800E9FD0
 * Callers:
 *     RtlPublishWnfStateData @ 0x1800847F0 (RtlPublishWnfStateData.c)
 *     RtlTestAndPublishWnfStateData @ 0x18008B2D0 (RtlTestAndPublishWnfStateData.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventPublish()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
