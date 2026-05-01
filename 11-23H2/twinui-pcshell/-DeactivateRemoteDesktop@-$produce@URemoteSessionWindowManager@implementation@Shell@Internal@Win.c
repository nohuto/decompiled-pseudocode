/*
 * XREFs of ?DeactivateRemoteDesktop@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHUguid@3@@Z @ 0x180721200
 * Callers:
 *     <none>
 * Callees:
 *     ?DeactivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUguid@6@@Z @ 0x180721258 (-DeactivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::IRemoteSessionWindowManager>::DeactivateRemoteDesktop(
        __int64 a1,
        const struct winrt::guid *a2)
{
  winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *v2; // rcx
  __int64 result; // rax
  _DWORD v4[6]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *)((a1 - 16) & -(__int64)(a1 != 0));
  try
  {
    winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::DeactivateRemoteDesktop(v2, a2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(v4);
  }
  return result;
}
