/*
 * XREFs of ??_G?$heap_implements@V?$module_count_wrapper@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@UEAAPEAXI@Z @ 0x180128D50
 * Callers:
 *     ??_E?$module_count_wrapper@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@details@wil@@WCA@EAAPEAXI@Z @ 0x1802ACB80 (--_E-$module_count_wrapper@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@deta.c)
 * Callees:
 *     ??1?$module_count_wrapper@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x180128D8C (--1-$module_count_wrapper@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@detai.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

winrt::Windows::Internal::Shell::implementation::AppBackupListener *__fastcall winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::AppBackupListener>>::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::AppBackupListener *a1,
        char a2)
{
  wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::~module_count_wrapper<winrt::Windows::Internal::Shell::implementation::AppBackupListener>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x218uLL);
  return a1;
}
