/*
 * XREFs of RtlpLogHeapReallocateEvent @ 0x180117014
 * Callers:
 *     RtlpReAllocateHeap @ 0x180024890 (RtlpReAllocateHeap.c)
 *     RtlpHpReAllocateHeap @ 0x18002DBE0 (RtlpHpReAllocateHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapReallocateEvent()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
