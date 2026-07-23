/*
 * XREFs of RtlpTpETWCallbackStop @ 0x1801246BC
 * Callers:
 *     TppExecuteWaitCallback @ 0x18001FE54 (TppExecuteWaitCallback.c)
 *     RtlpTpTimerCallback @ 0x180020130 (RtlpTpTimerCallback.c)
 *     TppTimerpExecuteCallback @ 0x180020330 (TppTimerpExecuteCallback.c)
 *     TppSimplepExecuteCallback @ 0x180021330 (TppSimplepExecuteCallback.c)
 *     TppAlpcpExecuteCallback @ 0x180021EE0 (TppAlpcpExecuteCallback.c)
 *     TppIopExecuteCallback @ 0x180024270 (TppIopExecuteCallback.c)
 *     TppWorkpExecuteCallback @ 0x180069E70 (TppWorkpExecuteCallback.c)
 *     RtlpTpWorkCallback @ 0x180070EB0 (RtlpTpWorkCallback.c)
 *     RtlpTpWaitCallback @ 0x18007F040 (RtlpTpWaitCallback.c)
 *     TppJobpExecuteCallback @ 0x180087BD0 (TppJobpExecuteCallback.c)
 *     RtlpTpIoCallback @ 0x1800B1BE0 (RtlpTpIoCallback.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 */

NTSTATUS __fastcall RtlpTpETWCallbackStop(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-68h] BYREF
  __int16 v8; // [rsp+26h] [rbp-62h]
  __int64 v9; // [rsp+40h] [rbp-48h]
  __int64 v10; // [rsp+48h] [rbp-40h]
  __int64 v11; // [rsp+50h] [rbp-38h]
  __int64 v12; // [rsp+58h] [rbp-30h]
  __int64 v13; // [rsp+60h] [rbp-28h]

  v8 = 7203;
  v13 = a5;
  v9 = a1;
  v10 = a2;
  v11 = a3;
  v12 = a4;
  if ( RtlGetCurrentServiceSessionId() )
    v5 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v5 = 2147353478LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v5, 0x403u, 0x28u, Fields);
}
