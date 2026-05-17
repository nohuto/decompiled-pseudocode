/*
 * XREFs of RtlpHeapLogRangeReserve @ 0x180116924
 * Callers:
 *     RtlpAllocateHeap @ 0x18003F1C0 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x180045D18 (RtlpExtendHeap.c)
 *     RtlpHpSegSegmentAllocate @ 0x18004A9A8 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpLargeAlloc @ 0x1800642B8 (RtlpHpLargeAlloc.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A1A60 (NtTraceEvent.c)
 */

__int64 RtlpHeapLogRangeReserve()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
