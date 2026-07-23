/*
 * XREFs of RtlpLogHeapCommit @ 0x180118440
 * Callers:
 *     RtlpAllocateHeap @ 0x18003F1C0 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x180045D18 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x180045FCC (RtlpFindAndCommitPages.c)
 *     RtlpCommitBlock @ 0x1800467BC (RtlpCommitBlock.c)
 *     RtlpHpSegPageRangeCommit @ 0x180046CB0 (RtlpHpSegPageRangeCommit.c)
 *     RtlpInitializeHeapSegment @ 0x180047D5C (RtlpInitializeHeapSegment.c)
 *     RtlCreateHeap @ 0x180047FD0 (RtlCreateHeap.c)
 *     RtlpCreateLowFragHeap @ 0x180049364 (RtlpCreateLowFragHeap.c)
 *     RtlpHpSegSegmentAllocate @ 0x18004A9A8 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpHeapAllocate @ 0x1800663EC (RtlpHpHeapAllocate.c)
 *     RtlpExtendLowFragHeapSegment @ 0x18007386C (RtlpExtendLowFragHeapSegment.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A1A60 (NtTraceEvent.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall RtlpLogHeapCommit(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v8; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-78h] BYREF
  __int16 v11; // [rsp+26h] [rbp-72h]
  __int64 v12; // [rsp+40h] [rbp-58h]
  __int64 v13; // [rsp+48h] [rbp-50h]
  __int64 v14; // [rsp+50h] [rbp-48h]
  int v15; // [rsp+58h] [rbp-40h]

  memset_thunk_772440563353939046(Fields, 0, 0x40uLL);
  v12 = a1;
  v11 = 4147;
  v13 = a2;
  v14 = a3;
  v15 = a4;
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v8 = 2147353480LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v8, 0x20402u, 0x20u, Fields);
}
