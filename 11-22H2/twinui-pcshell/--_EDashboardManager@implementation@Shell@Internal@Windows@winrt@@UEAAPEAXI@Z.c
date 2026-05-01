/*
 * XREFs of ??_EDashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x180695558
 * Callers:
 *     ??_EDashboardManager@implementation@Shell@Internal@Windows@winrt@@WDI@EAAPEAXI@Z @ 0x1802ABF30 (--_EDashboardManager@implementation@Shell@Internal@Windows@winrt@@WDI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180695260 (--1DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

winrt::Windows::Internal::Shell::implementation::DashboardManager *__fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::DashboardManager::~DashboardManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
