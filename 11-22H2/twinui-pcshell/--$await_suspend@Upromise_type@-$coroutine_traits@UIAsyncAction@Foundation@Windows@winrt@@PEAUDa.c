/*
 * XREFs of ??$await_suspend@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUDashboardManager@implementation@Shell@Internal@34@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUDashboardManager@implementation@Shell@Internal@34@@experimental@std@@@experimental@std@@@Z @ 0x1801FB824
 * Callers:
 *     _lambda_0e377e64aae41d271781dea56205f73a_$_ResumeCoro$1::operator() @ 0x1801FE7B0 (_lambda_0e377e64aae41d271781dea56205f73a_$_ResumeCoro$1--operator().c)
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x180225EC0 (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync$_ResumeCoro$1 @ 0x18022A840 (winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutMa_ea_18022A840.c)
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::TryGetMaximizeButtonRectFromTitleBarInfoAsync$_ResumeCoro$1 @ 0x18022D6A0 (winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance-_ea_18022D6A0.c)
 *     LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1 @ 0x18023DCE0 (LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::StartWidgetsOverwatchAsync$_ResumeCoro$1 @ 0x180243DB0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--StartWidgetsOverwatchAsync$_R.c)
 *     LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1 @ 0x180245160 (LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1.c)
 *     winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperationWithProgress_winrt::Windows::Management::Deployment::DeploymentResult_winrt::Windows::Management::Deployment::DeploymentProgress___::cancel_asynchronously$_ResumeCoro$1 @ 0x1802493E0 (winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperationWithProgress__ea_1802493E0.c)
 *     _lambda_c27fb3894833df319de68fad3b02a886_$_ResumeCoro$1::operator() @ 0x180276D10 (_lambda_c27fb3894833df319de68fad3b02a886_$_ResumeCoro$1--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ___await_suspend_Upromise_type___coroutine_traits_UIAsyncAction_Foundation_Windows_winrt__PEAUDashboardManager_implementation_Shell_Internal_34__experimental_std_____notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_A_PU__coroutine_handle_Upromise_type___coroutine_traits_UIAsyncAction_Foundation_Windows_winrt__PEAUDashboardManager_implementation_Shell_Internal_34__experimental_std___experimental_std___Z(
        __int64 a1,
        void *a2)
{
  return winrt::impl::resume_background(a2);
}
