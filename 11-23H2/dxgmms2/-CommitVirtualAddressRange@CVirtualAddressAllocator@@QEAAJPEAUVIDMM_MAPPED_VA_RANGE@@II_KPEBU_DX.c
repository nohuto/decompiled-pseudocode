/*
 * XREFs of ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C0096140
 * Callers:
 *     ?RecommitSchLog@VIDMM_SCH_LOG@@SAJPEAV1@@Z @ 0x1C004D424 (-RecommitSchLog@VIDMM_SCH_LOG@@SAJPEAV1@@Z.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C008E378 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C0093270 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00AB730 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B4E18 (-RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00B9FC4 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C00C23BC (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00E8904 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E9508 (-UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C00EA960 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 *     ?RecommitSystemGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@I@Z @ 0x1C00F0D2C (-RecommitSystemGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDM.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEBU_DXGK_ADL@@PEAE0@Z @ 0x1C00F2AEC (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0005468 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0017918 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     __security_check_cookie @ 0x1C0019900 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199AC (DxgkLogInternalTriageEvent.c)
 *     Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage @ 0x1C0019B04 (Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C001BC06 (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?DdiGetRootPageTableSize@ADAPTER_RENDER@@QEAA_KPEAU_DXGKARG_GETROOTPAGETABLESIZE@@@Z @ 0x1C002C77C (-DdiGetRootPageTableSize@ADAPTER_RENDER@@QEAA_KPEAU_DXGKARG_GETROOTPAGETABLESIZE@@@Z.c)
 *     ?SysMmMapLogicalAddressRange@@YAJPEAUSYSMM_ADAPTER@@PEAU_IOMMU_DMA_DOMAIN@@_K22PEBU_DXGK_ADL@@_N@Z @ 0x1C002C950 (-SysMmMapLogicalAddressRange@@YAJPEAUSYSMM_ADAPTER@@PEAU_IOMMU_DMA_DOMAIN@@_K22PEBU_DXGK_ADL@@_N.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E40C (McTemplateK0p_EtwWriteTransfer.c)
 *     ?GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z @ 0x1C002FE3C (-GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z.c)
 *     McTemplateK0pqxx_EtwWriteTransfer @ 0x1C002FF94 (McTemplateK0pqxx_EtwWriteTransfer.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0087C64 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0089B4C (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00987B0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1C009E520 (-CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B4E18 (-RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C00EF64C (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall CVirtualAddressAllocator::CommitVirtualAddressRange(
        __int64 a1,
        __int64 a2,
        char a3,
        int a4,
        unsigned __int64 a5,
        struct _DXGK_ADL *a6,
        int a7,
        DXGK_MULTIPLANE_OVERLAY_PLANE3 **a8,
        DXGK_HDR_METADATA *a9)
{
  DXGK_MULTIPLANE_OVERLAY_PLANE3 **ppPlanes; // rbx
  DXGK_HDR_METADATA *pHDRMetaData; // r12
  __int64 v14; // rdx
  __int64 v15; // rbx
  struct DXGPROCESS_RENDER_ADAPTER_INFO *RenderAdapterInfo; // rax
  int v17; // eax
  unsigned int v18; // r12d
  __int64 v19; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r12
  UINT v23; // r11d
  int v24; // ebx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // r13
  __int64 v31; // rax
  __int64 v32; // r9
  VIDMM_PAGE_DIRECTORY *v33; // rdx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // eax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v35; // ebx
  unsigned int v36; // ecx
  unsigned int v37; // edx
  __int64 v38; // rax
  unsigned int RootPageTableSize; // eax
  __int64 v40; // rcx
  struct VIDMM_PAGE_DIRECTORY *PageDirectory; // rax
  __int64 v42; // rcx
  int v43; // ebx
  VIDMM_PAGE_DIRECTORY *v44; // rcx
  unsigned __int8 v45; // r9
  DXGK_MULTIPLANE_OVERLAY_PLANE3 **v46; // r8
  int v47; // ebx
  __int64 v48; // rcx
  __int64 v49; // rdx
  int v50; // r11d
  char v51; // al
  __int64 VidMmGlobalAllocFromOwner; // rax
  _DWORD *v53; // r10
  int v54; // eax
  struct _DXGK_ADL *v55; // r15
  __int128 v56; // xmm0
  __int64 v57; // rcx
  __int64 v58; // r8
  int v59; // r15d
  __int64 v60; // rbx
  __int64 v61; // rcx
  _DWORD *v62; // rax
  __int64 *v63; // r8
  int v64; // ecx
  int v65; // ecx
  int v66; // ecx
  char v67; // al
  int v68; // eax
  unsigned __int64 v69; // rdx
  unsigned int v70; // ebx
  int v71; // eax
  int v72; // eax
  unsigned __int64 v73; // [rsp+20h] [rbp-E0h]
  char v74; // [rsp+50h] [rbp-B0h]
  unsigned int v75; // [rsp+54h] [rbp-ACh]
  int v76; // [rsp+60h] [rbp-A0h]
  _DWORD *v77; // [rsp+68h] [rbp-98h]
  unsigned int v78; // [rsp+70h] [rbp-90h]
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v79; // [rsp+74h] [rbp-8Ch]
  unsigned __int64 v80; // [rsp+78h] [rbp-88h]
  struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 v82; // [rsp+88h] [rbp-78h] BYREF
  __int64 v83; // [rsp+B8h] [rbp-48h]
  __int64 v84; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v85; // [rsp+C8h] [rbp-38h]
  __int64 v86; // [rsp+D0h] [rbp-30h]
  _QWORD v87[3]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v88; // [rsp+F8h] [rbp-8h]
  __int128 v89; // [rsp+100h] [rbp+0h]
  DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION *pPostComposition; // [rsp+110h] [rbp+10h]
  int v91; // [rsp+118h] [rbp+18h]
  int v92; // [rsp+11Ch] [rbp+1Ch]
  __int64 v93; // [rsp+120h] [rbp+20h]
  __int64 v94; // [rsp+128h] [rbp+28h]

  ppPlanes = a8;
  pHDRMetaData = a9;
  v82.ppPlanes = a8;
  v82.pHDRMetaData = a9;
  if ( (unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() )
  {
    v14 = *(_QWORD *)(a1 + 88);
    v15 = *(_QWORD *)(v14 + 40224) + 1616LL * ((*(_DWORD *)(a2 + 64) >> 4) & 0x3F);
    if ( (*(_DWORD *)(a2 + 64) & 0x800) == 0 && (*(_BYTE *)(v15 + 444) & 4) != 0 )
    {
      RenderAdapterInfo = DXGPROCESS::GetRenderAdapterInfo(
                            *(DXGPROCESS **)(*(_QWORD *)(a1 + 96) + 32LL),
                            *(_DWORD *)(*(_QWORD *)(v14 + 24) + 240LL));
      HIDWORD(v73) = HIDWORD(a5);
      v17 = SysMmMapLogicalAddressRange(
              *(struct SYSMM_ADAPTER **)(*(_QWORD *)(*((_QWORD *)RenderAdapterInfo + 10) + 16LL) + 224LL),
              *((struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 **)RenderAdapterInfo + 5));
      v18 = v17;
      if ( v17 < 0 )
      {
        WdLogSingleEntry1(1LL, v17);
        DxgkLogInternalTriageEvent(v19, 0x40000LL);
        return v18;
      }
      *(_DWORD *)(a2 + 64) |= 0x800u;
      pHDRMetaData = v82.pHDRMetaData;
    }
    if ( (*(_BYTE *)(v15 + 444) & 1) == 0 )
      return 0LL;
    ppPlanes = v82.ppPlanes;
  }
  if ( a7 == 2 )
    LOBYTE(pHDRMetaData->Type) = 0;
  *ppPlanes = 0LL;
  v21 = *(_QWORD *)(a2 + 96);
  v22 = (*(_QWORD *)(a2 + 104) - v21) >> 12;
  v23 = (*(_DWORD *)(a2 + 64) >> 4) & 0x3F;
  v24 = (int)(*(_DWORD *)(a2 + 64) << 28) >> 28;
  v80 = v21;
  v21 >>= 12;
  v82.pPostComposition = *(DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION **)(a2 + 56);
  v25 = *(_QWORD *)(a2 + 72);
  v75 = v23;
  v26 = v21 + v22;
  v76 = v24;
  v85 = v25;
  if ( v21 + v22 <= v21 )
  {
    WdLogSingleEntry1(1LL, 2707LL);
    DxgkLogInternalTriageEvent(v27, 0x40000LL);
    return 3221225485LL;
  }
  if ( v26 > *(_QWORD *)(a1 + 16) >> 12 )
  {
    WdLogSingleEntry1(1LL, 2712LL);
    DxgkLogInternalTriageEvent(v28, 0x40000LL);
    return 3221225485LL;
  }
  v29 = -2;
  if ( (*(_BYTE *)(a2 + 88) & 4) == 0 )
    v29 = a4;
  LODWORD(v84) = v29;
  v30 = *(_QWORD *)(a1 + 120) + 32LL * v23;
  v86 = v23;
  v31 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)&v82.Duration = 1616LL * v23;
  v32 = *(_QWORD *)&v82.Duration + *(_QWORD *)(v31 + 40224);
  v33 = *(VIDMM_PAGE_DIRECTORY **)v30;
  v83 = v32;
  *(_QWORD *)&v82.OutputFlags.0 = v33;
  v77 = *(_DWORD **)(v32 + 448);
  if ( !v33 || (*(_DWORD *)v33 & 8) != 0 )
  {
    v25 = *(_QWORD *)(v32 + 48 * (*(unsigned int *)(v32 + 436) + 2LL) + 24);
    VidPnSourceId = *(_DWORD *)(v30 + 16);
    v35 = (((v26 - 1) & *(_QWORD *)(v32 + 48 * (*(unsigned int *)(v32 + 436) + 2LL) + 16)) >> v25) + 1;
    v79 = VidPnSourceId;
    if ( v35 > VidPnSourceId || !v33 )
    {
      v36 = *(_DWORD *)(v30 + 20);
      v37 = v36;
      v78 = v36;
      if ( *(_DWORD *)(*(_QWORD *)(v32 + 448) + 16LL) == 2 )
      {
        *(_DWORD *)(v30 + 16) = v35;
        v38 = *(_QWORD *)(a1 + 88);
        v82.VidPnSourceId = v35;
        v82.InputFlags.Value = v23;
        RootPageTableSize = ADAPTER_RENDER::DdiGetRootPageTableSize(*(ADAPTER_RENDER **)(v38 + 16), &v82);
        v36 = v78;
        v37 = RootPageTableSize;
        *(_DWORD *)(v30 + 20) = RootPageTableSize;
        VidPnSourceId = v82.VidPnSourceId;
        *(_DWORD *)(v30 + 16) = v82.VidPnSourceId;
      }
      if ( VidPnSourceId < v35 || v37 < v36 )
      {
        WdLogSingleEntry1(1LL, VidPnSourceId);
        DxgkLogInternalTriageEvent(v40, 0x40000LL);
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 48LL, a1, 0LL, 0LL);
      }
      PageDirectory = CreatePageDirectory((struct CVirtualAddressAllocator *)a1, v75, *(_DWORD *)(v83 + 436));
      *(_QWORD *)v30 = PageDirectory;
      if ( !PageDirectory )
      {
        WdLogSingleEntry1(1LL, 2756LL);
        DxgkLogInternalTriageEvent(v42, 0x40000LL);
        *(_QWORD *)v30 = *(_QWORD *)&v82.OutputFlags.0;
        *(_DWORD *)(v30 + 16) = v79;
        *(_DWORD *)(v30 + 20) = v78;
        return 3221225495LL;
      }
      if ( *(_QWORD *)&v82.OutputFlags.0 )
      {
        VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
          *(VIDMM_PROCESS **)(a1 + 96),
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 24LL) + 240LL),
          1);
        v43 = *(_DWORD *)(v30 + 16);
        v44 = *(VIDMM_PAGE_DIRECTORY **)&v82.OutputFlags.0;
        *(_DWORD *)(v30 + 16) = v79;
        VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(v44, (struct CVirtualAddressAllocator *)a1, 0LL, v45);
        v46 = v82.ppPlanes;
        *(_DWORD *)(v30 + 16) = v43;
        v47 = CVirtualAddressAllocator::RecommitVirtualAddressRanges(
                (CVirtualAddressAllocator *)a1,
                1LL << v75,
                (struct VIDMM_ALLOC **)v46);
        CVirtualAddressAllocator::FlushGpuVaTlb((CVirtualAddressAllocator *)a1, v75, 0LL, 0LL);
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*(VIDMM_GLOBAL **)(a1 + 88), v75);
        VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
          *(VIDMM_PROCESS **)(a1 + 96),
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 24LL) + 240LL),
          0);
        if ( v47 < 0 )
        {
          WdLogSingleEntry1(1LL, 2802LL);
          DxgkLogInternalTriageEvent(v48, 0x40000LL);
          return (unsigned int)v47;
        }
      }
    }
    v24 = v76;
  }
  v74 = 0;
  if ( *(struct _KTHREAD **)(a1 + 64) != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(a1 + 56));
    v74 = 1;
  }
  if ( bTracingEnabled && (byte_1C0076982 & 0x20) != 0 )
  {
    LODWORD(v73) = v24;
    McTemplateK0pqxx_EtwWriteTransfer(v25, &CommitVirtualAddressStart, v26, v82.pPostComposition, v73, v80, v22);
  }
  v49 = *(_QWORD *)(a2 + 120);
  v87[1] = 0LL;
  v88 = 0LL;
  v89 = 0LL;
  v93 = 0LL;
  v94 = 0LL;
  if ( v49 )
  {
    v88 = *(_QWORD *)(a2 + 112) >> 12;
    v94 = v49;
  }
  v50 = v84;
  v87[2] = *(_QWORD *)(a2 + 80);
  v87[0] = 1LL;
  if ( (_DWORD)v84 == -2 )
  {
    v87[0] = 3LL;
    if ( !(_WORD)v80 && (v22 & 0xF) == 0 )
    {
      v51 = v93;
      if ( v77[3] )
        v51 = 1;
      LOBYTE(v93) = v51;
    }
    VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(
                                  (int)(*(_DWORD *)(a2 + 64) << 28) >> 28,
                                  *(_QWORD *)(a2 + 56));
    if ( VidMmGlobalAllocFromOwner )
    {
      v54 = *(_DWORD *)(VidMmGlobalAllocFromOwner + 32);
      if ( !v54 || (_WORD)v54 )
        LOBYTE(v93) = 0;
    }
    goto LABEL_53;
  }
  if ( (_DWORD)v84 != -3 )
  {
    if ( (_DWORD)v84 == -1 )
      goto LABEL_52;
    v63 = *(__int64 **)(a2 + 56);
    v64 = (int)(*(_DWORD *)(a2 + 64) << 28) >> 28;
    if ( v64 == 3 )
    {
LABEL_73:
      v53 = v77;
      if ( !(_WORD)v80 && v77[3] && (v49 & 0xF) == 0 && !*(_WORD *)(a2 + 112) )
      {
        if ( (_DWORD)v84 )
        {
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 3712LL)
                                     + 8LL
                                     * (unsigned int)(v84
                                                    + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 40224LL)
                                                                + *(_QWORD *)&v82.Duration
                                                                + 28LL)
                                                    - 1))
                         + 376LL) == 0x10000
            && !(_WORD)a5 )
          {
            v67 = v93;
            if ( (v22 & 0xF) == 0 )
              v67 = 1;
            LOBYTE(v93) = v67;
          }
          if ( v63 )
          {
            v68 = *((_DWORD *)v63 + 8);
            if ( !v68 || (_WORD)v68 )
              LOBYTE(v93) = 0;
          }
        }
        else if ( !(_WORD)a5 && (*(_DWORD *)(a1 + 144) & 4) == 0 && v63 && (v63[9] & 0x100) != 0 )
        {
          LOBYTE(v93) = 1;
        }
      }
      v69 = (32 * (v84 & 0x1F | ((unsigned __int64)(a3 & 0x3F) << 6))) | 1;
      v87[0] = v69;
      if ( (*v77 & 0x40) == 0 || v63 && (*(_DWORD *)v63[67] & 0x80u) != 0 )
      {
        v55 = a6;
      }
      else
      {
        v55 = a6;
        if ( (*(_DWORD *)(a1 + 144) & 4) == 0
          && (*((_DWORD *)a6 + 1) & 1) != 0
          && ((_DWORD)v84 || (*v77 & 0x800) != 0 && *(_BYTE *)(*(_QWORD *)(a1 + 88) + 40180LL)) )
        {
          BYTE3(v93) = 1;
        }
      }
      if ( (*v77 & 0x10) != 0 && (v24 == 2 || v24 == 7 || v63 && (*(_DWORD *)v63[67] & 4) != 0) )
      {
        v69 = (32 * (v84 & 0x1F | ((unsigned __int64)(a3 & 0x3F) << 6))) | 5;
        v87[0] = v69;
      }
      if ( (*v77 & 1) != 0 && (*(_BYTE *)(a2 + 88) & 1) == 0 )
      {
        v69 |= 8uLL;
        v87[0] = v69;
      }
      if ( (*v77 & 2) != 0 && (*(_BYTE *)(a2 + 88) & 2) == 0 )
        v87[0] = v69 | 0x10;
      goto LABEL_54;
    }
    v65 = v64 - 1;
    if ( v65 )
    {
      v66 = v65 - 3;
      if ( v66 )
      {
        if ( v66 != 1 )
        {
LABEL_72:
          v63 = 0LL;
          goto LABEL_73;
        }
        v63 = (__int64 *)v63[3];
      }
      else
      {
        v63 = (__int64 *)v63[8];
      }
    }
    if ( v63 )
    {
      v63 = *(__int64 **)*v63;
      goto LABEL_73;
    }
    goto LABEL_72;
  }
  LOBYTE(v93) = 1;
LABEL_52:
  v53 = v77;
LABEL_53:
  v55 = a6;
LABEL_54:
  v56 = *(_OWORD *)v55;
  v92 = v50;
  pPostComposition = v82.pPostComposition;
  v89 = v56;
  v91 = v24;
  if ( (*v53 & 0x80u) != 0 )
    *(_WORD *)((char *)&v93 + 1) = 257;
  v59 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
          *(VIDMM_PAGE_DIRECTORY **)v30,
          (struct CVirtualAddressAllocator *)a1,
          (const struct COMMIT_VA_STATE *)v87,
          v85,
          v80,
          v22,
          a5,
          0,
          (struct VIDMM_ALLOC **)v82.ppPlanes);
  if ( bTracingEnabled && (byte_1C0076982 & 0x20) != 0 )
    McTemplateK0p_EtwWriteTransfer(v57, &CommitVirtualAddressEnd, v58, v82.pPostComposition);
  v60 = *(_QWORD *)(a1 + 88);
  if ( ((unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage()
     && (*(_BYTE *)(*(_QWORD *)(v60 + 40224) + *(_QWORD *)&v82.Duration + 444LL) & 1) == 0
     || ((v61 = *(_QWORD *)(*(_QWORD *)(v60 + 16) + 1264LL)) != 0 ? (v62 = (_DWORD *)(v61 + 144 * v86)) : (v62 = 0LL),
         (*v62 & 0x400) != 0))
    && !BYTE5(v93) )
  {
    v70 = v75;
  }
  else
  {
    v70 = v75;
    if ( a7 == 1 )
    {
      CVirtualAddressAllocator::FlushGpuVaTlb((CVirtualAddressAllocator *)a1, v75, v80, (v22 << 12) + v80);
    }
    else if ( a7 == 2 )
    {
      LOBYTE(v82.pHDRMetaData->Type) = 1;
    }
  }
  if ( BYTE4(v93) )
  {
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*(VIDMM_GLOBAL **)(a1 + 88), v70);
    VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
      *(VIDMM_PROCESS **)(a1 + 96),
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 24LL) + 240LL),
      0);
  }
  v71 = *(_DWORD *)(a2 + 64);
  if ( v59 < 0 )
    v72 = v71 | 0x1000;
  else
    v72 = v71 | 0x400;
  *(_DWORD *)(a2 + 64) = v72;
  if ( v74 )
  {
    *(_QWORD *)(a1 + 64) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 56, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v59;
}
