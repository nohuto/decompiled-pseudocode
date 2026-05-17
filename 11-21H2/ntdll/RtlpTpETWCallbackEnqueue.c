/*
 * XREFs of RtlpTpETWCallbackEnqueue @ 0x180124584
 * Callers:
 *     TppWorkPost @ 0x18001B54C (TppWorkPost.c)
 *     TppWorkCallbackPrologRelease @ 0x180022278 (TppWorkCallbackPrologRelease.c)
 *     RtlQueueWorkItem @ 0x180070160 (RtlQueueWorkItem.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 */

__int64 RtlpTpETWCallbackEnqueue()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
