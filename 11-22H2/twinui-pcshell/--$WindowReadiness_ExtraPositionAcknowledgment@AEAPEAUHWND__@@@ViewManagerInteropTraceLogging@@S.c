/*
 * XREFs of ??$WindowReadiness_ExtraPositionAcknowledgment@AEAPEAUHWND__@@@ViewManagerInteropTraceLogging@@SAXAEAPEAUHWND__@@@Z @ 0x1804EF4A0
 * Callers:
 *     ?HandleShellHook@UwpWindowReadyState@@QEAAX_K@Z @ 0x1800A0130 (-HandleShellHook@UwpWindowReadyState@@QEAAX_K@Z.c)
 *     ?HandleShellHook@WindowReadyState@@QEAAX_K@Z @ 0x1802D978A (-HandleShellHook@WindowReadyState@@QEAAX_K@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@P6AXXZ@Z @ 0x1800C31C4 (-get@-$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::WindowReadiness_ExtraPositionAcknowledgment<HWND__ * &>(__int64 *a1)
{
  __int64 *v2; // rax
  _DWORD *v3; // rcx
  __int64 v4; // rax
  __int64 v6; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  v2 = wil::details::static_lazy<ViewManagerInteropLogging>::get(
         (__int64)a1,
         _lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
  v3 = (_DWORD *)v2[1];
  if ( *v3 > 5u )
  {
    v4 = *a1;
    v10 = 0;
    v6 = v4;
    v9 = 8;
    v8 = &v6;
    LODWORD(v2) = tlgWriteTransfer_EventWriteTransfer(
                    (__int64)v3,
                    (unsigned __int8 *)dword_18085A130,
                    0LL,
                    0LL,
                    3u,
                    &v7);
  }
  return (int)v2;
}
