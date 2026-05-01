/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_f9dc8761ee54d92b524f30b2e209fb0b_@@CA@PEAX@Z @ 0x18022E530
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x180190BA0 (--0-$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Q.c)
 *     ?cancel_asynchronously@?$await_adapter@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@@impl@winrt@@CA?AUfire_and_forget@3@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@3@@Z @ 0x180249568 (-cancel_asynchronously@-$await_adapter@U-$IAsyncOperationWithProgress@UDeploymentResult@Deployme.c)
 */

__int64 __fastcall _lambda_f9dc8761ee54d92b524f30b2e209fb0b_::_lambda_invoker_cdecl_(_QWORD **a1)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF

  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>(
    (winrt::Windows::Foundation::IUnknown *)&v2,
    a1[1]);
  return winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult,winrt::Windows::Management::Deployment::DeploymentProgress>>::cancel_asynchronously(&v2);
}
