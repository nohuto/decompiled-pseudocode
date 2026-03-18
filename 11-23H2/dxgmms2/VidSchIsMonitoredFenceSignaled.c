/*
 * XREFs of VidSchIsMonitoredFenceSignaled @ 0x1C00051A0
 * Callers:
 *     ?IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C00867C4 (-IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0095820 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C00959C0 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C0097B70 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C00E3254 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall VidSchIsMonitoredFenceSignaled(__int64 a1, unsigned __int64 a2)
{
  KSPIN_LOCK *v4; // rcx
  unsigned __int64 *v5; // rax
  bool v6; // bl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = (KSPIN_LOCK *)(*(_QWORD *)(a1 + 8) + 1728LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(v4, &LockHandle);
  if ( *(_BYTE *)(a1 + 28) )
  {
    v6 = 1;
  }
  else
  {
    v5 = *(unsigned __int64 **)(a1 + 64);
    if ( *(_BYTE *)(a1 + 29) )
      v6 = *v5 >= a2;
    else
      v6 = *(_DWORD *)v5 - (int)a2 >= 0;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v6;
}
