/*
 * XREFs of ?QueryInterface@?$produce_base@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800D9640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::IRemoteSessionWindowManager,void>::QueryInterface(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  return winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::RemoteSessionWindowManager>::query_interface(
           (volatile signed __int64 *)((a1 - 16) & -(__int64)(a1 != 0)),
           a2,
           a3);
}
