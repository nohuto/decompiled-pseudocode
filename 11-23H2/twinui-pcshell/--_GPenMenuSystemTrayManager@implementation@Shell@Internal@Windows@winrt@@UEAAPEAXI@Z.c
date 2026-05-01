/*
 * XREFs of ??_GPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x18048EB84
 * Callers:
 *     ??_EPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@WCI@EAAPEAXI@Z @ 0x18029A840 (--_EPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18048EAE4 (--1PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager *__fastcall winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager *this,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager::~PenMenuSystemTrayManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
