/*
 * XREFs of ?RecordVaPagingHistoryNotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E37F8
 * Callers:
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00A5F18 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryNotifyResidency(
        VIDMM_GLOBAL *this,
        struct _DXGKARG_BUILDPAGINGBUFFER *a2,
        struct _VIDMM_GLOBAL_ALLOC *a3)
{
  __int64 v6; // rdi
  unsigned int v7; // ecx
  void *v8; // rcx
  __int128 v9; // xmm1

  if ( *((_QWORD *)this + 5123) )
  {
    v6 = operator new(56LL, 0x32356956u, 256LL);
    if ( v6 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 41000, 0LL);
      *((_QWORD *)this + 5126) = KeGetCurrentThread();
      v7 = *((_DWORD *)this + 10248);
      if ( v7 == dword_1C006E41C )
      {
        *((_DWORD *)this + 10248) = 0;
        v7 = 0;
      }
      v8 = *(void **)(*((_QWORD *)this + 5123) + 24LL * v7 + 16);
      if ( v8 )
        operator delete(v8);
      *(_OWORD *)v6 = *(_OWORD *)&a2->Transfer.hAllocation;
      v9 = *(_OWORD *)&a2->NotifyResidency.PhysicalAddress.SegmentOffset;
      *(_QWORD *)(v6 + 40) = a3;
      *(_OWORD *)(v6 + 16) = v9;
      *(_DWORD *)(v6 + 32) = *((_DWORD *)a3 + 17) & 0x3F;
      *(_QWORD *)(v6 + 48) = *(_QWORD *)(*((_QWORD *)a3 + 66) + 40LL);
      *(_QWORD *)(*((_QWORD *)this + 5123) + 24LL * *((unsigned int *)this + 10248)) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(*((_QWORD *)this + 5123) + 24LL * *((unsigned int *)this + 10248) + 16) = v6;
      *(_DWORD *)(*((_QWORD *)this + 5123) + 24LL * (unsigned int)(*((_DWORD *)this + 10248))++ + 8) = 10;
      *((_QWORD *)this + 5126) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 41000, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
