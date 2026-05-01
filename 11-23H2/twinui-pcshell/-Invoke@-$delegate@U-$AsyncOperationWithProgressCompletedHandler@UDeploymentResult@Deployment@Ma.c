/*
 * XREFs of ?Invoke@?$delegate@U?$AsyncOperationWithProgressCompletedHandler@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@U?$disconnect_aware_handler@U?$await_adapter@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@@impl@winrt@@@impl@4@@impl@winrt@@UEAAHPEAXH@Z @ 0x18023E810
 * Callers:
 *     <none>
 * Callees:
 *     ?Complete@?$disconnect_aware_handler@U?$await_adapter@U?$IAsyncOperationWithProgress@II@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@AEAAXXZ @ 0x1802383D4 (-Complete@-$disconnect_aware_handler@U-$await_adapter@U-$IAsyncOperationWithProgress@II@Foundati.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::AsyncOperationWithProgressCompletedHandler<winrt::Windows::Management::Deployment::DeploymentResult,winrt::Windows::Management::Deployment::DeploymentProgress>,winrt::impl::disconnect_aware_handler<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult,winrt::Windows::Management::Deployment::DeploymentProgress>>>>::Invoke(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 result; // rax
  int v6; // [rsp+40h] [rbp+18h] BYREF

  v3 = a1 + 8;
  v4 = *(_QWORD *)(v3 + 16);
  *(_DWORD *)(v4 + 16) = a3;
  try
  {
    winrt::impl::disconnect_aware_handler<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int>>>::Complete(v3);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v6);
  }
  return result;
}
