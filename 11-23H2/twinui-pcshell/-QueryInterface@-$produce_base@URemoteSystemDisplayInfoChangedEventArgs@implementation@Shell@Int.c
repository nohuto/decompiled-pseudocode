/*
 * XREFs of ?QueryInterface@?$produce_base@URemoteSystemDisplayInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemDisplayInfoChangedEventArgs@3456@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1802D3A80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::implementation::RemoteSystemDisplayInfoChangedEventArgs,winrt::Windows::Internal::Shell::IRemoteSystemDisplayInfoChangedEventArgs,void>::QueryInterface(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  return winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopStateChangedEventArgs,winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs>::query_interface(
           (a1 - 16) & -(__int64)(a1 != 0),
           a2,
           a3);
}
