/*
 * XREFs of RtlpLogHeapTagUpdateEvent @ 0x180118DD8
 * Callers:
 *     RtlpHpSetHeapTag @ 0x180100F0C (RtlpHpSetHeapTag.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A1A60 (NtTraceEvent.c)
 */

NTSTATUS __fastcall RtlpLogHeapTagUpdateEvent(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v5; // [rsp+26h] [rbp-42h]
  __int64 v6; // [rsp+40h] [rbp-28h]
  __int64 v7; // [rsp+48h] [rbp-20h]

  v6 = a1;
  v5 = 4155;
  v7 = a2;
  if ( RtlGetCurrentServiceSessionId() )
    v2 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v2 = 2147353472LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v2, 0x401u, 0x10u, Fields);
}
