/*
 * XREFs of RtlpHeapLogRangeDestroy @ 0x180115354
 * Callers:
 *     RtlDestroyHeap @ 0x1800496B0 (RtlDestroyHeap.c)
 *     RtlpHpHeapDestroy @ 0x1800653D8 (RtlpHpHeapDestroy.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 */

NTSTATUS __fastcall RtlpHeapLogRangeDestroy(__int64 a1)
{
  __int64 v1; // rcx
  _OWORD Fields[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+40h] [rbp-18h]

  v4 = a1;
  memset(Fields, 0, sizeof(Fields));
  WORD3(Fields[0]) = 616;
  if ( RtlGetCurrentServiceSessionId() )
    v1 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v1 = 2147353480LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v1, 0x20402u, 8u, Fields);
}
