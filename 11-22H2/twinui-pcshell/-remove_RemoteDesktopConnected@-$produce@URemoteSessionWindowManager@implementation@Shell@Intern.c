/*
 * XREFs of ?remove_RemoteDesktopConnected@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x180724B70
 * Callers:
 *     <none>
 * Callees:
 *     ?remove@?$event@U?$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x18071C4F4 (-remove@-$event@U-$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::IRemoteSessionWindowManager>::remove_RemoteDesktopConnected(
        __int64 a1,
        void *a2)
{
  __int64 v2; // rax

  v2 = a1 + 240;
  if ( !a1 )
    v2 = 256LL;
  winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs>>::remove(
    v2,
    a2);
  return 0LL;
}
