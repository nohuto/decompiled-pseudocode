/*
 * XREFs of ?find_interface@?$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@UIEdgeUiTouchInvocation@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800D9540
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     ??$find@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIImmersiveWindowMessageNotification@@UIEdgeUiTouchInvocation@@@impl@winrt@@SAPEAXPEBUDashboardManager@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800D9460 (--$find@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@-$int.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::DashboardManager,winrt::Windows::Internal::Shell::DashboardManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification,IEdgeUiTouchInvocation>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a2;
  if ( winrt::operator==(a2, winrt::impl::guid_v<winrt::Windows::Internal::Shell::IDashboardManager>) )
    return (v2 + 16) & -(__int64)(v2 != 0);
  else
    return winrt::impl::interface_list<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IImmersiveWindowMessageNotification,IEdgeUiTouchInvocation>::find<winrt::Windows::Internal::Shell::implementation::DashboardManager,winrt::impl::iid_finder>(
             v2,
             &v5);
}
