/*
 * XREFs of ?StartThread@?$AsyncOperationBase@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@$1?c_gammaFlashAsyncOperationName@@3QBGB@@QEAAJP6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z1@Z @ 0x180339F90
 * Callers:
 *     ?OnStart@?$AsyncOperationBase@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@$1?c_gammaFlashAsyncOperationName@@3QBGB@@UEAAJXZ @ 0x180335A50 (-OnStart@-$AsyncOperationBase@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall AsyncOperationBase<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,&unsigned short const near * const c_gammaFlashAsyncOperationName>::StartThread(
        _DWORD *pv,
        __int64 a2,
        void *a3)
{
  struct _TP_WORK *ThreadpoolWork; // rdi
  struct _TP_POOL *Threadpool; // rsi
  unsigned int v7; // ebx
  signed int LastError; // eax

  ThreadpoolWork = 0LL;
  pv[42] = 0;
  Threadpool = CreateThreadpool(0LL);
  if ( Threadpool )
  {
    ThreadpoolWork = CreateThreadpoolWork(
                       AsyncOperationBase<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,&unsigned short const near * const c_gammaFlashAsyncOperationName>::ThreadWorker,
                       pv,
                       0LL);
    if ( ThreadpoolWork )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)pv + 8LL))(pv);
      SubmitThreadpoolWork(ThreadpoolWork);
      WaitForSingleObject(a3, 0xFFFFFFFF);
      v7 = pv[42];
LABEL_7:
      CloseThreadpoolWork(ThreadpoolWork);
      goto LABEL_8;
    }
  }
  LastError = GetLastError();
  v7 = LastError;
  if ( LastError > 0 )
    v7 = (unsigned __int16)LastError | 0x80070000;
  if ( ThreadpoolWork )
    goto LABEL_7;
LABEL_8:
  if ( Threadpool )
    CloseThreadpool(Threadpool);
  return v7;
}
