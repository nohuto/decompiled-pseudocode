/*
 * XREFs of RtlpHeapLogRangeReserve @ 0x18011508C
 * Callers:
 *     RtlpExtendHeap @ 0x180020860 (RtlpExtendHeap.c)
 *     RtlpAllocateHeap @ 0x18002B160 (RtlpAllocateHeap.c)
 *     RtlpHpSegSegmentAllocate @ 0x1800563A4 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpLargeAlloc @ 0x180058D3C (RtlpHpLargeAlloc.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 */

__int64 RtlpHeapLogRangeReserve()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
