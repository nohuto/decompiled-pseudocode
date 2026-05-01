/*
 * XREFs of ?ActivateRemoteDesktop@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHXZ @ 0x1807209E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ActivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x180720A38 (-ActivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@Q.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::IRemoteSessionWindowManager>::ActivateRemoteDesktop(
        __int64 a1)
{
  winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *v1; // rcx
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *)((a1 - 16) & -(__int64)(a1 != 0));
  try
  {
    winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::ActivateRemoteDesktop(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
