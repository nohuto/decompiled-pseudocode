/*
 * XREFs of ??_G?$heap_implements@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x180725590
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1WindowsTracker@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180725444 (--1WindowsTracker@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

winrt::Windows::Internal::Shell::implementation::WindowsTracker *__fastcall winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::WindowsTracker>::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::WindowsTracker *a1,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::WindowsTracker::~WindowsTracker(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
