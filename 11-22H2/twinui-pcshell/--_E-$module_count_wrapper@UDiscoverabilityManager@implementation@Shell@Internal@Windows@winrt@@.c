/*
 * XREFs of ??_E?$module_count_wrapper@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAAPEAXI@Z @ 0x1806F9CA0
 * Callers:
 *     ??_E?$heap_implements@V?$module_count_wrapper@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@WDI@EAAPEAXI@Z @ 0x1802ACBD0 (--_E-$heap_implements@V-$module_count_wrapper@UDiscoverabilityManager@implementation@Shell@Inter.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1?$module_count_wrapper@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x1806F99D4 (--1-$module_count_wrapper@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@@.c)
 */

winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *__fastcall wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager>::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *a1,
        char a2)
{
  wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager>::~module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
