/*
 * XREFs of ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z @ 0x1C00EF728
 * Callers:
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C009CB7C (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?FreeVmMapping@VIDMM_FENCE_STORAGE_PAGE@@QEAAXXZ @ 0x1C00B21BC (-FreeVmMapping@VIDMM_FENCE_STORAGE_PAGE@@QEAAXXZ.c)
 *     ??1VIDMM_RECYCLE_BLOCK@@QEAA@XZ @ 0x1C00B23EC (--1VIDMM_RECYCLE_BLOCK@@QEAA@XZ.c)
 *     ?UnlockParavirtualizedAllocationOnHost@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E8220 (-UnlockParavirtualizedAllocationOnHost@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     UnmapChildMmioSpace @ 0x1C002D004 (UnmapChildMmioSpace.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C00C2D44 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1C00EEE3C (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 */

void __fastcall VIDMM_PROCESS::UnmapHostAddressesFromGuest(VIDMM_PROCESS *this, void *a2, __int64 a3)
{
  __int64 v3; // rbx
  int v5; // eax
  __int64 v6; // rax
  VIDMM_PROCESS *v7; // rcx
  struct _KTHREAD **CpuVisibleBufferAllocator; // rsi
  __int64 v9; // r8
  int v10; // ecx
  __int64 v11; // rax

  v3 = *((_QWORD *)this + 4);
  v5 = *(_DWORD *)(v3 + 424);
  if ( (v5 & 0x100) != 0 )
  {
    v3 = *(_QWORD *)(v3 + 608);
  }
  else if ( (v5 & 0x80u) == 0 )
  {
    return;
  }
  if ( v3 )
  {
    v6 = *(_QWORD *)(v3 + 64);
    v7 = v6 ? *(VIDMM_PROCESS **)(v6 + 8) : 0LL;
    CpuVisibleBufferAllocator = (struct _KTHREAD **)VIDMM_PROCESS::GetCpuVisibleBufferAllocator(v7);
    if ( CpuVisibleBufferAllocator )
    {
      UnmapChildMmioSpace();
      v10 = *(_DWORD *)(v3 + 424);
      if ( (v10 & 0x100) != 0 )
        v11 = *(_QWORD *)(v3 + 608);
      else
        v11 = v3 & -(__int64)((v10 & 0x80u) != 0);
      CVirtualAddressAllocator::FreeVirtualAddressRange(
        CpuVisibleBufferAllocator,
        (struct _RTL_BALANCED_NODE *)(a3 - *(_QWORD *)(*(_QWORD *)(v11 + 608) + 256LL)),
        v9);
    }
  }
}
