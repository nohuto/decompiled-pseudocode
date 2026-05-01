/*
 * XREFs of ?WaitConfigurableDurationAsync@implementation@Shell@Internal@Windows@winrt@@YA?AUIAsyncAction@Foundation@45@PEBGV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@Z @ 0x180247654
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::StartWidgetsOverwatchAsync$_ResumeCoro$1 @ 0x180243DB0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--StartWidgetsOverwatchAsync$_R.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x180246660 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync$_InitCoro$2 @ 0x180247258 (winrt--Windows--Internal--Shell--implementation--WaitConfigurableDurationAsync$_InitCoro$2.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync(
        winrt::Windows::Foundation::IUnknown *a1,
        __int64 a2,
        __int64 a3)
{
  void *v5; // rax
  int v7; // [rsp+150h] [rbp+8h] BYREF
  __int64 v8; // [rsp+160h] [rbp+18h] BYREF

  v8 = a3;
  v5 = operator new(0x101uLL);
  v7 = 0;
  winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync__InitCoro_2(
    &v7,
    (__int64)v5 + 96,
    a1,
    a2,
    &v8);
  return a1;
}
