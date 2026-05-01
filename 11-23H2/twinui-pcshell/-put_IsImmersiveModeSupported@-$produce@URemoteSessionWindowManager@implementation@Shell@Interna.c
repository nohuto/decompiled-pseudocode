/*
 * XREFs of ?put_IsImmersiveModeSupported@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAH_N@Z @ 0x180724B10
 * Callers:
 *     <none>
 * Callees:
 *     ?IsImmersiveModeSupported@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x180721DF8 (-IsImmersiveModeSupported@RemoteSessionWindowManager@implementation@Shell@Internal@_ea_180721DF8.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::IRemoteSessionWindowManager>::put_IsImmersiveModeSupported(
        __int64 a1,
        unsigned __int8 a2)
{
  RTL_SRWLOCK *v2; // rcx
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = (RTL_SRWLOCK *)((a1 - 16) & -(__int64)(a1 != 0));
  try
  {
    winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::IsImmersiveModeSupported(v2, a2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
