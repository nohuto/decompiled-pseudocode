/*
 * XREFs of RtlpLogHeapExtendEvent @ 0x180116E68
 * Callers:
 *     RtlpCommitBlock @ 0x180020728 (RtlpCommitBlock.c)
 *     RtlpExtendHeap @ 0x180020860 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x180020B1C (RtlpFindAndCommitPages.c)
 *     RtlpAllocateHeap @ 0x18002B160 (RtlpAllocateHeap.c)
 *     RtlpCreateLowFragHeap @ 0x18005347C (RtlpCreateLowFragHeap.c)
 *     RtlpExtendLowFragHeapSegment @ 0x18007A2EC (RtlpExtendLowFragHeapSegment.c)
 * Callees:
 *     RtlpEstimateAllocatedSize @ 0x180083670 (RtlpEstimateAllocatedSize.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 *     GetUCBytes @ 0x180114A3C (GetUCBytes.c)
 */

__int64 __fastcall RtlpLogHeapExtendEvent(__int64 a1)
{
  __int64 v3; // [rsp+68h] [rbp+17h] BYREF
  int v4; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v5; // [rsp+74h] [rbp+23h]

  v3 = 0LL;
  v4 = 0;
  v5 = RtlpEstimateAllocatedSize(a1);
  GetUCBytes(a1, &v3, &v4);
  return NtTraceEvent();
}
