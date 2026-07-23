/*
 * XREFs of TppETWPoolThreadMin @ 0x1801248D0
 * Callers:
 *     TpSetPoolMinThreads @ 0x180089830 (TpSetPoolMinThreads.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 */

NTSTATUS __fastcall TppETWPoolThreadMin(__int64 a1, int a2)
{
  __int64 v2; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v5; // [rsp+26h] [rbp-42h]
  __int64 v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]

  v6 = a1;
  v5 = 7207;
  v7 = a2;
  if ( RtlGetCurrentServiceSessionId() )
    v2 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v2 = 2147353478LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v2, 0x20402u, 0xCu, Fields);
}
