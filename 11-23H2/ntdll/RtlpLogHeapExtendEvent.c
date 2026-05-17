/*
 * XREFs of RtlpLogHeapExtendEvent @ 0x180118704
 * Callers:
 *     RtlpAllocateHeap @ 0x18003F1C0 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x180045D18 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x180045FCC (RtlpFindAndCommitPages.c)
 *     RtlpCommitBlock @ 0x1800467BC (RtlpCommitBlock.c)
 *     RtlpCreateLowFragHeap @ 0x180049364 (RtlpCreateLowFragHeap.c)
 *     RtlpExtendLowFragHeapSegment @ 0x18007386C (RtlpExtendLowFragHeapSegment.c)
 * Callees:
 *     RtlpEstimateAllocatedSize @ 0x18008B4C0 (RtlpEstimateAllocatedSize.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A1A60 (NtTraceEvent.c)
 *     GetUCBytes @ 0x18011633C (GetUCBytes.c)
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
