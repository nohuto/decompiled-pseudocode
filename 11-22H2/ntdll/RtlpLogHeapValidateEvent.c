/*
 * XREFs of RtlpLogHeapValidateEvent @ 0x180117A54
 * Callers:
 *     RtlValidateHeap @ 0x180086BF0 (RtlValidateHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapValidateEvent()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
