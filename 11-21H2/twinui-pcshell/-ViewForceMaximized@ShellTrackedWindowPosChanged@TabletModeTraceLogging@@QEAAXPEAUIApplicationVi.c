/*
 * XREFs of ?ViewForceMaximized@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@AEBUtagRECT@@1@Z @ 0x180509CE4
 * Callers:
 *     ?ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x18050A4D8 (-ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Tab.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4444444@Z @ 0x1804FF538 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@@-$_tlgWriteTemplate@$$A.c)
 *     ?GetTelemetryIdForView@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x180503F10 (-GetTelemetryIdForView@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 */

void __fastcall TabletModeTraceLogging::ShellTrackedWindowPosChanged::ViewForceMaximized(
        TabletModeTraceLogging::ShellTrackedWindowPosChanged *this,
        int (__fastcall ***a2)(ApplicationViewTraceLoggingHelpers *, GUID *, __int64 *),
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  unsigned __int16 **v8; // r8
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // r9
  const WCHAR *v12; // rcx
  LONG right; // [rsp+70h] [rbp+7h] BYREF
  LONG top; // [rsp+74h] [rbp+Bh] BYREF
  LONG left; // [rsp+78h] [rbp+Fh] BYREF
  LONG bottom; // [rsp+7Ch] [rbp+13h] BYREF
  LONG v17; // [rsp+80h] [rbp+17h] BYREF
  LONG v18; // [rsp+84h] [rbp+1Bh] BYREF
  LONG v19; // [rsp+88h] [rbp+1Fh] BYREF
  const WCHAR *v20; // [rsp+90h] [rbp+27h] BYREF
  __int64 v21; // [rsp+98h] [rbp+2Fh]
  __int64 v22; // [rsp+A0h] [rbp+37h]
  __int64 v23; // [rsp+A8h] [rbp+3Fh] BYREF
  __int64 v24; // [rsp+D0h] [rbp+67h] BYREF

  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v20);
  v21 = -1LL;
  v22 = -1LL;
  ApplicationViewTraceLoggingHelpers::GetTelemetryIdForView(a2, (struct IApplicationView *)&v20, v8);
  v10 = wil::details::static_lazy<WindowManagementLogging>::get(
          v9,
          _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v10[1] > 5u && tlgKeywordOn(v10[1], 0x400000000000LL) )
  {
    LODWORD(v24) = a4->bottom;
    right = a4->right;
    top = a4->top;
    left = a4->left;
    bottom = a3->bottom;
    v17 = a3->right;
    v18 = a3->top;
    v19 = a3->left;
    v12 = &LocaleName;
    if ( v20 )
      v12 = v20;
    v23 = (__int64)v12;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v11,
      (unsigned __int8 *)dword_1806C2E4B,
      (const GUID *)(*((_QWORD *)this + 6) + 8LL),
      v11,
      (const WCHAR **)&v23,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&bottom,
      (__int64)&left,
      (__int64)&top,
      (__int64)&right,
      (__int64)&v24);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v20);
}
