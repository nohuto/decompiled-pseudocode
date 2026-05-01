/*
 * XREFs of ?WaitConfigurableDurationAsync@implementation@Shell@Internal@Windows@winrt@@YA?AUIAsyncAction@Foundation@45@PEBGV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@Z @ 0x1801CDDF0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x1801CCCE0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync$_InitCoro$2 @ 0x1801CDA40 (winrt--Windows--Internal--Shell--implementation--WaitConfigurableDurationAsync$_InitCoro$2.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  void *v5; // rax
  int v7; // [rsp+1E0h] [rbp+8h] BYREF
  __int64 v8; // [rsp+1F0h] [rbp+18h] BYREF

  v8 = a3;
  v5 = operator new(0x191uLL);
  v7 = 0;
  winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync__InitCoro_2(
    &v7,
    (__int64)v5 + 96,
    a1,
    a2,
    &v8);
  return a1;
}
