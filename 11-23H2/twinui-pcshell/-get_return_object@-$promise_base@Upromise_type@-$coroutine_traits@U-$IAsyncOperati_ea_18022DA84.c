/*
 * XREFs of ?get_return_object@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@UPackageVolume@Deployment@Management@34@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AU?$IAsyncOperation@_N@Foundation@Windows@3@XZ @ 0x18022DA84
 * Callers:
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::TryGetMaximizeButtonRectFromTitleBarInfoAsync$_InitCoro$2 @ 0x18022D580 (winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance--TryGetMaximi.c)
 *     LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_InitCoro$2 @ 0x18023DBC8 (LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_InitCoro$2.c)
 *     LockScreenWidgetPackageHelperBase::IsPackageVolumeSupportedForInstallAsync$_InitCoro$2 @ 0x18023FA8C (LockScreenWidgetPackageHelperBase--IsPackageVolumeSupportedForInstallAsync$_InitCoro$2.c)
 *     LockScreenWidgetPackageHelperBase::TryEnableVolumeForPackageInstallAsync$_InitCoro$2 @ 0x180244984 (LockScreenWidgetPackageHelperBase--TryEnableVolumeForPackageInstallAsync$_InitCoro$2.c)
 *     CopilotHotkeyManager::LaunchHardwareKeySettings$_InitCoro$2 @ 0x180271714 (CopilotHotkeyManager--LaunchHardwareKeySettings$_InitCoro$2.c)
 * Callees:
 *     ??0?$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x180190BA0 (--0-$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Q.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,LockScreenWidgetPackageHelperBase *,winrt::Windows::Management::Deployment::PackageVolume>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::get_return_object(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1 + 16;
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>(
    a2,
    &v4);
  return a2;
}
