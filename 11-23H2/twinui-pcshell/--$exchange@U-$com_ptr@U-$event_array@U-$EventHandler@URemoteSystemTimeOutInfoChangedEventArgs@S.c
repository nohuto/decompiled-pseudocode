/*
 * XREFs of ??$exchange@U?$com_ptr@U?$event_array@U?$EventHandler@URemoteSystemTimeOutInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@U12@@std@@YA?AU?$com_ptr@U?$event_array@U?$EventHandler@URemoteSystemTimeOutInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAU12@$$QEAU12@@Z @ 0x18027D8D0
 * Callers:
 *     ?add@?$event@U?$EventHandler@I@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$EventHandler@I@Foundation@Windows@2@@Z @ 0x18027EBFC (-add@-$event@U-$EventHandler@I@Foundation@Windows@winrt@@@winrt@@QEAA-AUevent_token@2@AEBU-$Even.c)
 *     ?remove@?$event@U?$EventHandler@I@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x18027EFA4 (-remove@-$event@U-$EventHandler@I@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z.c)
 *     ?add@?$event@U?$EventHandler@URemoteSystemTimeOutInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$EventHandler@URemoteSystemTimeOutInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@2@@Z @ 0x18071A880 (-add@-$event@U-$EventHandler@URemoteSystemTimeOutInfoChangedEventArgs@Shell@Internal@Windows@win.c)
 *     ?remove@?$event@U?$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x18071C4F4 (-remove@-$event@U-$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt.c)
 *     ?add@?$event@U?$EventHandler@URemoteDesktopConnectedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$EventHandler@URemoteDesktopConnectedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@2@@Z @ 0x180723BA0 (-add@-$event@U-$EventHandler@URemoteDesktopConnectedEventArgs@Shell@Internal@Windows@winrt@@@Fou.c)
 *     ?add@?$event@U?$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@2@@Z @ 0x180723D04 (-add@-$event@U-$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt@@@.c)
 * Callees:
 *     ??4?$com_ptr@U?$event_array@U?$EventHandler@I@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x18027E0C0 (--4-$com_ptr@U-$event_array@U-$EventHandler@I@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEA.c)
 */

_QWORD *__fastcall std::exchange<winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemTimeOutInfoChangedEventArgs>>>,winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemTimeOutInfoChangedEventArgs>>>>(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 v3; // rax

  v3 = *a2;
  *a2 = 0LL;
  *a1 = v3;
  winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<unsigned int>>>::operator=(a2, a3);
  return a1;
}
