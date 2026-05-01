/*
 * XREFs of ?UnhookEventForAllWindowsAsync@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@56@XZ @ 0x18027CF14
 * Callers:
 *     ?UnhookEventForAllWindowsAsync@?$produce@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@UIWindowsTracker@3456@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1801BA050 (-UnhookEventForAllWindowsAsync@-$produce@UWindowsTracker@implementation@Shell@Internal@Windows@w.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowsTracker::UnhookEventForAllWindowsAsync$_InitCoro$2 @ 0x18027CBCC (winrt--Windows--Internal--Shell--implementation--WindowsTracker--UnhookEventForAllWindowsAsync$_.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::Windows::Internal::Shell::implementation::WindowsTracker::UnhookEventForAllWindowsAsync(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  void *v4; // rax
  int v6; // [rsp+108h] [rbp+10h] BYREF

  v4 = operator new(0xC9uLL);
  v6 = 0;
  winrt::Windows::Internal::Shell::implementation::WindowsTracker::UnhookEventForAllWindowsAsync__InitCoro_2(
    &v6,
    (__int64)v4 + 96,
    a2,
    a1);
  return a2;
}
