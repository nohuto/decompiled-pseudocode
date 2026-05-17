/*
 * XREFs of RtlpHeapLogRangeRelease @ 0x1801153DC
 * Callers:
 *     RtlpFreeHeap @ 0x1800397E0 (RtlpFreeHeap.c)
 *     RtlDestroyHeap @ 0x1800496B0 (RtlDestroyHeap.c)
 *     RtlpDestroyHeapSegment @ 0x180049914 (RtlpDestroyHeapSegment.c)
 *     RtlpHpLargeFree @ 0x180064234 (RtlpHpLargeFree.c)
 *     RtlpHpSegSegmentFree @ 0x180065678 (RtlpHpSegSegmentFree.c)
 *     RtlpHpLargeReAlloc @ 0x18008E00C (RtlpHpLargeReAlloc.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1801220A0 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 */

__int64 RtlpHeapLogRangeRelease()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
