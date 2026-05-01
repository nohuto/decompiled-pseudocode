/*
 * XREFs of ??_EDashboardActivator@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1805BCD24
 * Callers:
 *     ??_EDashboardActivator@implementation@Shell@Internal@Windows@winrt@@WBA@EAAPEAXI@Z @ 0x18020FC10 (--_EDashboardActivator@implementation@Shell@Internal@Windows@winrt@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1DashboardActivator@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180026F2C (--1DashboardActivator@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

winrt::Windows::Internal::Shell::implementation::DashboardActivator *__fastcall winrt::Windows::Internal::Shell::implementation::DashboardActivator::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::DashboardActivator *this,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::DashboardActivator::~DashboardActivator(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
