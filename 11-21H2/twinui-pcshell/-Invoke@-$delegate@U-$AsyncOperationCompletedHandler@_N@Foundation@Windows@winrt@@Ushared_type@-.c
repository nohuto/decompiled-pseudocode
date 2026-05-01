/*
 * XREFs of ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@4@YA@AEBU?$IAsyncOperation@_N@234@I@Z@@impl@winrt@@UEAAHPEAXH@Z @ 0x1802387E0
 * Callers:
 *     <none>
 * Callees:
 *     WINRT_IMPL_SetEvent @ 0x180189C6A (WINRT_IMPL_SetEvent.c)
 */

__int64 __fastcall _Invoke___delegate_U__AsyncOperationCompletedHandler__N_Foundation_Windows_winrt__Ushared_type__1____wait_for_completed_U__IAsyncOperation__N_Foundation_Windows_winrt___impl_4_YA_AEBU__IAsyncOperation__N_234_I_Z__impl_winrt__UEAAHPEAXH_Z(
        __int64 a1,
        __int64 a2,
        int a3)
{
  *(_DWORD *)(a1 + 16) = a3;
  WINRT_IMPL_SetEvent(*(HANDLE *)(a1 + 8));
  return 0LL;
}
