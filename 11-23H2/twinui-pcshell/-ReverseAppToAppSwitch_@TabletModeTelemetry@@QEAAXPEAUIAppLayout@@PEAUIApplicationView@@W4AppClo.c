/*
 * XREFs of ?ReverseAppToAppSwitch_@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@PEAUIApplicationView@@W4AppCloseMethod@@@Z @ 0x1805BE1B8
 * Callers:
 *     ??$ReverseAppToAppSwitch@PEAUIAppLayout@@AEAPEAUIApplicationView@@W4AppCloseMethod@@@TabletModeTelemetry@@SAX$$QEAPEAUIAppLayout@@AEAPEAUIApplicationView@@$$QEAW4AppCloseMethod@@@Z @ 0x1805B7B8C (--$ReverseAppToAppSwitch@PEAUIAppLayout@@AEAPEAUIApplicationView@@W4AppCloseMethod@@@TabletModeT.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CensorAppID@MultitaskingViewTelemetry@@SAPEBGPEBG@Z @ 0x1805780E4 (-CensorAppID@MultitaskingViewTelemetry@@SAPEBGPEBG@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x1805B7D0C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWriteTempl.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TabletModeTelemetry::ReverseAppToAppSwitch_(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v7; // r15d
  int (__fastcall *v8)(__int64, __int64, __int64 *, _QWORD); // rbx
  bool v9; // di
  void (__fastcall *v10)(__int64, LPCWSTR *); // rbx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  _DWORD *v13; // rbx
  const WCHAR *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // [rsp+40h] [rbp-30h] BYREF
  __int64 v19; // [rsp+48h] [rbp-28h] BYREF
  LPCWSTR pszPath; // [rsp+50h] [rbp-20h] BYREF
  __int64 v21; // [rsp+58h] [rbp-18h]
  __int64 v22; // [rsp+60h] [rbp-10h]
  __int64 v23; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v25; // [rsp+B0h] [rbp+40h] BYREF

  v23 = a1;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 80LL))(a2, 1LL);
  v18 = 0LL;
  v8 = *(int (__fastcall **)(__int64, __int64, __int64 *, _QWORD))(*(_QWORD *)a2 + 152LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
  v9 = v8(a2, a3, &v18, 0LL) >= 0;
  pszPath = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v10 = *(void (__fastcall **)(__int64, LPCWSTR *))(*(_QWORD *)a3 + 136LL);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
  v21 = -1LL;
  v22 = -1LL;
  v10(a3, &pszPath);
  v12 = wil::details::static_lazy<WindowManagementLogging>::get(
          v11,
          (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
  v13 = (_DWORD *)v12[1];
  if ( *v13 > 5u && tlgKeywordOn(v12[1], 0x200000000000LL) )
  {
    LODWORD(v24) = v7;
    LODWORD(v25) = a4;
    LOBYTE(v23) = v9;
    v14 = &LocaleName;
    if ( pszPath )
      v14 = pszPath;
    v19 = (__int64)MultitaskingViewTelemetry::CensorAppID(v14);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v13,
      (unsigned __int8 *)dword_18086AC18,
      v15,
      v16,
      (const WCHAR **)&v19,
      (__int64)&v23,
      (__int64)&v25,
      (__int64)&v24);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
}
