/*
 * XREFs of RtlpLogHeapCreateEvent @ 0x180117128
 * Callers:
 *     RtlCreateHeap @ 0x180048130 (RtlCreateHeap.c)
 *     RtlpHpHeapCreate @ 0x180066018 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlpEstimateAllocatedSize @ 0x18008ACC0 (RtlpEstimateAllocatedSize.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 */

__int64 __fastcall RtlpLogHeapCreateEvent(__int64 a1)
{
  RtlpEstimateAllocatedSize(a1);
  return NtTraceEvent();
}
