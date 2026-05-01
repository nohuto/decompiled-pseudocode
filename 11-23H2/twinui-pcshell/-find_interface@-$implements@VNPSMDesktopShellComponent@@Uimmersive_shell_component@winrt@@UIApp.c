/*
 * XREFs of ?find_interface@?$implements@VNPSMDesktopShellComponent@@Uimmersive_shell_component@winrt@@UIApplicationViewChangeListener@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800D6C90
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@VNPSMDesktopShellComponent@@Uiid_finder@impl@winrt@@@?$interface_list@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@@impl@winrt@@SAPEAXPEBVNPSMDesktopShellComponent@@AEBUiid_finder@12@@Z @ 0x1800D6800 (--$find@VNPSMDesktopShellComponent@@Uiid_finder@impl@winrt@@@-$interface_list@UIImmersiveShellCo.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::implements<NPSMDesktopShellComponent,winrt::immersive_shell_component,IApplicationViewChangeListener>::find_interface(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v6; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = a2;
  if ( (unsigned __int8)winrt::operator==(a2, &winrt::impl::guid_v<IObjectWithSite>) )
  {
    v6 = v3 + 8;
    return v6 & -(__int64)(v3 != 0);
  }
  if ( (unsigned __int8)winrt::operator==(v2, &winrt::impl::guid_v<IServiceProvider>) )
  {
    v6 = v3 + 16;
    return v6 & -(__int64)(v3 != 0);
  }
  return winrt::impl::interface_list<IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener>::find<NPSMDesktopShellComponent,winrt::impl::iid_finder>(
           v3,
           &v7);
}
