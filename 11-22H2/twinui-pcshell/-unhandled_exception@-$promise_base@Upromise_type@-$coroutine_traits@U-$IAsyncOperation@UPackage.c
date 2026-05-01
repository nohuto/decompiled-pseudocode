/*
 * XREFs of ?unhandled_exception@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@@experimental@std@@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x1802293FC
 * Callers:
 *     _SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1_::_1_::catch$49 @ 0x180226D17 (_SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1_--_1_--catch$49.c)
 *     _winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::TryGetMaximizeButtonRectFromTitleBarInfoAsync$_ResumeCoro$1_::_1_::catch$9 @ 0x18022D8E2 (_winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance_ea_18022D8E2.c)
 *     _LockScreenWidgetPackageHelperBase::GetVolumeToInstallPackageAsync$_ResumeCoro$1_::_1_::catch$97 @ 0x18023D8A0 (_LockScreenWidgetPackageHelperBase--GetVolumeToInstallPackageAsync$_ResumeCoro$1_--_1_--catch$97.c)
 *     _LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1_::_1_::catch$64 @ 0x18023E719 (_LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_ResumeCoro$1_--_1_--catch$64.c)
 *     _LockScreenWidgetPackageHelperBase::IsPackageVolumeSupportedForInstallAsync$_ResumeCoro$1_::_1_::catch$16 @ 0x18023FDEC (_LockScreenWidgetPackageHelperBase--IsPackageVolumeSupportedForInstallAsync$_Resume_ea_18023FDEC.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::StartWidgetsOverwatchAsync$_ResumeCoro$1_::_1_::catch$19 @ 0x1802442E0 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--StartWidgetsOve_ea_1802442E0.c)
 *     _LockScreenWidgetPackageHelperBase::TryEnableVolumeForPackageInstallAsync$_ResumeCoro$1_::_1_::catch$16 @ 0x180244D34 (_LockScreenWidgetPackageHelperBase--TryEnableVolumeForPackageInstallAsync$_ResumeCoro$1_--_1_--c.c)
 *     _LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1_::_1_::catch$44 @ 0x180245A93 (_LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1_-_ea_180245A93.c)
 *     _CopilotHotkeyManager::LaunchHardwareKeySettings$_ResumeCoro$1_::_1_::catch$9 @ 0x180271B28 (_CopilotHotkeyManager--LaunchHardwareKeySettings$_ResumeCoro$1_--_1_--catch$9.c)
 * Callees:
 *     ??0slim_lock_guard@winrt@@QEAA@AEAUslim_mutex@1@@Z @ 0x18040F1F0 (--0slim_lock_guard@winrt@@QEAA@AEAUslim_mutex@1@@Z.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x1804DF9CC (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ??1exception_ptr@std@@QEAA@XZ @ 0x1804DFA8C (--1exception_ptr@std@@QEAA@XZ.c)
 *     ??4exception_ptr@std@@QEAAAEAV01@AEBV01@@Z @ 0x1804DFAC4 (--4exception_ptr@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?current_exception@std@@YA?AVexception_ptr@1@XZ @ 0x1804E0BAC (-current_exception@std@@YA-AVexception_ptr@1@XZ.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x1804E0BE0 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>,LockScreenWidgetPackageHelperBase *>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>,void>::unhandled_exception(
        __int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF
  PSRWLOCK SRWLock; // [rsp+48h] [rbp+10h] BYREF

  winrt::slim_lock_guard::slim_lock_guard((winrt::slim_lock_guard *)&SRWLock, (struct winrt::slim_mutex *)(a1 + 48));
  v2 = std::current_exception(v4);
  std::exception_ptr::operator=(a1 + 32, v2);
  std::exception_ptr::~exception_ptr((std::exception_ptr *)v4);
  v3 = std::exception_ptr::exception_ptr((std::exception_ptr *)v4, (const struct std::exception_ptr *)(a1 + 32));
  try
  {
    std::rethrow_exception(v3);
  }
  catch ( winrt::hresult_canceled )
  {
    std::_Atomic_storage<enum winrt::Windows::Foundation::AsyncStatus,4>::store((unsigned int *)(a1 + 88), 2);
  }
  catch ( ... )
  {
    std::_Atomic_storage<enum winrt::Windows::Foundation::AsyncStatus,4>::store((unsigned int *)(a1 + 88), 3);
  }
  ReleaseSRWLockExclusive_0(SRWLock);
}
