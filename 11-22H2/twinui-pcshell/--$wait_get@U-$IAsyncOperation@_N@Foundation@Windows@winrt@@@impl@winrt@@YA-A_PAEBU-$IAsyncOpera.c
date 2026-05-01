/*
 * XREFs of ??$wait_get@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@_N@Foundation@Windows@1@@Z @ 0x18062EC90
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1 @ 0x180242400 (winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvasD_ea_180242400.c)
 *     LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1 @ 0x180245160 (LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0hresult_canceled@winrt@@QEAA@XZ @ 0x1803E2DA0 (--0hresult_canceled@winrt@@QEAA@XZ.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@_N@Foundation@Windows@1@I@Z @ 0x18062EBBC (--$wait_for_completed@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@YA-A_PAEBU-$I.c)
 *     ?Status@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180632628 (-Status@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperationWithProgress@UDeploymentResult.c)
 */

char __fastcall winrt::impl::wait_get<winrt::Windows::Foundation::IAsyncOperation<bool>>(__int64 *a1)
{
  int v2; // eax
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult,winrt::Windows::Management::Deployment::DeploymentProgress>>::Status(a1);
  if ( !v2 )
    v2 = winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<bool>>(a1);
  if ( v2 == 2 )
  {
    winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject);
    throw (winrt::hresult_canceled *)pExceptionObject;
  }
  return winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<bool>,bool>::GetResults(a1);
}
