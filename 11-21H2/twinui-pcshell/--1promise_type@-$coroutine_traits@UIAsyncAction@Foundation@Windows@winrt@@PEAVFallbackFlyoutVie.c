/*
 * XREFs of ??1promise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVFallbackFlyoutView@@AEBURect@234@AEBW4TaskbarLocation@Shell@UI@WindowsUdk@4@_JAEBVCorrelationVector@@@experimental@std@@UEAA@XZ @ 0x1801C4804
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync$_InitCoro$2_::_1_::dtor$1 @ 0x1801CDB4B (_winrt--Windows--Internal--Shell--implementation--WaitConfigurableDurationAsync$_In_ea_1801CDB4B.c)
 *     _winrt::Windows::Internal::Shell::implementation::WaitForShellDesktopSwitchEvent$_InitCoro$2_::_1_::dtor$1 @ 0x1801CDF66 (_winrt--Windows--Internal--Shell--implementation--WaitForShellDesktopSwitchEvent$_I_ea_1801CDF66.c)
 *     _FallbackFlyoutView::Hide$_InitCoro$2_::_1_::dtor$1 @ 0x1801D4110 (_FallbackFlyoutView--Hide$_InitCoro$2_--_1_--dtor$1.c)
 *     _FallbackFlyoutView::Show$_InitCoro$2_::_1_::dtor$1 @ 0x1801D44C6 (_FallbackFlyoutView--Show$_InitCoro$2_--_1_--dtor$1.c)
 *     _ApplicationFlyoutView::Hide$_InitCoro$2_::_1_::dtor$1 @ 0x1801D5220 (_ApplicationFlyoutView--Hide$_InitCoro$2_--_1_--dtor$1.c)
 *     _ApplicationFlyoutView::Show$_InitCoro$2_::_1_::dtor$1 @ 0x1801D5692 (_ApplicationFlyoutView--Show$_InitCoro$2_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,FallbackFlyoutView *,winrt::Windows::Foundation::Rect const &,enum winrt::WindowsUdk::UI::Shell::TaskbarLocation const &,__int64,CorrelationVector const &>::promise_type::~promise_type(
        __int64 a1)
{
  return winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>(a1);
}
