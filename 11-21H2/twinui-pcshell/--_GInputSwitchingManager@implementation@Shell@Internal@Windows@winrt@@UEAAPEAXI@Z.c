/*
 * XREFs of ??_GInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1805E0F88
 * Callers:
 *     ??_EInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@WCI@EAAPEAXI@Z @ 0x1802104B0 (--_EInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800E2778 (--1InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

winrt::Windows::Internal::Shell::implementation::InputSwitchingManager *__fastcall winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::InputSwitchingManager *this,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::~InputSwitchingManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
