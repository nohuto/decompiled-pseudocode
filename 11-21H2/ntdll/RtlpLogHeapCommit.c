/*
 * XREFs of RtlpLogHeapCommit @ 0x180116BD4
 * Callers:
 *     RtlpCommitBlock @ 0x180020728 (RtlpCommitBlock.c)
 *     RtlpExtendHeap @ 0x180020860 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x180020B1C (RtlpFindAndCommitPages.c)
 *     RtlpHpSegPageRangeCommit @ 0x180023E30 (RtlpHpSegPageRangeCommit.c)
 *     RtlpAllocateHeap @ 0x18002B160 (RtlpAllocateHeap.c)
 *     RtlCreateHeap @ 0x18002F7E0 (RtlCreateHeap.c)
 *     RtlpInitializeHeapSegment @ 0x1800304FC (RtlpInitializeHeapSegment.c)
 *     RtlpCreateLowFragHeap @ 0x18005347C (RtlpCreateLowFragHeap.c)
 *     RtlpHpHeapAllocate @ 0x180055288 (RtlpHpHeapAllocate.c)
 *     RtlpHpSegSegmentAllocate @ 0x1800563A4 (RtlpHpSegSegmentAllocate.c)
 *     RtlpExtendLowFragHeapSegment @ 0x18007A2EC (RtlpExtendLowFragHeapSegment.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 *     memset @ 0x1800AAE00 (memset.c)
 */

__int64 __fastcall RtlpLogHeapCommit(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD v9[8]; // [rsp+20h] [rbp-78h] BYREF

  memset(v9, 0, sizeof(v9));
  v9[4] = a1;
  HIWORD(v9[0]) = 4147;
  v9[5] = a2;
  v9[6] = a3;
  LODWORD(v9[7]) = a4;
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
