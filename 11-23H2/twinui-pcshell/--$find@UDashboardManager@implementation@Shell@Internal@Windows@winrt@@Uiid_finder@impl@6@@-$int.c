/*
 * XREFs of ??$find@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIImmersiveWindowMessageNotification@@UIEdgeUiTouchInvocation@@@impl@winrt@@SAPEAXPEBUDashboardManager@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800D9460
 * Callers:
 *     ?find_interface@?$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@UIEdgeUiTouchInvocation@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800D9540 (-find_interface@-$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@U134.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     ??$find@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIImmersiveWindowMessageNotification@@UIEdgeUiTouchInvocation@@@impl@winrt@@SAPEAXPEBUDashboardManager@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800D9D40 (--$find@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@_ea_1800D9D40.c)
 */

__int64 __fastcall winrt::impl::interface_list<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IImmersiveWindowMessageNotification,IEdgeUiTouchInvocation>::find<winrt::Windows::Internal::Shell::implementation::DashboardManager,winrt::impl::iid_finder>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r8
  __int64 v5; // r9

  if ( winrt::operator==(*a2, &winrt::impl::guid_v<IObjectWithSite>) )
    return (v3 + 24) & -(__int64)(v3 != 0);
  if ( winrt::operator==(v2, &winrt::impl::guid_v<IServiceProvider>) )
    return (v4 + 32) & -(__int64)(v4 != 0);
  else
    return winrt::impl::interface_list<IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IImmersiveWindowMessageNotification,IEdgeUiTouchInvocation>::find<winrt::Windows::Internal::Shell::implementation::DashboardManager,winrt::impl::iid_finder>(
             v4,
             v5);
}
