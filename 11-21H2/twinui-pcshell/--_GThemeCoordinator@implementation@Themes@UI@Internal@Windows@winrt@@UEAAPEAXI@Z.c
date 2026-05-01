/*
 * XREFs of ??_GThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1805DD888
 * Callers:
 *     ??_EThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@WCI@EAAPEAXI@Z @ 0x180210310 (--_EThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAA@XZ @ 0x18017A318 (--1ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *__fastcall winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::`scalar deleting destructor'(
        winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *this,
        struct wil::details::wnf_subscription_state_base *a2)
{
  char v2; // bl

  v2 = (char)a2;
  winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::~ThemeCoordinator(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
