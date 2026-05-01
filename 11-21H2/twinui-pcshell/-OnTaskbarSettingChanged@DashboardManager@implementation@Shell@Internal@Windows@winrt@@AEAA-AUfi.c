/*
 * XREFs of ?OnTaskbarSettingChanged@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@W4TaskbarSettingChangedEvent@Dashboard@3UI@WindowsUdk@6@@Z @ 0x1801C95F0
 * Callers:
 *     _lambda_c7ad7d039b35a8565706af83963bb0b1_::operator() @ 0x1801C5694 (_lambda_c7ad7d039b35a8565706af83963bb0b1_--operator().c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::OnTaskbarSettingChanged$_InitCoro$2 @ 0x1801C9320 (winrt--Windows--Internal--Shell--implementation--DashboardManager--OnTaskbarSettingChanged$_Init.c)
 */

_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::OnTaskbarSettingChanged(
        __int64 a1,
        _BYTE *a2,
        int a3)
{
  void *v5; // rax
  int v7; // [rsp+1C8h] [rbp+10h] BYREF
  int v8; // [rsp+1D0h] [rbp+18h] BYREF

  v8 = a3;
  v5 = operator new(0x171uLL);
  v7 = 0;
  winrt::Windows::Internal::Shell::implementation::DashboardManager::OnTaskbarSettingChanged__InitCoro_2(
    &v7,
    (__int64)v5,
    a2,
    &v8,
    a1);
  return a2;
}
