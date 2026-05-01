/*
 * XREFs of ?TryEnableVolumeForPackageInstallAsync@LockScreenWidgetPackageHelperBase@@IEAA?AU?$IAsyncOperation@_N@Foundation@Windows@winrt@@UPackageVolume@Deployment@Management@45@@Z @ 0x180244D74
 * Callers:
 *     LockScreenWidgetPackageHelperBase::IsPackageVolumeSupportedForInstallAsync$_ResumeCoro$1 @ 0x18023FBD0 (LockScreenWidgetPackageHelperBase--IsPackageVolumeSupportedForInstallAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     LockScreenWidgetPackageHelperBase::TryEnableVolumeForPackageInstallAsync$_InitCoro$2 @ 0x180244984 (LockScreenWidgetPackageHelperBase--TryEnableVolumeForPackageInstallAsync$_InitCoro$2.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Foundation::IUnknown *__fastcall LockScreenWidgetPackageHelperBase::TryEnableVolumeForPackageInstallAsync(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2,
        __int64 *a3)
{
  void *v6; // rax
  int v8; // [rsp+168h] [rbp+10h] BYREF
  __int64 *v9; // [rsp+170h] [rbp+18h]

  v9 = a3;
  v6 = operator new(0x101uLL);
  v8 = 0;
  LockScreenWidgetPackageHelperBase::TryEnableVolumeForPackageInstallAsync__InitCoro_2(
    (__int64)&v8,
    (__int64)v6 + 112,
    a2,
    a3,
    a1);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)a3);
  return a2;
}
