/*
 * XREFs of ?IsImmersiveRemoteSession@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHPEA_N@Z @ 0x180070D90
 * Callers:
 *     <none>
 * Callees:
 *     ?IsImmersiveRemoteSession@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA_NXZ @ 0x180070DBC (-IsImmersiveRemoteSession@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA_.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::IRemoteSessionWindowManager>::IsImmersiveRemoteSession(
        __int64 a1,
        _BYTE *a2)
{
  *a2 = winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::IsImmersiveRemoteSession();
  return 0LL;
}
