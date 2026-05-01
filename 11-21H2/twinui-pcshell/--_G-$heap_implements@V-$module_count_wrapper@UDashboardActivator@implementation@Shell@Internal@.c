/*
 * XREFs of ??_G?$heap_implements@V?$module_count_wrapper@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@UEAAPEAXI@Z @ 0x180026DF0
 * Callers:
 *     ??_E?$heap_implements@V?$module_count_wrapper@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@WBA@EAAPEAXI@Z @ 0x18020FBD0 (--_E-$heap_implements@V-$module_count_wrapper@UDashboardActivator@implementation@Shell@Internal@.c)
 * Callees:
 *     ??1?$module_count_wrapper@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x180026E2C (--1-$module_count_wrapper@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@@deta.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

winrt::Windows::Internal::Shell::implementation::DashboardActivator *__fastcall winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardActivator>>::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::DashboardActivator *a1,
        char a2)
{
  wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardActivator>::~module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardActivator>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x20uLL);
  return a1;
}
