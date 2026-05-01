/*
 * XREFs of ??1?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAA@XZ @ 0x180466284
 * Callers:
 *     _winrt::event_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::SearchAppHost_winrt::hstring___::operator()_winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost_winrt::hstring__::_1_::dtor$0 @ 0x1802BF5A5 (_winrt--event_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Shell--Search.c)
 *     _winrt::event_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::SearchAppHost_winrt::hstring___::add_::_1_::dtor$0 @ 0x1802C60BC (_winrt--event_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--_ea_1802C60BC.c)
 *     _winrt::event_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::SearchAppHost_winrt::hstring___::remove_::_1_::dtor$0 @ 0x18047F122 (_winrt--event_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--_ea_18047F122.c)
 *     _winrt::event_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::SearchAppHost_winrt::hstring___::remove_::_1_::dtor$2 @ 0x18047F13A (_winrt--event_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--_ea_18047F13A.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x18004B1F0 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@USearchAppHost@Shell@UI.c)
 */

void __fastcall winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::~com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>(
        unsigned int **a1)
{
  if ( *a1 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(a1);
}
