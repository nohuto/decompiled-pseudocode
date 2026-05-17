/*
 * XREFs of RtlpLogHeapAffinitySlotAssign @ 0x180116AB4
 * Callers:
 *     RtlpSetSegmentInfo @ 0x180088794 (RtlpSetSegmentInfo.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapAffinitySlotAssign()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
