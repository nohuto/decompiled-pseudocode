/*
 * XREFs of RtlTpETWCallbackDequeue @ 0x180125488
 * Callers:
 *     RtlpTpWorkCallback @ 0x180070EB0 (RtlpTpWorkCallback.c)
 *     RtlpTpWorkUnposted @ 0x180071130 (RtlpTpWorkUnposted.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 */

__int64 RtlTpETWCallbackDequeue()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
