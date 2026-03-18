/*
 * XREFs of ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0095CE0
 * Callers:
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C0083B84 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C0084018 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00852A0 (-EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C00862F0 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z @ 0x1C0086A8C (-EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C00873F0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00880D0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1C008AB30 (-FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C008C800 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z @ 0x1C0093210 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0093DF0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0095CE0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C009FB10 (-EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z.c)
 *     ?FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z @ 0x1C00A7158 (-FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00A7A1C (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C00A7C8C (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C00A8498 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00D84EC (-MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 *     ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x1C00D8ECC (-PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@PEA_K@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00DACE0 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z @ 0x1C00EA548 (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_.c)
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00EB918 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000242C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     VidSchIsMonitoredFenceSignaled @ 0x1C0002EDC (VidSchIsMonitoredFenceSignaled.c)
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0003AE0 (VidSchiSchedulerNodeToDriverEngine.c)
 *     VidSchiInterlockedInsertTailList @ 0x1C0005B60 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0005BF0 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0005C90 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0006900 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchIsTDRPending @ 0x1C000AD70 (VidSchIsTDRPending.c)
 *     VidSchiSetPriorityContext @ 0x1C0012DF0 (VidSchiSetPriorityContext.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x1C0016FA4 (VidSchiInterlockedRemoveEntryList.c)
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0018420 (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C003DF40 (VidSchSignalSyncObjectsFromCpu.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0087E10 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C008A930 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     VidSchWaitForCompletionEvent @ 0x1C00937C4 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C00958B8 (VidSchRegisterCompletionEvent.c)
 *     VidSchGetNodeOrdinal @ 0x1C0095CB4 (VidSchGetNodeOrdinal.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0095CE0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C0098370 (-AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z.c)
 *     ?SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z @ 0x1C00D9E78 (-SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z.c)
 *     ?RecordVaPagingHistoryFlushPagingBuffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PAGING_HISTORY_FLUSH_PAGING_BUFFER@@K@Z @ 0x1C00E31AC (-RecordVaPagingHistoryFlushPagingBuffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PAGING_HISTORY_FLUSH_PAGING.c)
 *     VidSchiSubmitHwPagingCommand @ 0x1C00F6300 (VidSchiSubmitHwPagingCommand.c)
 */

void __fastcall VIDMM_GLOBAL::FlushPagingBufferInternal(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned __int8 a3,
        void (*a4)(void *),
        void *a5,
        char a6,
        char a7)
{
  __int64 v7; // r13
  VIDMM_GLOBAL *v8; // rdi
  __int64 v9; // rbx
  void (*v10)(void *); // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r15
  __int64 v17; // r12
  unsigned __int8 v18; // al
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  _QWORD *v21; // r13
  char v22; // r14
  _QWORD **v23; // rcx
  _QWORD *v24; // rbx
  char *v25; // r13
  __int64 v26; // rax
  int v27; // ecx
  _QWORD *v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rbx
  struct _VIDMM_DMA_BUFFER *v31; // rbx
  unsigned int i; // r14d
  __int64 v33; // rcx
  VIDMM_GLOBAL **v34; // rcx
  bool v35; // al
  __int64 v36; // rdx
  struct _VIDMM_DMA_BUFFER *v37; // r13
  struct _VIDSCH_SYNC_OBJECT *v38; // r8
  __int64 v39; // rdx
  struct _VIDSCH_SYNC_OBJECT *v40; // r9
  unsigned int v41; // ecx
  char v42; // r15
  unsigned int v43; // eax
  unsigned int v44; // ecx
  unsigned int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rdx
  unsigned int NodeOrdinal; // eax
  char v51; // r12
  bool v52; // zf
  unsigned int v53; // ebx
  __int64 v54; // r14
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rcx
  __int64 v58; // r15
  __int64 v59; // r13
  unsigned int v60; // r12d
  _QWORD *v61; // rax
  _DWORD *Pool2; // rbx
  KSPIN_LOCK *v63; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _VIDMM_DMA_BUFFER *v65; // xmm2_8
  __int128 v66; // xmm0
  __int128 v67; // xmm1
  __int128 v68; // xmm0
  __int128 v69; // xmm1
  int v70; // r8d
  _QWORD *v71; // r9
  unsigned int v72; // r10d
  _QWORD *v73; // rdx
  __int64 v74; // rax
  unsigned int v75; // r12d
  __int64 v76; // rax
  VIDMM_GLOBAL *v77; // r14
  _QWORD *v78; // rsi
  _QWORD *v79; // r15
  _QWORD *v80; // r14
  int v81; // eax
  _QWORD *v82; // rax
  unsigned __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rax
  _QWORD *v86; // rcx
  struct VIDMM_VAD *v87; // rbx
  __int64 v88; // r8
  VIDMM_DMA_POOL **v89; // rbx
  _QWORD *v90; // r13
  VIDMM_GLOBAL *v91; // r15
  int v92; // eax
  VIDMM_GLOBAL **v93; // rax
  _QWORD *v94; // rax
  __int64 v95; // rcx
  __int64 v96; // rcx
  _QWORD *v97; // rax
  KPRIORITY PriorityThread; // eax
  bool v99; // [rsp+40h] [rbp-C0h] BYREF
  int v100; // [rsp+44h] [rbp-BCh]
  struct VIDMM_MAPPED_VA_RANGE *v101; // [rsp+48h] [rbp-B8h]
  KSPIN_LOCK *v102; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v103; // [rsp+58h] [rbp-A8h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v104[2]; // [rsp+60h] [rbp-A0h] BYREF
  struct _VIDMM_DMA_BUFFER *v105[13]; // [rsp+70h] [rbp-90h] BYREF
  struct _VIDMM_DMA_BUFFER *v106; // [rsp+D8h] [rbp-28h]
  _QWORD v107[44]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int8 v110; // [rsp+260h] [rbp+160h]

  v110 = a3;
  v7 = a2;
  v8 = this;
  v9 = a3;
  v10 = a4;
  memset(&v107[20], 0, 0x78uLL);
  memset(v105, 0, 0x58uLL);
  v14 = (unsigned int)v7;
  v15 = *((_QWORD *)v8 + 5028);
  v16 = 1584 * v7;
  v17 = v15 + 1584 * v7;
  if ( g_IsInternalReleaseOrDbg )
  {
    v94 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v11, v15, v13);
    v94[3] = v9;
    v94[4] = *((unsigned int *)v8 + v7 + 414);
    v94[5] = *((unsigned int *)v8 + v7 + 478);
    v15 = *((_QWORD *)v8 + 5028);
  }
  v18 = *((_BYTE *)v8 + 40937);
  v19 = v18;
  if ( (v18 & 1) != 0 && (_BYTE)v9 )
  {
    LOBYTE(v19) = v18 | 2;
    *((_BYTE *)v8 + 40937) = v18 | 2;
  }
  v20 = (unsigned __int8)v19;
  if ( (*(_BYTE *)(v15 + v16 + 436) & 1) != 0 && *((_QWORD *)v8 + v7 + 143) && *((_DWORD *)v8 + 2) && (v19 & 1) == 0 )
  {
    LOBYTE(v19) = v19 | 1;
    *((_BYTE *)v8 + 40937) = v19;
    v21 = (_QWORD *)*((_QWORD *)v8 + v7 + 5052);
    while ( 1 )
    {
      v22 = 0;
      while ( 1 )
      {
        v23 = (_QWORD **)(v16 + *((_QWORD *)v8 + 5028) + 464LL);
        v24 = *v23;
        if ( *v23 == v23 )
          break;
        v83 = v24[2];
        v84 = *((_QWORD *)v8 + v14 + 749);
        v101 = (struct VIDMM_MAPPED_VA_RANGE *)(v24 - 3);
        if ( !VidSchIsMonitoredFenceSignaled(v84, v83) )
          break;
        v85 = *v24;
        if ( *(_QWORD **)(*v24 + 8LL) != v24 || (v86 = (_QWORD *)v24[1], (_QWORD *)*v86 != v24) )
LABEL_132:
          __fastfail(3u);
        *v86 = v85;
        *(_QWORD *)(v85 + 8) = v86;
        *v24 = 0LL;
        v24[1] = 0LL;
        if ( VIDMM_GLOBAL::_Config >= 0 )
        {
          v22 = 1;
          CVirtualAddressAllocator::UncommitVirtualAddressRange(
            *((CVirtualAddressAllocator **)v8 + v14 + 5052),
            v101,
            0LL,
            1);
        }
        v87 = *(struct VIDMM_VAD **)v101;
        if ( (struct _KTHREAD *)v21[8] == KeGetCurrentThread() )
        {
          CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal((CVirtualAddressAllocator *)v21, v87, v15);
        }
        else
        {
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v21 + 7));
          CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal((CVirtualAddressAllocator *)v21, v87, v88);
          v21[8] = 0LL;
          ExReleasePushLockExclusiveEx(v21 + 7, 0LL);
          KeLeaveCriticalRegion();
        }
      }
      if ( !v22 )
        break;
      VIDMM_GLOBAL::FlushPagingBufferInternal(v8, a2, 0, 0LL, 0LL, 0, 0);
    }
    *((_BYTE *)v8 + 40937) &= ~1u;
    v20 = *((unsigned __int8 *)v8 + 40937);
    v10 = a4;
    LOBYTE(v9) = v110;
    LODWORD(v7) = a2;
  }
  if ( (v20 & 1) == 0 )
  {
    if ( a6 && (v20 & 2) != 0 )
    {
      LOBYTE(v9) = 0;
      v110 = 0;
    }
    LOBYTE(v20) = v20 & 0xFD;
    *((_BYTE *)v8 + 40937) = v20;
  }
  if ( *((_DWORD *)v8 + v14 + 478) == *((_DWORD *)v8 + v14 + 414)
    && *((_DWORD *)v8 + v14 + 606) == *((_DWORD *)v8 + v14 + 542)
    && !(_BYTE)v9 )
  {
    v78 = (_QWORD *)*((_QWORD *)v8 + 471);
    if ( v78 != (_QWORD *)((char *)v8 + 3768) )
    {
      while ( 1 )
      {
        v79 = v78 - 26;
        v80 = v78;
        v81 = *((_DWORD *)v78 - 35);
        v78 = (_QWORD *)*v78;
        if ( (v81 & 0x3F) == (_DWORD)v7 )
        {
          if ( (_QWORD *)v78[1] != v80 )
            goto LABEL_132;
          v82 = (_QWORD *)v80[1];
          if ( (_QWORD *)*v82 != v80 )
            goto LABEL_132;
          *v82 = v78;
          v78[1] = v82;
          if ( g_IsInternalReleaseOrDbg )
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v20, v19, v15, v13) + 24) = v79;
          v20 = *((_QWORD *)v8 + 474);
          if ( *(VIDMM_GLOBAL **)v20 != (VIDMM_GLOBAL *)((char *)v8 + 3784) )
            goto LABEL_132;
          *v80 = (char *)v8 + 3784;
          v80[1] = v20;
          *(_QWORD *)v20 = v80;
          *((_QWORD *)v8 + 474) = v80;
        }
        if ( v78 == (_QWORD *)((char *)v8 + 3768) )
          return;
      }
    }
    return;
  }
  if ( !*((_DWORD *)v8 + 2) )
    WdLogSingleEntry5(0LL, 270LL, 33LL, v8, 0LL, 0LL);
  v25 = (char *)v8 + 8 * v14;
  v26 = *((_QWORD *)v25 + 143);
  LODWORD(v102) = *(_DWORD *)(v26 + 172);
  v27 = *(_DWORD *)(v26 + 168);
  *(_DWORD *)(v26 + 172) = v27;
  v28 = (_QWORD *)*((_QWORD *)v25 + 143);
  LODWORD(v101) = v27;
  v29 = v28[7];
  if ( v29 )
  {
    v30 = *(_QWORD *)(v29 + 120);
    if ( (*(_DWORD *)(v30 + 80) & 0x1000) != 0 )
      v100 = 0;
    else
      v100 = *(_DWORD *)(v30 + 16) + 1;
    v31 = (struct _VIDMM_DMA_BUFFER *)(*(_QWORD *)(v29 + 128) + *(_QWORD *)(v30 + 24));
  }
  else
  {
    v31 = (struct _VIDMM_DMA_BUFFER *)v28[11];
    v100 = 0;
  }
  if ( v10 )
  {
    ((void (__fastcall *)(void *))v10)(a5);
    v28 = (_QWORD *)*((_QWORD *)v25 + 143);
  }
  if ( *(_DWORD *)(v28[17] + 36LL) )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v28[7] + 120LL) + 56LL))(*(_QWORD *)(v28[7] + 120LL));
  for ( i = 0; i < *(_DWORD *)(v17 + 24); ++i )
  {
    v33 = *(_QWORD *)(*((_QWORD *)v8 + 464) + 8LL * (i + *(_DWORD *)(*((_QWORD *)v8 + 5028) + v16 + 20)));
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 152LL))(v33);
  }
  v34 = (VIDMM_GLOBAL **)*((unsigned int *)v8 + v14 + 414);
  v35 = (_DWORD)v34 == *((_DWORD *)v8 + v14 + 478) && *((_DWORD *)v8 + v14 + 542) == *((_DWORD *)v8 + v14 + 606);
  v36 = *((unsigned int *)v8 + v14 + 1177);
  if ( !(_DWORD)v36 && v35 )
  {
    v75 = a2;
    goto LABEL_62;
  }
  if ( (*(_BYTE *)(*((_QWORD *)v8 + 5028) + v16 + 436) & 0x40) != 0 )
  {
    WdLogSingleEntry1(3LL, v14);
    LODWORD(v36) = *((_DWORD *)v8 + v14 + 1177);
  }
  if ( !(_DWORD)v36 )
  {
    *((_DWORD *)v8 + v14 + 1177) = 1;
    ++*((_QWORD *)v8 + v14 + 621);
  }
  v37 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)v8 + v14 + 621);
  v38 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)v8 + v14 + 749);
  v39 = *((_QWORD *)v8 + 2);
  v40 = v38;
  v106 = v37;
  v99 = *(_BYTE *)(*(_QWORD *)(v39 + 632) + 55LL);
  v104[0] = v38;
  v103 = (unsigned __int64)v37;
  if ( v99 && !*(_BYTE *)(*(_QWORD *)(v39 + 632) + 58LL) )
  {
    VIDMM_GLOBAL::SignalMonitoredFence(v8, a2, v38, (unsigned __int64)v37, &v99);
    v40 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)v8 + v14 + 749);
  }
  v105[4] = *((struct _VIDMM_DMA_BUFFER **)v40 + 8);
  v105[3] = *((struct _VIDMM_DMA_BUFFER **)v8 + v14 + 813);
  v105[1] = *((struct _VIDMM_DMA_BUFFER **)v8 + v14 + 143);
  LODWORD(v105[0]) = 256;
  v105[2] = v37;
  _InterlockedIncrement((volatile signed __int32 *)v105[1] + 8);
  v41 = *((_DWORD *)v8 + v14 + 478);
  v42 = a7;
  v105[6] = (struct _VIDMM_DMA_BUFFER *)__PAIR64__(v41, v100);
  v43 = *((_DWORD *)v8 + v14 + 414) - v41;
  v44 = *((_DWORD *)v8 + v14 + 606);
  v105[7] = (struct _VIDMM_DMA_BUFFER *)__PAIR64__(v44, v43);
  v45 = *((_DWORD *)v8 + v14 + 542) - v44;
  v46 = *((_QWORD *)v8 + 2);
  v105[8] = (struct _VIDMM_DMA_BUFFER *)__PAIR64__((unsigned int)v102, v45);
  v47 = *(_QWORD *)(v46 + 632);
  LODWORD(v105[9]) = (_DWORD)v101;
  v48 = *((_QWORD *)v8 + 3);
  v105[5] = v31;
  v49 = *(_QWORD *)(v48 + 2680) + 344 * v14;
  if ( a7 )
  {
    NodeOrdinal = VidSchGetNodeOrdinal(v47, a2, *(_DWORD *)(v49 + 20));
    v51 = 1;
  }
  else
  {
    NodeOrdinal = VidSchGetNodeOrdinal(v47, a2, *(unsigned __int16 *)(v49 + 2));
    v51 = 0;
  }
  v52 = (*((_BYTE *)v8 + 40936) & 2) == 0;
  v53 = NodeOrdinal;
  LOBYTE(v105[10]) = v51;
  HIDWORD(v105[9]) = NodeOrdinal;
  if ( !v52 && *((_QWORD *)v8 + 5123) )
    VIDMM_GLOBAL::RecordVaPagingHistoryFlushPagingBuffer(
      v8,
      (struct VIDMM_PAGING_HISTORY_FLUSH_PAGING_BUFFER *)v105,
      a2);
  v54 = *(_QWORD *)(*((_QWORD *)v8 + 2) + 632LL);
  if ( VidSchIsTDRPending(v54) )
  {
    LOBYTE(v55) = 1;
    VIDMM_DMA_POOL::ReleaseBuffer(*((VIDMM_DMA_POOL **)v105[1] + 17), v105[1], v55, v56);
    goto LABEL_54;
  }
  if ( *(_BYTE *)(v54 + 55) )
  {
    VidSchiSubmitHwPagingCommand(v54, v105);
    goto LABEL_54;
  }
  v57 = (unsigned int)VidSchiSchedulerNodeToDriverEngine(v54, v53);
  v58 = *(_QWORD *)(*(_QWORD *)(v54 + 264) + 8 * v57);
  if ( v51 )
  {
    v95 = *(_QWORD *)(*(_QWORD *)(v54 + 288) + 8 * v57);
    if ( v95 )
      v58 = v95;
  }
  v59 = *(_QWORD *)(*(_QWORD *)(v58 + 96) + 24LL);
  v60 = *(_DWORD *)(v59 + 152) * ((*(_DWORD *)(v59 + 76) << 6) + ((8 * *(_DWORD *)(v59 + 76) + 231) & 0xFFFFFFF8))
      + 8 * (*(_DWORD *)(v59 + 76) + 111);
  if ( v60 <= 0x460 )
    v60 = 1120;
  v102 = (KSPIN_LOCK *)(v59 + 1736);
  v61 = VidSchiInterlockedRemoveHeadListIfExist(
          (KSPIN_LOCK *)(v59 + 1736),
          (_QWORD **)(v58 + 712),
          (_DWORD *)(v58 + 728));
  if ( !v61 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, v60, 895576406LL);
    if ( Pool2 )
      goto LABEL_50;
    memset(v107, 0, 0xA0uLL);
    v96 = *(_QWORD *)(v58 + 96);
    LODWORD(v107[4]) |= 0x40u;
    LODWORD(v107[2]) = 1;
    LODWORD(v107[6]) = *(unsigned __int16 *)(v96 + 4);
    VidSchRegisterCompletionEvent(v59, (__int64)v107);
    do
    {
      v97 = VidSchiInterlockedRemoveHeadListIfExist(
              (KSPIN_LOCK *)(v59 + 1736),
              (_QWORD **)(v58 + 712),
              (_DWORD *)(v58 + 728));
      if ( v97 )
        Pool2 = v97 - 1;
      else
        VidSchWaitForCompletionEvent((struct _VIDSCH_GLOBAL *)v59, (__int64)v107, 19LL);
    }
    while ( !Pool2 );
    VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v59 + 1744), v107, 0LL);
    v8 = this;
LABEL_49:
    memset(Pool2, 0, v60);
LABEL_50:
    v63 = v102;
    *((_QWORD *)Pool2 + 7) = MEMORY[0xFFFFF78000000320];
    Pool2[13] = 1;
    VidSchiInterlockedInsertTailList(v63, v58 + 760, (_QWORD *)Pool2 + 1, (_DWORD *)(v58 + 776));
    goto LABEL_51;
  }
  Pool2 = v61 - 1;
  if ( v61 != (_QWORD *)8 )
    goto LABEL_49;
LABEL_51:
  *Pool2 = 895576406;
  Pool2[12] = 8;
  *((_QWORD *)Pool2 + 7) = MEMORY[0xFFFFF78000000320];
  Pool2[13] = 2;
  *((_QWORD *)Pool2 + 11) = v58;
  CurrentThread = KeGetCurrentThread();
  v65 = v105[0];
  v66 = *(_OWORD *)&v105[2];
  v67 = *(_OWORD *)&v105[4];
  *((_OWORD *)Pool2 + 17) = *(_OWORD *)v105;
  *((_QWORD *)Pool2 + 13) = CurrentThread;
  *((_OWORD *)Pool2 + 18) = v66;
  v68 = *(_OWORD *)&v105[6];
  *((_OWORD *)Pool2 + 19) = v67;
  v69 = *(_OWORD *)&v105[8];
  *((_OWORD *)Pool2 + 20) = v68;
  *(struct _VIDMM_DMA_BUFFER **)&v68 = v105[10];
  *((_OWORD *)Pool2 + 21) = v69;
  *((_QWORD *)Pool2 + 44) = v68;
  *((_QWORD *)Pool2 + 9) = v65;
  if ( (*(_DWORD *)(v54 + 2536) & 2) != 0 )
  {
    PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
    VidSchiSetPriorityContext((struct _VIDSCH_CONTEXT *)v58, PriorityThread);
  }
  VidSchiSubmitCommandPacketToQueue((__int64)Pool2);
  v42 = a7;
  v37 = v106;
LABEL_54:
  if ( v99 )
  {
LABEL_124:
    v75 = a2;
    goto LABEL_61;
  }
  v70 = 0;
  v71 = 0LL;
  v72 = 0;
  v73 = 0LL;
  v74 = *(_QWORD *)(*((_QWORD *)v8 + 2) + 632LL);
  if ( !*(_BYTE *)(v74 + 55) )
  {
    v75 = a2;
    if ( a2 == -1 )
    {
      v70 = *(_DWORD *)(v74 + 76);
      if ( v42 )
        v71 = *(_QWORD **)(v74 + 288);
      else
        v71 = *(_QWORD **)(v74 + 264);
    }
    else
    {
      v70 = 1;
      if ( v42 )
        v76 = *(_QWORD *)(v74 + 288);
      else
        v76 = *(_QWORD *)(v74 + 264);
      v71 = (_QWORD *)(v76 + 8 * v14);
    }
    goto LABEL_60;
  }
  v73 = *(_QWORD **)(v74 + 280);
  if ( !*v73 )
  {
    VidSchSignalSyncObjectsFromCpu(1u, v104, 0, (char *)&v103);
    goto LABEL_124;
  }
  v75 = a2;
  if ( a2 == -1 )
  {
    v72 = *(_DWORD *)(v74 + 76);
  }
  else
  {
    v72 = 1;
    v73 += v14;
  }
LABEL_60:
  VidSchSignalSyncObjectsFromGpu(v72, (__int64)v73, v70, v71, 1u, (__int64)v104, 0, &v103);
LABEL_61:
  *((_QWORD *)v8 + v14 + 685) = v37;
  v34 = (VIDMM_GLOBAL **)*((unsigned int *)v8 + v14 + 414);
LABEL_62:
  *((_DWORD *)v8 + v14 + 606) = *((_DWORD *)v8 + v14 + 542);
  *((_DWORD *)v8 + v14 + 478) = (_DWORD)v34;
  v77 = (VIDMM_GLOBAL *)*((_QWORD *)v8 + 471);
  while ( v77 != (VIDMM_GLOBAL *)((char *)v8 + 3768) )
  {
    v90 = (_QWORD *)((char *)v77 - 208);
    v91 = v77;
    v92 = *((_DWORD *)v77 - 35);
    v77 = *(VIDMM_GLOBAL **)v77;
    if ( (v92 & 0x3F) == v75 )
    {
      if ( *((VIDMM_GLOBAL **)v77 + 1) != v91 )
        goto LABEL_132;
      v93 = (VIDMM_GLOBAL **)*((_QWORD *)v91 + 1);
      if ( *v93 != v91 )
        goto LABEL_132;
      *v93 = v77;
      *((_QWORD *)v77 + 1) = v93;
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v34, v36, v15, v13) + 24) = v90;
      v34 = (VIDMM_GLOBAL **)*((_QWORD *)v8 + 474);
      if ( *v34 != (VIDMM_GLOBAL *)((char *)v8 + 3784) )
        goto LABEL_132;
      *(_QWORD *)v91 = (char *)v8 + 3784;
      *((_QWORD *)v91 + 1) = v34;
      *v34 = v91;
      *((_QWORD *)v8 + 474) = v91;
    }
  }
  *((_DWORD *)v8 + v14 + 964) = 1;
  *((_DWORD *)v8 + v14 + 1177) = 0;
  if ( v110 )
  {
    v89 = (VIDMM_DMA_POOL **)((char *)v8 + 8 * v14);
    LOBYTE(v15) = 1;
    VIDMM_DMA_POOL::ReleaseBuffer(v89[79], v89[143], v15, v13);
    VIDMM_DMA_POOL::AcquireBuffer(v89[79], v89 + 143, 0, 1u);
    *((_DWORD *)v89[143] + 8) = 1;
    *((_DWORD *)v8 + v14 + 414) = 0;
    *((_DWORD *)v8 + v14 + 478) = 0;
    *((_DWORD *)v8 + v14 + 542) = 0;
    *((_DWORD *)v8 + v14 + 606) = 0;
  }
  *(_QWORD *)(*((_QWORD *)v8 + 5028) + 448LL) = 0LL;
}
