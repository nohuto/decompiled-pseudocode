/*
 * XREFs of RtlpLogHeapContractEvent @ 0x180116C84
 * Callers:
 *     RtlpDecommitBlock @ 0x180020548 (RtlpDecommitBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x180022B64 (RtlpDeCommitFreeBlock.c)
 *     RtlpFreeHeap @ 0x180025D30 (RtlpFreeHeap.c)
 * Callees:
 *     RtlpEstimateAllocatedSize @ 0x180083670 (RtlpEstimateAllocatedSize.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 *     GetUCBytes @ 0x180114A3C (GetUCBytes.c)
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
