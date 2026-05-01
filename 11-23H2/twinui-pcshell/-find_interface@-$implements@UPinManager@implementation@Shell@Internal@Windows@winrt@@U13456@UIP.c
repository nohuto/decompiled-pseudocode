/*
 * XREFs of ?find_interface@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop3@@Uimmersive_shell_component@6@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180253430
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     ??$find@UPinManager@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@UIPinManagerInterop3@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SAPEAXPEBUPinManager@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x18024F3A8 (--$find@UPinManager@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6_ea_18024F3A8.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::PinManager,winrt::Windows::Internal::Shell::PinManager,IPinManagerInterop3,winrt::immersive_shell_component>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a2;
  if ( winrt::operator==(a2, winrt::impl::guid_v<winrt::Windows::Internal::Shell::IPinManager>) )
    return (v2 + 8) & -(__int64)(v2 != 0);
  else
    return winrt::impl::interface_list<IPinManagerInterop3,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::Windows::Internal::Shell::implementation::PinManager,winrt::impl::iid_finder>(
             v2,
             &v5);
}
