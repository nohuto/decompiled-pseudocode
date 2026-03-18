/*
 * XREFs of ?SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z @ 0x1C0018B1C
 * Callers:
 *     VidSchiSignalRegisteredSyncObjects @ 0x1C0018A54 (VidSchiSignalRegisteredSyncObjects.c)
 *     VidSchTimeoutSyncObject @ 0x1C001A0C0 (VidSchTimeoutSyncObject.c)
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x1C0038B38 (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x1C003CE00 (VidSchDestroyPeriodicFrameNotification.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x1C000B960 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiPropagateCrossAdapterSignal @ 0x1C0039328 (VidSchiPropagateCrossAdapterSignal.c)
 */

void __fastcall _VIDSCH_SYNC_OBJECT::SetToAlwaysSignaled(
        _VIDSCH_SYNC_OBJECT *this,
        struct HwQueueStagingList *a2,
        char a3)
{
  bool v5; // zf
  __int64 v6; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( !*((_BYTE *)this + 28) )
  {
    v5 = *((_BYTE *)this + 27) == 0;
    *((_BYTE *)this + 28) = 1;
    if ( v5 || a3 )
    {
      if ( *((_BYTE *)this + 29) )
        **((_QWORD **)this + 8) = -1LL;
      else
        _InterlockedExchangeAdd(*((volatile signed __int32 **)this + 8), 0x3FFFFFFFu);
    }
    VidSchiUnwaitMonitoredFences((__int64)a2, *((_QWORD *)this + 1), 0LL);
    if ( *((_BYTE *)this + 27) )
    {
      if ( a3 )
      {
        v6 = *((_QWORD *)this + 26);
        memset(&LockHandle, 0, sizeof(LockHandle));
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 8), &LockHandle);
        *(_BYTE *)(v6 + 48) = 1;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        VidSchiPropagateCrossAdapterSignal(this);
      }
    }
  }
}
