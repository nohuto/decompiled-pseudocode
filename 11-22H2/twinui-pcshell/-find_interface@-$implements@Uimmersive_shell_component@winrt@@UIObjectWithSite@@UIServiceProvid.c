/*
 * XREFs of ?find_interface@?$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180392210
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     ??$find@Uimmersive_shell_component@winrt@@Uiid_finder@impl@2@@?$interface_list@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SAPEAXPEBUimmersive_shell_component@2@AEBUiid_finder@12@@Z @ 0x180391428 (--$find@Uimmersive_shell_component@winrt@@Uiid_finder@impl@2@@-$interface_list@UIServiceProvider.c)
 */

__int64 __fastcall winrt::implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a2;
  if ( !winrt::operator==(a2, &winrt::impl::guid_v<IObjectWithSite>) )
    return winrt::impl::interface_list<IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::immersive_shell_component,winrt::impl::iid_finder>(
             v2,
             &v4);
  return v2;
}
