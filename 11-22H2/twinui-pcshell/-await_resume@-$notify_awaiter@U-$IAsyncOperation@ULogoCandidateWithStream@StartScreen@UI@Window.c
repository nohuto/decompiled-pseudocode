/*
 * XREFs of ?await_resume@?$notify_awaiter@U?$IAsyncOperation@ULogoCandidateWithStream@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x1805E5B40
 * Callers:
 *     JointResize::TagViewWithLogoAsync$_ResumeCoro$1 @ 0x180213B40 (JointResize--TagViewWithLogoAsync$_ResumeCoro$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@ULogoCandidateWithStream@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1805E5A98 (-await_resume@-$await_adapter@U-$IAsyncOperation@ULogoCandidateWithStream@StartScreen@UI@Windows.c)
 */

_QWORD *__fastcall winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::LogoCandidateWithStream>>::await_resume(
        __int64 a1,
        _QWORD *a2)
{
  if ( winrt_resume_handler )
    winrt_resume_handler();
  winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::LogoCandidateWithStream>>::await_resume(
    a1,
    a2);
  return a2;
}
