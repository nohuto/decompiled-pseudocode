/*
 * XREFs of RtlpLogHeapAllocateEvent @ 0x180116F38
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x18003CD60 (RtlpAllocateHeapInternal.c)
 *     RtlpHpAllocateHeap @ 0x180066CF4 (RtlpHpAllocateHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapAllocateEvent()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
