/*
 * XREFs of ?InstallInboxedPackageAsync@LockScreenWidgetPackageHelperBase@@QEAA?AU?$IAsyncOperation@_N@Foundation@Windows@winrt@@XZ @ 0x18023E75C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1 @ 0x180242400 (winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvasD_ea_180242400.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_InitCoro$2 @ 0x18023DBC8 (LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_InitCoro$2.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  void *v4; // rax
  int v6; // [rsp+278h] [rbp+10h] BYREF

  v4 = operator new(0x239uLL);
  v6 = 0;
  LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync__InitCoro_2(&v6, (__int64)v4 + 112, a2, a1);
  return a2;
}
