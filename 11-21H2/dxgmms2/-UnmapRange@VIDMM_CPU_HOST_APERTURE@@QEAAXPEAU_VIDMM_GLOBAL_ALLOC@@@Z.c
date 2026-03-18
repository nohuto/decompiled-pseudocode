/*
 * XREFs of ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C001A140
 * Callers:
 *     ?AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C001A46C (-AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0084720 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0084CC0 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z @ 0x1C00A1CA8 (-FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z.c)
 *     ?GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z @ 0x1C00A55BC (-GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z.c)
 *     ?LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z @ 0x1C00D7CA0 (-LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z.c)
 *     ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x1C00E914C (-PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEA_K@Z.c)
 *     ?InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00EAD60 (-InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0002224 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_CPU_HOST_APERTURE::UnmapRange(VIDMM_CPU_HOST_APERTURE *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  _QWORD *v2; // rax
  __int64 v4; // r8
  _QWORD *v6; // rdx
  void *v7; // rdi
  __int64 v8; // rdx
  VIDMM_SEGMENT *v9; // rcx
  __int64 v10; // rcx
  _QWORD v11[2]; // [rsp+30h] [rbp-28h] BYREF
  __int16 v12; // [rsp+40h] [rbp-18h]
  __int16 v13; // [rsp+42h] [rbp-16h]
  int v14; // [rsp+44h] [rbp-14h]

  v2 = (_QWORD *)((char *)a2 + 472);
  v4 = *((_QWORD *)a2 + 59);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v4 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 472)
    || (v6 = (_QWORD *)*((_QWORD *)a2 + 60), (_QWORD *)*v6 != v2) )
  {
    __fastfail(3u);
  }
  *v6 = v4;
  *(_QWORD *)(v4 + 8) = v6;
  *v2 = 0LL;
  *((_QWORD *)a2 + 60) = 0LL;
  v7 = (void *)*((_QWORD *)a2 + 58);
  v8 = *(unsigned int *)(*((_QWORD *)this + 5) + 4LL * *((unsigned int *)a2 + 123));
  v14 = 0;
  v9 = (VIDMM_SEGMENT *)*((_QWORD *)this + 6);
  v11[0] = v8;
  v11[1] = v7;
  v12 = VIDMM_SEGMENT::DriverId(v9);
  v13 = *(_WORD *)(v10 + 380);
  if ( ((int (__fastcall *)(_QWORD, _QWORD *))DxgCoreInterface[52])(
         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) + 24LL) + 2800LL),
         v11) < 0 )
    WdLogSingleEntry5(0LL, 270LL, 46LL, this, a2, v11);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  *((_QWORD *)a2 + 58) = 0LL;
}
