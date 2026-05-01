/*
 * XREFs of ??1?$com_ptr@U?$event_array@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAA@XZ @ 0x1806367B4
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::WindowTabHost_::_1_::dtor$17 @ 0x1802B5567 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--WindowTabHost_--_1_--dtor$17.c)
 *     _winrt::event_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs___::remove_::_1_::dtor$0 @ 0x1802BE24A (_winrt--event_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Interna_ea_1802BE24A.c)
 *     _winrt::event_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs___::remove_::_1_::dtor$2 @ 0x1802BE25C (_winrt--event_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Interna_ea_1802BE25C.c)
 *     _winrt::event_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs___::add_::_1_::dtor$0 @ 0x1802BE26E (_winrt--event_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Interna_ea_1802BE26E.c)
 *     _winrt::event_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs___::operator()_winrt::Windows::Internal::Shell::implementation::WindowTabHost_winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs__::_1_::dtor$0 @ 0x1802BE491 (_winrt--event_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Interna_ea_1802BE491.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x180033544 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@UIWindowTabExtension@Sh.c)
 */

void __fastcall winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>::~com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>(
        __int64 *a1)
{
  if ( *a1 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>::unconditional_release_ref(a1);
}
