/*
 * XREFs of RtlpHeapLogRangeRelease @ 0x18011688C
 * Callers:
 *     RtlpFreeHeap @ 0x180039680 (RtlpFreeHeap.c)
 *     RtlDestroyHeap @ 0x180049550 (RtlDestroyHeap.c)
 *     RtlpDestroyHeapSegment @ 0x1800497B4 (RtlpDestroyHeapSegment.c)
 *     RtlpHpLargeFree @ 0x180064104 (RtlpHpLargeFree.c)
 *     RtlpHpSegSegmentFree @ 0x180065548 (RtlpHpSegSegmentFree.c)
 *     RtlpHpLargeReAlloc @ 0x18008E80C (RtlpHpLargeReAlloc.c)
 *     RtlpHpLargeAllocationDestroy @ 0x180123550 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A1A60 (NtTraceEvent.c)
 */

__int64 RtlpHeapLogRangeRelease()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
