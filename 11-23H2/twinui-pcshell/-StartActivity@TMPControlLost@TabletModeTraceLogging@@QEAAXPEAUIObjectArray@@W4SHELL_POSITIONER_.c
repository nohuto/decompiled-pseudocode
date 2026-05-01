/*
 * XREFs of ?StartActivity@TMPControlLost@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1805C007C
 * Callers:
 *     ?ControlLost@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1805BABC0 (-ControlLost@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnkno.c)
 * Callees:
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800AD744 (-EnsureWatchingCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDA.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180110484 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1801D69D8 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@4@Z @ 0x1802D0740 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U2@@-$_tlgWriteTempl.c)
 *     ?GetTelemetryIdForView@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1805BC520 (-GetTelemetryIdForView@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 */

void __fastcall TabletModeTraceLogging::TMPControlLost::StartActivity(__int64 a1, __int64 a2, int a3)
{
  const WCHAR *v6; // r14
  int (__fastcall *v7)(__int64, _QWORD, GUID *, ApplicationViewTraceLoggingHelpers **); // rbx
  unsigned __int16 **v8; // r8
  __int64 v9; // rcx
  _DWORD *v10; // rbx
  const WCHAR *v11; // rax
  const GUID *v12; // rax
  __int64 v13; // [rsp+40h] [rbp-30h] BYREF
  __int64 v14; // [rsp+48h] [rbp-28h] BYREF
  const WCHAR *v15; // [rsp+50h] [rbp-20h] BYREF
  __int64 v16; // [rsp+58h] [rbp-18h]
  __int64 v17; // [rsp+60h] [rbp-10h]
  __int64 v18; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+38h] BYREF
  ApplicationViewTraceLoggingHelpers *v20; // [rsp+B8h] [rbp+48h] BYREF

  v6 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v20 = 0LL;
  v7 = *(int (__fastcall **)(__int64, _QWORD, GUID *, ApplicationViewTraceLoggingHelpers **))(*(_QWORD *)a2 + 32LL);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v20);
  if ( v7(a2, 0LL, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v20) >= 0 )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v15);
    v16 = -1LL;
    v17 = -1LL;
    ApplicationViewTraceLoggingHelpers::GetTelemetryIdForView(
      (int (__fastcall ***)(ApplicationViewTraceLoggingHelpers *, GUID *, __int64 *))v20,
      (struct IApplicationView *)&v15,
      v8);
    v6 = v15;
  }
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(a1);
  v10 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                    v9,
                    (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v10 > 5u )
  {
    LODWORD(v18) = a3;
    v11 = &LocaleName;
    if ( v6 )
      v11 = v6;
    v13 = (__int64)v11;
    LODWORD(v19) = GetCurrentThreadId();
    v14 = 0LL;
    v12 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      (__int64)v10,
      (unsigned __int8 *)dword_18086AA82,
      (const GUID *)(*(_QWORD *)(a1 + 48) + 8LL),
      v12,
      (__int64)&v14,
      (__int64)&v19,
      (const WCHAR **)&v13,
      (__int64)&v18);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread(a1);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v20);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v15);
}
