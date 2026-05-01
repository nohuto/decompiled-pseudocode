/*
 * XREFs of ??$find@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIInputSwitchExperienceManager@@@impl@winrt@@SAPEAXPEBUInputSwitchingManager@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800D9C80
 * Callers:
 *     ?find_interface@?$implements@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIInputSwitchExperienceManager@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800D9330 (-find_interface@-$implements@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::impl::interface_list<IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IInputSwitchExperienceManager>::find<winrt::Windows::Internal::Shell::implementation::InputSwitchingManager,winrt::impl::iid_finder>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // r8
  _QWORD *v4; // rcx
  __int64 v5; // r8
  bool v6; // al
  __int64 v7; // r8

  if ( winrt::operator==(*a2, &winrt::impl::guid_v<IImmersiveShellComponent>) )
    return (v3 + 24) & -(__int64)(v3 != 0);
  if ( winrt::operator==(v2, &winrt::impl::guid_v<IInspectable>) )
    return (v5 + 32) & -(__int64)(v5 != 0);
  v6 = winrt::operator==(v4, winrt::impl::guid_v<IInputSwitchExperienceManager>);
  return v7 & -(__int64)v6;
}
