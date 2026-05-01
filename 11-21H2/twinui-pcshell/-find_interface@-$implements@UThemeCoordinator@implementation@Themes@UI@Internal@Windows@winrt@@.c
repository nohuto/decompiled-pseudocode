/*
 * XREFs of ?find_interface@?$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIThemeCoordinator@3456@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800F8640
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uiid_finder@impl@7@@?$interface_list@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIThemeCoordinator@Themes@UI@Internal@4@@impl@winrt@@SAPEAXPEBUThemeCoordinator@implementation@Themes@UI@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800F806C (--$find@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uiid_finder@impl@7@@-.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator,winrt::immersive_shell_component,Windows::Internal::UI::Themes::IThemeCoordinator>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r8
  bool v3; // zf
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 v8; // rax
  _QWORD *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 - 40;
  v4 = *a2 - winrt::impl::guid_v<IObjectWithSite>;
  v3 = *a2 == winrt::impl::guid_v<IObjectWithSite>;
  v9 = a2;
  if ( v3 )
    v4 = a2[1] - 0x52733D00AA0029A2LL;
  if ( !v4 )
  {
    v8 = v2 + 8;
    return v8 & -(__int64)(v2 != 0);
  }
  if ( (unsigned __int8)winrt::operator==(a2, &winrt::impl::guid_v<IServiceProvider>, v2, a2) )
  {
    v8 = v2 + 16;
    return v8 & -(__int64)(v2 != 0);
  }
  return winrt::impl::interface_list<IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,Windows::Internal::UI::Themes::IThemeCoordinator>::find<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator,winrt::impl::iid_finder>(
           v2,
           &v9,
           v2,
           v5);
}
