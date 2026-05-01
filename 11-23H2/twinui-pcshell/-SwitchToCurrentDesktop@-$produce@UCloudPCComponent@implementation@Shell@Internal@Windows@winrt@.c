/*
 * XREFs of ?SwitchToCurrentDesktop@?$produce@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemProviderExtension@RemoteSystems@3456@@impl@winrt@@UEAAHXZ @ 0x180707880
 * Callers:
 *     <none>
 * Callees:
 *     ?SwitchToCurrentDesktop@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1807078D8 (-SwitchToCurrentDesktop@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::CloudPCComponent,winrt::Windows::Internal::Shell::RemoteSystems::IRemoteSystemProviderExtension>::SwitchToCurrentDesktop(
        __int64 a1)
{
  winrt::Windows::Internal::Shell::implementation::CloudPCComponent *v1; // rcx
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (winrt::Windows::Internal::Shell::implementation::CloudPCComponent *)((a1 - 96) & -(__int64)(a1 != 0));
  try
  {
    winrt::Windows::Internal::Shell::implementation::CloudPCComponent::SwitchToCurrentDesktop(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
