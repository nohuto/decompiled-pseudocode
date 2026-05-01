/*
 * XREFs of ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVJointResize@@AEBUSecondaryViewInfo@3@W4DWMTRANSITION_TARGET@@@experimental@std@@@?$notify_awaiter@U?$IAsyncOperation@ULogoCandidateWithStream@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVJointResize@@AEBUSecondaryViewInfo@3@W4DWMTRANSITION_TARGET@@@experimental@std@@@experimental@std@@@Z @ 0x1805E098C
 * Callers:
 *     JointResize::TagViewWithLogoAsync$_ResumeCoro$1 @ 0x180213B40 (JointResize--TagViewWithLogoAsync$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::LogoCandidateWithStream>>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,JointResize *,JointResize::SecondaryViewInfo const &,enum DWMTRANSITION_TARGET>::promise_type>(
        __int64 a1,
        __int64 a2)
{
  return winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::LogoCandidateWithStream>>::await_suspend(
           a1,
           a2);
}
