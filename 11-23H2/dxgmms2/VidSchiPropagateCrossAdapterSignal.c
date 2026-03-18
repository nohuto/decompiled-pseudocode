/*
 * XREFs of VidSchiPropagateCrossAdapterSignal @ 0x1C003B354
 * Callers:
 *     ?SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z @ 0x1C0001980 (-SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C0007250 (VidSchiCompleteSignalSyncObject.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C001C264 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A870 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VidSchiPropagateCrossAdapterSignal(_QWORD *a1)
{
  KSPIN_LOCK *v2; // rcx
  _QWORD **v3; // rdi
  _QWORD *i; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = (KSPIN_LOCK *)(a1[26] + 8LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v2, &LockHandle);
  v3 = (_QWORD **)(a1[26] + 16LL);
  for ( i = *v3; i != v3; i = (_QWORD *)*i )
  {
    if ( i - 18 != a1 )
      ((void (*)(void))i[9])();
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
