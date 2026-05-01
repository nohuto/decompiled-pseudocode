/*
 * XREFs of ?find_interface@?$implements@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIInputSwitchExperienceManager@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800D9330
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     ??$find@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIInputSwitchExperienceManager@@@impl@winrt@@SAPEAXPEBUInputSwitchingManager@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800D9C80 (--$find@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::InputSwitchingManager,winrt::immersive_shell_component,IInputSwitchExperienceManager>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // r8
  __int64 v6; // rax
  _QWORD *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = a2;
  if ( winrt::operator==(a2, &winrt::impl::guid_v<IObjectWithSite>) )
  {
    v6 = v3 + 8;
    return v6 & -(__int64)(v3 != 0);
  }
  if ( winrt::operator==(v2, &winrt::impl::guid_v<IServiceProvider>) )
  {
    v6 = v3 + 16;
    return v6 & -(__int64)(v3 != 0);
  }
  return winrt::impl::interface_list<IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IInputSwitchExperienceManager>::find<winrt::Windows::Internal::Shell::implementation::InputSwitchingManager,winrt::impl::iid_finder>(
           v3,
           &v7);
}
