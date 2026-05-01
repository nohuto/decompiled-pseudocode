/*
 * XREFs of ?IsAnyRemoteSystemEnabled@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHPEA_N@Z @ 0x1800684B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsImmersiveModeSupported@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x1800684FC (-IsImmersiveModeSupported@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt.c)
 *     ?HasAnyRemoteDesktopEnabled@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x18006854C (-HasAnyRemoteDesktopEnabled@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@win.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::IRemoteSessionWindowManager>::IsAnyRemoteSystemEnabled(
        __int64 a1,
        bool *a2)
{
  bool IsImmersiveModeSupported; // al
  winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *v4; // rcx
  bool HasAnyRemoteDesktopEnabled; // bl
  __int64 result; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  IsImmersiveModeSupported = winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::IsImmersiveModeSupported((winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *)((a1 - 16) & -(__int64)(a1 != 0)));
  try
  {
    HasAnyRemoteDesktopEnabled = 0;
    if ( IsImmersiveModeSupported )
      HasAnyRemoteDesktopEnabled = winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::HasAnyRemoteDesktopEnabled(v4);
    *a2 = HasAnyRemoteDesktopEnabled;
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v7);
  }
  return result;
}
