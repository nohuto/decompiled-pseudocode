/*
 * XREFs of RtlpHeapLogRangeRelease @ 0x180114FF4
 * Callers:
 *     RtlpFreeHeap @ 0x180025D30 (RtlpFreeHeap.c)
 *     RtlDestroyHeap @ 0x1800570A0 (RtlDestroyHeap.c)
 *     RtlpDestroyHeapSegment @ 0x180057340 (RtlpDestroyHeapSegment.c)
 *     RtlpHpSegSegmentFree @ 0x180057A70 (RtlpHpSegSegmentFree.c)
 *     RtlpHpLargeFree @ 0x180058AC4 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAllocationDestroy @ 0x18011FCA8 (RtlpHpLargeAllocationDestroy.c)
 *     RtlpHpLargeReAlloc @ 0x18011FE14 (RtlpHpLargeReAlloc.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 */

__int64 RtlpHeapLogRangeRelease()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
