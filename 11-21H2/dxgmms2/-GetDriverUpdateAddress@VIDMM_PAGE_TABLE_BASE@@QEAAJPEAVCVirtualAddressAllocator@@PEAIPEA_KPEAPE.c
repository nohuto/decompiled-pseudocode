/*
 * XREFs of ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C008CDE0
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C008AF00 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C008CEB0 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C00A0030 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C00A1B20 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C00E4968 (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_.c)
 * Callees:
 *     ?GetGpuMmuCaps@ADAPTER_RENDER@@QEBAPEBUDXGADAPTER_GPUMMUCAPS@@I@Z @ 0x1C00020F8 (-GetGpuMmuCaps@ADAPTER_RENDER@@QEBAPEBUDXGADAPTER_GPUMMUCAPS@@I@Z.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0002698 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ @ 0x1C001C714 (-GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C00839CC (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C00A2358 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z @ 0x1C00A55BC (-GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z.c)
 *     ?GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z @ 0x1C00A5CA8 (-GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C00A8498 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
        VIDMM_PAGE_TABLE_BASE *this,
        struct CVirtualAddressAllocator *a2,
        unsigned int *a3,
        unsigned __int64 *a4,
        void **a5)
{
  __int64 v5; // rbp
  void *v6; // rdi
  __int64 v8; // r9
  __int64 v11; // rcx
  unsigned int v12; // r8d
  int v13; // eax
  void *CpuVisibleAddress; // rax
  unsigned int v16; // ecx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // r8
  unsigned int v20; // r13d
  int v21; // r12d
  struct _MDL *SegmentAddressMdl; // rax
  struct _VIDMM_GLOBAL_ALLOC *v23; // r9
  __int64 v24; // rcx
  struct VIDMM_MAPPED_VA_RANGE *v25; // r15
  unsigned int v26; // edx
  __int64 *v27; // rcx
  __int64 v28; // rax
  __int64 **v29; // rdx
  __int64 v30; // rdx
  void *v31; // [rsp+90h] [rbp+8h] BYREF
  CVirtualAddressAllocator *v32; // [rsp+98h] [rbp+10h]

  v5 = *((_QWORD *)a2 + 11);
  v6 = 0LL;
  v31 = 0LL;
  v8 = *((_QWORD *)this + 2);
  v11 = *(_QWORD *)(v8 + 120);
  if ( (*(_BYTE *)(v5 + 40936) & 0x10) == 0 )
  {
    v12 = *(_DWORD *)this;
    v13 = (int)(*(_DWORD *)this << 16) >> 29;
    if ( v13 )
    {
      if ( v13 == 1 )
      {
        v16 = *(_DWORD *)this;
        *a3 = 0;
        *a4 = 0LL;
        v17 = (v12 >> 7) & 0x1F;
        v32 = *(CVirtualAddressAllocator **)(v5 + 8 * v17 + 40416);
        if ( v32 == a2 )
        {
          *a4 = VIDMM_ALLOC::GetGpuVirtualAddress(*((VIDMM_ALLOC **)this + 3), (v16 >> 7) & 0x1F);
        }
        else
        {
          v18 = *((_QWORD *)a2 + 15);
          v19 = 32 * v17;
          if ( (v16 & 7) != 0 )
            v20 = *(_DWORD *)(v19 + v18 + 24);
          else
            v20 = *(_DWORD *)(v19 + v18 + 28);
          v21 = 0;
          while ( 1 )
          {
            LOBYTE(v31) = 0;
            SegmentAddressMdl = VIDMM_PAGE_TABLE_BASE::GetSegmentAddressMdl(this);
            v23 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)this + 2);
            v24 = (*(_DWORD *)(*((_QWORD *)v23 + 15) + 80LL) & 0x1000) != 0 ? 0LL : *((__int64 *)v23 + 16) >> 12;
            v25 = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                    (VIDMM_PAGING_PROCESS *)(v5 + 40384),
                    (*(_DWORD *)this >> 7) & 0x1F,
                    *((_QWORD *)v23 + 2),
                    v23,
                    0LL,
                    v20,
                    v24 << 12,
                    SegmentAddressMdl,
                    (unsigned __int8 *)&v31,
                    0LL);
            if ( v25 )
              break;
            if ( !v21 )
            {
              VIDMM_GLOBAL::WaitForAllPagingEnginesIdle((VIDMM_GLOBAL *)v5, (*(_DWORD *)this >> 7) & 0x1F);
              VIDMM_GLOBAL::FlushScratchGpuVaRanges((VIDMM_GLOBAL *)v5, (*(_DWORD *)this >> 7) & 0x1F);
            }
            if ( (unsigned int)++v21 >= 2 )
            {
              WdLogSingleEntry5(0LL, 270LL, 48LL, this, 1LL, 0LL);
              break;
            }
          }
          if ( (*(_DWORD *)ADAPTER_RENDER::GetGpuMmuCaps(*(ADAPTER_RENDER **)(v5 + 16), (*(_DWORD *)this >> 7) & 0x1F) & 0x400) == 0 )
            CVirtualAddressAllocator::FlushGpuVaTlb(v32, v26, *((_QWORD *)v25 + 12), *((_QWORD *)v25 + 13));
          v27 = (__int64 *)((char *)v25 + 24);
          v28 = *((_QWORD *)this + 3) + 128LL;
          v29 = *(__int64 ***)(*((_QWORD *)this + 3) + 136LL);
          if ( *v29 != (__int64 *)v28 )
            __fastfail(3u);
          *v27 = v28;
          *((_QWORD *)v25 + 4) = v29;
          *v29 = v27;
          *(_QWORD *)(v28 + 8) = v27;
          *a4 = *((_QWORD *)v25 + 12);
          *a3 = v20;
        }
      }
      else if ( (*(_DWORD *)(v11 + 80) & 0x1000) != 0 )
      {
        v30 = *(_QWORD *)(v8 + 88);
        *a3 = 0;
        *a4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v30 + 8) + 24LL) + 104LL))(
                *(_QWORD *)(*(_QWORD *)(v30 + 8) + 24LL),
                *(_QWORD *)(v30 + 24));
      }
      else
      {
        *a3 = *(_DWORD *)(v11 + 16) + 1;
        *a4 = *(_QWORD *)(***((_QWORD ***)this + 3) + 128LL);
      }
      goto LABEL_6;
    }
  }
  CpuVisibleAddress = VIDMM_PAGE_TABLE_BASE::GetCpuVisibleAddress(this, (struct VIDMM_GLOBAL *)v5, &v31);
  *a4 = (unsigned __int64)CpuVisibleAddress;
  *a3 = 0;
  if ( CpuVisibleAddress )
  {
    v6 = v31;
LABEL_6:
    *a5 = v6;
    return 0LL;
  }
  WdLogSingleEntry1(2LL, this);
  return 3221225495LL;
}
