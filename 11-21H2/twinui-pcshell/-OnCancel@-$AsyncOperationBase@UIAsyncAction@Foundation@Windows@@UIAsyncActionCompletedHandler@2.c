/*
 * XREFs of ?OnCancel@?$AsyncOperationBase@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@$1?c_gammaFlashAsyncOperationName@@3QBGB@@UEAAXXZ @ 0x180335040
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall AsyncOperationBase<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,&unsigned short const near * const c_gammaFlashAsyncOperationName>::OnCancel(
        HANDLE *a1)
{
  __int64 v2; // rdx

  SetEvent(a1[24]);
  LOBYTE(v2) = 1;
  (*((void (__fastcall **)(HANDLE *, __int64))*(a1 - 2) + 10))(a1 - 2, v2);
  (*((void (__fastcall **)(HANDLE *))*a1 + 16))(a1);
  return (*((__int64 (__fastcall **)(HANDLE *))*(a1 - 2) + 2))(a1 - 2);
}
