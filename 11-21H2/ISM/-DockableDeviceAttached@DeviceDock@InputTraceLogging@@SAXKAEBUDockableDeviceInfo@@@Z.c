/*
 * XREFs of ?DockableDeviceAttached@DeviceDock@InputTraceLogging@@SAXKAEBUDockableDeviceInfo@@@Z @ 0x1800C9DAC
 * Callers:
 *     ?OnDeviceAttach@DockableDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800CA0E0 (-OnDeviceAttach@DockableDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180018310 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007F788 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

void __fastcall InputTraceLogging::DeviceDock::DockableDeviceAttached(__int64 a1, const struct DockableDeviceInfo *a2)
{
  int v3; // edi
  __int64 v4; // rcx
  __int16 v5; // [rsp+30h] [rbp-49h] BYREF
  __int16 v6; // [rsp+32h] [rbp-47h] BYREF
  __int16 v7; // [rsp+34h] [rbp-45h] BYREF
  int v8; // [rsp+38h] [rbp-41h] BYREF
  __int64 v9; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+50h] [rbp-29h] BYREF
  int *v11; // [rsp+70h] [rbp-9h]
  __int64 v12; // [rsp+78h] [rbp-1h]
  __int64 *v13; // [rsp+80h] [rbp+7h]
  __int64 v14; // [rsp+88h] [rbp+Fh]
  __int16 *v15; // [rsp+90h] [rbp+17h]
  __int64 v16; // [rsp+98h] [rbp+1Fh]
  __int16 *v17; // [rsp+A0h] [rbp+27h]
  __int64 v18; // [rsp+A8h] [rbp+2Fh]
  __int16 *v19; // [rsp+B0h] [rbp+37h]
  __int64 v20; // [rsp+B8h] [rbp+3Fh]

  v3 = a1;
  v4 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                     a1,
                     _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
       + 1);
  if ( *(_DWORD *)v4 > 4u
    && (*(_DWORD *)(v4 + 16) & 0x200LL) != 0
    && (*(_QWORD *)(v4 + 24) & 0x200LL) == *(_QWORD *)(v4 + 24) )
  {
    v5 = *((_WORD *)a2 + 787);
    v6 = *((_WORD *)a2 + 786);
    v7 = *((_WORD *)a2 + 780);
    v9 = *((_QWORD *)a2 + 194);
    v19 = &v5;
    v17 = &v6;
    v15 = &v7;
    v13 = &v9;
    v11 = &v8;
    v8 = v3;
    v20 = 2LL;
    v18 = 2LL;
    v16 = 2LL;
    v14 = 8LL;
    v12 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(v4, (unsigned __int8 *)dword_180202775, 0LL, 0LL, 7u, &v10);
  }
}
