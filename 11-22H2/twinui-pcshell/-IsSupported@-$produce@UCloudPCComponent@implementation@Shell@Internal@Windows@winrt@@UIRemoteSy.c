/*
 * XREFs of ?IsSupported@?$produce@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemProviderExtension@RemoteSystems@3456@@impl@winrt@@UEAAHPEA_N@Z @ 0x180706E70
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSupported@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x180706ED0 (-IsSupported@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::CloudPCComponent,winrt::Windows::Internal::Shell::RemoteSystems::IRemoteSystemProviderExtension>::IsSupported(
        __int64 a1,
        _BYTE *a2)
{
  winrt::Windows::Internal::Shell::implementation::CloudPCComponent *v2; // rcx
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = (winrt::Windows::Internal::Shell::implementation::CloudPCComponent *)((a1 - 96) & -(__int64)(a1 != 0));
  try
  {
    *a2 = winrt::Windows::Internal::Shell::implementation::CloudPCComponent::IsSupported(v2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
