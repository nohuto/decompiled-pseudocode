/*
 * XREFs of ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180106290
 * Callers:
 *     ?OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ @ 0x180017C14 (-OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ.c)
 *     ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180075858 (-_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPositi.c)
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800E923C (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     wil::details::RunFeatureDispatch__lambda_203a32cbd1766f67226f85b07542c037__&_ @ 0x180105748 (wil--details--RunFeatureDispatch__lambda_203a32cbd1766f67226f85b07542c037__-_.c)
 *     ?RuntimeClassInitialize@CControlCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801057B0 (-RuntimeClassInitialize@CControlCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?subscribe_to_services@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x180105E80 (-subscribe_to_services@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEA.c)
 *     ?SetPenMenuVisibility@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEAAJE@Z @ 0x180105EA0 (-SetPenMenuVisibility@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEAA.c)
 *     ?PublishServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180105FC0 (-PublishServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 *     ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x180106170 (-PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs@1@@Z @ 0x180139680 (-RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs.c)
 *     ?Close@CControlCenterExperienceManager@@UEAAJXZ @ 0x180143C40 (-Close@CControlCenterExperienceManager@@UEAAJXZ.c)
 *     ?Close@CActionCenterExperienceManager@@UEAAJXZ @ 0x1801442E0 (-Close@CActionCenterExperienceManager@@UEAAJXZ.c)
 *     ??1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x180177594 (--1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 *     ?Destroy@CMultitaskingViewManager@@UEAAJXZ @ 0x1801ACCD0 (-Destroy@CMultitaskingViewManager@@UEAAJXZ.c)
 *     ?ShutdownServices@XamlLauncher@@UEAAJPEAUIProfferService@@@Z @ 0x1801AF320 (-ShutdownServices@XamlLauncher@@UEAAJPEAUIProfferService@@@Z.c)
 *     ?OnVisibilityChanged@CControlCenterExperienceManager@@AEAAXXZ @ 0x1804215EC (-OnVisibilityChanged@CControlCenterExperienceManager@@AEAAXXZ.c)
 *     ?OnControlCenterVisibilityChanged@CToastCenterExperienceManager@@AEAAJ_N@Z @ 0x18043761C (-OnControlCenterVisibilityChanged@CToastCenterExperienceManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x1801062DC (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 */

wil::details::FeatureFunctorHost *__fastcall wil::details::FeatureFunctorHost::FeatureFunctorHost(
        wil::details::FeatureFunctorHost *this,
        int a2,
        const struct DiagnosticsInfo *a3)
{
  wil::details::FeatureFunctorHost *result; // rax

  *(_QWORD *)this = &wil::details::FeatureFunctorHost::`vftable';
  wil::ThreadErrorContext::ThreadErrorContext((wil::details::FeatureFunctorHost *)((char *)this + 8));
  *((_QWORD *)this + 3) = a3;
  result = this;
  *((_DWORD *)this + 8) = a2;
  return result;
}
