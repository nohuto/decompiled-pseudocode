/*
 * XREFs of ?StartActivity@TMAppArrange@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@PEAUIApplicationView@@I@Z @ 0x1805D47A4
 * Callers:
 *     ?Show@WindowArrangementView@@UEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x1805D4060 (-Show@WindowArrangementView@@UEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x18001C4D0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?ComputeRectAlignment@ImmersiveApplicationLayout@@YA?AW4RectAlignment@1@PEBUtagRECT@@00@Z @ 0x180022BB8 (-ComputeRectAlignment@ImmersiveApplicationLayout@@YA-AW4RectAlignment@1@PEBUtagRECT@@00@Z.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18002D3F0 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflector.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800AD744 (-EnsureWatchingCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDA.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1801D69D8 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TabletModeTelemetry::TMAppArrange::StartActivity(
        TabletModeTelemetry::TMAppArrange *this,
        struct IAppLayout *a2,
        struct IApplicationView *a3,
        int a4)
{
  int v8; // r13d
  int v9; // r15d
  int (__fastcall *v10)(struct IAppLayout *, struct IApplicationView *, __int64 *, _BYTE *); // rbx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  _DWORD *v13; // rbx
  int v14; // eax
  __int64 v15; // [rsp+50h] [rbp-39h] BYREF
  int v16; // [rsp+58h] [rbp-31h] BYREF
  int v17; // [rsp+5Ch] [rbp-2Dh] BYREF
  int v18; // [rsp+60h] [rbp-29h] BYREF
  DWORD CurrentThreadId; // [rsp+64h] [rbp-25h] BYREF
  _BYTE v20[8]; // [rsp+68h] [rbp-21h] BYREF
  _QWORD v21[2]; // [rsp+70h] [rbp-19h] BYREF
  _DWORD v22[10]; // [rsp+80h] [rbp-9h] BYREF

  v8 = (*(__int64 (__fastcall **)(struct IAppLayout *, __int64))(*(_QWORD *)a2 + 80LL))(a2, 1LL);
  v9 = 0;
  v15 = 0LL;
  v10 = *(int (__fastcall **)(struct IAppLayout *, struct IApplicationView *, __int64 *, _BYTE *))(*(_QWORD *)a2 + 152LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v15);
  if ( v10(a2, a3, &v15, v20) >= 0 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v15 + 56LL))(v15, 0LL, v21);
    (*(void (__fastcall **)(struct IAppLayout *, _DWORD *))(*(_QWORD *)a2 + 24LL))(a2, v22);
    v9 = ImmersiveApplicationLayout::ComputeRectAlignment(v22, v21, v21);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v12 = wil::details::static_lazy<WindowManagementLogging>::get(
          v11,
          (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
  v13 = (_DWORD *)v12[1];
  if ( *v13 > 5u && tlgKeywordOn(v12[1], 0x400000000000LL) )
  {
    v16 = a4;
    v17 = v8;
    v18 = v9;
    CurrentThreadId = GetCurrentThreadId();
    v21[0] = 0LL;
    v14 = wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)v13,
      (int)&unk_18086C06D,
      *((_QWORD *)this + 6) + 8,
      v14,
      (__int64)v21,
      (__int64)&CurrentThreadId,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v15);
}
