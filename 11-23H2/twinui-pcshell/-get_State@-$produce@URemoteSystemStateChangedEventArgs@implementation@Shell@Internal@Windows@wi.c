/*
 * XREFs of ?get_State@?$produce@URemoteSystemStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemStateChangedEventArgs@3456@@impl@winrt@@UEAAHPEAH@Z @ 0x180729000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSystemStateChangedEventArgs,winrt::Windows::Internal::Shell::IRemoteSystemStateChangedEventArgs>::get_State(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v2; // rax

  v2 = a1 + 16;
  if ( !a1 )
    v2 = 32LL;
  *a2 = *(_DWORD *)v2;
  return 0LL;
}
