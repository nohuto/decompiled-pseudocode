/*
 * XREFs of ??$find@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@UIWindowSnappingEvents@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SAPEAXPEBUDiscoverabilityManager@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1806F7F10
 * Callers:
 *     ?find_interface@?$implements@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@Uimmersive_shell_component@6@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1806FCAB0 (-find_interface@-$implements@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     ??$find@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SAPEAXPEBUDiscoverabilityManager@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1806F7EA0 (--$find@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@.c)
 */

__int64 __fastcall winrt::impl::interface_list<IWindowSnappingEvents,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager,winrt::impl::iid_finder>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // r8
  __int64 v5; // r8
  _QWORD **v6; // r9

  if ( winrt::operator==(*a2, winrt::impl::guid_v<IWindowSnappingEvents>) )
    return (v3 + 8) & -(__int64)(v3 != 0);
  if ( winrt::operator==(v2, &winrt::impl::guid_v<IObjectWithSite>) )
    return (v5 + 24) & -(__int64)(v5 != 0);
  else
    return winrt::impl::interface_list<IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager,winrt::impl::iid_finder>(
             v5,
             v6);
}
