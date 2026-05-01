/*
 * XREFs of ??1?$com_ptr@U?$event_array@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAA@XZ @ 0x180466268
 * Callers:
 *     _winrt::event_winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable___::add_::_1_::dtor$0 @ 0x1802B95FA (_winrt--event_winrt--Windows--Foundation--EventHandler_winrt--Windows--Foundation--IInspectable_.c)
 *     _winrt::event_winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable___::operator()_ListenerWindow_ListenerWindowNotificationArgs__::_1_::dtor$0 @ 0x1802BF1D5 (_winrt--event_winrt--Windows--Foundation--EventHandler_winrt--Windows--Foundation--_ea_1802BF1D5.c)
 *     _winrt::event_winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable___::remove_::_1_::dtor$0 @ 0x1802C6B70 (_winrt--event_winrt--Windows--Foundation--EventHandler_winrt--Windows--Foundation--_ea_1802C6B70.c)
 *     _winrt::event_winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable___::remove_::_1_::dtor$2 @ 0x1802C6B82 (_winrt--event_winrt--Windows--Foundation--EventHandler_winrt--Windows--Foundation--_ea_1802C6B82.c)
 *     _winrt::event_winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable___::operator()_std::nullptr_t_std::nullptr_t__::_1_::dtor$0 @ 0x18047E616 (_winrt--event_winrt--Windows--Foundation--EventHandler_winrt--Windows--Foundation--_ea_18047E616.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800D9EC8 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$EventHandler@UIInspectable@Foundation@Win.c)
 */

void __fastcall winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>>::~com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>>(
        __int64 *a1)
{
  if ( *a1 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>>::unconditional_release_ref(a1);
}
