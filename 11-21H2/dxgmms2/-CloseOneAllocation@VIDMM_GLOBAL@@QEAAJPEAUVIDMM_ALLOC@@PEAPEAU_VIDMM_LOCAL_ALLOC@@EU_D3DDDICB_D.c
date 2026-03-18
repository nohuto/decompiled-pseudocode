/*
 * XREFs of ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0089AE0
 * Callers:
 *     ?CloseAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@EPEAPEAU_VIDMM_LOCAL_ALLOC@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0089988 (-CloseAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@EPEAPEAU_VIDMM_LOCAL_ALLOC@@U_D3DDDI.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C008D5A0 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C00927A8 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C009DD78 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C009E880 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C00A0644 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@@Z @ 0x1C00A51D8 (-TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_AL.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C00A5624 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C00A65D4 (-DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C00A9738 (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00039B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003A80 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C001CDD4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0ppppppppppppq_EtwWriteTransfer @ 0x1C002E424 (McTemplateK0ppppppppppppq_EtwWriteTransfer.c)
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0083200 (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C00859C8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1C008890C (-QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGIN.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00894A4 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z @ 0x1C008A00C (-CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z @ 0x1C0093210 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CloseOneAllocation(
        VIDMM_GLOBAL *this,
        struct _KEVENT *a2,
        struct _VIDMM_LOCAL_ALLOC **a3,
        __int64 a4,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a5,
        struct _KEVENT **a6)
{
  __int64 *v6; // rax
  struct _LIST_ENTRY *Flink; // rdx
  char v9; // di
  __int64 v11; // rbp
  unsigned int v13; // r13d
  __int64 v14; // r15
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v16; // rcx
  int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r12
  __int64 v23; // rax
  struct _KEVENT **v24; // r8
  struct VIDMM_ALLOC **v25; // rdx
  struct _LIST_ENTRY *v26; // rax
  struct _LIST_ENTRY *v27; // rcx
  struct _LIST_ENTRY *v28; // r14
  struct _LIST_ENTRY *v29; // rdi
  struct _LIST_ENTRY *v30; // r12
  HANDLE CurrentProcessId; // rax
  struct _LIST_ENTRY *v32; // rdi
  struct _LIST_ENTRY **p_Blink; // rdi
  __int64 v34; // rcx
  __int64 v35; // r8
  struct _LIST_ENTRY **v36; // rax
  struct _LIST_ENTRY *v37; // rdx
  struct _LIST_ENTRY *v38; // rcx
  __int64 result; // rax
  struct _LIST_ENTRY *v40; // rax
  __int64 v41; // rdi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v43; // r9d
  __int64 v44; // rax
  struct _LIST_ENTRY *v45; // rdx
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v47; // rcx
  CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  __int64 v49; // rcx
  __int64 v50; // [rsp+80h] [rbp-B8h]
  __int64 v51; // [rsp+88h] [rbp-B0h]
  __int64 v52; // [rsp+90h] [rbp-A8h]
  _QWORD v53[19]; // [rsp+A0h] [rbp-98h] BYREF
  unsigned int v54; // [rsp+148h] [rbp+10h]
  struct _LIST_ENTRY *v55; // [rsp+150h] [rbp+18h]

  v6 = *(__int64 **)&a2->Header.Lock;
  v54 = 0;
  Flink = a2->Header.WaitListHead.Flink;
  v9 = a4;
  v55 = Flink;
  v11 = *v6;
  v13 = 0;
  v50 = 0LL;
  v14 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v44 = WdLogNewEntry5_WdTrace(this, Flink, a3, a4);
    Flink = v55;
    *(_QWORD *)(v44 + 24) = a2;
  }
  if ( a3 )
    *a3 = *(struct _VIDMM_LOCAL_ALLOC **)&a2->Header.Lock;
  if ( bTracingEnabled )
  {
    Blink = a2->Header.WaitListHead.Blink;
    if ( Blink )
    {
      v16 = Blink[2].Blink;
      v13 = (unsigned int)Blink[1].Flink;
      if ( v16 )
      {
        v54 = (unsigned int)v16[1].Flink;
        v50 = (__int64)v16[3].Flink;
      }
    }
    if ( (**(_DWORD **)(v11 + 528) & 8) != 0 )
      v14 = *(_QWORD *)(v11 + 384);
    else
      v14 = *(_QWORD *)(*(_QWORD *)&a2->Header.Lock + 16LL);
  }
  v17 = (int)a2[1].Header.WaitListHead.Flink;
  if ( (v17 & 1) == 0 )
  {
    v40 = a2->Header.WaitListHead.Flink;
    if ( v40 && v40[1].Blink || (*(_DWORD *)(v11 + 76) & 4) != 0 )
    {
      if ( (*(_DWORD *)(v11 + 76) & 4) == 0 )
      {
        VIDMM_GLOBAL::TerminateOneAllocation(this, (__int64 **)a2, (__int64)a3, a5, 0LL);
        goto LABEL_12;
      }
      a2[1].Header.SignalState |= 4u;
      LODWORD(a2[1].Header.WaitListHead.Flink) = v17 | 1;
    }
    else
    {
      a2[1].Header.SignalState |= 4u;
      if ( (a2[1].Header.SignalState & 3) == 1 )
      {
        v45 = a2[2].Header.WaitListHead.Flink;
        p_WaitListHead = &a2[2].Header.WaitListHead;
        if ( v45->Blink != &a2[2].Header.WaitListHead )
          goto LABEL_70;
        v47 = a2[2].Header.WaitListHead.Blink;
        if ( v47->Flink != p_WaitListHead )
          goto LABEL_70;
        v47->Flink = v45;
        v45->Blink = v47;
        a2[1].Header.SignalState &= 0xFFFFFFFC;
        Flink = v55;
        a2[2].Header.WaitListHead.Blink = 0LL;
        p_WaitListHead->Flink = 0LL;
      }
      if ( (*(_DWORD *)(v11 + 68) & 0x100) != 0 && (struct _KEVENT *)Flink[16].Flink == a2 )
        Flink[16].Flink = 0LL;
    }
    KeSetEvent(a2 + 3, 0, 0);
  }
LABEL_12:
  if ( v9 && ((__int64)a2[1].Header.WaitListHead.Flink & 1) != 0 && !KeReadStateEvent(a2 + 3) )
  {
    WdLogSingleEntry2(4LL, a2, -1071775486LL);
    result = 3223191810LL;
    *a6 = a2 + 3;
    return result;
  }
  KeWaitForSingleObject(&a2[3], Executive, 0, 0, 0LL);
  VIDMM_GLOBAL::xWaitForAllPagingEngines(
    this,
    (struct _VIDSCH_SYNC_OBJECT **)this + (*(_DWORD *)(v11 + 68) & 0x3F) + 749,
    (const unsigned __int64 *)(v11 + 160),
    1u,
    (const unsigned __int64 *)this + (*(_DWORD *)(v11 + 68) & 0x3F) + 685,
    *(_DWORD *)(v11 + 68) & 0x3F);
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v19, v18, v20, v21) + 24) = a2;
  v22 = *(_QWORD *)&a2[6].Header.Lock;
  if ( v22 )
  {
    if ( (**(_DWORD **)(v11 + 528) & 0x10000008) != 0 )
    {
      v41 = **(_QWORD **)(*(_QWORD *)&a2->Header.Lock + 8LL);
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, __int64))VirtualMemoryInterface + 4))(v41, v22);
    }
    *(_QWORD *)&a2[6].Header.Lock = 0LL;
  }
  if ( a2[5].Header.WaitListHead.Flink != &a2[5].Header.WaitListHead )
  {
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
    {
      VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                  *(VIDMM_PROCESS **)(*(_QWORD *)&a2->Header.Lock + 8LL),
                                  *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
                                  *(_DWORD *)(v11 + 68) & 0x3F);
      CVirtualAddressAllocator::FreeAllocMappedVaRangeList(VirtualAddressAllocator, (struct VIDMM_ALLOC *)a2);
    }
    else
    {
      memset(v53, 0, 0x58uLL);
      v23 = *((_QWORD *)this + 5049);
      v53[0] = -4294967175LL;
      v53[2] = a2;
      VIDMM_GLOBAL::QueueSystemCommandAndWaitInternal(
        this,
        (struct _VIDMM_SYSTEM_COMMAND *)v53,
        *(struct VIDMM_PAGING_QUEUE **)(v23 + 88),
        *(struct _VIDSCH_SYNC_OBJECT **)(176LL * *(unsigned int *)(*(_QWORD *)(v23 + 88) + 144LL)
                                       + *(_QWORD *)(v23 + 88)
                                       + 152),
        1);
    }
  }
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v11 + 296));
  v24 = (struct _KEVENT **)a2[1].Header.WaitListHead.Blink;
  if ( v24[1] != (struct _KEVENT *)&a2[1].Header.WaitListHead.Blink )
    goto LABEL_70;
  v25 = *(struct VIDMM_ALLOC ***)&a2[2].Header.Lock;
  if ( *v25 != (struct VIDMM_ALLOC *)&a2[1].Header.WaitListHead.Blink )
    goto LABEL_70;
  *v25 = (struct VIDMM_ALLOC *)v24;
  v24[1] = (struct _KEVENT *)v25;
  v51 = *(_QWORD *)(*(_QWORD *)&a2->Header.Lock + 24LL);
  VIDMM_GLOBAL::CloseLocalAllocation(this, *(struct _VIDMM_LOCAL_ALLOC **)&a2->Header.Lock, a3 == 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v11 + 296));
  if ( !bTracingEnabled )
    goto LABEL_30;
  v26 = a2->Header.WaitListHead.Blink;
  if ( v26 && (v27 = v26[2].Blink) != 0LL )
  {
    v28 = v27[3].Blink;
  }
  else
  {
    v28 = 0LL;
    if ( !v26 )
    {
      v29 = 0LL;
      goto LABEL_26;
    }
  }
  v29 = v26[2].Blink;
LABEL_26:
  v30 = v55;
  v52 = *((_QWORD *)this + 3);
  if ( v55 )
    v30 = v55[1].Blink;
  CurrentProcessId = PsGetCurrentProcessId();
  if ( (byte_1C006E941 & 8) != 0 )
    McTemplateK0ppppppppppppq_EtwWriteTransfer(
      v52,
      &EventDestroyDeviceAllocation,
      v50,
      CurrentProcessId,
      v30,
      v52,
      a2,
      v11,
      v29,
      v28,
      v13,
      v54,
      v50,
      v14,
      v51);
LABEL_30:
  *((_QWORD *)this + 963) += *(_QWORD *)(v11 + 16);
  ++*((_DWORD *)this + 1924);
  v32 = a2->Header.WaitListHead.Flink[1].Flink;
  if ( v32 )
  {
    p_Blink = &v32[22].Blink;
    if ( p_Blink && p_Blink[1] == (struct _LIST_ENTRY *)KeGetCurrentThread() )
    {
      WdLogSingleEntry1(1LL, 1425LL);
      DxgkLogInternalTriageEvent(v49, 262146LL);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(p_Blink, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v43 = *((_DWORD *)p_Blink + 6);
        if ( v43 != -1 && (byte_1C006E941 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v34, (__int64)&EventBlockThread, v35, v43);
      }
      ExAcquirePushLockExclusiveEx(p_Blink, 0LL);
    }
    p_Blink[1] = (struct _LIST_ENTRY *)KeGetCurrentThread();
    v36 = &a2[4].Header.WaitListHead.Blink;
    v37 = a2[4].Header.WaitListHead.Blink;
    if ( (struct _LIST_ENTRY **)v37->Blink == &a2[4].Header.WaitListHead.Blink )
    {
      v38 = *(struct _LIST_ENTRY **)&a2[5].Header.Lock;
      if ( (struct _LIST_ENTRY **)v38->Flink == v36 )
      {
        v38->Flink = v37;
        v37->Blink = v38;
        *(_QWORD *)&a2[5].Header.Lock = 0LL;
        *v36 = 0LL;
        p_Blink[1] = 0LL;
        ExReleasePushLockExclusiveEx(p_Blink, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_38;
      }
    }
LABEL_70:
    __fastfail(3u);
  }
LABEL_38:
  if ( LODWORD(a2[6].Header.WaitListHead.Blink) )
    WdLogSingleEntry5(0LL, 270LL, 56LL, a2, SLODWORD(a2[6].Header.WaitListHead.Blink), 0LL);
  operator delete(a2);
  return 0LL;
}
