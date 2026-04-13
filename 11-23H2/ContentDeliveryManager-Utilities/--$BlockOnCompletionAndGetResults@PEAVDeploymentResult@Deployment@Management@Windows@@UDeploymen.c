/*
 * XREFs of ??$BlockOnCompletionAndGetResults@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@UIDeploymentResult@234@@@YAJPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@Windows@@V?$ComPtrRef@V?$ComPtr@UIDeploymentResult@Deployment@Management@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18007A9E4
 * Callers:
 *     ??R_lambda_5e13a8fad462a1a8d4c2d3d0e04520fb_@@QEBA@XZ @ 0x18007E038 (--R_lambda_5e13a8fad462a1a8d4c2d3d0e04520fb_@@QEBA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationWithProgressCompletedHandler@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@Windows@@U?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@23@@@YAJPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18007C680 (--$WaitForCompletion@U-$IAsyncOperationWithProgressCompletedHandler@PEAVDeploymentResult@Deploym.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall BlockOnCompletionAndGetResults<Windows::Management::Deployment::DeploymentResult *,Windows::Management::Deployment::DeploymentProgress,Windows::Management::Deployment::IDeploymentResult>(
        __int64 a1,
        __int64 *a2)
{
  __int64 result; // rax

  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  result = WaitForCompletion<Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Management::Deployment::DeploymentResult *,Windows::Management::Deployment::DeploymentProgress>,Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult *,Windows::Management::Deployment::DeploymentProgress>>(a1);
  if ( (int)result >= 0 )
    return (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 80LL))(a1, a2);
  return result;
}
