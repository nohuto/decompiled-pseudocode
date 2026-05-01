/*
 * XREFs of ?StartActivity@FSMEnterFullScreenForView@FullScreenManagerTelemetry@@QEAAXPEAUIApplicationView@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x1803F0A08
 * Callers:
 *     ?EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x1803EF780 (-EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FUL.c)
 * Callees:
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18002D3F0 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflector.c)
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800AD744 (-EnsureWatchingCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDA.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1801D69D8 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@43@Z @ 0x1803EEFFC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U2@U1@@-$_tlgWriteTe.c)
 */

void __fastcall FullScreenManagerTelemetry::FSMEnterFullScreenForView::StartActivity(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // rax
  void (__fastcall *v7)(__int64 *, __int64 *); // rbx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _DWORD *v10; // rbx
  const GUID *v11; // rax
  __int64 v12; // [rsp+50h] [rbp-30h] BYREF
  __int64 v13; // [rsp+58h] [rbp-28h] BYREF
  __int64 v14; // [rsp+60h] [rbp-20h] BYREF
  __int64 v15; // [rsp+68h] [rbp-18h]
  __int64 v16; // [rsp+70h] [rbp-10h]
  __int64 v17; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v18; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v19; // [rsp+C8h] [rbp+48h] BYREF

  v3 = *a2;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v7 = *(void (__fastcall **)(__int64 *, __int64 *))(v3 + 136);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v14);
  v15 = -1LL;
  v16 = -1LL;
  v7(a2, &v14);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(a1);
  v9 = wil::details::static_lazy<WindowManagementLogging>::get(
         v8,
         (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
  v10 = (_DWORD *)v9[1];
  if ( *v10 > 5u && tlgKeywordOn(v9[1], 0x400000000000LL) )
  {
    v12 = v14;
    v19 = (__int64)a2;
    LODWORD(v17) = a3;
    v13 = 0LL;
    LODWORD(v18) = GetCurrentThreadId();
    v11 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)v10,
      (unsigned __int8 *)dword_180848835,
      (const GUID *)(*(_QWORD *)(a1 + 48) + 8LL),
      v11,
      (__int64)&v13,
      (__int64)&v18,
      (const WCHAR **)&v12,
      (__int64)&v17,
      (__int64)&v19);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread(a1);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v14);
}
