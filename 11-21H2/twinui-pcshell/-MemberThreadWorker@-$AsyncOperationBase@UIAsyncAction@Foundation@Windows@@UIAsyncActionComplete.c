/*
 * XREFs of ?MemberThreadWorker@?$AsyncOperationBase@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@$1?c_gammaFlashAsyncOperationName@@3QBGB@@IEAAXXZ @ 0x180334BB8
 * Callers:
 *     ?ThreadWorker@?$AsyncOperationBase@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@$1?c_gammaFlashAsyncOperationName@@3QBGB@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18033A930 (-ThreadWorker@-$AsyncOperationBase@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandl.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TryCompletion@?$AsyncOperationBase@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@$1?c_gammaFlashAsyncOperationName@@3QBGB@@QEAAJJ@Z @ 0x18033AD4C (-TryCompletion@-$AsyncOperationBase@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHand.c)
 */

__int64 __fastcall AsyncOperationBase<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,&unsigned short const near * const c_gammaFlashAsyncOperationName>::MemberThreadWorker(
        __int64 a1)
{
  int v2; // eax
  void *v3; // rsi
  int v4; // edi
  int v5; // eax

  v2 = RoInitialize(1LL);
  v3 = *(void **)(a1 + 176);
  v4 = v2;
  *(_DWORD *)(a1 + 168) = v2;
  if ( v2 < 0 )
    AsyncOperationBase<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,&unsigned short const near * const c_gammaFlashAsyncOperationName>::TryCompletion(
      a1,
      (unsigned int)v2);
  SetEvent(v3);
  if ( v4 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
    if ( v5 < 0 || *(_BYTE *)(a1 + 224) )
      AsyncOperationBase<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,&unsigned short const near * const c_gammaFlashAsyncOperationName>::TryCompletion(
        a1,
        (unsigned int)v5);
    RoUninitialize();
  }
  SetEvent(*(HANDLE *)(a1 + 184));
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
}
