/*
 * XREFs of ??_E?$heap_implements@V?$module_count_wrapper@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@UEAAPEAXI@Z @ 0x1801B556C
 * Callers:
 *     ??_E?$heap_implements@V?$module_count_wrapper@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@WCA@EAAPEAXI@Z @ 0x18028E290 (--_E-$heap_implements@V-$module_count_wrapper@UFocusSessionComponent@implementation_ea_18028E290.c)
 * Callees:
 *     ??1?$module_count_wrapper@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x1801B55A8 (--1-$module_count_wrapper@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@@d.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

winrt::immersive_shell_component *__fastcall winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::FocusSessionComponent>>::`vector deleting destructor'(
        winrt::immersive_shell_component *a1,
        char a2)
{
  wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::FocusSessionComponent>::~module_count_wrapper<winrt::Windows::Internal::Shell::implementation::FocusSessionComponent>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x68uLL);
  return a1;
}
