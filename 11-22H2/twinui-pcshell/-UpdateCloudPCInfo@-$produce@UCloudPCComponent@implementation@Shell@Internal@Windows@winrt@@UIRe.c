/*
 * XREFs of ?UpdateCloudPCInfo@?$produce@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemProviderExtension@RemoteSystems@3456@@impl@winrt@@UEAAHUstruct_Windows_UI_WindowId@23@@Z @ 0x180707A00
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateCloudPCInfo@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x180707A58 (-UpdateCloudPCInfo@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindow.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::CloudPCComponent,winrt::Windows::Internal::Shell::RemoteSystems::IRemoteSystemProviderExtension>::UpdateCloudPCInfo(
        winrt::Windows::Internal::Shell::implementation::CloudPCComponent *a1,
        __int64 a2)
{
  __int64 result; // rax
  winrt::Windows::Internal::Shell::implementation::CloudPCComponent *v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v3 = a1;
  try
  {
    winrt::Windows::Internal::Shell::implementation::CloudPCComponent::UpdateCloudPCInfo(
      a1,
      (const struct winrt::Windows::UI::WindowId *)&v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
