/*
 * XREFs of RtlpLogHeapExtendEvent @ 0x180117254
 * Callers:
 *     RtlpAllocateHeap @ 0x18003F320 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x180045E78 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x18004612C (RtlpFindAndCommitPages.c)
 *     RtlpCommitBlock @ 0x18004691C (RtlpCommitBlock.c)
 *     RtlpCreateLowFragHeap @ 0x1800494C4 (RtlpCreateLowFragHeap.c)
 *     RtlpExtendLowFragHeapSegment @ 0x1800731FC (RtlpExtendLowFragHeapSegment.c)
 * Callees:
 *     RtlpEstimateAllocatedSize @ 0x18008ACC0 (RtlpEstimateAllocatedSize.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 *     GetUCBytes @ 0x180114E8C (GetUCBytes.c)
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
