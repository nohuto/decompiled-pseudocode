/*
 * XREFs of ?Shutdown@NotificationDispatcher@@QEAAXXZ @ 0x18012F2FC
 * Callers:
 *     ?UnsubscribeFromServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180143220 (-UnsubscribeFromServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?Shutdown@ApplicationViewManagerVisibilityDebouncer@@UEAAJXZ @ 0x1801BC240 (-Shutdown@ApplicationViewManagerVisibilityDebouncer@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1800E15F0 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800E1A80 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 */

void __fastcall NotificationDispatcher::Shutdown(RTL_SRWLOCK *this)
{
  HWND Ptr; // rbx
  __int64 *v3; // rbp
  char *v4; // rsi
  __int64 *v5; // rbx
  RTL_SRWLOCK *v6; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v6, this + 10);
  Ptr = (HWND)this[5].Ptr;
  v3 = (__int64 *)this[6].Ptr;
  v4 = (char *)this[7].Ptr;
  this[5].Ptr = 0LL;
  this[6].Ptr = 0LL;
  this[8].Ptr = 0LL;
  this[7].Ptr = 0LL;
  this[9].Ptr = 0LL;
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v6);
  DestroyWindow(Ptr);
  if ( v3 )
  {
    if ( v4 )
    {
      v5 = v3;
      do
      {
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v5++);
        --v4;
      }
      while ( v4 );
    }
    CoTaskMemFree(v3);
  }
}
