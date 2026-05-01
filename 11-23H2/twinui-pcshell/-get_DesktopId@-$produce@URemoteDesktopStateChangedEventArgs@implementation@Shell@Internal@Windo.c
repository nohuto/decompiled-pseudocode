/*
 * XREFs of ?get_DesktopId@?$produce@URemoteDesktopStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@UIRemoteDesktopStateChangedEventArgs@3456@@impl@winrt@@UEAAHPEAUguid@3@@Z @ 0x180733EA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteDesktopStateChangedEventArgs,winrt::Windows::Internal::Shell::IRemoteDesktopStateChangedEventArgs>::get_DesktopId(
        __int64 a1,
        _OWORD *a2)
{
  __int64 v2; // rax

  v2 = a1 + 8;
  if ( !a1 )
    v2 = 24LL;
  *a2 = *(_OWORD *)v2;
  return 0LL;
}
