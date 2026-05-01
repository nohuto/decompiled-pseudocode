/*
 * XREFs of ??$find@VCopilotHotkeyManager@@Uiid_finder@impl@winrt@@@?$interface_list@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIImmersiveWindowMessageNotification@@UIApplicationViewChangeListener@@@impl@winrt@@SAPEAXPEBVCopilotHotkeyManager@@AEBUiid_finder@12@@Z @ 0x18025E3F8
 * Callers:
 *     ?find_interface@?$implements@VCopilotHotkeyManager@@Uimmersive_shell_component@winrt@@UIImmersiveWindowMessageNotification@@UIApplicationViewChangeListener@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180275720 (-find_interface@-$implements@VCopilotHotkeyManager@@Uimmersive_shell_component@winrt@@UIImmersiv.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     ??$find@VCopilotHotkeyManager@@Uiid_finder@impl@winrt@@@?$interface_list@UIInspectable@Foundation@Windows@winrt@@UIImmersiveWindowMessageNotification@@UIApplicationViewChangeListener@@@impl@winrt@@SAPEAXPEBVCopilotHotkeyManager@@AEBUiid_finder@12@@Z @ 0x18025E38C (--$find@VCopilotHotkeyManager@@Uiid_finder@impl@winrt@@@-$interface_list@UIInspectable@Foundatio.c)
 */

__int64 __fastcall winrt::impl::interface_list<IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IImmersiveWindowMessageNotification,IApplicationViewChangeListener>::find<CopilotHotkeyManager,winrt::impl::iid_finder>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // r8
  __int64 v5; // r8
  _QWORD **v6; // r9

  if ( winrt::operator==(*a2, &winrt::impl::guid_v<IServiceProvider>) )
    return (v3 + 24) & -(__int64)(v3 != 0);
  if ( winrt::operator==(v2, &winrt::impl::guid_v<IImmersiveShellComponent>) )
    return (v5 + 32) & -(__int64)(v5 != 0);
  else
    return winrt::impl::interface_list<winrt::Windows::Foundation::IInspectable,IImmersiveWindowMessageNotification,IApplicationViewChangeListener>::find<CopilotHotkeyManager,winrt::impl::iid_finder>(
             v5,
             v6);
}
