/*
 * XREFs of ?get_VirtualDesktopId@?$produce@URemoteDesktopConnectedEventArgs@implementation@Shell@Internal@Windows@winrt@@UIRemoteDesktopConnectedEventArgs@3456@@impl@winrt@@UEAAHPEAUguid@3@@Z @ 0x180733F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteDesktopConnectedEventArgs,winrt::Windows::Internal::Shell::IRemoteDesktopConnectedEventArgs>::get_VirtualDesktopId(
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
