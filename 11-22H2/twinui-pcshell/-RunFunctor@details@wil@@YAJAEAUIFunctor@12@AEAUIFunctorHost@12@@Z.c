/*
 * XREFs of ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180106324
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
 *     <none>
 */

int __fastcall wil::details::RunFunctor(
        wil::details *this,
        struct wil::details::IFunctor *a2,
        struct wil::details::IFunctorHost *a3)
{
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( wil::details::g_pfnRunFunctorWithExceptionFilter )
    return wil::details::g_pfnRunFunctorWithExceptionFilter(this, a2, retaddr);
  else
    return (**(__int64 (__fastcall ***)(struct wil::details::IFunctor *, wil::details *, struct wil::details::IFunctorHost *))a2)(
             a2,
             this,
             a3);
}
