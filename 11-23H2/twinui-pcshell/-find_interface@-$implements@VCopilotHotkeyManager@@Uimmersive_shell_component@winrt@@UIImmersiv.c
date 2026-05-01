/*
 * XREFs of ?find_interface@?$implements@VCopilotHotkeyManager@@Uimmersive_shell_component@winrt@@UIImmersiveWindowMessageNotification@@UIApplicationViewChangeListener@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180275720
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     ??$find@VCopilotHotkeyManager@@Uiid_finder@impl@winrt@@@?$interface_list@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIImmersiveWindowMessageNotification@@UIApplicationViewChangeListener@@@impl@winrt@@SAPEAXPEBVCopilotHotkeyManager@@AEBUiid_finder@12@@Z @ 0x18025E3F8 (--$find@VCopilotHotkeyManager@@Uiid_finder@impl@winrt@@@-$interface_list@UIServiceProvider@@UIIm.c)
 */

__int64 __fastcall winrt::implements<CopilotHotkeyManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification,IApplicationViewChangeListener>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a2;
  if ( winrt::operator==(a2, &winrt::impl::guid_v<IObjectWithSite>) )
    return (v2 + 16) & -(__int64)(v2 != 0);
  else
    return winrt::impl::interface_list<IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IImmersiveWindowMessageNotification,IApplicationViewChangeListener>::find<CopilotHotkeyManager,winrt::impl::iid_finder>(
             v2,
             &v5);
}
