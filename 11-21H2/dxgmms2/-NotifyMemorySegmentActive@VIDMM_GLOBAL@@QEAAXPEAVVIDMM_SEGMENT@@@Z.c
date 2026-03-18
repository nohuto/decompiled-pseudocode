/*
 * XREFs of ?NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C002DCFC
 * Callers:
 *     ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1C009BD90 (-ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@.c)
 *     ?ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00EC1C0 (-ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0002224 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C00B79C0 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyMemorySegmentActive(VIDMM_GLOBAL *this, struct VIDMM_SEGMENT *a2)
{
  char *v2; // rbx
  __int64 v3; // rdi
  __int64 v6; // rdi
  char v7; // r14
  unsigned int v8; // ebx
  __int64 v9; // r8
  VIDMM_SEGMENT *v10; // rcx
  VIDMM_SEGMENT *v11; // rcx
  char v12; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = (char *)this + 41072;
  v3 = 1584LL * *((unsigned int *)a2 + 95);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = *((_QWORD *)this + 5028) + v3;
  v7 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 5134, &LockHandle);
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  v8 = *(_DWORD *)(v6 + 432);
  *(_DWORD *)(v6 + 432) = v8 | (1 << *((_DWORD *)a2 + 5));
  *((_QWORD *)this + 5135) = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !v8 && *(_DWORD *)(v6 + 24) )
  {
    do
    {
      v10 = *(VIDMM_SEGMENT **)(*((_QWORD *)this + 464) + 8LL * (v8 + *(_DWORD *)(v6 + 20)));
      if ( *((_DWORD *)v10 + 92) != -1
        && (*(_DWORD *)(v6 + 64) == (unsigned int)VIDMM_SEGMENT::DriverId(v10)
         || *(_DWORD *)(v6 + 48) == (unsigned int)VIDMM_SEGMENT::DriverId(v11)) )
      {
        LOBYTE(v9) = 1;
        if ( (*((unsigned int (__fastcall **)(_QWORD, _QWORD, __int64))this + 5018))(
               *((_QWORD *)this + 5019),
               *((unsigned int *)a2 + 92),
               v9) == -1071775466 )
        {
          v12 = *(_BYTE *)(v6 + 436);
          if ( (v12 & 4) != 0 )
          {
            v7 = 1;
            *(_BYTE *)(v6 + 436) = v12 | 0x20;
          }
        }
        *(_BYTE *)(v6 + 436) &= ~0x40u;
      }
      ++v8;
    }
    while ( v8 < *(_DWORD *)(v6 + 24) );
  }
  LOBYTE(v9) = 1;
  (*((void (__fastcall **)(_QWORD, _QWORD, __int64))this + 5018))(
    *((_QWORD *)this + 5019),
    *((unsigned int *)a2 + 92),
    v9);
  if ( (*(_BYTE *)(v6 + 436) & 0x20) != 0 )
  {
    if ( v7 )
      VIDMM_GLOBAL::InitPagingProcessVaSpace(this, *((_DWORD *)a2 + 95), 1u);
  }
}
