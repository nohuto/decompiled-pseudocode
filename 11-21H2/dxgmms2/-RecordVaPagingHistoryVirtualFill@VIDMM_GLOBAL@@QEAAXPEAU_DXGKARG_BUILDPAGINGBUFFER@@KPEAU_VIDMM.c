/*
 * XREFs of ?RecordVaPagingHistoryVirtualFill@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@KPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E4060
 * Callers:
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C0083B84 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryVirtualFill(
        VIDMM_GLOBAL *this,
        struct _DXGKARG_BUILDPAGINGBUFFER *a2,
        int a3,
        struct _VIDMM_GLOBAL_ALLOC *a4)
{
  __int64 v8; // rdi
  __int64 v9; // rax
  void *v10; // rcx
  __int64 v11; // rax

  if ( *((_QWORD *)this + 5123) )
  {
    v8 = operator new(64LL, 0x32356956u, 256LL);
    if ( v8 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 41000, 0LL);
      *((_QWORD *)this + 5126) = KeGetCurrentThread();
      v9 = *((unsigned int *)this + 10248);
      if ( (_DWORD)v9 == dword_1C006E41C )
      {
        *((_DWORD *)this + 10248) = 0;
        v9 = 0LL;
      }
      v10 = *(void **)(*((_QWORD *)this + 5123) + 24 * v9 + 16);
      if ( v10 )
        operator delete(v10);
      *(_OWORD *)v8 = *(_OWORD *)&a2->Transfer.hAllocation;
      *(_OWORD *)(v8 + 16) = *(_OWORD *)&a2->NotifyResidency.PhysicalAddress.SegmentOffset;
      *(_QWORD *)(v8 + 32) = a2->Transfer.Source.SegmentAddress.QuadPart;
      *(_DWORD *)(v8 + 40) = a3;
      *(_QWORD *)(v8 + 48) = a4;
      if ( a4 )
        v11 = *(_QWORD *)(*((_QWORD *)a4 + 66) + 40LL);
      else
        v11 = 0LL;
      *(_QWORD *)(v8 + 56) = v11;
      *(_QWORD *)(*((_QWORD *)this + 5123) + 24LL * *((unsigned int *)this + 10248)) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(*((_QWORD *)this + 5123) + 24LL * *((unsigned int *)this + 10248) + 16) = v8;
      *(_DWORD *)(*((_QWORD *)this + 5123) + 24LL * (unsigned int)(*((_DWORD *)this + 10248))++ + 8) = 6;
      *((_QWORD *)this + 5126) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 41000, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
