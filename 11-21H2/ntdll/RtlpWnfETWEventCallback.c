/*
 * XREFs of RtlpWnfETWEventCallback @ 0x1800E9E78
 * Callers:
 *     RtlpWnfWalkUserSubscriptionList @ 0x18005A9B4 (RtlpWnfWalkUserSubscriptionList.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 */

NTSTATUS __fastcall RtlpWnfETWEventCallback(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7)
{
  __int64 v7; // rcx
  _BYTE Fields[6]; // [rsp+30h] [rbp-68h] BYREF
  __int16 v10; // [rsp+36h] [rbp-62h]
  __int64 v11; // [rsp+50h] [rbp-48h]
  __int64 v12; // [rsp+58h] [rbp-40h]
  __int64 v13; // [rsp+60h] [rbp-38h]
  __int64 v14; // [rsp+68h] [rbp-30h]
  int v15; // [rsp+70h] [rbp-28h]
  int v16; // [rsp+74h] [rbp-24h]
  int v17; // [rsp+78h] [rbp-20h]

  v10 = 3362;
  v12 = a3;
  v13 = a4;
  v14 = a5;
  v11 = a1;
  v16 = a6;
  v17 = a7;
  v15 = a2;
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 564;
  else
    v7 = 2147353486LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v7, 0x20402u, 0x2Cu, Fields);
}
