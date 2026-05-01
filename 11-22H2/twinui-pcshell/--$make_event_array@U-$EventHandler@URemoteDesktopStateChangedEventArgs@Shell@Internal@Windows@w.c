/*
 * XREFs of ??$make_event_array@U?$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$com_ptr@U?$event_array@U?$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@1@I@Z @ 0x18027DB0C
 * Callers:
 *     ?add@?$event@U?$EventHandler@I@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$EventHandler@I@Foundation@Windows@2@@Z @ 0x18027EBFC (-add@-$event@U-$EventHandler@I@Foundation@Windows@winrt@@@winrt@@QEAA-AUevent_token@2@AEBU-$Even.c)
 *     ?remove@?$event@U?$EventHandler@I@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x18027EFA4 (-remove@-$event@U-$EventHandler@I@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z.c)
 *     ?add@?$event@U?$EventHandler@URemoteSystemTimeOutInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$EventHandler@URemoteSystemTimeOutInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@2@@Z @ 0x18071A880 (-add@-$event@U-$EventHandler@URemoteSystemTimeOutInfoChangedEventArgs@Shell@Internal@Windows@win.c)
 *     ?remove@?$event@U?$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x18071C4F4 (-remove@-$event@U-$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt.c)
 *     ?add@?$event@U?$EventHandler@URemoteDesktopConnectedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$EventHandler@URemoteDesktopConnectedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@2@@Z @ 0x180723BA0 (-add@-$event@U-$EventHandler@URemoteDesktopConnectedEventArgs@Shell@Internal@Windows@winrt@@@Fou.c)
 *     ?add@?$event@U?$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@2@@Z @ 0x180723D04 (-add@-$event@U-$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt@@@.c)
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??$_Destroy_range@PEAU?$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@PEAU1234@@std@@YAXPEAU?$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@QEAU1234@@Z @ 0x18027D520 (--$_Destroy_range@PEAU-$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@.c)
 */

_QWORD *__fastcall winrt::impl::make_event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs>>(
        _QWORD *a1,
        unsigned int a2)
{
  unsigned int v2; // edi
  _DWORD *v4; // rax
  _DWORD *v5; // rsi
  winrt::Windows::Foundation::IUnknown *v6; // rbx
  _QWORD *result; // rax

  v2 = a2;
  v4 = operator new(8LL * a2 + 8);
  v5 = v4;
  *v4 = 1;
  v4[1] = v2;
  if ( v2 )
  {
    v6 = (winrt::Windows::Foundation::IUnknown *)(v4 + 2);
    do
    {
      *(_QWORD *)v6 = 0LL;
      winrt::Windows::Foundation::IUnknown::add_ref(v6);
      v6 = (winrt::Windows::Foundation::IUnknown *)((char *)v6 + 8);
      --v2;
    }
    while ( v2 );
    std::_Destroy_range<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs> *,winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs> *>(
      v6,
      v6);
  }
  result = a1;
  *a1 = v5;
  return result;
}
