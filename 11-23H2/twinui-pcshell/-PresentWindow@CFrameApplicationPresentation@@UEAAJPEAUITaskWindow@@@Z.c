/*
 * XREFs of ?PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z @ 0x180020CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?StartActivity@PresentWindow@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@0@Z @ 0x18001FC64 (-StartActivity@PresentWindow@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@0@Z.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_3299b7567c8e16a49084b1350d61b7f6___ @ 0x1800209B4 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_3299b7567c8e16a49084b1350d61b7f6___.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180021F68 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_180021F68.c)
 *     ??1PresentWindow@CFramePresentationTelemetry@@QEAA@XZ @ 0x180022020 (--1PresentWindow@CFramePresentationTelemetry@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800227B4 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_1800227B4.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_qd @ 0x1803A4DBC (WPP_SF_qd.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CFrameApplicationPresentation::PresentWindow(
        CFrameApplicationPresentation *this,
        struct IUnknown *a2)
{
  bool v4; // r14
  HWND v5; // r15
  HWND *v7; // rbx
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v12[2]; // [rsp+40h] [rbp-C0h] BYREF
  void **v13; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v14[40]; // [rsp+190h] [rbp+90h] BYREF

  v4 = (unsigned int)SHIsSameObject(a2, **((struct IUnknown ***)this + 13)) != 0;
  v5 = (HWND)((__int64 (__fastcall *)(struct IUnknown *))a2->lpVtbl[1].AddRef)(a2);
  if ( !v4 || v5 != **((HWND **)this + 14) )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v9 = *((_DWORD *)this + 12);
      v10 = ((__int64 (__fastcall *)(struct IUnknown *))a2->lpVtbl[1].AddRef)(a2);
      WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_2c90db7e24993e53cb0c5ea1cdf0809e_Traceguids, v10, v9);
    }
    v7 = (HWND *)*((_QWORD *)this + 14);
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      v14,
      "PresentWindow");
    v14[0] = &CFramePresentationTelemetry::PresentWindow::`vftable';
    CFramePresentationTelemetry::PresentWindow::StartActivity(
      (CFramePresentationTelemetry::PresentWindow *)v14,
      *((_DWORD *)this + 12),
      *v7,
      v5);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 79) + 536LL))(*((_QWORD *)this + 79));
    ((void (__fastcall *)(struct IUnknown *, _QWORD, __int64))a2->lpVtbl[8].Release)(a2, *((_QWORD *)this + 16), 3LL);
    v8 = **((_QWORD **)this + 13);
    if ( v8 && !v4 )
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v8 + 208LL))(v8, *((_QWORD *)this + 16), 1LL);
    v11[0] = (__int64)a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v11);
    v12[0] = (__int64)a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v12);
    v12[1] = (__int64)this;
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      &v13,
      v14);
    v13 = &CFramePresentationTelemetry::PresentWindow::`vftable';
    CFrameApplicationPresentation::_AddTaskToQueue__lambda_3299b7567c8e16a49084b1350d61b7f6___(
      (unsigned int *)this,
      v12);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v11);
    CFramePresentationTelemetry::PresentWindow::~PresentWindow((CFramePresentationTelemetry::PresentWindow *)v14);
  }
  return 0LL;
}
