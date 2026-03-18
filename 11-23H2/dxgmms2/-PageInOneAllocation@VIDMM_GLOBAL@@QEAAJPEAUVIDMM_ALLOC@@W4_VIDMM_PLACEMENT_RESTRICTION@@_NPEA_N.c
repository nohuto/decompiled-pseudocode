/*
 * XREFs of ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C0093270
 * Callers:
 *     ?PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z @ 0x1C0085854 (-PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C008ACF0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C0092484 (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?PageInPageTableOrDirectory@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGE_TABLE_BASE@@PEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU3@@Z @ 0x1C0092900 (-PageInPageTableOrDirectory@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGE_TABLE_BASE@@PEAUVIDMM_ALLOC@@_NPEA.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00ABE50 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z @ 0x1C00E46B0 (-LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0004EE4 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x1C0005224 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0017918 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     __security_check_cookie @ 0x1C0019900 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199AC (DxgkLogInternalTriageEvent.c)
 *     Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage @ 0x1C0019B04 (Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0019BBC (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A870 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E40C (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pqt_EtwWriteTransfer @ 0x1C002EFC4 (McTemplateK0pqt_EtwWriteTransfer.c)
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x1C002F0E8 (McTemplateK0pqx_EtwWriteTransfer.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00337C4 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0085974 (-ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C00867C4 (-IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00873C8 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0095820 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?AddCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0095C10 (-AddCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_.c)
 *     ?FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NI_K@Z @ 0x1C0095D8C (-FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTIO.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C0096140 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 *     ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C009BDC8 (-MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z @ 0x1C00B55C4 (-EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z.c)
 *     ?CancelAllReclaimedAllocationsInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00E0B48 (-CancelAllReclaimedAllocationsInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@PEAIPEA_K@Z @ 0x1C00E23EC (-EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@PEAIPEA_K@Z.c)
 *     ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00E26C0 (-EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E2894 (-EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?NotifyAllocationReclaimed@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z @ 0x1C00E6038 (-NotifyAllocationReclaimed@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z.c)
 *     ?TrimMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00E7E04 (-TrimMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?VerifyGlobalResidentLimit@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C00E9B40 (-VerifyGlobalResidentLimit@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 *     ?GetAllocationPriorityClassFromPriority@@YA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C00F11DC (-GetAllocationPriorityClassFromPriority@@YA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 *     ?VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z @ 0x1C00F16D8 (-VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z.c)
 *     GetBucketIdForAllocationSizePow2 @ 0x1C00F3D30 (GetBucketIdForAllocationSizePow2.c)
 *     ?GetBucketIdFromSize@VIDMM_TELEMETRY_PROCESS_DEMOTED_CONTENT_BY_FREE_MEMORY@@CAI_K@Z @ 0x1C00F3D60 (-GetBucketIdFromSize@VIDMM_TELEMETRY_PROCESS_DEMOTED_CONTENT_BY_FREE_MEMORY@@CAI_K@Z.c)
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00FE164 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?TrimResidentBytes@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C00FFEF0 (-TrimResidentBytes@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PageInOneAllocation(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        bool *a5,
        __int64 ***a6,
        int a7,
        __int64 a8)
{
  unsigned int v8; // r14d
  bool *v9; // r15
  int v10; // ebx
  __int64 **v11; // r12
  _QWORD *v13; // rax
  __int64 *v14; // rcx
  __int64 v15; // r13
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v22; // ebp
  _QWORD *v23; // rdi
  struct _VIDMM_GLOBAL_ALLOC *v24; // rbx
  VIDMM_GLOBAL *v25; // rcx
  unsigned __int8 v26; // r15
  __int64 v27; // rbp
  __int64 v28; // rcx
  __int64 v29; // r12
  __int64 v30; // rbx
  struct VIDMM_PARTITION_ADAPTER_INFO *v31; // r15
  __int64 v32; // rax
  _QWORD *v33; // rbp
  _QWORD *v34; // rbx
  VIDMM_GLOBAL **v35; // r13
  struct VIDMM_PARTITION_ADAPTER_INFO *v36; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v37; // rdi
  VIDMM_GLOBAL *v38; // rcx
  VIDMM_GLOBAL **v39; // rbx
  VIDMM_GLOBAL *v40; // rcx
  __int64 v41; // rax
  unsigned int i; // ebx
  VIDMM_GLOBAL *j; // rdi
  _QWORD *v44; // rbp
  __int64 v45; // rcx
  VIDMM_GLOBAL **v46; // rbx
  __int64 v47; // rcx
  VIDMM_GLOBAL **v48; // rax
  _QWORD **v49; // r15
  __int64 v50; // rax
  __int64 v51; // rbp
  LARGE_INTEGER PerformanceCounter; // rbx
  VIDMM_GLOBAL *v53; // rcx
  LARGE_INTEGER v54; // rax
  __int64 v55; // r9
  unsigned int BucketIdForAllocationSizePow2; // eax
  unsigned __int64 v57; // r8
  int v58; // eax
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rcx
  VIDMM_GLOBAL *v62; // rcx
  VIDMM_GLOBAL *v63; // rcx
  unsigned __int64 v64; // rcx
  unsigned __int64 v65; // rbx
  __int64 v66; // rdi
  unsigned int BucketIdFromSize; // eax
  unsigned int AllocationPriorityClassFromPriority; // eax
  _QWORD *v69; // rax
  __int64 *v70; // rax
  __int64 *v71; // rdi
  __int64 v72; // rcx
  char v73; // al
  int v74; // edx
  VIDMM_SEGMENT *v75; // rcx
  unsigned int v76; // r15d
  __int64 v77; // rbx
  __int64 v78; // rbx
  _QWORD *v79; // rax
  unsigned __int64 LogicalAddress; // rax
  unsigned __int64 v81; // rax
  unsigned __int64 v82; // r12
  VIDMM_SEGMENT *v83; // rdi
  __int64 v84; // r8
  __int64 v85; // r9
  _QWORD *v86; // rdx
  struct _KTHREAD **v87; // r10
  struct _KTHREAD **v88; // rbx
  __int64 v89; // rcx
  __int64 v90; // r8
  int v91; // r9d
  unsigned int v92; // ebx
  __int64 *v93; // rax
  _QWORD *v94; // rdx
  int v95; // ecx
  __int64 *v96; // rdi
  unsigned int v97; // r12d
  __int64 v98; // r15
  int IsEnabledDeviceUsage; // eax
  __int64 v100; // rcx
  _DWORD *v101; // rax
  unsigned __int64 v102; // rax
  __int64 *v103; // rdi
  __int64 v104; // rbx
  VIDMM_PROCESS *v105; // r14
  unsigned int *v106; // rsi
  __int64 v107; // rax
  _QWORD *v108; // rcx
  __int64 v109; // rdx
  __int64 *v110; // r8
  __int64 v111; // rcx
  __int64 v112; // r8
  void *v114; // [rsp+20h] [rbp-108h]
  void *v115; // [rsp+20h] [rbp-108h]
  struct _VIDMM_GLOBAL_ALLOC *v116; // [rsp+28h] [rbp-100h]
  char v118; // [rsp+50h] [rbp-D8h]
  char v119; // [rsp+51h] [rbp-D7h]
  char v120; // [rsp+52h] [rbp-D6h]
  int v121; // [rsp+58h] [rbp-D0h]
  CVirtualAddressAllocator *v122; // [rsp+58h] [rbp-D0h]
  unsigned int v123; // [rsp+60h] [rbp-C8h] BYREF
  _QWORD *v124; // [rsp+68h] [rbp-C0h]
  VIDMM_SEGMENT *v125; // [rsp+70h] [rbp-B8h]
  __int64 *v126; // [rsp+78h] [rbp-B0h]
  unsigned __int64 v127; // [rsp+80h] [rbp-A8h] BYREF
  bool *v128; // [rsp+88h] [rbp-A0h]
  int v129; // [rsp+90h] [rbp-98h] BYREF
  int v130; // [rsp+94h] [rbp-94h]
  unsigned __int64 v131; // [rsp+98h] [rbp-90h]
  __int64 ***v132; // [rsp+A0h] [rbp-88h]
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-80h] BYREF

  v8 = 0;
  v9 = a5;
  v10 = a3;
  v132 = a6;
  v11 = (__int64 **)a2;
  *a6 = 0LL;
  v121 = a3;
  v124 = (_QWORD *)a2;
  v128 = a5;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = a2;
  if ( (*((_DWORD *)v11 + 7) & 3) == 1 )
  {
    a2 = (__int64)v11[7];
    v13 = v11 + 7;
    if ( *(__int64 ***)(a2 + 8) != v11 + 7 || (v14 = v11[8], (_QWORD *)*v14 != v13) )
      __fastfail(3u);
    *v14 = a2;
    *(_QWORD *)(a2 + 8) = v14;
    *((_DWORD *)v11 + 7) &= 0xFFFFFFFC;
    v11[8] = 0LL;
    *v13 = 0LL;
  }
  v119 = 0;
  v15 = **v11;
  v126 = (__int64 *)v15;
  v16 = *(unsigned int *)(v15 + 68);
  if ( *(_WORD *)(*(_QWORD *)(v15 + 536) + 4LL) )
  {
    LODWORD(v16) = v16 & 0xFDFFFFFF;
    *(_DWORD *)(v15 + 68) = v16;
  }
  v17 = *(_DWORD *)(v15 + 112);
  if ( v17 )
  {
    if ( v17 == 1 && (v16 & 0x2000000) == 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v16) + 24) = v11;
      if ( bTracingEnabled && (byte_1C0076981 & 1) != 0 )
        McTemplateK0pqt_EtwWriteTransfer(v16, a2, a3, v11, 1, 1);
      *(_QWORD *)(a1 + 7320) += *(_QWORD *)(v15 + 16);
      ++*(_DWORD *)(a1 + 7312);
      VIDMM_SEGMENT::ReclaimResource(*(VIDMM_LINEAR_POOL ***)(v15 + 120), (struct _VIDMM_GLOBAL_ALLOC *)v15);
      v119 = 1;
    }
    if ( (*(_DWORD *)(v15 + 68) & 0x2000000) == 0 )
    {
      LODWORD(v27) = 0;
      goto LABEL_110;
    }
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v16) + 24) = v11;
    if ( bTracingEnabled && (byte_1C0076981 & 1) != 0 )
    {
      LODWORD(v116) = 1;
      LODWORD(v114) = 4;
      McTemplateK0pqt_EtwWriteTransfer(v16, a2, a3, v11, v114, v116);
    }
    *(_QWORD *)(a1 + 7336) += *(_QWORD *)(v15 + 16);
    ++*(_DWORD *)(a1 + 7328);
    *(_DWORD *)(v15 + 68) |= 0x4000000u;
    if ( bTracingEnabled && (byte_1C0076981 & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer(v16, &EventMigrateAllocation, a3, v15);
    VIDMM_GLOBAL::EvictAllocation((VIDMM_GLOBAL *)a1, (struct VIDMM_ALLOC *)v11);
  }
  else
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v16) + 24) = v11;
    if ( bTracingEnabled && (byte_1C0076981 & 1) != 0 )
      McTemplateK0pqt_EtwWriteTransfer(v16, a2, a3, v11, 0, 1);
    *(_QWORD *)(a1 + 7384) += *(_QWORD *)(v15 + 16);
    ++*(_DWORD *)(a1 + 7376);
    v18 = *(_DWORD *)(v15 + 68);
    if ( (v18 & 0x2000000) != 0 )
      *(_DWORD *)(v15 + 68) = v18 | 0x4000000;
  }
  v19 = v15 + 504;
  while ( 1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v19, 0LL);
    if ( !*(_QWORD *)(v15 + 200) )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v20);
      v22 = *(_DWORD *)(v15 + 68) & 0x3F;
      if ( g_IsInternalReleaseOrDbg )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v20) + 24) = v121 != 0;
        v10 = v121;
      }
      if ( v10 )
        VIDMM_GLOBAL::FlushPagingBufferInternal((VIDMM_GLOBAL *)a1, v22, 0, 0LL, 0LL, 0, 0);
      v23 = *(_QWORD **)(a1 + 3784);
      if ( v23 != (_QWORD *)(a1 + 3784) )
      {
        do
        {
          v24 = (struct _VIDMM_GLOBAL_ALLOC *)(v23 - 26);
          v23 = (_QWORD *)*v23;
          if ( (*((_DWORD *)v24 + 17) & 0x3F) == v22 )
          {
            if ( VIDMM_GLOBAL::IsPagingOperationPending((VIDMM_GLOBAL *)a1, v24, 0) )
            {
              if ( !v121 )
                break;
              VIDMM_GLOBAL::WaitForAllPagingEngines((VIDMM_GLOBAL *)a1, v24);
            }
            if ( g_IsInternalReleaseOrDbg )
              *(_QWORD *)(WdLogNewEntry5_WdTrace(v25) + 24) = v24;
            VIDMM_GLOBAL::EvictTemporaryAllocation(v25, v24);
          }
        }
        while ( v23 != (_QWORD *)(a1 + 3784) );
        v15 = (__int64)v126;
        v10 = v121;
      }
      *(_QWORD *)(a1 + 7104) = *(_QWORD *)(a1 + 4632);
      if ( *v132 )
        VIDMM_GLOBAL::EvictTemporaryAllocations((VIDMM_GLOBAL *)a1, v10 != 0, *(_DWORD *)(***v132 + 68) & 0x3F);
      v26 = a4;
      LODWORD(v114) = a7;
      LODWORD(v27) = VIDMM_GLOBAL::FindResourcesForOneAllocation(a1, v11, (unsigned int)v10, a4, v114, a8);
      if ( (int)v27 < 0 )
      {
        v28 = *(_QWORD *)&g_IsInternalReleaseOrDbg;
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg);
        goto LABEL_94;
      }
    }
    v29 = **v11;
    v30 = *(_QWORD *)(v29 + 200);
    v31 = *(struct VIDMM_PARTITION_ADAPTER_INFO **)(v29 + 512);
    v125 = (VIDMM_SEGMENT *)v30;
    if ( (*(_DWORD *)(v30 + 80) & 0x1001) != 0 && *(_QWORD *)(*(_QWORD *)v31 + 64LL) > *((_QWORD *)v31 + 2) )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v32 = WdLogNewEntry5_WdTrace(*(_QWORD *)v31);
        *(_QWORD *)(v32 + 24) = *((_QWORD *)v31 + 2);
        *(_QWORD *)(v32 + 32) = *(_QWORD *)(*(_QWORD *)v31 + 64LL);
      }
      v33 = (_QWORD *)(v30 + 176);
      v34 = *(_QWORD **)(v30 + 176);
      if ( v34 != v33 )
      {
        v35 = (VIDMM_GLOBAL **)v125;
        do
        {
          v36 = (struct VIDMM_PARTITION_ADAPTER_INFO *)v34[13];
          v37 = (struct _VIDMM_GLOBAL_ALLOC *)(v34 - 51);
          v34 = (_QWORD *)*v34;
          if ( v36 == v31 )
          {
            (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, _QWORD))*v35 + 3))(
              v35,
              v37,
              *((_QWORD *)v37 + 17),
              *((_QWORD *)v37 + 2),
              *(_QWORD *)v36);
            VIDMM_GLOBAL::NotifyAllocationReclaimed(v35[1], v37, 0);
            if ( VIDMM_GLOBAL::VerifyGlobalResidentLimit(v38, v31) )
              break;
          }
        }
        while ( v34 != v33 );
        v15 = (__int64)v126;
      }
    }
    v39 = *(VIDMM_GLOBAL ***)(v29 + 512);
    v40 = *v39;
    if ( *((_QWORD *)*v39 + 8) > (unsigned __int64)v39[2] )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v41 = WdLogNewEntry5_WdTrace(v40);
        *(_QWORD *)(v41 + 24) = v39[2];
        v40 = *v39;
        *(_QWORD *)(v41 + 32) = *((_QWORD *)*v39 + 8);
      }
      for ( i = 0; i < *(_DWORD *)(a1 + 3704); ++i )
        VIDMM_SEGMENT::TrimResidentBytes(
          *(VIDMM_SEGMENT **)(*(_QWORD *)(a1 + 3712) + 8LL * i),
          *(struct VIDMM_PARTITION_ADAPTER_INFO **)(v29 + 512));
    }
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v40);
    for ( j = *(VIDMM_GLOBAL **)(a1 + 3736); j != (VIDMM_GLOBAL *)(a1 + 3736); v44[44] = 0LL )
    {
      v44 = (_QWORD *)((char *)j - 344);
      v45 = *((_QWORD *)j - 28);
      v46 = (VIDMM_GLOBAL **)j;
      j = *(VIDMM_GLOBAL **)j;
      LOBYTE(v21) = 1;
      LOBYTE(v114) = 0;
      (*(void (__fastcall **)(__int64, _QWORD *, __int64, _QWORD, void *, _QWORD))(*(_QWORD *)v45 + 48LL))(
        v45,
        v44,
        v21,
        0LL,
        v114,
        0LL);
      if ( bTracingEnabled && (byte_1C0076981 & 1) != 0 )
        McTemplateK0p_EtwWriteTransfer(v47, &EventEvictAllocation, v21, v44);
      v40 = *v46;
      if ( *((VIDMM_GLOBAL ***)*v46 + 1) != v46 || (v48 = (VIDMM_GLOBAL **)v46[1], *v48 != (VIDMM_GLOBAL *)v46) )
        __fastfail(3u);
      *v48 = v40;
      *((_QWORD *)v40 + 1) = v48;
      *v46 = 0LL;
    }
    v49 = (_QWORD **)v124;
    if ( *(_QWORD *)(a1 + 3752) != a1 + 3752 )
    {
      v50 = v124[1];
      v123 = 0;
      v127 = 0LL;
      v51 = *(_QWORD *)(v50 + 16);
      if ( v51 )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        VIDMM_GLOBAL::EvictAllAllocationInList(v53, (struct _LIST_ENTRY *)(a1 + 3752), &v123, &v127);
        v54 = KeQueryPerformanceCounter(0LL);
        BucketIdForAllocationSizePow2 = GetBucketIdForAllocationSizePow2(
                                          *(unsigned int *)(**v49 + 16LL),
                                          **v49,
                                          v54.QuadPart - PerformanceCounter.QuadPart,
                                          v55);
        _InterlockedIncrement((volatile signed __int32 *)(v51 + 4LL * BucketIdForAllocationSizePow2 + 1216));
        _InterlockedExchangeAdd((volatile signed __int32 *)(v51 + 4LL * BucketIdForAllocationSizePow2 + 1304), v123);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v51 + 8LL * BucketIdForAllocationSizePow2 + 1392), v127);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v51 + 8LL * BucketIdForAllocationSizePow2 + 1568), v57);
        *(_BYTE *)(v51 + 1744) = 1;
      }
      else
      {
        VIDMM_GLOBAL::EvictAllAllocationInList(v40, (struct _LIST_ENTRY *)(a1 + 3752), &v123, &v127);
      }
    }
    if ( (*(_DWORD *)(344LL * *((unsigned int *)v125 + 95) + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 2808LL) + 16) & 4) != 0 )
      VIDMM_SEGMENT::ProcessPendingMoves(v125);
    v58 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v29 + 200) + 40LL))(*(_QWORD *)(v29 + 200), v29);
    v27 = v58;
    if ( v58 >= 0 )
      break;
    if ( g_IsInternalReleaseOrDbg )
    {
      v59 = WdLogNewEntry5_WdTrace(v28);
      *(_QWORD *)(v59 + 24) = v29;
      *(_QWORD *)(v59 + 32) = v27;
      WdLogNewEntry5_WdTrace(v60);
    }
    v26 = a4;
    v10 = v121;
    v11 = (__int64 **)v124;
LABEL_94:
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v28) + 24) = v11;
    v61 = *(_QWORD *)(v15 + 200);
    if ( v61 )
    {
      if ( *(_DWORD *)(v15 + 496) != -1 )
        VIDMM_CPU_HOST_APERTURE::ReleaseRange(
          *(VIDMM_CPU_HOST_APERTURE **)(v61 + 504),
          (struct _VIDMM_GLOBAL_ALLOC *)v15);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(v15 + 200) + 24LL))(
        *(_QWORD *)(v15 + 200),
        v15,
        *(_QWORD *)(v15 + 184),
        *(_QWORD *)(v15 + 16),
        **(_QWORD **)(v15 + 512));
      *(_QWORD *)(v15 + 200) = 0LL;
      *(_QWORD *)(v15 + 184) = 0LL;
    }
    v19 = v15 + 504;
    ExReleasePushLockExclusiveEx(v15 + 504, 0LL);
    KeLeaveCriticalRegion();
    VIDMM_GLOBAL::CancelAllReclaimedAllocationsInList(v62, (struct _LIST_ENTRY *)(a1 + 3736));
    VIDMM_GLOBAL::CancelAllReclaimedAllocationsInList(v63, (struct _LIST_ENTRY *)(a1 + 3752));
    WdLogSingleEntry2(3LL, v11, v10);
    if ( v10 || (*(_DWORD *)(v15 + 68) & 0x40) == 0 || v26 )
      goto LABEL_109;
    v10 = 2;
    v121 = 2;
    VIDMM_GLOBAL::TrimMarkedForEvictionAllocations(
      (VIDMM_GLOBAL *)a1,
      *(_QWORD *)(v15 + 16) + (*(_QWORD *)(v15 + 16) >> 2));
  }
  VIDMM_GLOBAL::FlushPagingBufferInternal((VIDMM_GLOBAL *)a1, *(_DWORD *)(v29 + 68) & 0x3F, 0, 0LL, 0LL, 0, 0);
  LODWORD(v27) = 0;
  v64 = *(_QWORD *)(a1 + 44752) - *(_QWORD *)(a1 + 44760);
  if ( *(_QWORD *)(v15 + 16) < v64
    && (*(_DWORD *)(*(_QWORD *)(v15 + 120) + 80LL) & 0x1001) != 0
    && (*(_DWORD *)(v15 + 68) & 0x400) == 0 )
  {
    v65 = *(_QWORD *)(v29 + 16);
    v66 = v49[1][2];
    BucketIdFromSize = VIDMM_TELEMETRY_PROCESS_DEMOTED_CONTENT_BY_FREE_MEMORY::GetBucketIdFromSize(v64);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v66 + 8LL * BucketIdFromSize + 800), v65);
    _InterlockedIncrement((volatile signed __int32 *)(v66 + 4LL * BucketIdFromSize + 1032));
    *(_BYTE *)(v66 + 1148) = 1;
    AllocationPriorityClassFromPriority = GetAllocationPriorityClassFromPriority(*(unsigned int *)(v29 + 400));
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(v66 + 8LL * AllocationPriorityClassFromPriority + 1152),
      *(_QWORD *)(v29 + 16));
    _InterlockedIncrement((volatile signed __int32 *)(v66 + 4LL * AllocationPriorityClassFromPriority + 1192));
    *(_BYTE *)(v66 + 1212) = 1;
  }
  v119 = 1;
  ExReleasePushLockExclusiveEx(v15 + 504, 0LL);
  KeLeaveCriticalRegion();
  v16 = *(_QWORD *)a1;
  v11 = (__int64 **)v124;
  *(_QWORD *)(*(_QWORD *)a1 + 288LL) += *(_QWORD *)(v15 + 16);
LABEL_109:
  v9 = v128;
LABEL_110:
  if ( (*(_DWORD *)(v15 + 68) & 0x200000) != 0 )
  {
    LODWORD(v27) = -1071775466;
    *v9 = 0;
    if ( !g_IsInternalReleaseOrDbg )
      goto LABEL_210;
    v69 = (_QWORD *)WdLogNewEntry5_WdTrace(v16);
    v69[5] = 18352LL;
LABEL_209:
    v69[4] = v15;
    v69[3] = v11;
    goto LABEL_210;
  }
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 2870LL) || *(_BYTE *)(*(_QWORD *)(a1 + 16) + 1025LL) )
  {
    LODWORD(v27) = -1073741130;
    *v9 = 0;
    if ( !g_IsInternalReleaseOrDbg )
      goto LABEL_210;
    v69 = (_QWORD *)WdLogNewEntry5_WdTrace(v16);
    v69[5] = 18360LL;
    goto LABEL_209;
  }
  if ( (int)v27 < 0 )
  {
LABEL_205:
    *v128 = (int)v27 < 0;
    if ( (int)v27 < 0 )
      *v132 = v11;
    return (unsigned int)v27;
  }
  if ( !*((_BYTE *)v11 + 26) )
  {
    v16 = *(unsigned int *)(v15 + 72);
    if ( (v16 & 0x400) == 0 )
    {
      if ( v11[18] )
      {
        if ( (*(_BYTE *)(a1 + 40936) & 0x20) != 0 )
        {
          if ( (v16 & 0x80u) == 0LL || (v16 = **(unsigned int **)(v15 + 536), (v16 & 8) != 0) || (v16 & 0x20000000) != 0 )
          {
            v70 = *v11;
            memset(&ApcState, 0, sizeof(ApcState));
            KeStackAttachProcess(*(PRKPROCESS *)v70[1], &ApcState);
            v71 = v11[18];
            v27 = (int)VidMmiEnsureVirtualAddressRangeValid(v71, *(_QWORD *)(v15 + 8));
            KeUnstackDetachProcess(&ApcState);
            if ( (int)v27 < 0 )
            {
              WdLogSingleEntry2(1LL, v71, v27);
              DxgkLogInternalTriageEvent(v72, 0x40000LL);
              *v9 = 0;
              goto LABEL_210;
            }
          }
        }
      }
      *((_BYTE *)v11 + 26) = 1;
    }
  }
  v73 = *(_BYTE *)(a1 + 40936);
  if ( (v73 & 4) == 0
    || (v73 & 0x40) != 0 && (*(_DWORD *)(v15 + 68) & 0x100) != 0
    || (v74 = *(_DWORD *)(v15 + 72), (v74 & 0x400) != 0) )
  {
LABEL_195:
    if ( (*((_DWORD *)v11 + 7) & 3) != 2 )
    {
      v103 = v11[1];
      v104 = **v11;
      v105 = (VIDMM_PROCESS *)(*v11)[1];
      v106 = *(unsigned int **)(v104 + 120);
      if ( g_IsInternalReleaseOrDbg )
      {
        v107 = WdLogNewEntry5_WdTrace(v16);
        *(_QWORD *)(v107 + 24) = v11;
        *(_QWORD *)(v107 + 32) = v103;
      }
      v108 = v11 + 7;
      v109 = v103[5] + 56LL * v106[5];
      ++*(_DWORD *)v109;
      *(_QWORD *)(v109 + 8) += *(_QWORD *)(v104 + 16);
      *(_QWORD *)(v109 + 48) = v103;
      v110 = *(__int64 **)(v109 + 40);
      if ( *v110 != v109 + 32 )
        __fastfail(3u);
      *v108 = v109 + 32;
      v11[8] = v110;
      *v110 = (__int64)v108;
      *(_QWORD *)(v109 + 40) = v108;
      VIDMM_PROCESS::AddCommitment(
        v105,
        (struct _VIDMM_DEVICE_COMMITMENT_INFO *)v109,
        *(_DWORD *)(*(_QWORD *)(*v103 + 24) + 240LL),
        (struct VIDMM_SEGMENT *)v106,
        *(_DWORD *)v109 == 1,
        (struct _VIDMM_GLOBAL_ALLOC *)v104);
      *((_DWORD *)v11 + 7) = *((_DWORD *)v11 + 7) & 0xFFFFFFFC | 2;
      ++*(_DWORD *)(v104 + 144);
      *((_DWORD *)v11 + 7) |= 0x10u;
      if ( bTracingEnabled && (byte_1C0076981 & 1) != 0 )
      {
        LODWORD(v115) = *(_DWORD *)(*(_QWORD *)(v15 + 120) + 16LL) + 1;
        McTemplateK0pqx_EtwWriteTransfer(
          (unsigned int)v115,
          &EventPageInAllocation,
          v112,
          v11,
          v115,
          *(_QWORD *)(v15 + 128));
      }
    }
    *(_BYTE *)(v15 + 83) = 1;
    goto LABEL_205;
  }
  v75 = *(VIDMM_SEGMENT **)(v15 + 120);
  if ( (*((_DWORD *)v75 + 20) & 0x1001) != 0 )
  {
    v77 = *(_QWORD *)(v15 + 96);
    v76 = 0;
    if ( !v77 )
    {
      if ( (v74 & 0xA000) != 0 )
      {
        v78 = *(_QWORD *)(v15 + 552);
        goto LABEL_140;
      }
      v79 = *(_QWORD **)(v15 + 88);
      if ( v79[3] )
      {
        v78 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v79[1] + 24LL) + 88LL))(*(_QWORD *)(v79[1] + 24LL));
        goto LABEL_140;
      }
      v77 = v79[10];
      if ( !v77 )
        goto LABEL_200;
    }
    v78 = *(_QWORD *)(v77 + 8);
LABEL_140:
    if ( v78 )
    {
      LogicalAddress = SysMmGetLogicalAddress(*(void *const *)(v15 + 528));
      v130 = 0;
      v129 = *(_DWORD *)(v78 + 40) >> 12;
      if ( LogicalAddress )
      {
        v130 = 1;
        v81 = LogicalAddress >> 12;
      }
      else
      {
        v81 = v78 + 48;
      }
      v131 = v81;
      goto LABEL_145;
    }
LABEL_200:
    WdLogSingleEntry1(1LL, v15);
    DxgkLogInternalTriageEvent(v111, 0x40000LL);
    LODWORD(v27) = -1073741801;
    goto LABEL_210;
  }
  v76 = VIDMM_SEGMENT::DriverId(v75);
  v129 = *(_DWORD *)(v15 + 16) >> 12;
  v131 = *(_QWORD *)(v15 + 128) >> 12;
  v130 = 1;
LABEL_145:
  v82 = -1LL;
  v83 = 0LL;
  v84 = *(_DWORD *)(v15 + 68) & 0x3F;
  v127 = -1LL;
  v125 = 0LL;
  v85 = *(_QWORD *)(*v124 + 8LL);
  v86 = *(_QWORD **)(*(_QWORD *)(v85 + 16) + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 24) + 240LL));
  if ( v86 && *(_DWORD *)(*v86 + 40928LL) )
  {
    if ( (*(_DWORD *)(v85 + 96) & 2) != 0 )
      v87 = *(struct _KTHREAD ***)(*v86 + 8 * v84 + 40416);
    else
      v87 = (struct _KTHREAD **)v86[63];
  }
  else
  {
    v87 = 0LL;
  }
  v88 = v87 + 7;
  v122 = (CVirtualAddressAllocator *)v87;
  v118 = 0;
  if ( v87[8] != KeGetCurrentThread() )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v88, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v91 = *((_DWORD *)v88 + 6);
        if ( v91 != -1 && (byte_1C0076981 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v89, (__int64)&EventBlockThread, v90, v91);
      }
      ExAcquirePushLockExclusiveEx(v88, 0LL);
    }
    v87 = (struct _KTHREAD **)v122;
    v88[1] = KeGetCurrentThread();
    v118 = 1;
  }
  v92 = 0;
  v16 = (__int64)(v124 + 16);
  v120 = 0;
  v93 = (__int64 *)v124[16];
  v126 = v93;
  if ( v93 == v124 + 16 )
  {
LABEL_187:
    if ( v118 )
    {
      *((_QWORD *)v122 + 8) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v122 + 56, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v120 && v92 )
    {
      do
      {
        if ( (v92 & 1) != 0 )
          CVirtualAddressAllocator::FlushGpuVaTlb(v122, v8, v82, (unsigned __int64)v83);
        ++v8;
        v92 >>= 1;
      }
      while ( v92 );
    }
    v11 = (__int64 **)v124;
    goto LABEL_195;
  }
  v94 = v124;
  while ( 1 )
  {
    v95 = *((_DWORD *)v93 + 10);
    v96 = v93 - 3;
    if ( (v95 & 0x400) == 0 )
    {
      if ( (*(_BYTE *)(a1 + 40936) & 2) != 0 )
        goto LABEL_166;
      v93 = v126;
    }
    if ( (v95 & 0x800) != 0 )
      goto LABEL_171;
    if ( (*(_BYTE *)(a1 + 40936) & 8) == 0 )
      goto LABEL_170;
LABEL_166:
    v97 = v76;
    LODWORD(v27) = CVirtualAddressAllocator::CommitVirtualAddressRange(
                     v87,
                     v96,
                     *(_DWORD *)(v15 + 68) & 0x3F,
                     v76,
                     v96[9],
                     &v129,
                     0,
                     v132,
                     0LL);
    if ( (int)v27 < 0 )
      break;
    v98 = (*((_DWORD *)v96 + 16) >> 4) & 0x3F;
    IsEnabledDeviceUsage = Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage();
    v123 = v97;
    if ( IsEnabledDeviceUsage && (*(_BYTE *)(*(_QWORD *)(a1 + 40224) + 1616 * v98 + 444) & 1) == 0 )
    {
      v94 = v124;
      v76 = v97;
      v82 = v127;
LABEL_170:
      v93 = v126;
LABEL_171:
      v83 = v125;
      goto LABEL_172;
    }
    v100 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1264LL);
    if ( v100 )
      v101 = (_DWORD *)(v100 + 144 * v98);
    else
      v101 = 0LL;
    v82 = v127;
    v76 = v123;
    v94 = v124;
    if ( (*v101 & 0x400) != 0 )
      goto LABEL_170;
    v120 = 1;
    v92 |= 1 << ((*((_DWORD *)v96 + 16) >> 4) & 0x3F);
    if ( v127 >= v96[12] )
      v82 = v96[12];
    v102 = v96[13];
    v83 = v125;
    v127 = v82;
    if ( (unsigned __int64)v125 <= v102 )
      v83 = (VIDMM_SEGMENT *)v102;
    v93 = v126;
    v125 = v83;
LABEL_172:
    v93 = (__int64 *)*v93;
    v16 = (__int64)(v94 + 16);
    v126 = v93;
    if ( v93 == v94 + 16 )
      goto LABEL_187;
    v87 = (struct _KTHREAD **)v122;
  }
  WdLogSingleEntry2(3LL, v124, 18466LL);
  if ( v118 )
  {
    *((_QWORD *)v122 + 8) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v122 + 56, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (_DWORD)v27 == -1073741267 )
    *v128 = 1;
LABEL_210:
  if ( v119 )
    VIDMM_SEGMENT::MarkResourcesForEviction(*(VIDMM_SEGMENT **)(v15 + 120), (struct _VIDMM_GLOBAL_ALLOC *)v15, 0LL, 0LL);
  return (unsigned int)v27;
}
