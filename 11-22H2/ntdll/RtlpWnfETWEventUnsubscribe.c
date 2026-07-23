/*
 * XREFs of RtlpWnfETWEventUnsubscribe @ 0x1800E9174
 * Callers:
 *     RtlpRemoveUserSubFromNameSub @ 0x18004C6DC (RtlpRemoveUserSubFromNameSub.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 */

NTSTATUS __fastcall RtlpWnfETWEventUnsubscribe(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, int a6)
{
  __int64 v6; // rcx
  _BYTE Fields[6]; // [rsp+30h] [rbp-68h] BYREF
  __int16 v9; // [rsp+36h] [rbp-62h]
  __int64 v10; // [rsp+50h] [rbp-48h]
  __int64 v11; // [rsp+58h] [rbp-40h]
  __int64 v12; // [rsp+60h] [rbp-38h]
  __int64 v13; // [rsp+68h] [rbp-30h]
  int v14; // [rsp+70h] [rbp-28h]
  int v15; // [rsp+74h] [rbp-24h]

  v9 = 3361;
  v10 = a1;
  v11 = a2;
  v12 = a3;
  v14 = a4;
  v13 = a5;
  v15 = a6;
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (__int64)NtCurrentPeb()->SharedData + 564;
  else
    v6 = 2147353486LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v6, 0x20402u, 0x28u, Fields);
}
