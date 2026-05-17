/*
 * XREFs of RtlpLogHeapReuseThresholdActivate @ 0x1801170C0
 * Callers:
 *     RtlpIsSubSegmentReuseThresholdExceeded @ 0x180025AC4 (RtlpIsSubSegmentReuseThresholdExceeded.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapReuseThresholdActivate()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
