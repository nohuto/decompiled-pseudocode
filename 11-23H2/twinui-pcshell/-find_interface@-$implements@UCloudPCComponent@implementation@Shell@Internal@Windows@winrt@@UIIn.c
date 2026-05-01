/*
 * XREFs of ?find_interface@?$implements@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@URemoteSystemProviderExtension@RemoteSystems@3456@Uimmersive_shell_component@6@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800D7940
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SAPEAXPEBUCloudPCComponent@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800D78B8 (--$find@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@-$int.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::CloudPCComponent,winrt::Windows::Foundation::IInspectable,winrt::Windows::Internal::Shell::RemoteSystems::RemoteSystemProviderExtension,winrt::immersive_shell_component>::find_interface(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  _QWORD *v4; // r9
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a2;
  if ( (unsigned __int8)winrt::operator==(a2, &winrt::impl::guid_v<IInspectable>) )
  {
    v7 = v3 + 88;
    return v7 & -(__int64)(v3 != 0);
  }
  if ( (unsigned __int8)winrt::operator==(
                          v2,
                          &winrt::impl::guid_v<winrt::Windows::Internal::Shell::RemoteSystems::IRemoteSystemProviderExtension>) )
  {
    v7 = v3 + 96;
    return v7 & -(__int64)(v3 != 0);
  }
  v5 = *v4 - winrt::impl::guid_v<IObjectWithSite>;
  if ( *v4 == winrt::impl::guid_v<IObjectWithSite> )
    v5 = v4[1] - 0x52733D00AA0029A2LL;
  if ( v5 )
    return winrt::impl::interface_list<IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::Windows::Internal::Shell::implementation::CloudPCComponent,winrt::impl::iid_finder>(
             v3,
             &v8);
  return v3;
}
