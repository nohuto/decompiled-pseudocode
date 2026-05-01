/*
 * XREFs of ??$find@UPinManager@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@UIPinManagerInterop3@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SAPEAXPEBUPinManager@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x18024F3A8
 * Callers:
 *     ?find_interface@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop3@@Uimmersive_shell_component@6@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180253430 (-find_interface@-$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIP.c)
 * Callees:
 *     ??$find@UPinManager@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SAPEAXPEBUPinManager@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800D8164 (--$find@UPinManager@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@-$interface.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::impl::interface_list<IPinManagerInterop3,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::Windows::Internal::Shell::implementation::PinManager,winrt::impl::iid_finder>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // r8
  _QWORD *v4; // rcx
  _QWORD *v5; // rcx
  __int64 v6; // r8
  _QWORD *v7; // r9

  if ( winrt::operator==(*a2, winrt::impl::guid_v<IPinManagerInterop3>)
    || winrt::operator==(v2, winrt::impl::guid_v<IPinManagerInterop2>)
    || winrt::operator==(v4, winrt::impl::guid_v<IPinManagerInterop>) )
  {
    return v3;
  }
  if ( winrt::operator==(v5, &winrt::impl::guid_v<IObjectWithSite>) )
    return (v6 + 16) & -(__int64)(v6 != 0);
  else
    return winrt::impl::interface_list<IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::Windows::Internal::Shell::implementation::PinManager,winrt::impl::iid_finder>(
             v6,
             v7);
}
