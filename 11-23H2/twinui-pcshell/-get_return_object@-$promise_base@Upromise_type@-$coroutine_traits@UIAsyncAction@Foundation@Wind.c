/*
 * XREFs of ?get_return_object@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUWindowsTracker@implementation@Shell@Internal@34@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AUIAsyncAction@Foundation@Windows@3@XZ @ 0x18006E100
 * Callers:
 *     winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::UseMrtShim_WASDK$_InitCoro$2 @ 0x1801FAEB8 (winrt--Windows--Internal--Shell--XamlExplorerHost--WASDK--implementation--UseMrtShim_WASDK$_Init.c)
 *     CVirtualDesktopManager::SwitchContextForVDAnimation$_InitCoro$2 @ 0x180215928 (CVirtualDesktopManager--SwitchContextForVDAnimation$_InitCoro$2.c)
 *     winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync$_InitCoro$2 @ 0x180247258 (winrt--Windows--Internal--Shell--implementation--WaitConfigurableDurationAsync$_InitCoro$2.c)
 *     winrt::Windows::Internal::Shell::implementation::WaitForShellDesktopSwitchEvent$_InitCoro$2 @ 0x1802476CC (winrt--Windows--Internal--Shell--implementation--WaitForShellDesktopSwitchEvent$_InitCoro$2.c)
 *     FallbackFlyoutView::Hide$_InitCoro$2 @ 0x1802550A4 (FallbackFlyoutView--Hide$_InitCoro$2.c)
 *     FallbackFlyoutView::Show$_InitCoro$2 @ 0x1802553D4 (FallbackFlyoutView--Show$_InitCoro$2.c)
 *     ApplicationFlyoutView::Hide$_InitCoro$2 @ 0x1802557AC (ApplicationFlyoutView--Hide$_InitCoro$2.c)
 *     ApplicationFlyoutView::Show$_InitCoro$2 @ 0x180255AF4 (ApplicationFlyoutView--Show$_InitCoro$2.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp::LoadStreamAsync$_InitCoro$2 @ 0x1802568A8 (winrt--Windows--Internal--Shell--implementation--MeetAndChatFallbackProp--LoadStreamAsync$_InitC.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowsTracker::SetEventHookForWindowAsync$_InitCoro$2 @ 0x18027C7C4 (winrt--Windows--Internal--Shell--implementation--WindowsTracker--SetEventHookForWindowAsync$_Ini.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowsTracker::UnhookEventForAllWindowsAsync$_InitCoro$2 @ 0x18027CBCC (winrt--Windows--Internal--Shell--implementation--WindowsTracker--UnhookEventForAllWindowsAsync$_.c)
 *     TaskViewFrame::UpdateWorkAreaAsync$_InitCoro$2 @ 0x18028D758 (TaskViewFrame--UpdateWorkAreaAsync$_InitCoro$2.c)
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::WindowsTracker *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::get_return_object(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  *(_QWORD *)a2 = a1 + 16;
  winrt::Windows::Foundation::IUnknown::add_ref(a2);
  return a2;
}
