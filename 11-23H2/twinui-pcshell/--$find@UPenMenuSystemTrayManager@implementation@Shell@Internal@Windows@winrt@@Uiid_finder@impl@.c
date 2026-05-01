/*
 * XREFs of ??$find@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIPenMenuSystemTrayManager@@@impl@winrt@@SAPEAXPEBUPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800D97F0
 * Callers:
 *     ?find_interface@?$implements@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIPenMenuSystemTrayManager@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800D68C0 (-find_interface@-$implements@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@win.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::impl::interface_list<IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IPenMenuSystemTrayManager>::find<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager,winrt::impl::iid_finder>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // r8
  _QWORD *v4; // rcx
  __int64 v5; // r8
  bool v6; // al
  __int64 v7; // r8

  if ( winrt::operator==(*a2, &winrt::impl::guid_v<IImmersiveShellComponent>) )
    return (v3 + 24) & -(__int64)(v3 != 0);
  if ( winrt::operator==(v2, &winrt::impl::guid_v<IInspectable>) )
    return (v5 + 32) & -(__int64)(v5 != 0);
  v6 = winrt::operator==(v4, winrt::impl::guid_v<IPenMenuSystemTrayManager>);
  return v7 & -(__int64)v6;
}
