/*
 * XREFs of ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@implementation@Shell@Internal@Windows@2@@experimental@std@@@?$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@implementation@Shell@Internal@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x1801C2314
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x1801CCCE0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync$_ResumeCoro$1 @ 0x1801D5E10 (winrt--Windows--Internal--Shell--implementation--MeetAndChatIris--GetFallbackContentAsync$_Resum.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::DashboardManager *>::promise_type>(
        __int64 a1,
        __int64 a2)
{
  winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncAction>::await_suspend(a1, a2);
}
