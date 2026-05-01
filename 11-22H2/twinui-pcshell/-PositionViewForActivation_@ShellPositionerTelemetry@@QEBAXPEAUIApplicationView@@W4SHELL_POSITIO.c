/*
 * XREFs of ?PositionViewForActivation_@ShellPositionerTelemetry@@QEBAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x180017454
 * Callers:
 *     ??$PositionViewForActivation@AEAPEAUIApplicationView@@AEBW4SHELL_POSITIONER_TYPE@@@ShellPositionerTelemetry@@SAXAEAPEAUIApplicationView@@AEBW4SHELL_POSITIONER_TYPE@@@Z @ 0x180017298 (--$PositionViewForActivation@AEAPEAUIApplicationView@@AEBW4SHELL_POSITIONER_TYPE@@@ShellPosition.c)
 * Callees:
 *     ?CensorAppID@SQM@@YAPEBGPEBG@Z @ 0x1800175CC (-CensorAppID@SQM@@YAPEBGPEBG@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@6@Z @ 0x18001760C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x1800C3614 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?DoesAppHaveQuirk@ShellPositionerTelemetry@@CA_NPEAUIApplicationView@@W4__MIDL___MIDL_itf_shpriv_core_0000_0331_0005@@@Z @ 0x180211738 (-DoesAppHaveQuirk@ShellPositionerTelemetry@@CA_NPEAUIApplicationView@@W4__MIDL___MIDL_itf_shpriv.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall ShellPositionerTelemetry::PositionViewForActivation_(__int64 a1, __int64 a2, int a3)
{
  wil::TraceLoggingProvider *v5; // rax
  unsigned __int64 v6; // r8
  char result; // al
  void (__fastcall *v8)(__int64, LPCWSTR *); // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  _DWORD *v11; // rbx
  char HaveQuirk; // al
  const unsigned __int16 *v13; // rdx
  const WCHAR *v14; // rcx
  __int64 v15; // [rsp+50h] [rbp-30h] BYREF
  __int64 v16; // [rsp+58h] [rbp-28h] BYREF
  __int64 v17; // [rsp+60h] [rbp-20h] BYREF
  LPCWSTR pszPath; // [rsp+68h] [rbp-18h] BYREF
  __int64 v19; // [rsp+70h] [rbp-10h]
  __int64 v20; // [rsp+78h] [rbp-8h]
  __int64 v21; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v22; // [rsp+B8h] [rbp+38h] BYREF

  v21 = a1;
  v5 = (wil::TraceLoggingProvider *)wil::details::static_lazy<WindowManagementLogging>::get(
                                      a1,
                                      _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
  result = wil::TraceLoggingProvider::IsEnabled_(v5, 0, v6);
  if ( result )
  {
    pszPath = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    v8 = *(void (__fastcall **)(__int64, LPCWSTR *))(*(_QWORD *)a2 + 136LL);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&pszPath);
    v19 = -1LL;
    v20 = -1LL;
    v8(a2, &pszPath);
    v10 = wil::details::static_lazy<WindowManagementLogging>::get(
            v9,
            _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    v11 = *(_DWORD **)(v10 + 8);
    if ( *v11 > 5u && (unsigned __int8)tlgKeywordOn(*(_QWORD *)(v10 + 8), 0x400000000000LL) )
    {
      if ( (unsigned __int8)ShellPositionerTelemetry::DoesAppHaveQuirk(a2, 0LL)
        || (HaveQuirk = ShellPositionerTelemetry::DoesAppHaveQuirk(a2, 5LL)) != 0 )
      {
        HaveQuirk = 1;
      }
      LOBYTE(v21) = HaveQuirk;
      LOBYTE(v22) = ShellPositionerTelemetry::DoesAppHaveQuirk(a2, 4LL);
      LODWORD(v15) = a3;
      v14 = &LocaleName;
      if ( pszPath )
        v14 = pszPath;
      v16 = (__int64)SQM::CensorAppID(v14, v13);
      v17 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        (int)v11,
        (int)&dword_1808674E1,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v22,
        (__int64)&v21);
    }
    return Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&pszPath);
  }
  return result;
}
