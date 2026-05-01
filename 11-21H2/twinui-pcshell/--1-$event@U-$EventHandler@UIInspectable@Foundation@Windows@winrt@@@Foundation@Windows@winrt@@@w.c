/*
 * XREFs of ??1?$event@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAA@XZ @ 0x18038E234
 * Callers:
 *     ??1SearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UEAA@XZ @ 0x18019BE64 (--1SearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UEAA@XZ.c)
 *     _winrt::event_winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable___::operator()_std::nullptr_t_std::nullptr_t__::_1_::dtor$0 @ 0x1801A368D (_winrt--event_winrt--Windows--Foundation--EventHandler_winrt--Windows--Foundation--IInspectable_.c)
 *     _winrt::event_winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable___::operator()_ListenerWindow_ListenerWindowNotificationArgs__::_1_::dtor$0 @ 0x1802161AE (_winrt--event_winrt--Windows--Foundation--EventHandler_winrt--Windows--Foundation--_ea_1802161AE.c)
 *     _winrt::event_winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable___::remove_::_1_::dtor$0 @ 0x180222817 (_winrt--event_winrt--Windows--Foundation--EventHandler_winrt--Windows--Foundation--_ea_180222817.c)
 *     _winrt::event_winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable___::remove_::_1_::dtor$2 @ 0x180222829 (_winrt--event_winrt--Windows--Foundation--EventHandler_winrt--Windows--Foundation--_ea_180222829.c)
 *     _winrt::event_winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable___::add_::_1_::dtor$0 @ 0x18022283B (_winrt--event_winrt--Windows--Foundation--EventHandler_winrt--Windows--Foundation--_ea_18022283B.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801514C8 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$EventHandler@UIInspectable@Foundation@Win.c)
 */

void __fastcall winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>::~event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  if ( *a1 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>>::unconditional_release_ref(
      a1,
      a2,
      a3,
      a4);
}
