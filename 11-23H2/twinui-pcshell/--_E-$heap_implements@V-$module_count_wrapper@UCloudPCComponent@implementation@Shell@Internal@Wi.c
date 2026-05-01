/*
 * XREFs of ??_E?$heap_implements@V?$module_count_wrapper@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@UEAAPEAXI@Z @ 0x1801AFE40
 * Callers:
 *     ??_E?$heap_implements@V?$module_count_wrapper@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@WCA@EAAPEAXI@Z @ 0x1802ACE00 (--_E-$heap_implements@V-$module_count_wrapper@UCloudPCComponent@implementation@Shel_ea_1802ACE00.c)
 * Callees:
 *     ??1?$module_count_wrapper@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x1801AFE7C (--1-$module_count_wrapper@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@@detail.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

winrt::Windows::Internal::Shell::implementation::CloudPCComponent *__fastcall winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::CloudPCComponent>>::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::CloudPCComponent *a1,
        char a2)
{
  wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::CloudPCComponent>::~module_count_wrapper<winrt::Windows::Internal::Shell::implementation::CloudPCComponent>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x98uLL);
  return a1;
}
