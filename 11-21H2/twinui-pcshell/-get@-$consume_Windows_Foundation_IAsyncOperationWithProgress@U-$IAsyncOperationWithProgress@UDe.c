/*
 * XREFs of ?get@?$consume_Windows_Foundation_IAsyncOperationWithProgress@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@UDeploymentResult@Deployment@Management@34@UDeploymentProgress@6734@@impl@winrt@@QEBA?AUDeploymentResult@Deployment@Management@Windows@3@XZ @ 0x1801CF54C
 * Callers:
 *     _anonymous_namespace_::RepairWebExperiencePackage$_ResumeCoro$1 @ 0x1801CA220 (_anonymous_namespace_--RepairWebExperiencePackage$_ResumeCoro$1.c)
 * Callees:
 *     ??$wait_get@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@@impl@winrt@@YA?AUDeploymentResult@Deployment@Management@Windows@1@AEBU?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@51@@Z @ 0x1801C3CF8 (--$wait_get@U-$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt.c)
 */

winrt *__fastcall winrt::impl::consume_Windows_Foundation_IAsyncOperationWithProgress<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult,winrt::Windows::Management::Deployment::DeploymentProgress>,winrt::Windows::Management::Deployment::DeploymentResult,winrt::Windows::Management::Deployment::DeploymentProgress>::get(
        __int64 *a1,
        winrt *a2)
{
  winrt::impl::wait_get<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult,winrt::Windows::Management::Deployment::DeploymentProgress>>(
    a2,
    a1);
  return a2;
}
