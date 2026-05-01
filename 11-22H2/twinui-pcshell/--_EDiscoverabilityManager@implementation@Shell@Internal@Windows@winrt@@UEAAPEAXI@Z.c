/*
 * XREFs of ??_EDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1806F9CDC
 * Callers:
 *     ??_EDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@WDI@EAAPEAXI@Z @ 0x1802ACBF0 (--_EDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@WDI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1806F9A9C (--1DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *__fastcall winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *this,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::~DiscoverabilityManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
