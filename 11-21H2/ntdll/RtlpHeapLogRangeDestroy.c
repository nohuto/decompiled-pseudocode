/*
 * XREFs of RtlpHeapLogRangeDestroy @ 0x180114F6C
 * Callers:
 *     RtlpHpHeapDestroy @ 0x180056C28 (RtlpHpHeapDestroy.c)
 *     RtlDestroyHeap @ 0x1800570A0 (RtlDestroyHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 */

__int64 RtlpHeapLogRangeDestroy()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
