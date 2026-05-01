/*
 * XREFs of ?RefreshTheme@?$produce@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UIThemeCoordinator@34567@@impl@winrt@@UEAAHXZ @ 0x1806E35A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HandlePackageServicing@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJ_N@Z @ 0x1801B6FDC (-HandlePackageServicing@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJ_.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator,winrt::Windows::Internal::UI::Themes::IThemeCoordinator>::RefreshTheme(
        winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // eax
  __int64 result; // rax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  try
  {
    v4 = winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::HandlePackageServicing(a1, a2, a3, a4);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x134,
        (int)"pcshell\\twinui\\themecoordinator\\lib\\themecoordinator.cpp",
        (const char *)(unsigned int)v4,
        v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v8);
  }
  return result;
}
