/*
 * XREFs of ?find_interface@?$implements@VTouchGestureComponent@@Uimmersive_shell_component@winrt@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800D6DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@VTouchGestureComponent@@Uiid_finder@impl@winrt@@@?$interface_list@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SAPEAXPEBVTouchGestureComponent@@AEBUiid_finder@12@@Z @ 0x1800D6CF8 (--$find@VTouchGestureComponent@@Uiid_finder@impl@winrt@@@-$interface_list@UIServiceProvider@@UII.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::implements<TouchGestureComponent,winrt::immersive_shell_component>::find_interface(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r8
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a2;
  if ( !(unsigned __int8)winrt::operator==(a2, &winrt::impl::guid_v<IObjectWithSite>) )
    return winrt::impl::interface_list<IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<TouchGestureComponent,winrt::impl::iid_finder>(
             v2,
             &v4);
  return v2;
}
