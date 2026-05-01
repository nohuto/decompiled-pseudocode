/*
 * XREFs of ??_E?$heap_implements@V?$module_count_wrapper@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@UEAAPEAXI@Z @ 0x18017A264
 * Callers:
 *     ??_E?$heap_implements@V?$module_count_wrapper@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@WCI@EAAPEAXI@Z @ 0x1802102F0 (--_E-$heap_implements@V-$module_count_wrapper@UThemeCoordinator@implementation@Them_ea_1802102F0.c)
 * Callees:
 *     ??1?$module_count_wrapper@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x18017A2A0 (--1-$module_count_wrapper@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@@de.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *__fastcall winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator>>::`vector deleting destructor'(
        winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *a1,
        char a2)
{
  wil::details::module_count_wrapper<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator>::~module_count_wrapper<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x88uLL);
  return a1;
}
