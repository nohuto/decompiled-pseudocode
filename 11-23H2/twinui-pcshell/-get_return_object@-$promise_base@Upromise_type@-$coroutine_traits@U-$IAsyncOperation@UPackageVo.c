/*
 * XREFs of ?get_return_object@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@@experimental@std@@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AU?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@3@XZ @ 0x18024AFEC
 * Callers:
 *     LockScreenWidgetPackageHelperBase::GetVolumeToInstallPackageAsync$_InitCoro$2 @ 0x18023CE48 (LockScreenWidgetPackageHelperBase--GetVolumeToInstallPackageAsync$_InitCoro$2.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??0?$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x180190BA0 (--0-$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Q.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>,LockScreenWidgetPackageHelperBase *>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>,void>::get_return_object(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1 + 16;
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>(
    a2,
    &v4);
  v4 = 0LL;
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v4);
  return a2;
}
