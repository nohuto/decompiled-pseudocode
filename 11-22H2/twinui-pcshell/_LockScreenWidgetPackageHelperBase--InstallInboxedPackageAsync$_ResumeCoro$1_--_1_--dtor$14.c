/*
 * XREFs of _LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1_::_1_::dtor$14 @ 0x18023E5D3
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$notify_awaiter@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x1802355B8 (--1-$notify_awaiter@U-$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foun.c)
 */

__int64 __fastcall LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync__ResumeCoro_1_::_1_::dtor_14(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 160) = *(_QWORD *)(a2 + 256) + 256LL;
  return winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>>::~notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>>(*(_QWORD *)(a2 + 160));
}
