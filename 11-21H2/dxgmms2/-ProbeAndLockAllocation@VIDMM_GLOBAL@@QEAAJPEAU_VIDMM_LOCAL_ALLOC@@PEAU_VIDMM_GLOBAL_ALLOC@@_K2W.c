/*
 * XREFs of ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C0085D80
 * Callers:
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0085AC8 (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0091450 (-ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEA.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C00927A8 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z @ 0x1C00A5300 (-TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z.c)
 *     ?LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C00A8840 (-LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z.c)
 *     ?LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C00E7BD0 (-LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C007BE50 (-VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ProbeAndLockAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_LOCAL_ALLOC *a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        enum _LOCK_OPERATION a6,
        struct VIDMM_SEGMENT *a7,
        unsigned __int8 a8)
{
  __int64 v8; // rsi
  struct _KTHREAD *CurrentThread; // rax
  bool v13; // bp
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v15; // rbx
  unsigned int v16; // edi
  struct _VIDMM_MDL *v18; // rax
  LARGE_INTEGER v19; // [rsp+40h] [rbp-38h]

  v8 = *(_QWORD *)this;
  CurrentThread = KeGetCurrentThread();
  v13 = CurrentThread == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL);
  if ( CurrentThread == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    ++*(_DWORD *)(v8 + 356);
    v15 = PerformanceCounter;
  }
  else
  {
    v15 = v19;
  }
  if ( *((_QWORD *)a2 + 3) )
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, unsigned __int64, unsigned __int64, int, struct VIDMM_SEGMENT *, unsigned __int8))(**(_QWORD **)(*((_QWORD *)a2 + 1) + 24LL) + 32LL))(
            *(_QWORD *)(*((_QWORD *)a2 + 1) + 24LL),
            a3,
            a4,
            a5,
            2,
            a7,
            a8);
  }
  else
  {
    v18 = VidMmiProbeAndLockAllocation(
            a3,
            a4,
            a5,
            (LOCK_OPERATION)(~(unsigned __int8)(*((_DWORD *)a3 + 17) >> 11) & 2),
            a7,
            a2);
    if ( v18 )
    {
      if ( a8 )
        *((_QWORD *)a2 + 11) = v18;
      else
        *((_QWORD *)a2 + 10) = v18;
      v16 = 0;
    }
    else
    {
      v16 = -1071775487;
    }
  }
  if ( v13 )
    *(_QWORD *)(v8 + 304) += *(_QWORD *)&KeQueryPerformanceCounter(0LL) - v15.QuadPart;
  return v16;
}
