/*
 * XREFs of ??$find@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SAPEAXPEBUCloudPCComponent@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800D78B8
 * Callers:
 *     ?find_interface@?$implements@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@URemoteSystemProviderExtension@RemoteSystems@3456@Uimmersive_shell_component@6@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800D7940 (-find_interface@-$implements@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIIn.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::impl::interface_list<IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::Windows::Internal::Shell::implementation::CloudPCComponent,winrt::impl::iid_finder>(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v9; // rax

  v3 = (_QWORD *)*a2;
  v4 = *(_QWORD *)*a2 - *(_QWORD *)&winrt::impl::guid_v<IServiceProvider>.Data1;
  if ( !v4 )
    v4 = v3[1] - *(_QWORD *)winrt::impl::guid_v<IServiceProvider>.Data4;
  if ( v4 )
  {
    if ( (unsigned __int8)winrt::operator==(v3, &winrt::impl::guid_v<IImmersiveShellComponent>) )
    {
      v9 = v6 + 16;
    }
    else
    {
      if ( !(unsigned __int8)winrt::operator==(v5, &winrt::impl::guid_v<IInspectable>) )
        return v7;
      v9 = v6 + 88;
    }
    return v9 & -(__int64)(v6 != 0);
  }
  return (a1 + 8) & -(__int64)(a1 != 0);
}
