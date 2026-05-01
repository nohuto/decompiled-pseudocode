/*
 * XREFs of ?Cancel@?$produce@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAVCopilotHotkeyManager@@@experimental@std@@UIAsyncInfo@Foundation@Windows@winrt@@@impl@winrt@@UEAAHXZ @ 0x180225AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Cancel@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@@experimental@std@@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x180225B38 (-Cancel@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@UPackageVolume@Deploy.c)
 */

__int64 __fastcall winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,CopilotHotkeyManager *>::promise_type,winrt::Windows::Foundation::IAsyncInfo>::Cancel(
        __int64 a1)
{
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>,LockScreenWidgetPackageHelperBase *>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>,void>::Cancel((a1 - 24) & -(__int64)(a1 != 0));
  return 0LL;
}
