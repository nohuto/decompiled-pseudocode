/*
 * XREFs of ?get_HasAnyRemoteDesktopEnabled@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHPEA_N@Z @ 0x180724760
 * Callers:
 *     <none>
 * Callees:
 *     ?HasAnyRemoteDesktopEnabled@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x18006854C (-HasAnyRemoteDesktopEnabled@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@win.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::IRemoteSessionWindowManager>::get_HasAnyRemoteDesktopEnabled(
        winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *a1,
        _BYTE *a2)
{
  __int64 result; // rax
  winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  try
  {
    *a2 = winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::HasAnyRemoteDesktopEnabled(a1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
