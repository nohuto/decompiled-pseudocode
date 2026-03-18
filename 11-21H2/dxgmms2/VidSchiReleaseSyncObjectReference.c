/*
 * XREFs of VidSchiReleaseSyncObjectReference @ 0x1C000B770
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0005C90 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C00087D0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C000B960 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000EA80 (VidSchiUnwaitWaitQueuePacket.c)
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C000FE70 (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VI.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0010190 (VidSchiCompleteFlipEntry.c)
 *     VidSchiCompleteSignalCommmand @ 0x1C0019138 (VidSchiCompleteSignalCommmand.c)
 *     ?VidSchiReleaseFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1C0035580 (-VidSchiReleaseFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x1C003CE00 (VidSchDestroyPeriodicFrameNotification.c)
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C003F638 (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C0042100 (VidSchSubmitSignalToHwQueue.c)
 *     VidSchDestroySyncObject @ 0x1C0099880 (VidSchDestroySyncObject.c)
 *     ??1VIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAA@XZ @ 0x1C00D4BA0 (--1VIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAA@XZ.c)
 * Callees:
 *     ?FreeFenceStorageSlot@VIDMM_GLOBAL@@SAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z @ 0x1C0017658 (-FreeFenceStorageSlot@VIDMM_GLOBAL@@SAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VidSchiReleaseSyncObjectReference(char *P, __int64 a2)
{
  int v3; // eax
  KSPIN_LOCK *v4; // rcx
  __int64 v5; // rdx
  char **v6; // rax
  char *v7; // rsi
  KSPIN_LOCK *v8; // rcx
  __int64 v9; // rcx
  char **v10; // rax
  void *v11; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v13; // [rsp+38h] [rbp-20h] BYREF

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 9, 0xFFFFFFFF) == 1 )
  {
    v3 = *((_DWORD *)P + 12);
    if ( v3 >= 3 )
    {
      if ( v3 == 3 )
      {
        if ( P[31] )
        {
          if ( P[32] )
          {
            LOBYTE(a2) = 1;
            ((void (__fastcall *)(_QWORD, __int64))DxgCoreInterface[68])(*((_QWORD *)P + 8), a2);
          }
          ((void (__fastcall *)(_QWORD))DxgCoreInterface[92])(*((_QWORD *)P + 8));
          *((_QWORD *)P + 8) = 0LL;
        }
        else
        {
          ObfDereferenceObject(*((PVOID *)P + 7));
          *((_QWORD *)P + 7) = 0LL;
        }
      }
      else if ( (unsigned int)(v3 - 4) <= 1 && !*((_QWORD *)P + 2) )
      {
        VIDMM_GLOBAL::FreeFenceStorageSlot((struct VIDMM_MONITORED_FENCE_STORAGE *)(P + 56), P[24] != 0);
      }
    }
    if ( !P[27] )
      goto LABEL_4;
    v4 = (KSPIN_LOCK *)(*((_QWORD *)P + 1) + 3184LL);
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock(v4, &LockHandle);
    v5 = *((_QWORD *)P + 24);
    if ( *(char **)(v5 + 8) == P + 192 )
    {
      v6 = (char **)*((_QWORD *)P + 25);
      if ( *v6 == P + 192 )
      {
        *v6 = (char *)v5;
        *(_QWORD *)(v5 + 8) = v6;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v7 = P + 144;
        if ( !*((_QWORD *)P + 18) )
          goto LABEL_20;
        v8 = (KSPIN_LOCK *)(*((_QWORD *)P + 26) + 8LL);
        memset(&v13, 0, sizeof(v13));
        KeAcquireInStackQueuedSpinLock(v8, &v13);
        v9 = *(_QWORD *)v7;
        if ( *(char **)(*(_QWORD *)v7 + 8LL) == v7 )
        {
          v10 = (char **)*((_QWORD *)P + 19);
          if ( *v10 == v7 )
          {
            *v10 = (char *)v9;
            *(_QWORD *)(v9 + 8) = v10;
            KeReleaseInStackQueuedSpinLock(&v13);
LABEL_20:
            v11 = (void *)*((_QWORD *)P + 26);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)v11, 0xFFFFFFFF) == 1 )
              ExFreePoolWithTag(v11, 0);
LABEL_4:
            ExFreePoolWithTag(P, 0);
            return;
          }
        }
      }
    }
    __fastfail(3u);
  }
}
