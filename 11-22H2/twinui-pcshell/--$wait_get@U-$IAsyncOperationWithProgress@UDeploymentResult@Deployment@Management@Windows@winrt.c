/*
 * XREFs of ??$wait_get@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@1@@Z @ 0x180694E60
 * Callers:
 *     ?get@?$consume_Windows_Foundation_IAsyncOperationWithProgress@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@UDeploymentResult@Deployment@Management@34@UDeploymentProgress@6734@@impl@winrt@@QEBA@XZ @ 0x180698E84 (-get@-$consume_Windows_Foundation_IAsyncOperationWithProgress@U-$IAsyncOperationWithProgress@UDe.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0hresult_canceled@winrt@@QEAA@XZ @ 0x1803E2DA0 (--0hresult_canceled@winrt@@QEAA@XZ.c)
 *     ?Status@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180632628 (-Status@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperationWithProgress@UDeploymentResult.c)
 *     ??$wait_for_completed@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@1@I@Z @ 0x180694CBC (--$wait_for_completed@U-$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Win.c)
 *     ?GetResults@?$consume_Windows_Foundation_IAsyncOperationWithProgress@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@UDeploymentResult@Deployment@Management@34@UDeploymentProgress@6734@@impl@winrt@@QEBA@XZ @ 0x180696B6C (-GetResults@-$consume_Windows_Foundation_IAsyncOperationWithProgress@U-$IAsyncOperationWithProgr.c)
 */

__int64 __fastcall winrt::impl::wait_get<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult,winrt::Windows::Management::Deployment::DeploymentProgress>>(
        __int64 a1,
        __int64 *a2)
{
  int v4; // eax
  _BYTE pExceptionObject[32]; // [rsp+28h] [rbp-20h] BYREF

  v4 = winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult,winrt::Windows::Management::Deployment::DeploymentProgress>>::Status(a2);
  if ( !v4 )
    v4 = winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult,winrt::Windows::Management::Deployment::DeploymentProgress>>((__int64)a2);
  if ( v4 == 2 )
  {
    winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject);
    throw (winrt::hresult_canceled *)pExceptionObject;
  }
  winrt::impl::consume_Windows_Foundation_IAsyncOperationWithProgress<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult,winrt::Windows::Management::Deployment::DeploymentProgress>,winrt::Windows::Management::Deployment::DeploymentResult,winrt::Windows::Management::Deployment::DeploymentProgress>::GetResults(
    a2,
    a1);
  return a1;
}
