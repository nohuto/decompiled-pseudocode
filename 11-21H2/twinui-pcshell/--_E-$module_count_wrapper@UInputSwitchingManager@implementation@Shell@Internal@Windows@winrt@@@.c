/*
 * XREFs of ??_E?$module_count_wrapper@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAAPEAXI@Z @ 0x1800CC7D8
 * Callers:
 *     ??_E?$module_count_wrapper@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@WCI@EAAPEAXI@Z @ 0x180210490 (--_E-$module_count_wrapper@UInputSwitchingManager@implementation@Shell@Internal@Win_ea_180210490.c)
 * Callees:
 *     ??1?$module_count_wrapper@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x1800CC814 (--1-$module_count_wrapper@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@@d.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

winrt::Windows::Internal::Shell::implementation::InputSwitchingManager *__fastcall wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::InputSwitchingManager>::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::InputSwitchingManager *a1,
        char a2)
{
  wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::InputSwitchingManager>::~module_count_wrapper<winrt::Windows::Internal::Shell::implementation::InputSwitchingManager>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x130uLL);
  return a1;
}
