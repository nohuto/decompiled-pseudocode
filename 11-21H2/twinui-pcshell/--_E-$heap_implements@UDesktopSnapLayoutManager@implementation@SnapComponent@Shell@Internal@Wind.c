/*
 * XREFs of ??_E?$heap_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1805B39C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1805B38C4 (--1DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *__fastcall winrt::impl::heap_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager>::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *a1,
        char a2)
{
  winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::~DesktopSnapLayoutManager(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
