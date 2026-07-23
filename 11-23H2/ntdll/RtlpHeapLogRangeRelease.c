/*
 * XREFs of RtlpHeapLogRangeRelease @ 0x18011685C
 * Callers:
 *     RtlpFreeHeap @ 0x180039680 (RtlpFreeHeap.c)
 *     RtlDestroyHeap @ 0x180049550 (RtlDestroyHeap.c)
 *     RtlpDestroyHeapSegment @ 0x1800497B4 (RtlpDestroyHeapSegment.c)
 *     RtlpHpLargeFree @ 0x180064104 (RtlpHpLargeFree.c)
 *     RtlpHpSegSegmentFree @ 0x180065548 (RtlpHpSegSegmentFree.c)
 *     RtlpHpLargeReAlloc @ 0x18008E80C (RtlpHpLargeReAlloc.c)
 *     RtlpHpLargeAllocationDestroy @ 0x180123520 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A1A60 (NtTraceEvent.c)
 */

NTSTATUS __fastcall RtlpHeapLogRangeRelease(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  _OWORD Fields[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v6; // [rsp+40h] [rbp-28h]
  __int64 v7; // [rsp+48h] [rbp-20h]
  __int64 v8; // [rsp+50h] [rbp-18h]

  v8 = a3;
  v6 = a1;
  memset(Fields, 0, sizeof(Fields));
  v7 = a2;
  WORD3(Fields[0]) = 615;
  if ( RtlGetCurrentServiceSessionId() )
    v3 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v3 = 2147353480LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v3, 0x20402u, 0x18u, Fields);
}
