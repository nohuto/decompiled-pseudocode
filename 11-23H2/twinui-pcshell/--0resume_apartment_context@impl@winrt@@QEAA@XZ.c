/*
 * XREFs of ??0resume_apartment_context@impl@winrt@@QEAA@XZ @ 0x1800DB690
 * Callers:
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA@U?$coroutine_handle@X@experimental@std@@@Z @ 0x180058D14 (-await_suspend@-$await_adapter@U-$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@.c)
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA@U?$coroutine_handle@X@experimental@std@@@Z @ 0x180059164 (-await_suspend@-$await_adapter@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@St.c)
 *     ?await_suspend@?$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@U?$coroutine_handle@X@experimental@std@@@Z @ 0x1800AD854 (-await_suspend@-$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@U-$coro.c)
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA@U?$coroutine_handle@X@experimental@std@@@Z @ 0x1800DB4B8 (-await_suspend@-$await_adapter@U-$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@Windows.c)
 *     ?RuntimeClassInitialize@CJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800E4B48 (-RuntimeClassInitialize@CJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800E6E94 (-RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ??0CMultitaskingViewManager@@QEAA@XZ @ 0x1800FF1CC (--0CMultitaskingViewManager@@QEAA@XZ.c)
 *     ??0XamlLauncher@@QEAA@XZ @ 0x1801039F4 (--0XamlLauncher@@QEAA@XZ.c)
 *     ??0CActionCenterExperienceManager@@QEAA@XZ @ 0x180134BDC (--0CActionCenterExperienceManager@@QEAA@XZ.c)
 *     ??0CControlCenterExperienceManager@@QEAA@XZ @ 0x180134E94 (--0CControlCenterExperienceManager@@QEAA@XZ.c)
 *     ??0CStartExperienceManager@@QEAA@_N@Z @ 0x180135958 (--0CStartExperienceManager@@QEAA@_N@Z.c)
 *     ??0CVirtualTouchpadExperienceManager@@QEAA@XZ @ 0x180135F74 (--0CVirtualTouchpadExperienceManager@@QEAA@XZ.c)
 *     ?DelayInitialize@CVirtualDesktopManager@@UEAAXPEAUISwitchThumbnailDeviceManager@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIImmersiveSettingsCache@@PEAUIMultitaskingViewServiceProvider@@@Z @ 0x180139B50 (-DelayInitialize@CVirtualDesktopManager@@UEAAXPEAUISwitchThumbnailDeviceManager@@PEAUIVirtualDes.c)
 *     ??0TouchEdgeGripperHost@@QEAA@AEBV?$function@$$A6AXIAEBUPoint@Foundation@Windows@winrt@@@Z@std@@AEBV?$function@$$A6AXXZ@2@@Z @ 0x180183250 (--0TouchEdgeGripperHost@@QEAA@AEBV-$function@$$A6AXIAEBUPoint@Foundation@Windows@winrt@@@Z@std@@.c)
 *     CControlCenterExperienceManager::PrelaunchExperienceAsync$_ResumeCoro$1 @ 0x1801DF350 (CControlCenterExperienceManager--PrelaunchExperienceAsync$_ResumeCoro$1.c)
 *     CToastCenterExperienceManager::OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1 @ 0x1801E0640 (CToastCenterExperienceManager--OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::ShowFlyoutAsync$_ResumeCoro$1 @ 0x18022D0F0 (winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance-_ea_18022D0F0.c)
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA@U?$coroutine_handle@X@experimental@std@@@Z @ 0x180248C24 (-await_suspend@-$await_adapter@U-$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@w.c)
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@@impl@winrt@@QEAA@U?$coroutine_handle@X@experimental@std@@@Z @ 0x180248D08 (-await_suspend@-$await_adapter@U-$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Manag.c)
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x180257360 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1.c)
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEAA@U?$coroutine_handle@X@experimental@std@@@Z @ 0x1805509EC (-await_suspend@-$await_adapter@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEAA.c)
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@ULogoCandidateWithStream@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA@U?$coroutine_handle@X@experimental@std@@@Z @ 0x1805E5BD8 (-await_suspend@-$await_adapter@U-$IAsyncOperation@ULogoCandidateWithStream@StartScreen@UI@Window.c)
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA@U?$coroutine_handle@X@experimental@std@@@Z @ 0x1805E5CC4 (-await_suspend@-$await_adapter@U-$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winr.c)
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@@impl@winrt@@QEAA@U?$coroutine_handle@X@experimental@std@@@Z @ 0x18062CBD4 (-await_suspend@-$await_adapter@U-$IAsyncOperation@I@Foundation@Windows@winrt@@@impl@winrt@@QEAA@.c)
 *     ?UpdateLaunchSnappedBehavior@CShellSnapComponent@@AEAAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180665658 (-UpdateLaunchSnappedBehavior@CShellSnapComponent@@AEAAXAEAV-$unique_any_t@V-$unique_storage@U-$r.c)
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA@U?$coroutine_handle@X@experimental@std@@@Z @ 0x180692CEC (-await_suspend@-$await_adapter@U-$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Wi.c)
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA@U?$coroutine_handle@X@experimental@std@@@Z @ 0x1806A9428 (-await_suspend@-$await_adapter@U-$IAsyncOperation@U-$IReference@_N@Foundation@Windows@winrt@@@Fo.c)
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@W4HttpStatusCode@Http@Web@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA@U?$coroutine_handle@X@experimental@std@@@Z @ 0x1806C897C (-await_suspend@-$await_adapter@U-$IAsyncOperation@W4HttpStatusCode@Http@Web@Windows@winrt@@@Foun.c)
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperationWithProgress@II@Foundation@Windows@winrt@@@impl@winrt@@QEAA@U?$coroutine_handle@X@experimental@std@@@Z @ 0x18071AB84 (-await_suspend@-$await_adapter@U-$IAsyncOperationWithProgress@II@Foundation@Windows@winrt@@@impl.c)
 *     ??0VirtualDesktopSwitcherHost@@QEAA@XZ @ 0x1807717AC (--0VirtualDesktopSwitcherHost@@QEAA@XZ.c)
 * Callees:
 *     ?get_apartment_type@impl@winrt@@YA?AU?$pair@HH@std@@XZ @ 0x1800DB6DC (-get_apartment_type@impl@winrt@@YA-AU-$pair@HH@std@@XZ.c)
 *     WINRT_IMPL_CoGetObjectContext @ 0x1801CEFD1 (WINRT_IMPL_CoGetObjectContext.c)
 */

winrt::impl::resume_apartment_context *__fastcall winrt::impl::resume_apartment_context::resume_apartment_context(
        winrt::impl::resume_apartment_context *this)
{
  int v2; // ecx
  winrt::impl::resume_apartment_context *result; // rax
  LPVOID ppv; // [rsp+30h] [rbp+8h] BYREF

  ppv = 0LL;
  WINRT_IMPL_CoGetObjectContext(&winrt::impl::guid_v<winrt::impl::IContextCallback>, &ppv);
  *(_QWORD *)this = ppv;
  v2 = *(_DWORD *)winrt::impl::get_apartment_type(&ppv);
  result = this;
  *((_DWORD *)this + 2) = v2;
  return result;
}
