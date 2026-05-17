/*
 * XREFs of RtlpHeapLogRangeCreate @ 0x1801152B8
 * Callers:
 *     RtlCreateHeap @ 0x180048130 (RtlCreateHeap.c)
 *     RtlpHpHeapCreate @ 0x180066018 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 */

__int64 RtlpHeapLogRangeCreate()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
