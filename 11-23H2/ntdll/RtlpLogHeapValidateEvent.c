/*
 * XREFs of RtlpLogHeapValidateEvent @ 0x180118F04
 * Callers:
 *     RtlValidateHeap @ 0x1800873F0 (RtlValidateHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A1A60 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapValidateEvent()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
