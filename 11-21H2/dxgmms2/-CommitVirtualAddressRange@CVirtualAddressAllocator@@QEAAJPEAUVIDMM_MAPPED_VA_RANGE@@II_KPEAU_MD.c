/*
 * XREFs of ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C008A360
 * Callers:
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C00839CC (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C00873F0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0089730 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C009ABBC (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ?RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00AA698 (-RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00B06E8 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C00B79C0 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00DACE0 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00DB810 (-UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C00DC580 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000242C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0002698 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0002E2C (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?DdiGetRootPageTableSize@ADAPTER_RENDER@@QEAA_KPEAU_DXGKARG_GETROOTPAGETABLESIZE@@@Z @ 0x1C0018E24 (-DdiGetRootPageTableSize@ADAPTER_RENDER@@QEAA_KPEAU_DXGKARG_GETROOTPAGETABLESIZE@@@Z.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E3C0 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pqxx_EtwWriteTransfer @ 0x1C00302BC (McTemplateK0pqxx_EtwWriteTransfer.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C008AF00 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     GetBaseLogicalPageFromVaRange @ 0x1C008D530 (GetBaseLogicalPageFromVaRange.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C009E854 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1C009FD00 (-CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C00A2358 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00AA698 (-RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C00E02F8 (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::CommitVirtualAddressRange(
        __int64 a1,
        __int64 a2,
        char a3,
        int a4,
        unsigned __int64 a5,
        __int64 a6,
        int a7,
        struct VIDMM_ALLOC **a8,
        _BYTE *a9)
{
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r15
  __int64 v14; // r9
  int v15; // esi
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r10
  __int64 v21; // r8
  VIDMM_PAGE_DIRECTORY *v22; // r13
  unsigned int *v23; // rdi
  UINT v24; // edi
  unsigned int v25; // r13d
  unsigned __int64 v26; // rdx
  __int64 v27; // r8
  int v28; // ecx
  int v29; // eax
  unsigned int v30; // r10d
  __int64 v31; // r11
  __int64 v32; // rcx
  int v33; // esi
  __int64 v34; // r8
  __int64 v35; // rcx
  _DWORD *v36; // rax
  int v37; // edi
  __int64 result; // rax
  int v39; // ecx
  unsigned int v40; // ecx
  UINT NumberOfPte; // r11d
  unsigned int RootPageTableSize; // edx
  __int64 v43; // rax
  __int64 v44; // rdi
  struct VIDMM_PAGE_DIRECTORY *PageDirectory; // rax
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  int v49; // edi
  struct VIDMM_ALLOC **v50; // r8
  int v51; // edi
  __int64 v52; // rcx
  unsigned __int64 v53; // rcx
  char v54; // al
  __int64 VidMmGlobalAllocFromOwner; // rax
  char v56; // r11
  int v57; // eax
  unsigned __int64 v58; // [rsp+20h] [rbp-E0h]
  char v59; // [rsp+50h] [rbp-B0h]
  unsigned int v60; // [rsp+54h] [rbp-ACh]
  __int64 v61; // [rsp+60h] [rbp-A0h]
  unsigned int v62; // [rsp+68h] [rbp-98h]
  UINT v63; // [rsp+6Ch] [rbp-94h]
  unsigned int *v64; // [rsp+70h] [rbp-90h]
  unsigned __int64 v65; // [rsp+78h] [rbp-88h]
  _DXGKARG_GETROOTPAGETABLESIZE v67; // [rsp+88h] [rbp-78h] BYREF
  __int64 v68; // [rsp+90h] [rbp-70h]
  __int64 v69; // [rsp+98h] [rbp-68h]
  struct VIDMM_ALLOC **v70; // [rsp+A0h] [rbp-60h]
  __int64 v71; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v72; // [rsp+B0h] [rbp-50h]
  _BYTE *v73; // [rsp+B8h] [rbp-48h]
  _QWORD v74[3]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v75; // [rsp+D8h] [rbp-28h]
  __int64 v76; // [rsp+E0h] [rbp-20h]
  __int64 BaseLogicalPageFromVaRange; // [rsp+E8h] [rbp-18h]
  __int64 v78; // [rsp+F0h] [rbp-10h]
  int v79; // [rsp+F8h] [rbp-8h]
  int v80; // [rsp+FCh] [rbp-4h]
  __int64 v81; // [rsp+100h] [rbp+0h]
  unsigned __int64 v82; // [rsp+108h] [rbp+8h]

  v70 = a8;
  v73 = a9;
  if ( a7 == 2 )
    *a9 = 0;
  *a8 = 0LL;
  v12 = *(_QWORD *)(a2 + 96);
  v13 = (*(_QWORD *)(a2 + 104) - v12) >> 12;
  v14 = (*(_DWORD *)(a2 + 64) >> 4) & 0x3F;
  v65 = v12;
  v12 >>= 12;
  v15 = (int)(*(_DWORD *)(a2 + 64) << 28) >> 28;
  v68 = *(_QWORD *)(a2 + 56);
  v16 = *(_QWORD *)(a2 + 72);
  v17 = v12 + v13;
  v60 = v14;
  v72 = v16;
  if ( v12 + v13 <= v12 )
  {
    WdLogSingleEntry1(1LL, 2701LL);
    DxgkLogInternalTriageEvent(v46, 0x40000LL);
    return 3221225485LL;
  }
  if ( v17 > *(_QWORD *)(a1 + 16) >> 12 )
  {
    WdLogSingleEntry1(1LL, 2706LL);
    DxgkLogInternalTriageEvent(v47, 0x40000LL);
    return 3221225485LL;
  }
  if ( (*(_BYTE *)(a2 + 88) & 4) != 0 )
    a4 = -2;
  v18 = *(_QWORD *)(a1 + 88);
  v19 = 32LL * (unsigned int)v14;
  v20 = v19 + *(_QWORD *)(a1 + 120);
  v71 = 1584LL * (unsigned int)v14;
  v21 = *(_QWORD *)(v18 + 40224) + v71;
  v61 = v20;
  v69 = v21;
  v22 = *(VIDMM_PAGE_DIRECTORY **)v20;
  v23 = *(unsigned int **)(v21 + 440);
  v64 = v23;
  if ( *(_QWORD *)v20 && (*(_DWORD *)v22 & 8) == 0 )
    goto LABEL_12;
  v19 = *(_QWORD *)(v21 + 48LL * *(unsigned int *)(v21 + 428) + 112);
  v24 = (((v17 - 1) & *(_QWORD *)(v21 + 48LL * *(unsigned int *)(v21 + 428) + 104)) >> v19) + 1;
  v63 = *(_DWORD *)(v20 + 16);
  if ( v24 <= v63 && v22 )
  {
    v23 = *(unsigned int **)(v21 + 440);
LABEL_12:
    v25 = v14;
    goto LABEL_13;
  }
  v40 = *(_DWORD *)(v20 + 20);
  NumberOfPte = *(_DWORD *)(v20 + 16);
  RootPageTableSize = v40;
  v62 = v40;
  if ( v64[4] == 2 )
  {
    *(_DWORD *)(v20 + 16) = v24;
    v43 = *(_QWORD *)(a1 + 88);
    v67.NumberOfPte = v24;
    v67.PhysicalAdapterIndex = v14;
    RootPageTableSize = ADAPTER_RENDER::DdiGetRootPageTableSize(*(ADAPTER_RENDER **)(v43 + 16), &v67);
    NumberOfPte = v67.NumberOfPte;
    v21 = v69;
    LODWORD(v14) = v60;
    *(_DWORD *)(v61 + 16) = v67.NumberOfPte;
    v40 = v62;
    *(_DWORD *)(v61 + 20) = RootPageTableSize;
  }
  if ( NumberOfPte < v24 || RootPageTableSize < v40 )
  {
    WdLogSingleEntry1(1LL, NumberOfPte);
    v44 = v61;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL);
    WdLogSingleEntry5(0LL, 270LL, 48LL, a1, 0LL, 0LL);
    v21 = v69;
    LODWORD(v14) = v60;
  }
  else
  {
    v44 = v61;
  }
  PageDirectory = CreatePageDirectory((struct CVirtualAddressAllocator *)a1, v14, *(_DWORD *)(v21 + 428));
  *(_QWORD *)v44 = PageDirectory;
  if ( !PageDirectory )
  {
    WdLogSingleEntry1(1LL, 2750LL);
    DxgkLogInternalTriageEvent(v48, 0x40000LL);
    *(_DWORD *)(v44 + 16) = v63;
    *(_DWORD *)(v44 + 20) = v62;
    result = 3221225495LL;
    *(_QWORD *)v44 = v22;
    return result;
  }
  if ( v22 )
  {
    VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
      *(VIDMM_PROCESS **)(a1 + 96),
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 24LL) + 240LL),
      1);
    v49 = *(_DWORD *)(v44 + 16);
    *(_DWORD *)(v61 + 16) = v63;
    VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(v22, (struct CVirtualAddressAllocator *)a1, 0LL);
    v25 = v60;
    v50 = v70;
    *(_DWORD *)(v61 + 16) = v49;
    v51 = CVirtualAddressAllocator::RecommitVirtualAddressRanges((CVirtualAddressAllocator *)a1, 1LL << v60, v50);
    CVirtualAddressAllocator::FlushGpuVaTlb((CVirtualAddressAllocator *)a1, v60, 0LL, 0LL);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*(VIDMM_GLOBAL **)(a1 + 88), v60);
    VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
      *(VIDMM_PROCESS **)(a1 + 96),
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 24LL) + 240LL),
      0);
    if ( v51 < 0 )
    {
      WdLogSingleEntry1(1LL, 2796LL);
      DxgkLogInternalTriageEvent(v52, 0x40000LL);
      return (unsigned int)v51;
    }
    v23 = v64;
  }
  else
  {
    v23 = v64;
    v25 = v60;
  }
LABEL_13:
  v59 = 0;
  if ( *(struct _KTHREAD **)(a1 + 64) != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(a1 + 56));
    v59 = 1;
  }
  if ( bTracingEnabled && (byte_1C006E942 & 0x20) != 0 )
  {
    LODWORD(v58) = v15;
    McTemplateK0pqxx_EtwWriteTransfer(v19, &CommitVirtualAddressStart, v21, v68, v58, v65, v13);
  }
  v26 = *(_QWORD *)(a2 + 120);
  v74[1] = 0LL;
  v75 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  if ( v26 )
  {
    v53 = a5 + *(_QWORD *)(a2 + 112) - *(_QWORD *)(a2 + 72);
    v82 = v26;
    v75 = v53 >> 12;
  }
  v27 = 1LL;
  v74[2] = *(_QWORD *)(a2 + 80);
  v74[0] = 1LL;
  switch ( a4 )
  {
    case -2:
      v74[0] = 3LL;
      if ( !(_WORD)v65 && (v13 & 0xF) == 0 )
      {
        v54 = v81;
        if ( v23[3] )
          v54 = 1;
        LOBYTE(v81) = v54;
      }
      VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(
                                    (int)(*(_DWORD *)(a2 + 64) << 28) >> 28,
                                    *(_QWORD *)(a2 + 56));
      if ( VidMmGlobalAllocFromOwner )
      {
        v57 = *(_DWORD *)(VidMmGlobalAllocFromOwner + 32);
        if ( !v57 || (_WORD)v57 )
          LOBYTE(v81) = v56;
      }
      break;
    case -3:
      LOBYTE(v81) = 1;
      break;
    case -1:
      break;
    default:
      v14 = *(_QWORD *)(a2 + 56);
      v28 = (int)(*(_DWORD *)(a2 + 64) << 28) >> 28;
      if ( v28 != 1 )
      {
        if ( v28 == 3 )
          goto LABEL_26;
        v39 = v28 - 4;
        if ( v39 )
        {
          if ( v39 != 1 )
          {
LABEL_67:
            v14 = 0LL;
LABEL_26:
            if ( !(_WORD)v65 && v23[3] && (v26 & 0xF) == 0 && !*(_WORD *)(a2 + 112) )
            {
              if ( a4 )
              {
                if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 3712LL)
                                           + 8LL
                                           * (unsigned int)(a4
                                                          + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 40224LL)
                                                                      + v71
                                                                      + 20)
                                                          - 1))
                               + 376LL) == 0x10000
                  && (v13 & 0xF) == 0
                  && (_WORD)a5 == 0 )
                {
                  LOBYTE(v81) = 1;
                }
                if ( v14 )
                {
                  v29 = *(_DWORD *)(v14 + 32);
                  if ( !v29 || (_WORD)v29 )
                    LOBYTE(v81) = 0;
                }
              }
              else if ( !(_WORD)a5 && (*(_DWORD *)(a1 + 144) & 4) == 0 && v14 && (*(_DWORD *)(v14 + 72) & 0x100) != 0 )
              {
                LOBYTE(v81) = 1;
              }
            }
            v26 = (32 * (a4 & 0x1F | ((unsigned __int64)(a3 & 0x3F) << 6))) | 1;
            v74[0] = v26;
            v27 = *v23;
            LOBYTE(v30) = v27;
            if ( (v27 & 0x40) == 0 || v14 && (**(_DWORD **)(v14 + 528) & 0x80u) != 0 )
            {
              v31 = a6;
            }
            else
            {
              v31 = a6;
              if ( (*(_DWORD *)(a1 + 144) & 4) != 0 )
              {
                LOBYTE(v30) = *v23;
              }
              else if ( !a6 || (LOBYTE(v30) = *v23, (v27 & 0x800) != 0) && *(_BYTE *)(*(_QWORD *)(a1 + 88) + 40180LL) )
              {
                BYTE3(v81) = 1;
                v30 = *v23;
              }
            }
            if ( (v30 & 0x10) != 0 && (v15 == 2 || v15 == 7 || v14 && (**(_DWORD **)(v14 + 528) & 4) != 0) )
            {
              v26 = (32 * (a4 & 0x1F | ((unsigned __int64)(a3 & 0x3F) << 6))) | 5;
              v74[0] = v26;
            }
            if ( (*v23 & 1) != 0 && (*(_BYTE *)(a2 + 88) & 1) == 0 )
            {
              v26 |= 8uLL;
              v74[0] = v26;
            }
            if ( (*v23 & 2) != 0 && (*(_BYTE *)(a2 + 88) & 2) == 0 )
            {
              v26 |= 0x10uLL;
              v74[0] = v26;
            }
            goto LABEL_46;
          }
          v14 = *(_QWORD *)(v14 + 24);
        }
        else
        {
          v14 = *(_QWORD *)(v14 + 64);
        }
      }
      if ( v14 )
      {
        v14 = **(_QWORD **)v14;
        goto LABEL_26;
      }
      goto LABEL_67;
  }
  v31 = a6;
LABEL_46:
  v76 = v31;
  BaseLogicalPageFromVaRange = GetBaseLogicalPageFromVaRange(a2, v26, v27, v14);
  v78 = v68;
  v80 = a4;
  v79 = v15;
  if ( (*v23 & 0x80u) != 0 )
    *(_WORD *)((char *)&v81 + 1) = 257;
  v33 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
          *(VIDMM_PAGE_DIRECTORY **)v61,
          (struct CVirtualAddressAllocator *)a1,
          (const struct COMMIT_VA_STATE *)v74,
          v72,
          v65,
          v13,
          a5,
          0,
          v70);
  if ( bTracingEnabled && (byte_1C006E942 & 0x20) != 0 )
    McTemplateK0p_EtwWriteTransfer(v32, &CommitVirtualAddressEnd, v34, v68);
  v35 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 16LL) + 1152LL);
  if ( v35 )
    v36 = (_DWORD *)(v35 + 144LL * v25);
  else
    v36 = 0LL;
  v37 = 1024;
  if ( (*v36 & 0x400) == 0 || BYTE5(v81) )
  {
    if ( a7 == 1 )
    {
      CVirtualAddressAllocator::FlushGpuVaTlb((CVirtualAddressAllocator *)a1, v25, v65, v65 + (v13 << 12));
    }
    else if ( a7 == 2 )
    {
      *v73 = 1;
    }
  }
  if ( BYTE4(v81) )
  {
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*(VIDMM_GLOBAL **)(a1 + 88), v25);
    VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
      *(VIDMM_PROCESS **)(a1 + 96),
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 24LL) + 240LL),
      0);
  }
  if ( v33 < 0 )
    v37 = 2048;
  *(_DWORD *)(a2 + 64) |= v37;
  if ( v59 )
  {
    *(_QWORD *)(a1 + 64) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 56, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v33;
}
