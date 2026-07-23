/*
 * XREFs of RtlpLogHeapSubSegmentAlloc @ 0x1801171EC
 * Callers:
 *     RtlpAllocateUserBlockFromHeap @ 0x18002EABC (RtlpAllocateUserBlockFromHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 *     memset @ 0x1800AAE00 (memset.c)
 */

NTSTATUS __fastcall RtlpLogHeapSubSegmentAlloc(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rcx
  _QWORD Fields[8]; // [rsp+20h] [rbp-78h] BYREF

  memset(Fields, 0, sizeof(Fields));
  Fields[4] = a1;
  HIWORD(Fields[0]) = 4143;
  Fields[5] = a2;
  Fields[6] = a3;
  Fields[7] = a4;
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v8 = 2147353472LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v8, 0x20402u, 0x20u, Fields);
}
