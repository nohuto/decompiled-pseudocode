/*
 * XREFs of ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@@?$notify_awaiter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x1801C22F8
 * Callers:
 *     _lambda_2b601edba18b4fdf43345f97c13ddcab_$_ResumeCoro$1::operator() @ 0x1801B1B90 (_lambda_2b601edba18b4fdf43345f97c13ddcab_$_ResumeCoro$1--operator().c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::InsertAsync$_ResumeCoro$1 @ 0x1801B8D00 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1801B8D00.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::IsSupportedAsync$_ResumeCoro$1 @ 0x1801B9170 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1801B9170.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$1 @ 0x1801BD250 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_Resume.c)
 *     _anonymous_namespace_::RepairWebExperiencePackage$_ResumeCoro$1 @ 0x1801CA220 (_anonymous_namespace_--RepairWebExperiencePackage$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x1801CCCE0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 *     winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::DismissContextMenu$_ResumeCoro$1 @ 0x1801E8280 (winrt--Windows--Internal--Shell--implementation--ImeContextMenuManager--DismissContextMenu$_Resu.c)
 *     winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::ShowContextMenu$_ResumeCoro$1 @ 0x1801E8590 (winrt--Windows--Internal--Shell--implementation--ImeContextMenuManager--ShowContextMenu$_ResumeC.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<bool>>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::TabProxyWindow *>::promise_type>(
        __int64 a1,
        __int64 a2)
{
  return winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>>::await_suspend(a1, a2);
}
