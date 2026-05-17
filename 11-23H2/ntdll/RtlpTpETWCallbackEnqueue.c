/*
 * XREFs of RtlpTpETWCallbackEnqueue @ 0x180127474
 * Callers:
 *     TppWorkPost @ 0x1800351B8 (TppWorkPost.c)
 *     RtlQueueWorkItem @ 0x18004CA10 (RtlQueueWorkItem.c)
 *     TppWorkCallbackPrologRelease @ 0x18004EB28 (TppWorkCallbackPrologRelease.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A1A60 (NtTraceEvent.c)
 */

__int64 RtlpTpETWCallbackEnqueue()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
