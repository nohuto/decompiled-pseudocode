/*
 * XREFs of ??$find@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIImmersiveWindowMessageNotification@@UIEdgeUiTouchInvocation@@@impl@winrt@@SAPEAXPEBUDashboardManager@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800D9D40
 * Callers:
 *     ??$find@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIImmersiveWindowMessageNotification@@UIEdgeUiTouchInvocation@@@impl@winrt@@SAPEAXPEBUDashboardManager@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800D9460 (--$find@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@-$int.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::impl::interface_list<IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IImmersiveWindowMessageNotification,IEdgeUiTouchInvocation>::find<winrt::Windows::Internal::Shell::implementation::DashboardManager,winrt::impl::iid_finder>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // r8
  _QWORD *v4; // rcx
  __int64 v5; // r8
  _QWORD *v6; // rcx
  __int64 v7; // r8
  __int64 v9; // rax

  if ( !winrt::operator==(*a2, &winrt::impl::guid_v<IImmersiveShellComponent>) )
  {
    if ( winrt::operator==(v2, &winrt::impl::guid_v<IInspectable>) )
    {
      v9 = v5 + 48;
    }
    else
    {
      if ( winrt::operator==(v4, winrt::impl::guid_v<IImmersiveWindowMessageNotification>) )
        return v7;
      if ( !winrt::operator==(v6, winrt::impl::guid_v<IEdgeUiTouchInvocation>) )
        return 0LL;
      v9 = v5 + 8;
    }
    return v9 & -(__int64)(v5 != 0);
  }
  return (v3 + 40) & -(__int64)(v3 != 0);
}
