/*
 * XREFs of ?RefreshTheme@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAJXZ @ 0x1805DE070
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HandlePackageServicing@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJ_N@Z @ 0x180118F78 (-HandlePackageServicing@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJ_.c)
 */

__int64 __fastcall winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::RefreshTheme(
        winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *this,
        __int64 a2)
{
  int v2; // eax
  const char *v3; // r9
  unsigned int v4; // ebx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    v2 = winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::HandlePackageServicing(this, a2);
    v4 = v2;
    if ( v2 >= 0 )
    {
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4A,
        (__int64)"pcshell\\twinui\\themecoordinator\\lib\\themecoordinator.cpp",
        (const char *)(unsigned int)v2);
      result = v4;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4C,
                           (int)"pcshell\\twinui\\themecoordinator\\lib\\themecoordinator.cpp",
                           v3);
  }
  return result;
}
