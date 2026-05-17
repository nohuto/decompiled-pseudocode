/*
 * XREFs of RtlpHeapLogRangeReserve @ 0x180115474
 * Callers:
 *     RtlpAllocateHeap @ 0x18003F320 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x180045E78 (RtlpExtendHeap.c)
 *     RtlpHpSegSegmentAllocate @ 0x18004AB08 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpLargeAlloc @ 0x1800643E8 (RtlpHpLargeAlloc.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 */

__int64 RtlpHeapLogRangeReserve()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
