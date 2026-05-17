/*
 * XREFs of RtlTpETWCallbackDequeue @ 0x180128398
 * Callers:
 *     RtlpTpWorkCallback @ 0x18004CE10 (RtlpTpWorkCallback.c)
 *     RtlpTpWorkUnposted @ 0x18004F940 (RtlpTpWorkUnposted.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A1A60 (NtTraceEvent.c)
 */

__int64 RtlTpETWCallbackDequeue()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
