/*
 * XREFs of RtlpLogHeapReallocateEvent @ 0x1801188B0
 * Callers:
 *     RtlpHpReAllocateHeap @ 0x180041D6C (RtlpHpReAllocateHeap.c)
 *     RtlpReAllocateHeap @ 0x180042490 (RtlpReAllocateHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A1A60 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapReallocateEvent()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
