/*
 * XREFs of ??_E?$module_count_wrapper@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAAPEAXI@Z @ 0x1805BCCE8
 * Callers:
 *     ??_E?$module_count_wrapper@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@WDI@EAAPEAXI@Z @ 0x18020FBF0 (--_E-$module_count_wrapper@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@detai.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1?$module_count_wrapper@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x1805BCB5C (--1-$module_count_wrapper@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@detail.c)
 */

winrt::Windows::Internal::Shell::implementation::DashboardManager *__fastcall wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *a1,
        char a2)
{
  wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
