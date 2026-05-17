/*
 * XREFs of RtlpLogHeapTagUpdateEvent @ 0x180118E08
 * Callers:
 *     RtlpHpSetHeapTag @ 0x180100F0C (RtlpHpSetHeapTag.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A1A60 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapTagUpdateEvent()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
