/*
 * XREFs of ?StartActivity@AppToAppSwitch@TabletModeTelemetry@@QEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01@Z @ 0x180507060
 * Callers:
 *     ?AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01W4APP_TO_APP_SWITCH_FLAGS@@@Z @ 0x180500628 (-AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_P.c)
 * Callees:
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18000F048 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflector.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007CC80 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180187D80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z @ 0x18022ABBC (-CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@544@Z @ 0x1803710BC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U3@U2@U2@@-$_tlgWrit.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TabletModeTelemetry::AppToAppSwitch::StartActivity(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  void (__fastcall *v9)(__int64, LPCWSTR *); // rbx
  void (__fastcall *v10)(__int64, LPCWSTR *); // rbx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  _DWORD *v13; // rdi
  const WCHAR *v14; // rbx
  const WCHAR *v15; // rcx
  const GUID *v16; // rax
  __int64 v17; // [rsp+50h] [rbp-31h] BYREF
  __int64 v18; // [rsp+58h] [rbp-29h] BYREF
  __int64 v19; // [rsp+60h] [rbp-21h] BYREF
  LPCWSTR pszPath; // [rsp+68h] [rbp-19h] BYREF
  __int64 v21; // [rsp+70h] [rbp-11h]
  __int64 v22; // [rsp+78h] [rbp-9h]
  LPCWSTR v23; // [rsp+80h] [rbp-1h] BYREF
  __int64 v24; // [rsp+88h] [rbp+7h]
  __int64 v25; // [rsp+90h] [rbp+Fh]
  __int64 v26; // [rsp+E0h] [rbp+5Fh] BYREF
  __int64 v27; // [rsp+E8h] [rbp+67h] BYREF
  __int64 v28; // [rsp+F8h] [rbp+77h] BYREF

  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v9 = *(void (__fastcall **)(__int64, LPCWSTR *))(*(_QWORD *)a2 + 136LL);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v23);
  v24 = -1LL;
  v25 = -1LL;
  v9(a2, &v23);
  pszPath = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v10 = *(void (__fastcall **)(__int64, LPCWSTR *))(*(_QWORD *)a4 + 136LL);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
  v21 = -1LL;
  v22 = -1LL;
  v10(a4, &pszPath);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(a1);
  v12 = wil::details::static_lazy<WindowManagementLogging>::get(
          v11,
          _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
  v13 = (_DWORD *)v12[1];
  if ( *v13 > 5u && tlgKeywordOn(v12[1], 0x400000000000LL) )
  {
    LODWORD(v26) = a5;
    LODWORD(v27) = a3;
    v14 = &LocaleName;
    v15 = &LocaleName;
    if ( pszPath )
      v15 = pszPath;
    v17 = (__int64)LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(v15);
    if ( v23 )
      v14 = v23;
    v18 = (__int64)LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(v14);
    LODWORD(v28) = GetCurrentThreadId();
    v19 = 0LL;
    v16 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v13,
      (unsigned __int8 *)dword_1806C2395,
      (const GUID *)(*(_QWORD *)(a1 + 48) + 8LL),
      v16,
      (__int64)&v19,
      (__int64)&v28,
      (const WCHAR **)&v18,
      (const WCHAR **)&v17,
      (__int64)&v27,
      (__int64)&v26);
  }
  if ( !*(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v23);
}
