/*
 * XREFs of ??$find@VNPSMDesktopShellComponent@@Uiid_finder@impl@winrt@@@?$interface_list@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@@impl@winrt@@SAPEAXPEBVNPSMDesktopShellComponent@@AEBUiid_finder@12@@Z @ 0x1800D6800
 * Callers:
 *     ?find_interface@?$implements@VNPSMDesktopShellComponent@@Uimmersive_shell_component@winrt@@UIApplicationViewChangeListener@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800D6C90 (-find_interface@-$implements@VNPSMDesktopShellComponent@@Uimmersive_shell_component@winrt@@UIApp.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::impl::interface_list<IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener>::find<NPSMDesktopShellComponent,winrt::impl::iid_finder>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // r8
  char v6; // al
  __int64 v7; // r8

  if ( (unsigned __int8)winrt::operator==(*a2, &winrt::impl::guid_v<IImmersiveShellComponent>) )
    return (v3 + 24) & -(__int64)(v3 != 0);
  if ( (unsigned __int8)winrt::operator==(v2, &winrt::impl::guid_v<IInspectable>) )
    return (v5 + 32) & -(__int64)(v5 != 0);
  v6 = winrt::operator==(v4, &winrt::impl::guid_v<IApplicationViewChangeListener>);
  return v7 & -(__int64)(v6 != 0);
}
