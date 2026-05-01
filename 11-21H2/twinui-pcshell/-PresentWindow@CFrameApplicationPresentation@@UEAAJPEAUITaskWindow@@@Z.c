/*
 * XREFs of ?PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z @ 0x180075320
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180071F14 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_180071F14.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18007206C (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_18007206C.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180072110 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_3299b7567c8e16a49084b1350d61b7f6___ @ 0x180075540 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_3299b7567c8e16a49084b1350d61b7f6___.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800767C0 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18013A0EC (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?StartActivity@PresentWindow@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@0@Z @ 0x18014024C (-StartActivity@PresentWindow@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@0@Z.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x1801414A0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1802DEE4C (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     WPP_SF_qd @ 0x1802EC594 (WPP_SF_qd.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CFrameApplicationPresentation::PresentWindow(
        CFrameApplicationPresentation *this,
        struct IUnknown *a2)
{
  bool v4; // r14
  __int64 v5; // rax
  HWND v6; // r15
  HWND *v7; // rbx
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rdx
  void (*v13)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  LPVOID Context; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-C8h] BYREF
  LPINIT_ONCE v16; // [rsp+40h] [rbp-C0h] BYREF
  int v17; // [rsp+48h] [rbp-B8h]
  __int64 v18[2]; // [rsp+50h] [rbp-B0h] BYREF
  void **v19; // [rsp+60h] [rbp-A0h] BYREF
  void **v20; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v21[24]; // [rsp+1A8h] [rbp+A8h] BYREF
  int v22; // [rsp+1C0h] [rbp+C0h]
  int v23; // [rsp+1D8h] [rbp+D8h]
  _BYTE v24[32]; // [rsp+1E0h] [rbp+E0h] BYREF
  _BYTE v25[192]; // [rsp+200h] [rbp+100h] BYREF
  _BYTE v26[24]; // [rsp+2C0h] [rbp+1C0h] BYREF
  volatile signed __int32 *v27; // [rsp+2D8h] [rbp+1D8h] BYREF

  v4 = (unsigned int)SHIsSameObject(a2, **((struct IUnknown ***)this + 13)) != 0;
  v5 = ((__int64 (__fastcall *)(struct IUnknown *))a2->lpVtbl[1].AddRef)(a2);
  v6 = (HWND)v5;
  v7 = (HWND *)*((_QWORD *)this + 14);
  if ( !v4 || (HWND)v5 != *v7 )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v10 = *((_DWORD *)this + 12);
      v11 = ((__int64 (__fastcall *)(struct IUnknown *))a2->lpVtbl[1].AddRef)(a2);
      WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_2c90db7e24993e53cb0c5ea1cdf0809e_Traceguids, v11, v10);
      v7 = (HWND *)*((_QWORD *)this + 14);
    }
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (__int64)&v20,
      (__int64)"PresentWindow");
    v20 = &CFramePresentationTelemetry::PresentWindow::`vftable';
    CFramePresentationTelemetry::PresentWindow::StartActivity(
      (CFramePresentationTelemetry::PresentWindow *)&v20,
      *((_DWORD *)this + 12),
      *v7,
      v6);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 79) + 536LL))(*((_QWORD *)this + 79));
    ((void (__fastcall *)(struct IUnknown *, _QWORD, __int64))a2->lpVtbl[8].Release)(a2, *((_QWORD *)this + 16), 3LL);
    v9 = **((_QWORD **)this + 13);
    if ( v9 && !v4 )
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v9 + 208LL))(v9, *((_QWORD *)this + 16), 1LL);
    Context = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&Context);
    v18[0] = (__int64)a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v18);
    v18[1] = (__int64)this;
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (__int64)&v19,
      &v20);
    v19 = &CFramePresentationTelemetry::PresentWindow::`vftable';
    CFrameApplicationPresentation::_AddTaskToQueue__lambda_3299b7567c8e16a49084b1350d61b7f6___(this, v18);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&Context);
    v20 = &CFramePresentationTelemetry::PresentWindow::`vftable';
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v20);
    wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v27);
    wil::details::shared_buffer::reset((wil::details::shared_buffer *)v26);
    wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v25);
    if ( v23 == 1 )
    {
      v23 = 2;
      Context = 0LL;
      if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        v16 = &`CAppManagerLogging::Instance'::`2'::wrapper;
        Context = &qword_1807B3D58;
        qword_1807B3D58 = (__int64)&ShellScreenClippingLogging::`vftable';
        qword_1807B3D70 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
        v17 = 0;
        wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v16, v12, v13);
      }
      _tlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v24);
    }
    v23 = 3;
    if ( v22 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v21);
  }
  return 0LL;
}
