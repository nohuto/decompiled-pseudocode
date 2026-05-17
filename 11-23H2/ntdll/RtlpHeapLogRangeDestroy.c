/*
 * XREFs of RtlpHeapLogRangeDestroy @ 0x180116804
 * Callers:
 *     RtlDestroyHeap @ 0x180049550 (RtlDestroyHeap.c)
 *     RtlpHpHeapDestroy @ 0x1800652A8 (RtlpHpHeapDestroy.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A1A60 (NtTraceEvent.c)
 */

__int64 RtlpHeapLogRangeDestroy()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
