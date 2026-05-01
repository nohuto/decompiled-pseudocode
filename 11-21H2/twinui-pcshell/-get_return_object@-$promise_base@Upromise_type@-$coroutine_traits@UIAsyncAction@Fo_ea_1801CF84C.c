/*
 * XREFs of ?get_return_object@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVFallbackFlyoutView@@AEBURect@234@AEBW4TaskbarLocation@Shell@UI@WindowsUdk@4@_JAEBVCorrelationVector@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AUIAsyncAction@Foundation@Windows@3@XZ @ 0x1801CF84C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync$_InitCoro$2 @ 0x1801CDA40 (winrt--Windows--Internal--Shell--implementation--WaitConfigurableDurationAsync$_InitCoro$2.c)
 *     winrt::Windows::Internal::Shell::implementation::WaitForShellDesktopSwitchEvent$_InitCoro$2 @ 0x1801CDE68 (winrt--Windows--Internal--Shell--implementation--WaitForShellDesktopSwitchEvent$_InitCoro$2.c)
 *     FallbackFlyoutView::Hide$_InitCoro$2 @ 0x1801D4008 (FallbackFlyoutView--Hide$_InitCoro$2.c)
 *     FallbackFlyoutView::Show$_InitCoro$2 @ 0x1801D4398 (FallbackFlyoutView--Show$_InitCoro$2.c)
 *     ApplicationFlyoutView::Hide$_InitCoro$2 @ 0x1801D5118 (ApplicationFlyoutView--Hide$_InitCoro$2.c)
 *     ApplicationFlyoutView::Show$_InitCoro$2 @ 0x1801D5564 (ApplicationFlyoutView--Show$_InitCoro$2.c)
 * Callees:
 *     ??0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z @ 0x180143304 (--0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z.c)
 */

winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *__fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,FallbackFlyoutView *,winrt::Windows::Foundation::Rect const &,enum winrt::WindowsUdk::UI::Shell::TaskbarLocation const &,__int64,CorrelationVector const &>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::get_return_object(
        __int64 a1,
        winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1 + 16;
  winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs::ShowShellViewRequestedEventArgs(
    a2,
    (const struct winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *)&v4);
  return a2;
}
