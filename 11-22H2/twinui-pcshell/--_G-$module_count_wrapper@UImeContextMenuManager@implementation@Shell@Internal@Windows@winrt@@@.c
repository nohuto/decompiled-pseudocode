/*
 * XREFs of ??_G?$module_count_wrapper@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAAPEAXI@Z @ 0x180187940
 * Callers:
 *     ??_E?$module_count_wrapper@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@WCI@EAAPEAXI@Z @ 0x1802ACDA0 (--_E-$module_count_wrapper@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@.c)
 * Callees:
 *     ??1?$module_count_wrapper@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x18018797C (--1-$module_count_wrapper@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@d.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager *__fastcall wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager>::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager *a1,
        char a2)
{
  wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager>::~module_count_wrapper<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x80uLL);
  return a1;
}
