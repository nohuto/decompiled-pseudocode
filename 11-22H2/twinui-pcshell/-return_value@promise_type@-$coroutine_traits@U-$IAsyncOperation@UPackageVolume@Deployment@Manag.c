/*
 * XREFs of ?return_value@promise_type@?$coroutine_traits@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@@experimental@std@@QEAAX$$QEAUPackageVolume@Deployment@Management@Windows@winrt@@@Z @ 0x18024B7AC
 * Callers:
 *     LockScreenWidgetPackageHelperBase::GetVolumeToInstallPackageAsync$_ResumeCoro$1 @ 0x18023CF60 (LockScreenWidgetPackageHelperBase--GetVolumeToInstallPackageAsync$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

winrt::Windows::Foundation::IUnknown *__fastcall std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>,LockScreenWidgetPackageHelperBase *>::promise_type::return_value(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  return winrt::Windows::Foundation::IUnknown::operator=((winrt::Windows::Foundation::IUnknown *)(a1 + 96), a2);
}
