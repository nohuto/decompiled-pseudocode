/*
 * XREFs of ?UnpresentWindow@CFrameApplicationPresentation@@UEAAJXZ @ 0x180020190
 * Callers:
 *     <none>
 * Callees:
 *     ?StartActivity@UnpresentWindow@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@@Z @ 0x18001D570 (-StartActivity@UnpresentWindow@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_201adf67891f12ccd8a16b46f471aeff___ @ 0x18001FFBC (CFrameApplicationPresentation--_AddTaskToQueue__lambda_201adf67891f12ccd8a16b46f471aeff___.c)
 *     ??1UnpresentWindow@CFramePresentationTelemetry@@QEAA@XZ @ 0x180021088 (--1UnpresentWindow@CFramePresentationTelemetry@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180021F68 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_180021F68.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800227B4 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_1800227B4.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFrameApplicationPresentation::UnpresentWindow(CFrameApplicationPresentation *this)
{
  HWND *v2; // rbx
  __int64 v3; // rbx
  __int64 v5; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v6[2]; // [rsp+30h] [rbp-D8h] BYREF
  void **v7; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v8[40]; // [rsp+188h] [rbp+80h] BYREF

  if ( **((_QWORD **)this + 13) )
  {
    v2 = (HWND *)*((_QWORD *)this + 14);
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      v8,
      "UnpresentWindow");
    v8[0] = &CFramePresentationTelemetry::UnpresentWindow::`vftable';
    CFramePresentationTelemetry::UnpresentWindow::StartActivity(
      (CFramePresentationTelemetry::UnpresentWindow *)v8,
      *((_DWORD *)this + 12),
      *v2);
    v5 = **((_QWORD **)this + 13);
    v3 = v5;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v5);
    v6[0] = v3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v6);
    v6[1] = (__int64)this;
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      &v7,
      v8);
    v7 = &CFramePresentationTelemetry::UnpresentWindow::`vftable';
    CFrameApplicationPresentation::_AddTaskToQueue__lambda_201adf67891f12ccd8a16b46f471aeff___((unsigned int *)this, v6);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v5);
    CFramePresentationTelemetry::UnpresentWindow::~UnpresentWindow((CFramePresentationTelemetry::UnpresentWindow *)v8);
  }
  return 0LL;
}
