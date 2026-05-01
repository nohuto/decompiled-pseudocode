/*
 * XREFs of ?ActiveTabChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUevent_token@6@@Z @ 0x180636CD0
 * Callers:
 *     ?remove_ActiveTabChanged@?$produce@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabExtension@3UI@456@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x180638B90 (-remove_ActiveTabChanged@-$produce@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U.c)
 * Callees:
 *     ?remove@?$event@U?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@_N@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x180412F50 (-remove@-$event@U-$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Int.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::ActiveTabChanged(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this,
        void **a2)
{
  char *v2; // rcx
  void *v3; // rdx
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (char *)this + 832;
  v3 = *a2;
  try
  {
    winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,bool>>::remove(
      (__int64)v2,
      v3);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xE0,
      (int)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
      v4);
  }
}
