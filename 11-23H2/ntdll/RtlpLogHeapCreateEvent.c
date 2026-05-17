/*
 * XREFs of RtlpLogHeapCreateEvent @ 0x1801185D8
 * Callers:
 *     RtlCreateHeap @ 0x180047FD0 (RtlCreateHeap.c)
 *     RtlpHpHeapCreate @ 0x180065EE8 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlpEstimateAllocatedSize @ 0x18008B4C0 (RtlpEstimateAllocatedSize.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A1A60 (NtTraceEvent.c)
 */

__int64 __fastcall RtlpLogHeapCreateEvent(__int64 a1)
{
  RtlpEstimateAllocatedSize(a1);
  return NtTraceEvent();
}
