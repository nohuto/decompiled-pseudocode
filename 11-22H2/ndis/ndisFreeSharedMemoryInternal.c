/*
 * XREFs of ndisFreeSharedMemoryInternal @ 0x1C005DAD8
 * Callers:
 *     ?ndisMQueuedFreeSharedHandler@@YAXPEAX@Z @ 0x1C005DE30 (-ndisMQueuedFreeSharedHandler@@YAXPEAX@Z.c)
 *     NdisMFreeSharedMemory @ 0x1C005F970 (NdisMFreeSharedMemory.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     ?Stop@NdisStatisticalStopwatch@@QEAA_KXZ @ 0x1C005D8DC (-Stop@NdisStatisticalStopwatch@@QEAA_KXZ.c)
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x1C005D994 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 */

void __fastcall ndisFreeSharedMemoryInternal(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        char a3,
        ULONG_PTR a4,
        __int64 a5)
{
  struct _NDIS_SG_DMA_BLOCK *v5; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  _DMA_ADAPTER *DmaAdapterObject; // rsi
  LARGE_INTEGER v12; // r14
  int v13; // ecx
  void (__fastcall *FreeCommonBuffer)(_DMA_ADAPTER *, unsigned int, _LARGE_INTEGER, void *, unsigned __int8); // r12
  unsigned int v15; // ebx
  _BOOL8 v17; // rdx
  char BugCheckParameter4; // [rsp+20h] [rbp-48h]
  char BugCheckParameter4a; // [rsp+20h] [rbp-48h]
  int v20; // [rsp+30h] [rbp-38h] BYREF
  LARGE_INTEGER v21; // [rsp+38h] [rbp-30h]

  v5 = *(struct _NDIS_SG_DMA_BLOCK **)(BugCheckParameter2 + 504);
  _InterlockedIncrement64(&qword_1C00F7968);
  v20 = 16;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  DmaAdapterObject = v5->DmaAdapterObject;
  v12 = PerformanceCounter;
  v21 = PerformanceCounter;
  if ( !DmaAdapterObject )
  {
    DmaAdapterObject = v5->SavedDmaAdapterObject;
    if ( !DmaAdapterObject )
      goto LABEL_14;
    v5->DmaAdapterObject = DmaAdapterObject;
  }
  v13 = 72;
  if ( a2 >= 0x48 )
    v13 = a2;
  FreeCommonBuffer = DmaAdapterObject->DmaOperations->FreeCommonBuffer;
  v15 = ~(ndisDmaAlignment - 1) & (v13 + ndisDmaAlignment - 1);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(&SharedMemoryResource, 1u);
  if ( (unsigned __int64)v15 + 8 < 0x1000 )
  {
    if ( *(_DWORD *)((a4 & 0xFFFFFFFFFFFFF000uLL) + 0xFF8) != 1752384590 )
    {
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        *(_QWORD *)(BugCheckParameter2 + 3856),
        "Freeing shared memory not allocated");
      KeBugCheckEx(0x7Cu, 3uLL, BugCheckParameter2, a4 & 0xFFFFFFFFFFFFF000uLL, a4);
    }
    if ( (*(_DWORD *)((a4 & 0xFFFFFFFFFFFFF000uLL) + 0xFFC))-- == 1 )
    {
      LODWORD(a5) = a5 & 0xFFFFF000;
      BugCheckParameter4a = a3;
      ((void (__fastcall *)(_DMA_ADAPTER *, __int64, __int64, ULONG_PTR, char))FreeCommonBuffer)(
        DmaAdapterObject,
        4096LL,
        a5,
        a4 & 0xFFFFFFFFFFFFF000uLL,
        BugCheckParameter4a);
      v17 = a3 != 0;
      if ( (void *)(a4 & 0xFFFFFFFFFFFFF000uLL) == v5->SharedMemoryPage[v17] )
      {
        *(unsigned int *)((char *)v5->SharedMemoryLeft + (a3 != 0 ? 4 : 0)) = 0;
        v5->SharedMemoryPage[v17] = 0LL;
      }
    }
  }
  else
  {
    BugCheckParameter4 = a3;
    ((void (__fastcall *)(_DMA_ADAPTER *, _QWORD, __int64, ULONG_PTR, char))FreeCommonBuffer)(
      DmaAdapterObject,
      v15,
      a5,
      a4,
      BugCheckParameter4);
  }
  ndisDereferenceDmaAdapter(v5);
  ExReleaseResourceLite(&SharedMemoryResource);
  KeLeaveCriticalRegion();
LABEL_14:
  if ( v12.QuadPart )
    NdisStatisticalStopwatch::Stop((NdisStatisticalStopwatch *)&v20);
}
