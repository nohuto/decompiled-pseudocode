/*
 * XREFs of ??1?$implements_delegate@U?$AsyncOperationCompletedHandler@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@U?$disconnect_aware_handler@U?$await_adapter@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@impl@4@@impl@winrt@@QEAA@XZ @ 0x1802351E4
 * Callers:
 *     ?Release@?$implements_delegate@U?$AsyncOperationCompletedHandler@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@U?$disconnect_aware_handler@U?$await_adapter@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@impl@4@@impl@winrt@@UEAAIXZ @ 0x180240D90 (-Release@-$implements_delegate@U-$AsyncOperationCompletedHandler@UPackageVolume@Deployment@Manag.c)
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800D8E58 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Management::Deployment::PackageVolume>,winrt::impl::disconnect_aware_handler<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>>>>::~implements_delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Management::Deployment::PackageVolume>,winrt::impl::disconnect_aware_handler<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>>>>(
        __int64 a1)
{
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
  return winrt::impl::disconnect_aware_handler<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult,winrt::Windows::Management::Deployment::DeploymentProgress>>>::~disconnect_aware_handler<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult,winrt::Windows::Management::Deployment::DeploymentProgress>>>((__int64 *)(a1 + 8));
}
