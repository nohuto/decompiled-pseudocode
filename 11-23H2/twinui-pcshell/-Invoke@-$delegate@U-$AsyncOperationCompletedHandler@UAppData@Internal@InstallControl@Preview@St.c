/*
 * XREFs of ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@UAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperation@UAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@@impl@4@YA?A_PAEBU?$IAsyncOperation@UAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@234@I@Z@@impl@winrt@@UEAAHPEAXH@Z @ 0x180630DD0
 * Callers:
 *     <none>
 * Callees:
 *     WINRT_IMPL_SetEvent @ 0x1801C7C8A (WINRT_IMPL_SetEvent.c)
 */

__int64 __fastcall _Invoke___delegate_U__AsyncOperationCompletedHandler_UAppData_Internal_InstallControl_Preview_Store_ApplicationModel_Windows_winrt___Foundation_Windows_winrt__Ushared_type__1____wait_for_completed_U__IAsyncOperation_UAppData_Internal_InstallControl_Preview_Store_ApplicationModel_Windows_winrt___Foundation_Windows_winrt___impl_4_YA_A_PAEBU__IAsyncOperation_UAppData_Internal_InstallControl_Preview_Store_ApplicationModel_Windows_winrt___234_I_Z__impl_winrt__UEAAHPEAXH_Z(
        __int64 a1,
        __int64 a2,
        int a3)
{
  *(_DWORD *)(a1 + 16) = a3;
  WINRT_IMPL_SetEvent(*(HANDLE *)(a1 + 8));
  return 0LL;
}
