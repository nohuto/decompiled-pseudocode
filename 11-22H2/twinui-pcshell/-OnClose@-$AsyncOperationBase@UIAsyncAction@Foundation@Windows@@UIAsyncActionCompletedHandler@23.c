/*
 * XREFs of ?OnClose@?$AsyncOperationBase@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@$1?c_gammaFlashAsyncOperationName@@3QBGB@@UEAAXXZ @ 0x180402AD0
 * Callers:
 *     ??1?$AsyncOperationBase@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@$1?c_gammaFlashAsyncOperationName@@3QBGB@@UEAA@XZ @ 0x1803F90DC (--1-$AsyncOperationBase@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@$1-c_.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1800E15F0 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800E1A80 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 */

void __fastcall AsyncOperationBase<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,&unsigned short const near * const c_gammaFlashAsyncOperationName>::OnClose(
        RTL_SRWLOCK *a1)
{
  PVOID Ptr; // rcx
  PVOID v3; // rcx
  PVOID v4; // rcx
  PVOID v5; // rcx
  PVOID v6; // rcx
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v7, a1 + 25);
  Ptr = a1[20].Ptr;
  if ( Ptr )
  {
    CloseHandle(Ptr);
    a1[20].Ptr = 0LL;
  }
  v3 = a1[21].Ptr;
  if ( v3 )
  {
    CloseHandle(v3);
    a1[21].Ptr = 0LL;
  }
  v4 = a1[22].Ptr;
  if ( v4 )
  {
    CloseHandle(v4);
    a1[22].Ptr = 0LL;
  }
  v5 = a1[23].Ptr;
  if ( v5 )
  {
    CloseHandle(v5);
    a1[23].Ptr = 0LL;
  }
  v6 = a1[24].Ptr;
  if ( v6 )
  {
    CloseHandle(v6);
    a1[24].Ptr = 0LL;
  }
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v7);
}
