/*
 * XREFs of RtlpLogHeapContractEvent @ 0x180118520
 * Callers:
 *     RtlpFreeHeap @ 0x180039680 (RtlpFreeHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x180044F5C (RtlpDeCommitFreeBlock.c)
 *     RtlpDecommitBlock @ 0x1800469A4 (RtlpDecommitBlock.c)
 * Callees:
 *     RtlpEstimateAllocatedSize @ 0x18008B4C0 (RtlpEstimateAllocatedSize.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A1A60 (NtTraceEvent.c)
 *     GetUCBytes @ 0x18011633C (GetUCBytes.c)
 */

__int64 __fastcall RtlpLogHeapContractEvent(__int64 a1)
{
  __int64 v3; // [rsp+68h] [rbp+7h] BYREF
  int v4; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v5; // [rsp+74h] [rbp+13h]

  v3 = 0LL;
  v4 = 0;
  v5 = RtlpEstimateAllocatedSize(a1);
  GetUCBytes(a1, &v3, &v4);
  return NtTraceEvent();
}
