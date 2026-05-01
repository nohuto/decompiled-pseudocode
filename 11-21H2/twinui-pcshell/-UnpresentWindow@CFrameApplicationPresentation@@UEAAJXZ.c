/*
 * XREFs of ?UnpresentWindow@CFrameApplicationPresentation@@UEAAJXZ @ 0x180145570
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180071F14 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_180071F14.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18007206C (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_18007206C.c)
 *     ??1UnpresentWindow@CFramePresentationTelemetry@@QEAA@XZ @ 0x180074B5C (--1UnpresentWindow@CFramePresentationTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@UnpresentWindow@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@@Z @ 0x18014567C (-StartActivity@UnpresentWindow@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@@Z.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_201adf67891f12ccd8a16b46f471aeff___ @ 0x1801457FC (CFrameApplicationPresentation--_AddTaskToQueue__lambda_201adf67891f12ccd8a16b46f471aeff___.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFrameApplicationPresentation::UnpresentWindow(CFrameApplicationPresentation *this)
{
  HWND *v2; // rbx
  __int64 v3; // rbx
  __int64 v5; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v6[2]; // [rsp+30h] [rbp-D8h] BYREF
  void **v7; // [rsp+40h] [rbp-C8h] BYREF
  volatile signed __int32 *v8[40]; // [rsp+188h] [rbp+80h] BYREF

  if ( **((_QWORD **)this + 13) )
  {
    v2 = (HWND *)*((_QWORD *)this + 14);
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (__int64)v8,
      (__int64)"UnpresentWindow");
    v8[0] = (volatile signed __int32 *)&CFramePresentationTelemetry::UnpresentWindow::`vftable';
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
      (__int64)&v7,
      v8);
    v7 = &CFramePresentationTelemetry::UnpresentWindow::`vftable';
    CFrameApplicationPresentation::_AddTaskToQueue__lambda_201adf67891f12ccd8a16b46f471aeff___(this, v6);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v5);
    CFramePresentationTelemetry::UnpresentWindow::~UnpresentWindow(v8);
  }
  return 0LL;
}
