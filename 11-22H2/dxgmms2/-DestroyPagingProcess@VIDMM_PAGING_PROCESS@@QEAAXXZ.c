/*
 * XREFs of ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C00F1D88
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@KI@Z @ 0x1C00BB2F0 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@KI@Z.c)
 *     ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00C1D14 (-InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C00DFE3C (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     ??_GVIDMM_DEVICE@@QEAAPEAXI@Z @ 0x1C00024CC (--_GVIDMM_DEVICE@@QEAAPEAXI@Z.c)
 *     Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage @ 0x1C0019B04 (Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0087C64 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C0087C8C (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?UnmapPagingQueueGpuVAs@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00EC2E0 (-UnmapPagingQueueGpuVAs@VIDMM_DEVICE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_PAGING_PROCESS::DestroyPagingProcess(VIDMM_PAGING_PROCESS *this)
{
  VIDMM_DEVICE *v2; // rcx
  __int64 i; // rsi
  struct CVirtualAddressAllocator *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned __int8 v7; // r9
  unsigned int j; // ebp
  VIDMM_PAGE_DIRECTORY **v9; // r14
  VIDMM_DEVICE *v10; // rcx

  if ( *((_QWORD *)this + 2) )
  {
    v2 = (VIDMM_DEVICE *)*((_QWORD *)this + 1);
    if ( v2 )
      VIDMM_DEVICE::UnmapPagingQueueGpuVAs(v2);
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(*((_QWORD *)this + 2) + 7016LL); i = (unsigned int)(i + 1) )
    {
      v4 = (struct CVirtualAddressAllocator *)*((_QWORD *)this + i + 4);
      if ( v4 )
      {
        if ( !(unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() || *((_QWORD *)v4 + 15) )
        {
          for ( j = 0; j < *(_DWORD *)(*((_QWORD *)v4 + 11) + 7016LL); ++j )
          {
            v9 = (VIDMM_PAGE_DIRECTORY **)(*((_QWORD *)v4 + 15) + 32LL * j);
            if ( *v9 )
            {
              VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(*v9, v4, 0LL, v7);
              *v9 = 0LL;
            }
          }
        }
        CVirtualAddressAllocator::DestroyVaAllocator(*((CVirtualAddressAllocator **)this + i + 4), v5, v6, v7);
        *((_QWORD *)this + i + 4) = 0LL;
      }
    }
    v10 = (VIDMM_DEVICE *)*((_QWORD *)this + 1);
    if ( v10 )
    {
      VIDMM_DEVICE::`scalar deleting destructor'(v10);
      *((_QWORD *)this + 1) = 0LL;
    }
  }
}
