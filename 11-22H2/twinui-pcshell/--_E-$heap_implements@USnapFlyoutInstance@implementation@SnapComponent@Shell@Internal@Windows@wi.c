/*
 * XREFs of ??_E?$heap_implements@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x18067A550
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180679E48 (--1SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *__fastcall winrt::impl::heap_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *a1,
        char a2)
{
  winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::~SnapFlyoutInstance(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
