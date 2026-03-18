/*
 * XREFs of ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C00A2170
 * Callers:
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C008245C (--1VIDMM_PROCESS@@QEAA@XZ.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00880D0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C009CD60 (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1C00DFA78 (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C00E2434 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     ??_GVIDMM_DEVICE@@QEAAPEAXI@Z @ 0x1C001382C (--_GVIDMM_DEVICE@@QEAAPEAXI@Z.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C002F09C (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C009E854 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x1C00A737C (-FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 */

void __fastcall CVirtualAddressAllocator::DestroyVaAllocator(
        CVirtualAddressAllocator *this,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4)
{
  __int64 v5; // rcx
  unsigned int i; // esi
  VIDMM_PAGE_DIRECTORY **v7; // rdi
  struct _RTL_BALANCED_NODE *v8; // rcx
  struct _RTL_BALANCED_NODE *v9; // rax
  struct _RTL_BALANCED_NODE *v10; // rax
  ULONG_PTR ParentValue; // rdi
  unsigned __int64 v12; // rdi
  struct _RTL_BALANCED_NODE *v13; // rcx
  struct _RTL_BALANCED_NODE *v14; // rax
  struct _RTL_BALANCED_NODE *v15; // rax
  ULONG_PTR v16; // rdi
  unsigned __int64 v17; // rdi
  __int64 v18; // rax
  VIDMM_DEVICE *v19; // rcx

  v5 = *((_QWORD *)this + 12);
  if ( v5 )
  {
    if ( (byte_1C006E942 & 0x20) != 0 )
      McTemplateK0ppp_EtwWriteTransfer(
        v5,
        &DestroyGpuVirtualAddressAllocator,
        *(_QWORD *)(*(_QWORD *)(v5 + 32) + 64LL),
        this,
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 32) + 64LL) + 80LL),
        *(_QWORD *)(*((_QWORD *)this + 11) + 24LL));
    for ( i = 0; i < *(_DWORD *)(*((_QWORD *)this + 11) + 7016LL); ++i )
    {
      v7 = (VIDMM_PAGE_DIRECTORY **)(*((_QWORD *)this + 15) + 32LL * i);
      if ( v7 && *v7 )
      {
        VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(*v7, this, 0LL, a4);
        *v7 = 0LL;
      }
    }
  }
  v8 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 5);
  if ( v8 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v8->Children[0] )
        {
          v9 = v8;
          v8 = v8->Children[0];
          v9->Children[0] = 0LL;
        }
        if ( !v8->Children[1] )
          break;
        v10 = v8;
        v8 = v8->Children[1];
        v10->Children[1] = 0LL;
      }
      ParentValue = v8->ParentValue;
      FreeVadAvl(v8, 0LL);
      v12 = ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v12 )
        break;
      v8 = (struct _RTL_BALANCED_NODE *)v12;
    }
  }
  *((_QWORD *)this + 5) = 0LL;
  v13 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 6);
  if ( v13 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v13->Children[0] )
        {
          v14 = v13;
          v13 = v13->Children[0];
          v14->Children[0] = 0LL;
        }
        if ( !v13->Children[1] )
          break;
        v15 = v13;
        v13 = v13->Children[1];
        v15->Children[1] = 0LL;
      }
      v16 = v13->ParentValue;
      FreeVadAvl(v13, 0LL);
      v17 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v17 )
        break;
      v13 = (struct _RTL_BALANCED_NODE *)v17;
    }
  }
  *((_QWORD *)this + 6) = 0LL;
  v18 = *((_QWORD *)this + 12);
  if ( v18 )
  {
    if ( (*(_DWORD *)(v18 + 96) & 2) == 0 )
    {
      v19 = (VIDMM_DEVICE *)*((_QWORD *)this + 13);
      if ( v19 )
        VIDMM_DEVICE::`scalar deleting destructor'(v19);
    }
  }
  operator delete(*((void **)this + 15));
  operator delete(this);
}
