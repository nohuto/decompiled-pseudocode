/*
 * XREFs of ??$find@VCopilotHotkeyManager@@Uiid_finder@impl@winrt@@@?$interface_list@UIInspectable@Foundation@Windows@winrt@@UIImmersiveWindowMessageNotification@@UIApplicationViewChangeListener@@@impl@winrt@@SAPEAXPEBVCopilotHotkeyManager@@AEBUiid_finder@12@@Z @ 0x18025E38C
 * Callers:
 *     ??$find@VCopilotHotkeyManager@@Uiid_finder@impl@winrt@@@?$interface_list@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIImmersiveWindowMessageNotification@@UIApplicationViewChangeListener@@@impl@winrt@@SAPEAXPEBVCopilotHotkeyManager@@AEBUiid_finder@12@@Z @ 0x18025E3F8 (--$find@VCopilotHotkeyManager@@Uiid_finder@impl@winrt@@@-$interface_list@UIServiceProvider@@UIIm.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Foundation::IInspectable,IImmersiveWindowMessageNotification,IApplicationViewChangeListener>::find<CopilotHotkeyManager,winrt::impl::iid_finder>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // r8
  _QWORD *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r8

  if ( winrt::operator==(*a2, &winrt::impl::guid_v<IInspectable>) )
    return (v3 + 40) & -(__int64)(v3 != 0);
  if ( !winrt::operator==(v2, winrt::impl::guid_v<IImmersiveWindowMessageNotification>) )
  {
    if ( winrt::operator==(v5, &winrt::impl::guid_v<IApplicationViewChangeListener>) )
      return (v7 + 8) & -(__int64)(v7 != 0);
    else
      return 0LL;
  }
  return v6;
}
