/*
 * XREFs of ??1SplashScreenSuppressed@CFramePresentationTelemetry@@QEAA@XZ @ 0x18002A47C
 * Callers:
 *     ?SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x180023D80 (-SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z.c)
 *     ?SuppressSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXPEBGPEAUHWND__@@W4SplashScreenSuppressionReason@2@K@Z @ 0x18002A37C (-SuppressSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXPEBGPEAUHWND__@@W4Sp.c)
 *     ?ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppressionReason@2@@Z @ 0x18002ACB8 (-ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppress.c)
 *     ??1CFrameApplicationPresentation@@UEAA@XZ @ 0x1803C9A34 (--1CFrameApplicationPresentation@@UEAA@XZ.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002A54C (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 */

void __fastcall CFramePresentationTelemetry::SplashScreenSuppressed::~SplashScreenSuppressed(
        CFramePresentationTelemetry::SplashScreenSuppressed *this)
{
  *(_QWORD *)this = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
