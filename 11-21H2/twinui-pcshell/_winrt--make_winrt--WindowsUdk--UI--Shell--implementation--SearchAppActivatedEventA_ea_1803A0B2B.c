/*
 * XREFs of _winrt::make_winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs_unsigned_short_const_(&)[19]_enum_winrt::WindowsUdk::UI::Shell::SearchAppActivationMode_&_winrt::Windows::Foundation::Rect_const_&_std::nullptr_t_bool__::_1_::dtor$3 @ 0x1803A0B2B
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$TypedEventHandler@UViewCoordinator@Shell@UI@WindowsUdk@winrt@@UHideViewRequestedEventArgs@2345@@Foundation@Windows@winrt@@QEAA@XZ @ 0x1800F81AC (--1-$TypedEventHandler@UViewCoordinator@Shell@UI@WindowsUdk@winrt@@UHideViewRequestedEventArgs@2.c)
 */

void __fastcall winrt::make_winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs_unsigned_short_const_____19__enum_winrt::WindowsUdk::UI::Shell::SearchAppActivationMode___winrt::Windows::Foundation::Rect_const___std::nullptr_t_bool__::_1_::dtor_3(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 64) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 64) &= ~4u;
    winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::ViewCoordinator,winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs>::~TypedEventHandler<winrt::WindowsUdk::UI::Shell::ViewCoordinator,winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs>((winrt::Windows::Foundation::IUnknown *)(a2 + 80));
  }
}
