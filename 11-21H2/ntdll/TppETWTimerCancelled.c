/*
 * XREFs of TppETWTimerCancelled @ 0x1801249CC
 * Callers:
 *     TppCancelTimer @ 0x18001C7D8 (TppCancelTimer.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 */

NTSTATUS __fastcall TppETWTimerCancelled(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v5; // [rsp+26h] [rbp-42h]
  __int64 v6; // [rsp+40h] [rbp-28h]
  __int64 v7; // [rsp+48h] [rbp-20h]

  v6 = a1;
  v5 = 7211;
  v7 = a2;
  if ( RtlGetCurrentServiceSessionId() )
    v2 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v2 = 2147353478LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v2, 0x20402u, 0x10u, Fields);
}
