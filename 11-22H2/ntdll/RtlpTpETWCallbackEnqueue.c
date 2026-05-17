/*
 * XREFs of RtlpTpETWCallbackEnqueue @ 0x180125FC4
 * Callers:
 *     TppWorkPost @ 0x180035318 (TppWorkPost.c)
 *     RtlQueueWorkItem @ 0x18004CB70 (RtlQueueWorkItem.c)
 *     TppWorkCallbackPrologRelease @ 0x18004EC88 (TppWorkCallbackPrologRelease.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 */

__int64 RtlpTpETWCallbackEnqueue()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
