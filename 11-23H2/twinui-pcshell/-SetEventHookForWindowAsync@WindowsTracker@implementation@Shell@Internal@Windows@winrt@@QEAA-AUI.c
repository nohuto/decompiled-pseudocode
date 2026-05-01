/*
 * XREFs of ?SetEventHookForWindowAsync@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@56@UWindowId@UI@56@@Z @ 0x18027CB58
 * Callers:
 *     ?SetEventHookForWindowAsync@?$produce@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@UIWindowsTracker@3456@@impl@winrt@@UEAAHUstruct_Windows_UI_WindowId@23@PEAPEAX@Z @ 0x180725990 (-SetEventHookForWindowAsync@-$produce@UWindowsTracker@implementation@Shell@Internal@Windows@winr.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowsTracker::SetEventHookForWindowAsync$_InitCoro$2 @ 0x18027C7C4 (winrt--Windows--Internal--Shell--implementation--WindowsTracker--SetEventHookForWindowAsync$_Ini.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::Windows::Internal::Shell::implementation::WindowsTracker::SetEventHookForWindowAsync(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2,
        __int64 a3)
{
  void *v5; // rax
  int v7; // [rsp+158h] [rbp+10h] BYREF
  __int64 v8; // [rsp+160h] [rbp+18h] BYREF

  v8 = a3;
  v5 = operator new(0x101uLL);
  v7 = 0;
  winrt::Windows::Internal::Shell::implementation::WindowsTracker::SetEventHookForWindowAsync__InitCoro_2(
    &v7,
    (__int64)v5 + 96,
    a2,
    &v8,
    a1);
  return a2;
}
