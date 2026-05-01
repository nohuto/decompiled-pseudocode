/*
 * XREFs of ?OnMessage@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAJI_K_J@Z @ 0x1806E3280
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SyncPrimaryBackgroundVisualState@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJXZ @ 0x1806E3D58 (-SyncPrimaryBackgroundVisualState@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@win.c)
 */

__int64 __fastcall winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::OnMessage(
        winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *this,
        int a2)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 == 26 )
  {
    v2 = winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::SyncPrimaryBackgroundVisualState(this);
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x28D,
        (int)"pcshell\\twinui\\themecoordinator\\lib\\themecoordinator.cpp",
        (const char *)(unsigned int)v2);
  }
  return 0LL;
}
