/*
 * XREFs of ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@4@YA@AEBU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@234@I@Z@@impl@winrt@@UEAAHPEAXH@Z @ 0x180043AC0
 * Callers:
 *     <none>
 * Callees:
 *     WINRT_IMPL_SetEvent @ 0x180189C6A (WINRT_IMPL_SetEvent.c)
 */

__int64 __fastcall _Invoke___delegate_U__AsyncOperationCompletedHandler_UWindowTabDataModel_Shell_UI_Internal_Windows_winrt___Foundation_Windows_winrt__Ushared_type__1____wait_for_completed_U__IAsyncOperation_UWindowTabDataModel_Shell_UI_Internal_Windows_winrt___Foundation_Windows_winrt___impl_4_YA_AEBU__IAsyncOperation_UWindowTabDataModel_Shell_UI_Internal_Windows_winrt___234_I_Z__impl_winrt__UEAAHPEAXH_Z(
        __int64 a1,
        __int64 a2,
        int a3)
{
  *(_DWORD *)(a1 + 16) = a3;
  WINRT_IMPL_SetEvent(*(HANDLE *)(a1 + 8));
  return 0LL;
}
