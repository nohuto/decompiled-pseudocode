/*
 * XREFs of ?remove_TimeOutInfoChanged@?$produce@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemDataModelStatics@3456@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x18071C770
 * Callers:
 *     <none>
 * Callees:
 *     ?remove@?$event@U?$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x18071C4F4 (-remove@-$event@U-$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,winrt::Windows::Internal::Shell::IRemoteSystemDataModelStatics>::remove_TimeOutInfoChanged(
        __int64 a1,
        void *a2)
{
  __int64 v3; // rcx

  v3 = a1 + 208;
  if ( !a1 )
    v3 = 232LL;
  winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs>>::remove(
    v3,
    a2);
  return 0LL;
}
