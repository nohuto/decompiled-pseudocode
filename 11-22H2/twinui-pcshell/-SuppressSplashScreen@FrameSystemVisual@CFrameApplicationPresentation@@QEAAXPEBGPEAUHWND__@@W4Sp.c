/*
 * XREFs of ?SuppressSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXPEBGPEAUHWND__@@W4SplashScreenSuppressionReason@2@K@Z @ 0x18002A37C
 * Callers:
 *     ?_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ @ 0x18000D7F4 (-_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ.c)
 * Callees:
 *     ??1SplashScreenSuppressed@CFramePresentationTelemetry@@QEAA@XZ @ 0x18002A47C (--1SplashScreenSuppressed@CFramePresentationTelemetry@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18002A598 (--0-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18002A6AC (--0-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P_ea_18002A6AC.c)
 *     ??4?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18002AD34 (--4-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?StartActivity@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXPEBGPEAUHWND__@@KK@Z @ 0x180064560 (-StartActivity@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXPEBGPEAUHWND__@@KK@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CFrameApplicationPresentation::FrameSystemVisual::SuppressSplashScreen(
        __int64 a1,
        const unsigned __int16 *a2,
        HWND a3,
        unsigned int a4,
        unsigned int a5)
{
  _QWORD v9[40]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v10[40]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v11[40]; // [rsp+2B0h] [rbp+1B0h] BYREF

  *(_DWORD *)(a1 + 4) = 1;
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v9);
  v9[0] = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
  CFramePresentationTelemetry::SplashScreenSuppressed::StartActivity(
    (CFramePresentationTelemetry::SplashScreenSuppressed *)v9,
    a2,
    a3,
    a4,
    a5);
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v10);
  v10[0] = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v11);
  v11[0] = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::operator=(
    a1 + 8,
    v10);
  CFramePresentationTelemetry::SplashScreenSuppressed::~SplashScreenSuppressed((CFramePresentationTelemetry::SplashScreenSuppressed *)v11);
  CFramePresentationTelemetry::SplashScreenSuppressed::~SplashScreenSuppressed((CFramePresentationTelemetry::SplashScreenSuppressed *)v10);
  CFramePresentationTelemetry::SplashScreenSuppressed::~SplashScreenSuppressed((CFramePresentationTelemetry::SplashScreenSuppressed *)v9);
}
