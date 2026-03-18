/*
 * XREFs of ?AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C0003674
 * Callers:
 *     ?AllocateFenceStorageSlot@VIDMM_GLOBAL@@SAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N11_K1@Z @ 0x1C008E020 (-AllocateFenceStorageSlot@VIDMM_GLOBAL@@SAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N11_K1@Z.c)
 * Callees:
 *     ?FindAvailableFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@AEAA_NPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C0003760 (-FindAvailableFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@AEAA_NPEAUVIDMM_MONITORED_FENCE_STOR.c)
 *     ?AssignFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C00037EC (-AssignFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0005F60 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_GVIDMM_FENCE_STORAGE_PAGE@@QEAAPEAXI@Z @ 0x1C0017460 (--_GVIDMM_FENCE_STORAGE_PAGE@@QEAAPEAXI@Z.c)
 *     ??0VIDMM_FENCE_STORAGE_PAGE@@QEAA@AEAVVIDMM_PROCESS_FENCE_STORAGE@@@Z @ 0x1C00B3CC4 (--0VIDMM_FENCE_STORAGE_PAGE@@QEAA@AEAVVIDMM_PROCESS_FENCE_STORAGE@@@Z.c)
 *     ?Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C00B3D40 (-Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS_FENCE_STORAGE::AllocateFenceStorageSlot(
        KSPIN_LOCK *this,
        struct VIDMM_MONITORED_FENCE_STORAGE *a2)
{
  VIDMM_FENCE_STORAGE_PAGE *v5; // rax
  VIDMM_FENCE_STORAGE_PAGE *v6; // rax
  VIDMM_FENCE_STORAGE_PAGE *v7; // rbx
  int v8; // edi
  VIDMM_FENCE_STORAGE_PAGE **v9; // rax
  KSPIN_LOCK v10; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( VIDMM_PROCESS_FENCE_STORAGE::FindAvailableFenceStorageSlot((VIDMM_PROCESS_FENCE_STORAGE *)this, a2) )
    return 0LL;
  v5 = (VIDMM_FENCE_STORAGE_PAGE *)operator new(176LL, 875850070LL, 64LL);
  if ( !v5 )
    return 3221225495LL;
  v6 = VIDMM_FENCE_STORAGE_PAGE::VIDMM_FENCE_STORAGE_PAGE(v5, (struct VIDMM_PROCESS_FENCE_STORAGE *)this);
  v7 = v6;
  if ( !v6 )
    return 3221225495LL;
  v8 = VIDMM_FENCE_STORAGE_PAGE::Init(v6, 0LL);
  if ( v8 >= 0 )
  {
    VIDMM_FENCE_STORAGE_PAGE::AssignFenceStorageSlot(v7, a2);
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock(this + 7, &LockHandle);
    v9 = (VIDMM_FENCE_STORAGE_PAGE **)(this + 3);
    v10 = this[3];
    if ( *(KSPIN_LOCK **)(v10 + 8) != this + 3 )
      __fastfail(3u);
    *(_QWORD *)v7 = v10;
    *((_QWORD *)v7 + 1) = v9;
    *(_QWORD *)(v10 + 8) = v7;
    *v9 = v7;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
  VIDMM_FENCE_STORAGE_PAGE::`scalar deleting destructor'(v7, 1u);
  return (unsigned int)v8;
}
