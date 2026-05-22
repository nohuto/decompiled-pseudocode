/*
 * XREFs of ?Message_CompositionStateChanged_Callback@HolographicCompositor@Internal@Composition@UI@Windows@@QEAAJJ@Z @ 0x1801172E4
 * Callers:
 *     ?Thunk_Message_CompositionStateChanged_Callback_76@?$IHolographicCompositionCallbacks_Receive@VHolographicCompositor@Internal@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x180117D30 (-Thunk_Message_CompositionStateChanged_Callback_76@-$IHolographicCompositionCallbacks_Receive@VH.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIDispatcherQueueHandler@System@Windows@@VFtmBase@23@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007F3E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$I_ea_18007F3E0.c)
 *     ?InternalRelease@?$ComPtr@VInteropDwmCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18008D740 (-InternalRelease@-$ComPtr@VInteropDwmCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E42C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$ComPtr@UIDCompositionSurfaceFactory@@@WRL@Microsoft@@QEAA@XZ @ 0x180100AFC (--1-$ComPtr@UIDCompositionSurfaceFactory@@@WRL@Microsoft@@QEAA@XZ.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::System::IDispatcherQueueHandler::_)(void)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::System::IDispatcherQueueHandler_Microsoft::WRL::FtmBase___lambda_5b9ed54f858535c6691bad576f69a793__&__1___lambda_5b9ed54f858535c6691bad576f69a793__&_ @ 0x180114B2C (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::HolographicCompositor::Message_CompositionStateChanged_Callback(
        Windows::UI::Composition::Internal::HolographicCompositor *this,
        int a2)
{
  __int64 *v4; // rax
  volatile int *v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rcx
  int v8; // eax
  const char *v9; // r9
  unsigned int v10; // edi
  int v12; // [rsp+20h] [rbp-10h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v13; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v15; // [rsp+50h] [rbp+20h] BYREF
  char v16; // [rsp+58h] [rbp+28h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v17; // [rsp+60h] [rbp+30h] BYREF
  __int64 v18; // [rsp+68h] [rbp+38h] BYREF

  v17 = this;
  if ( this )
    Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(this);
  v12 = a2;
  v13 = this;
  if ( this )
    Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(this);
  v4 = Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::System::IDispatcherQueueHandler::___void__::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::System::IDispatcherQueueHandler_Microsoft::WRL::FtmBase___lambda_5b9ed54f858535c6691bad576f69a793_____1___lambda_5b9ed54f858535c6691bad576f69a793____(
         &v15,
         (__int64)&v12);
  v6 = *v4;
  *v4 = 0LL;
  v7 = v15;
  v18 = v6;
  if ( v15 )
  {
    v15 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::System::IDispatcherQueueHandler,Microsoft::WRL::FtmBase>>::Release(
      v7,
      v5);
  }
  Microsoft::WRL::ComPtr<Windows::UI::Composition::InteropDwmCompositor>::InternalRelease(&v13);
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**(_QWORD **)(*((_QWORD *)this + 3) + 504LL) + 56LL))(
         *(_QWORD *)(*((_QWORD *)this + 3) + 504LL),
         v6,
         &v16);
  v10 = v8;
  if ( v8 >= 0 )
  {
    if ( !v16 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        127LL,
        (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtholographiccompositor.cpp",
        v9);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    Microsoft::WRL::ComPtr<Windows::UI::Composition::InteropDwmCompositor>::InternalRelease(&v17);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7D,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtholographiccompositor.cpp",
      (const char *)(unsigned int)v8);
    Microsoft::WRL::ComPtr<IDCompositionSurfaceFactory>::~ComPtr<IDCompositionSurfaceFactory>(&v18);
    Microsoft::WRL::ComPtr<Windows::UI::Composition::InteropDwmCompositor>::InternalRelease(&v17);
    return v10;
  }
}
