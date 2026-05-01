/*
 * XREFs of ??$find@Uimmersive_shell_component@winrt@@Uiid_finder@impl@2@@?$interface_list@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SAPEAXPEBUimmersive_shell_component@2@AEBUiid_finder@12@@Z @ 0x1803B53C0
 * Callers:
 *     ?find_interface@?$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1803B5C40 (-find_interface@-$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvid.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::impl::interface_list<IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::immersive_shell_component,winrt::impl::iid_finder>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // r8
  _QWORD *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // r9

  if ( winrt::operator==(*a2, &winrt::impl::guid_v<IServiceProvider>) )
    return (v3 + 8) & -(__int64)(v3 != 0);
  if ( winrt::operator==(v2, &winrt::impl::guid_v<IImmersiveShellComponent>) )
  {
    v7 = v6 + 16;
    return v7 & -(__int64)(v6 != 0);
  }
  if ( winrt::operator==(v5, &winrt::impl::guid_v<IInspectable>) )
  {
    v7 = v6 + 24;
    return v7 & -(__int64)(v6 != 0);
  }
  return v8;
}
