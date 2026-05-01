/*
 * XREFs of ??_G?$heap_implements@UProcessTracker@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x18027E180
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1ProcessTracker@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18027E06C (--1ProcessTracker@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

winrt::Windows::Internal::Shell::implementation::ProcessTracker *__fastcall winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::ProcessTracker>::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::ProcessTracker *a1,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::ProcessTracker::~ProcessTracker(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
