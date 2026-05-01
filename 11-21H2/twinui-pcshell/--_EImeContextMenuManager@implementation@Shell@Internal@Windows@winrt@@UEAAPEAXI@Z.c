/*
 * XREFs of ??_EImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1805E31A8
 * Callers:
 *     ??_EImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@WCI@EAAPEAXI@Z @ 0x180210500 (--_EImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1ImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180153BE4 (--1ImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager *__fastcall winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager *this,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::~ImeContextMenuManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
