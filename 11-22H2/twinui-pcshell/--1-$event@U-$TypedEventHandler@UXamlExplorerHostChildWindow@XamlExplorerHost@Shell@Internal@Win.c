/*
 * XREFs of ??1?$event@U?$TypedEventHandler@UXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1804F72B8
 * Callers:
 *     _winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow::XamlExplorerHostChildWindow_::_1_::dtor$5 @ 0x1802B95D2 (_winrt--Windows--Internal--Shell--XamlExplorerHost--implementation--XamlExplorerHos_ea_1802B95D2.c)
 *     _winrt::event_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow_winrt::Windows::Foundation::IInspectable___::add_::_1_::dtor$0 @ 0x1802C584E (_winrt--event_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Interna_ea_1802C584E.c)
 *     _winrt::event_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow_winrt::Windows::Foundation::IInspectable___::operator()_winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSourceTakeFocusRequestedEventArgs__::_1_::dtor$0 @ 0x1804F6F02 (_winrt--event_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Interna_ea_1804F6F02.c)
 *     _winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow::XamlExplorerHostChildWindow_::_1_::dtor$5_0 @ 0x1804F7281 (_winrt--Windows--Internal--Shell--XamlExplorerHost--implementation--XamlExplorerHos_ea_1804F7281.c)
 *     _winrt::event_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow_winrt::Windows::Foundation::IInspectable___::remove_::_1_::dtor$0 @ 0x1804F82E7 (_winrt--event_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Interna_ea_1804F82E7.c)
 *     _winrt::event_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow_winrt::Windows::Foundation::IInspectable___::remove_::_1_::dtor$2 @ 0x1804F82FF (_winrt--event_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Interna_ea_1804F82FF.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@UXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1804F84D0 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@UXamlExplorerHostChildW.c)
 */

__int64 __fastcall winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IInspectable>>::~event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IInspectable>>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IInspectable>>>::unconditional_release_ref(a1);
  return result;
}
