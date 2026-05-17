/*
 * XREFs of RtlpLogHeapCommit @ 0x180116FC0
 * Callers:
 *     RtlpAllocateHeap @ 0x18003F320 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x180045E78 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x18004612C (RtlpFindAndCommitPages.c)
 *     RtlpCommitBlock @ 0x18004691C (RtlpCommitBlock.c)
 *     RtlpHpSegPageRangeCommit @ 0x180046E10 (RtlpHpSegPageRangeCommit.c)
 *     RtlpInitializeHeapSegment @ 0x180047EBC (RtlpInitializeHeapSegment.c)
 *     RtlCreateHeap @ 0x180048130 (RtlCreateHeap.c)
 *     RtlpCreateLowFragHeap @ 0x1800494C4 (RtlpCreateLowFragHeap.c)
 *     RtlpHpSegSegmentAllocate @ 0x18004AB08 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpHeapAllocate @ 0x180066408 (RtlpHpHeapAllocate.c)
 *     RtlpExtendLowFragHeapSegment @ 0x1800731FC (RtlpExtendLowFragHeapSegment.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpLogHeapCommit(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _BYTE v9[6]; // [rsp+20h] [rbp-78h] BYREF
  __int16 v10; // [rsp+26h] [rbp-72h]
  __int64 v11; // [rsp+40h] [rbp-58h]
  __int64 v12; // [rsp+48h] [rbp-50h]
  __int64 v13; // [rsp+50h] [rbp-48h]
  int v14; // [rsp+58h] [rbp-40h]

  memset_thunk_772440563353939046(v9, 0, 0x40uLL);
  v11 = a1;
  v10 = 4147;
  v12 = a2;
  v13 = a3;
  v14 = a4;
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
