/*
 * XREFs of ?await_resume@?$notify_awaiter@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x180248B5C
 * Callers:
 *     LockScreenWidgetPackageHelperBase::GetVolumeToInstallPackageAsync$_ResumeCoro$1 @ 0x18023CF60 (LockScreenWidgetPackageHelperBase--GetVolumeToInstallPackageAsync$_ResumeCoro$1.c)
 *     LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1 @ 0x18023DCE0 (LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180248A84 (-await_resume@-$await_adapter@U-$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@wi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

winrt *__fastcall winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>>::await_resume(
        __int64 a1,
        winrt *a2)
{
  if ( winrt_resume_handler )
    winrt_resume_handler();
  winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>>::await_resume(
    a1,
    a2);
  return a2;
}
