/*
 * XREFs of ??$find@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uiid_finder@impl@7@@?$interface_list@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIThemeCoordinator@Themes@UI@Internal@4@@impl@winrt@@SAPEAXPEBUThemeCoordinator@implementation@Themes@UI@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800F806C
 * Callers:
 *     ?find_interface@?$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIThemeCoordinator@3456@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800F8640 (-find_interface@-$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::impl::interface_list<IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,Windows::Internal::UI::Themes::IThemeCoordinator>::find<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator,winrt::impl::iid_finder>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // al
  __int64 v12; // r8

  if ( (unsigned __int8)winrt::operator==(*a2, &winrt::impl::guid_v<IImmersiveShellComponent>, a1, a4) )
    return (v5 + 24) & -(__int64)(v5 != 0);
  if ( (unsigned __int8)winrt::operator==(v4, &winrt::impl::guid_v<IInspectable>, v5, v6) )
    return (v9 + 32) & -(__int64)(v9 != 0);
  v11 = winrt::operator==(v8, &winrt::impl::guid_v<Windows::Internal::UI::Themes::IThemeCoordinator>, v9, v10);
  return v12 & -(__int64)(v11 != 0);
}
