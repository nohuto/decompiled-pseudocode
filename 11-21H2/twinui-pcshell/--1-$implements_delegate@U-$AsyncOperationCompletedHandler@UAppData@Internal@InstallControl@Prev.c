/*
 * XREFs of ??1?$implements_delegate@U?$AsyncOperationCompletedHandler@UAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperation@UAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@@impl@4@YA@AEBU?$IAsyncOperation@UAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@234@I@Z@@impl@winrt@@QEAA@XZ @ 0x1801C4600
 * Callers:
 *     ?Release@?$implements_delegate@U?$AsyncOperationWithProgressCompletedHandler@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@@impl@4@YA@AEBU?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@234@I@Z@@impl@winrt@@UEAAIXZ @ 0x1801C9E50 (-Release@-$implements_delegate@U-$AsyncOperationWithProgressCompletedHandler@UDeploymentResult@D.c)
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800FA060 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     WINRT_IMPL_CloseHandle @ 0x180189338 (WINRT_IMPL_CloseHandle.c)
 */

int __fastcall __1__implements_delegate_U__AsyncOperationCompletedHandler_UAppData_Internal_InstallControl_Preview_Store_ApplicationModel_Windows_winrt___Foundation_Windows_winrt__Ushared_type__1____wait_for_completed_U__IAsyncOperation_UAppData_Internal_InstallControl_Preview_Store_ApplicationModel_Windows_winrt___Foundation_Windows_winrt___impl_4_YA_AEBU__IAsyncOperation_UAppData_Internal_InstallControl_Preview_Store_ApplicationModel_Windows_winrt___234_I_Z__impl_winrt__QEAA_XZ(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int result; // eax
  void *v6; // rcx

  result = winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock, a2, a3, a4);
  v6 = *(void **)(a1 + 8);
  if ( v6 )
  {
    result = WINRT_IMPL_CloseHandle(v6);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  return result;
}
