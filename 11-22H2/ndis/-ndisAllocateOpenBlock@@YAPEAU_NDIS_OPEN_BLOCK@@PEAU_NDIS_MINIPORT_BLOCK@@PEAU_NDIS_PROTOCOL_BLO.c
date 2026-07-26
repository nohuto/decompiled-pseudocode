/*
 * XREFs of ?ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x1C001AF6C
 * Callers:
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1C009C32C (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     NdisOpenAdapterEx @ 0x1C0149DA0 (NdisOpenAdapterEx.c)
 * Callees:
 *     NdisNblTrackerRegisterComponent @ 0x1C001B0B0 (NdisNblTrackerRegisterComponent.c)
 *     ?ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x1C001B288 (-ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z.c)
 *     NdisAllocateRefCount @ 0x1C001BED0 (NdisAllocateRefCount.c)
 *     ?ndisFreePerProcessorSlot@@YAXPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x1C0022890 (-ndisFreePerProcessorSlot@@YAXPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z.c)
 */

struct _NDIS_OPEN_BLOCK *__fastcall ndisAllocateOpenBlock(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_PROTOCOL_BLOCK *a2,
        char a3)
{
  struct PNDIS_PER_PROCESSOR_SLOT__ *PerProcessorSlot; // rsi
  int v7; // edi
  __int64 Pool2; // rax
  struct _NDIS_OPEN_BLOCK *v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 RefCount; // rax
  struct _NDIS_OPEN_BLOCK *result; // rax

  PerProcessorSlot = ndisAllocatePerProcessorSlot(0x6F6D444Eu);
  if ( !PerProcessorSlot )
    return 0LL;
  v7 = (a1->Flags & 0x20000) != 0 ? 1168 : 1024;
  Pool2 = ExAllocatePool2(64LL, (a1->Flags & 0x20000) != 0 ? 1168LL : 1024LL, 1869431886);
  v9 = (struct _NDIS_OPEN_BLOCK *)Pool2;
  if ( !Pool2 )
  {
    ndisFreePerProcessorSlot((ULONG_PTR)PerProcessorSlot, 0x6F6D444EuLL);
    return 0LL;
  }
  *(_QWORD *)(Pool2 + 720) = PerProcessorSlot;
  if ( a3 )
  {
    *(_WORD *)Pool2 = 274;
    *(_WORD *)(Pool2 + 2) = v7;
  }
  v10 = (_QWORD *)(Pool2 + 736);
  v10[1] = v10;
  *v10 = v10;
  v9->SharedMemoryBlockList.Blink = &v9->SharedMemoryBlockList;
  v9->SharedMemoryBlockList.Flink = &v9->SharedMemoryBlockList;
  v9->VFList.Blink = &v9->VFList;
  v9->VFList.Flink = &v9->VFList;
  v9->VPortList.Blink = &v9->VPortList;
  v9->VPortList.Flink = &v9->VPortList;
  KeInitializeSpinLock(&v9->RefCountLock);
  v9->NblTracker = (NDIS_NBL_TRACKER_HANDLE__ *)NdisNblTrackerRegisterComponent(2LL, v9, &a2->Name);
  LOBYTE(v11) = 20;
  RefCount = NdisAllocateRefCount(v11, 0LL);
  v9->UnsolicitedUnbindComplete.List.Flink = 0LL;
  v9->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)RefCount;
  v9->UnsolicitedUnbindComplete.WorkerRoutine = ndisCompleteUnsolicitedUnbind;
  result = v9;
  v9->UnsolicitedUnbindComplete.Parameter = v9;
  return result;
}
