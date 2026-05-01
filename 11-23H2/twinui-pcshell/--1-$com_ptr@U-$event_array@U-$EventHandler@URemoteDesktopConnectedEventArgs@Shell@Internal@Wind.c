/*
 * XREFs of ??1?$com_ptr@U?$event_array@U?$EventHandler@URemoteDesktopConnectedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAA@XZ @ 0x18027DF78
 * Callers:
 *     _winrt::event_winrt::Windows::Foundation::EventHandler_unsigned_int___::operator()_winrt::Windows::Internal::Shell::implementation::ProcessTracker_unsigned_int__::_1_::dtor$0 @ 0x18027D3D3 (_winrt--event_winrt--Windows--Foundation--EventHandler_unsigned_int___--operator()_winrt--Window.c)
 *     _winrt::event_winrt::Windows::Foundation::EventHandler_unsigned_int___::add_::_1_::dtor$0 @ 0x18027ED25 (_winrt--event_winrt--Windows--Foundation--EventHandler_unsigned_int___--add_--_1_--dtor$0.c)
 *     _winrt::event_winrt::Windows::Foundation::EventHandler_unsigned_int___::remove_::_1_::dtor$0 @ 0x18027F12D (_winrt--event_winrt--Windows--Foundation--EventHandler_unsigned_int___--remove_--_1_--dtor$0.c)
 *     _winrt::event_winrt::Windows::Foundation::EventHandler_unsigned_int___::remove_::_1_::dtor$2 @ 0x18027F145 (_winrt--event_winrt--Windows--Foundation--EventHandler_unsigned_int___--remove_--_1_--dtor$2.c)
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::RemoteSessionWindowManager_::_1_::dtor$11 @ 0x1802BAB22 (_winrt--Windows--Internal--Shell--implementation--RemoteSessionWindowManager--Remot_ea_1802BAB22.c)
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::RemoteSessionWindowManager_::_1_::dtor$12 @ 0x1802BAB3B (_winrt--Windows--Internal--Shell--implementation--RemoteSessionWindowManager--Remot_ea_1802BAB3B.c)
 *     _winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::RemoteSystemDataModel_::_1_::dtor$8 @ 0x1802BDF66 (_winrt--Windows--Internal--Shell--factory_implementation--RemoteSystemDataModel--Re_ea_1802BDF66.c)
 *     _winrt::event_winrt::Windows::Foundation::EventHandler_winrt::Windows::Internal::Shell::RemoteSystemTimeOutInfoChangedEventArgs___::operator()_winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel_winrt::Windows::Internal::Shell::RemoteSystemTimeOutInfoChangedEventArgs__::_1_::dtor$0 @ 0x180709651 (_winrt--event_winrt--Windows--Foundation--EventHandler_winrt--Windows--Internal--Sh_ea_180709651.c)
 *     _winrt::event_winrt::Windows::Foundation::EventHandler_winrt::Windows::Internal::Shell::RemoteSystemTimeOutInfoChangedEventArgs___::add_::_1_::dtor$0 @ 0x18071A9C6 (_winrt--event_winrt--Windows--Foundation--EventHandler_winrt--Windows--Internal--Sh_ea_18071A9C6.c)
 *     _winrt::event_winrt::Windows::Foundation::EventHandler_winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs___::remove_::_1_::dtor$0 @ 0x18071C676 (_winrt--event_winrt--Windows--Foundation--EventHandler_winrt--Windows--Internal--Shell--RemoteDe.c)
 *     _winrt::event_winrt::Windows::Foundation::EventHandler_winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs___::remove_::_1_::dtor$2 @ 0x18071C68E (_winrt--event_winrt--Windows--Foundation--EventHandler_winrt--Windows--Internal--Sh_ea_18071C68E.c)
 *     _winrt::event_winrt::Windows::Foundation::EventHandler_winrt::Windows::Internal::Shell::RemoteDesktopConnectedEventArgs___::operator()_winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager_winrt::Windows::Internal::Shell::RemoteDesktopConnectedEventArgs__::_1_::dtor$0 @ 0x18071E2E9 (_winrt--event_winrt--Windows--Foundation--EventHandler_winrt--Windows--Internal--Sh_ea_18071E2E9.c)
 *     _winrt::event_winrt::Windows::Foundation::EventHandler_winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs___::operator()_winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager_winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs__::_1_::dtor$0 @ 0x18071E3BD (_winrt--event_winrt--Windows--Foundation--EventHandler_winrt--Windows--Internal--Sh_ea_18071E3BD.c)
 *     _winrt::event_winrt::Windows::Foundation::EventHandler_winrt::Windows::Internal::Shell::RemoteDesktopConnectedEventArgs___::add_::_1_::dtor$0 @ 0x180723CE6 (_winrt--event_winrt--Windows--Foundation--EventHandler_winrt--Windows--Internal--Sh_ea_180723CE6.c)
 *     _winrt::event_winrt::Windows::Foundation::EventHandler_winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs___::add_::_1_::dtor$0 @ 0x180723E4A (_winrt--event_winrt--Windows--Foundation--EventHandler_winrt--Windows--Internal--Sh_ea_180723E4A.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$EventHandler@URemoteSystemTimeOutInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x18027F1A4 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$EventHandler@URemoteSystemTimeOutInfoChan.c)
 */

__int64 __fastcall winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteDesktopConnectedEventArgs>>>::~com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteDesktopConnectedEventArgs>>>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemTimeOutInfoChangedEventArgs>>>::unconditional_release_ref(a1);
  return result;
}
