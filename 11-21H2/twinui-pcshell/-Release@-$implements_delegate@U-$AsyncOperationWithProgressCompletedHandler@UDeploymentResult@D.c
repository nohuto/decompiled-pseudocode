/*
 * XREFs of ?Release@?$implements_delegate@U?$AsyncOperationWithProgressCompletedHandler@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@@impl@4@YA@AEBU?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@234@I@Z@@impl@winrt@@UEAAIXZ @ 0x1801C9E50
 * Callers:
 *     <none>
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800FA060 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1?$implements_delegate@U?$AsyncOperationCompletedHandler@UAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperation@UAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@@impl@4@YA@AEBU?$IAsyncOperation@UAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@234@I@Z@@impl@winrt@@QEAA@XZ @ 0x1801C4600 (--1-$implements_delegate@U-$AsyncOperationCompletedHandler@UAppData@Internal@InstallControl@Prev.c)
 */

__int64 __fastcall _Release___implements_delegate_U__AsyncOperationWithProgressCompletedHandler_UDeploymentResult_Deployment_Management_Windows_winrt__UDeploymentProgress_2345__Foundation_Windows_winrt__Ushared_type__1____wait_for_completed_U__IAsyncOperationWithProgress_UDeploymentResult_Deployment_Management_Windows_winrt__UDeploymentProgress_2345__Foundation_Windows_winrt___impl_4_YA_AEBU__IAsyncOperationWithProgress_UDeploymentResult_Deployment_Management_Windows_winrt__UDeploymentProgress_2345__234_I_Z__impl_winrt__UEAAIXZ(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  unsigned int v6; // edi
  __int64 v7; // r8
  __int64 v8; // r9

  v6 = winrt::impl::atomic_ref_count::operator--(a1 + 6, a2, a3, a4);
  if ( !v6 && a1 )
  {
    __1__implements_delegate_U__AsyncOperationCompletedHandler_UAppData_Internal_InstallControl_Preview_Store_ApplicationModel_Windows_winrt___Foundation_Windows_winrt__Ushared_type__1____wait_for_completed_U__IAsyncOperation_UAppData_Internal_InstallControl_Preview_Store_ApplicationModel_Windows_winrt___Foundation_Windows_winrt___impl_4_YA_AEBU__IAsyncOperation_UAppData_Internal_InstallControl_Preview_Store_ApplicationModel_Windows_winrt___234_I_Z__impl_winrt__QEAA_XZ(
      (__int64)a1,
      v5,
      v7,
      v8);
    operator delete((void *)a1);
  }
  return v6;
}
