/*
 * XREFs of ?GetVolumeToInstallPackageAsync@LockScreenWidgetPackageHelperBase@@IEAA?AU?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@XZ @ 0x18023D8DC
 * Callers:
 *     LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1 @ 0x18023DCE0 (LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     LockScreenWidgetPackageHelperBase::GetVolumeToInstallPackageAsync$_InitCoro$2 @ 0x18023CE48 (LockScreenWidgetPackageHelperBase--GetVolumeToInstallPackageAsync$_InitCoro$2.c)
 */

__int64 __fastcall LockScreenWidgetPackageHelperBase::GetVolumeToInstallPackageAsync(__int64 a1, __int64 a2)
{
  void *v4; // rax
  int v6; // [rsp+248h] [rbp+10h] BYREF

  v4 = operator new(0x209uLL);
  v6 = 0;
  LockScreenWidgetPackageHelperBase::GetVolumeToInstallPackageAsync__InitCoro_2(&v6, (__int64)v4 + 112, a2, a1);
  return a2;
}
