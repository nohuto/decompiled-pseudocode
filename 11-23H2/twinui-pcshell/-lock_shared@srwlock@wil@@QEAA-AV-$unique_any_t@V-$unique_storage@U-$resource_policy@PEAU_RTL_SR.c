/*
 * XREFs of ?lock_shared@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18004D4D0
 * Callers:
 *     _lambda_827f14b05dc17363801a5942fbc6a7e9_::operator() @ 0x1801F4D40 (_lambda_827f14b05dc17363801a5942fbc6a7e9_--operator().c)
 *     ?GetInputAppState@TouchKeyboardExperienceManager@@AEAA?AW4PLM_APPLICATION_STATE@@XZ @ 0x18020A518 (-GetInputAppState@TouchKeyboardExperienceManager@@AEAA-AW4PLM_APPLICATION_STATE@@XZ.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_ResumeCoro$1 @ 0x18021A120 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--DelayedUpdateActiva_ea_18021A120.c)
 *     TouchEdgeGripperHost::CreateGripperWindowAsync$_ResumeCoro$1 @ 0x18021EBA0 (TouchEdgeGripperHost--CreateGripperWindowAsync$_ResumeCoro$1.c)
 *     TouchEdgeGripperHost::DismissGripperWindowAsync$_ResumeCoro$1 @ 0x18021F1E0 (TouchEdgeGripperHost--DismissGripperWindowAsync$_ResumeCoro$1.c)
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x180225EC0 (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1.c)
 *     ?GetDashboardAppExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUAppExtension@AppExtensions@ApplicationModel@WindowsUdk@6@XZ @ 0x18023BE40 (-GetDashboardAppExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AUA.c)
 *     ?GetDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUDashboardExtension@Dashboard@3UI@WindowsUdk@6@XZ @ 0x18023BF5C (-GetDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AUDash.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1 @ 0x180254250 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCurr_ea_180254250.c)
 *     ?OnApplicationViewChanged@CopilotHotkeyManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1802720C0 (-OnApplicationViewChanged@CopilotHotkeyManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 *     ?SendWindowMessageOnInvocation@CopilotHotkeyManager@@AEAA_NHAEAPEAUHWND__@@@Z @ 0x180273224 (-SendWindowMessageOnInvocation@CopilotHotkeyManager@@AEAA_NHAEAPEAUHWND__@@@Z.c)
 *     _lambda_501a545e3e62ea2d6f88499b5047d98e_::operator() @ 0x18027AE10 (_lambda_501a545e3e62ea2d6f88499b5047d98e_--operator().c)
 *     ?GetTrackedProcessCount@?$produce@UProcessTracker@implementation@Shell@Internal@Windows@winrt@@UIProcessTracker@3456@@impl@winrt@@UEAAHPEAI@Z @ 0x18027E460 (-GetTrackedProcessCount@-$produce@UProcessTracker@implementation@Shell@Internal@Windows@winrt@@U.c)
 *     ?OverrideNavigationLevelForView@UwpWindowEventDispatcher@@UEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevelOverride@@@Z @ 0x1804D1800 (-OverrideNavigationLevelForView@UwpWindowEventDispatcher@@UEAAXPEAUIViewWrapper@ViewManagerInter.c)
 * Callees:
 *     <none>
 */

RTL_SRWLOCK **__fastcall wil::srwlock::lock_shared(RTL_SRWLOCK *a1, RTL_SRWLOCK **a2)
{
  AcquireSRWLockShared(a1);
  *a2 = a1;
  return a2;
}
