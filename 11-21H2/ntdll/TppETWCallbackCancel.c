/*
 * XREFs of TppETWCallbackCancel @ 0x180124440
 * Callers:
 *     TppWorkWait @ 0x18001F59C (TppWorkWait.c)
 *     TpWaitForIoCompletion @ 0x18008A0E0 (TpWaitForIoCompletion.c)
 *     TppWorkCancelPendingCallbacks @ 0x18008CF20 (TppWorkCancelPendingCallbacks.c)
 *     TppIopCancelPendingCallbacks @ 0x180123B00 (TppIopCancelPendingCallbacks.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 */

NTSTATUS __fastcall TppETWCallbackCancel(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-68h] BYREF
  __int16 v9; // [rsp+26h] [rbp-62h]
  __int64 v10; // [rsp+40h] [rbp-48h]
  __int64 v11; // [rsp+48h] [rbp-40h]
  __int64 v12; // [rsp+50h] [rbp-38h]
  __int64 v13; // [rsp+58h] [rbp-30h]
  __int64 v14; // [rsp+60h] [rbp-28h]
  int v15; // [rsp+68h] [rbp-20h]

  v14 = a5;
  v9 = 7204;
  v10 = a1;
  v11 = a2;
  v12 = a3;
  v13 = a4;
  v15 = a6;
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v6 = 2147353478LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v6, 0x403u, 0x2Cu, Fields);
}
