/*
 * XREFs of ?SetInputDelegation@ForegroundManagerServer@InputTraceLogging@@SAXII_KII@Z @ 0x18005FE54
 * Callers:
 *     ?SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z @ 0x1800B56B0 (-SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004B5A4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1800B4E40 (-Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall InputTraceLogging::ForegroundManagerServer::SetInputDelegation(
        int a1,
        int a2,
        __int64 a3,
        int a4,
        unsigned int a5)
{
  const struct _tlgProvider_t *v9; // rax
  unsigned int v10; // [rsp+38h] [rbp-51h] BYREF
  int v11; // [rsp+3Ch] [rbp-4Dh] BYREF
  int v12; // [rsp+40h] [rbp-49h] BYREF
  int v13; // [rsp+44h] [rbp-45h] BYREF
  __int64 v14; // [rsp+48h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+58h] [rbp-31h] BYREF
  int *v16; // [rsp+78h] [rbp-11h]
  __int64 v17; // [rsp+80h] [rbp-9h]
  int *v18; // [rsp+88h] [rbp-1h]
  __int64 v19; // [rsp+90h] [rbp+7h]
  __int64 *v20; // [rsp+98h] [rbp+Fh]
  __int64 v21; // [rsp+A0h] [rbp+17h]
  int *v22; // [rsp+A8h] [rbp+1Fh]
  __int64 v23; // [rsp+B0h] [rbp+27h]
  unsigned int *v24; // [rsp+B8h] [rbp+2Fh]
  __int64 v25; // [rsp+C0h] [rbp+37h]

  v9 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v9 > 4u
    && (*((_DWORD *)v9 + 4) & 0x200LL) != 0
    && (*((_QWORD *)v9 + 3) & 0x200LL) == *((_QWORD *)v9 + 3) )
  {
    v10 = a5;
    v25 = 4LL;
    v24 = &v10;
    v23 = 4LL;
    v22 = &v11;
    v20 = &v14;
    v18 = &v12;
    v16 = &v13;
    v19 = 4LL;
    v17 = 4LL;
    v11 = a4;
    v14 = a3;
    v12 = a2;
    v13 = a1;
    v21 = 8LL;
    tlgWriteTransfer_EventWriteTransfer((__int64)v9, (unsigned __int8 *)dword_18022F955, 0LL, 0LL, 7u, &v15);
  }
}
