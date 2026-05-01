/*
 * XREFs of ??_GThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1806E1F1C
 * Callers:
 *     ??_EThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@WEA@EAAPEAXI@Z @ 0x1802AC770 (--_EThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@WEA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAA@XZ @ 0x180129594 (--1ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *__fastcall winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::`scalar deleting destructor'(
        winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *this,
        char a2)
{
  winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::~ThemeCoordinator(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
