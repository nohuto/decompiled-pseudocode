/*
 * XREFs of ?ServerConnected@VirtualTouchpad@InputTraceLogging@@SAXPEBX_N1AEBUVirtualTouchpadSize@Input@Internal@UI@Windows@@@Z @ 0x18012AFA4
 * Callers:
 *     ?OnConnected@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x18012A1B0 (-OnConnected@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180018310 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007F788 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

void __fastcall InputTraceLogging::VirtualTouchpad::ServerConnected(
        __int64 a1,
        char a2,
        char a3,
        const struct Windows::UI::Internal::Input::VirtualTouchpadSize *a4)
{
  __int64 v8; // rcx
  char v9; // [rsp+38h] [rbp-69h] BYREF
  char v10; // [rsp+39h] [rbp-68h] BYREF
  __int64 v11; // [rsp+40h] [rbp-61h] BYREF
  __int64 v12; // [rsp+48h] [rbp-59h] BYREF
  __int64 v13; // [rsp+50h] [rbp-51h] BYREF
  __int64 v14; // [rsp+58h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+68h] [rbp-39h] BYREF
  __int64 *v16; // [rsp+88h] [rbp-19h]
  __int64 v17; // [rsp+90h] [rbp-11h]
  char *v18; // [rsp+98h] [rbp-9h]
  __int64 v19; // [rsp+A0h] [rbp-1h]
  char *v20; // [rsp+A8h] [rbp+7h]
  __int64 v21; // [rsp+B0h] [rbp+Fh]
  __int64 *v22; // [rsp+B8h] [rbp+17h]
  __int64 v23; // [rsp+C0h] [rbp+1Fh]
  __int64 *v24; // [rsp+C8h] [rbp+27h]
  __int64 v25; // [rsp+D0h] [rbp+2Fh]
  __int64 *v26; // [rsp+D8h] [rbp+37h]
  __int64 v27; // [rsp+E0h] [rbp+3Fh]

  v8 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                     a1,
                     _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
       + 1);
  if ( *(_DWORD *)v8 > 4u
    && (*(_DWORD *)(v8 + 16) & 0x200LL) != 0
    && (*(_QWORD *)(v8 + 24) & 0x200LL) == *(_QWORD *)(v8 + 24) )
  {
    v11 = *((_QWORD *)a4 + 2);
    v12 = *((_QWORD *)a4 + 1);
    v13 = *(_QWORD *)a4;
    v26 = &v11;
    v24 = &v12;
    v22 = &v13;
    v20 = &v9;
    v18 = &v10;
    v16 = &v14;
    v27 = 8LL;
    v25 = 8LL;
    v23 = 8LL;
    v17 = 8LL;
    v9 = a3;
    v10 = a2;
    v14 = a1;
    v21 = 1LL;
    v19 = 1LL;
    tlgWriteTransfer_EventWriteTransfer(v8, (unsigned __int8 *)dword_180203FCB, 0LL, 0LL, 8u, &v15);
  }
}
