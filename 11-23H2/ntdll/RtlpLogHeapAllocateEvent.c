/*
 * XREFs of RtlpLogHeapAllocateEvent @ 0x1801183E8
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x18003CC00 (RtlpAllocateHeapInternal.c)
 *     RtlpHpAllocateHeap @ 0x180066CD8 (RtlpHpAllocateHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A1A60 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapAllocateEvent()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
