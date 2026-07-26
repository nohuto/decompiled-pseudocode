/*
 * XREFs of ?ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00C8528
 * Callers:
 *     ?ndisMAbortPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAX@Z @ 0x1C001499C (-ndisMAbortPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAX@Z.c)
 *     ?ndisMCoSendCompleteToNdisPacket@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C00BD990 (-ndisMCoSendCompleteToNdisPacket@@YAXHPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C00BDA30 (-ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00C3450 (-ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisMDeferredSendPacketsSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C5200 (-ndisMDeferredSendPacketsSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDeferredSendSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C5660 (-ndisMDeferredSendSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMSendCompleteSG@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00C58A0 (-ndisMSendCompleteSG@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisMSendPacketsSGToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00C5A40 (-ndisMSendPacketsSGToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00C7FC4 (-ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     PplpRetrieveListIndex @ 0x1C00C9AEC (PplpRetrieveListIndex.c)
 */

void __fastcall ndisMFreeSGList(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET *a2, __int64 a3)
{
  __int64 NdisPacketOobOffset; // rax
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // rsi
  _SCATTER_GATHER_LIST *v6; // rdx
  __int64 v7; // rdx
  unsigned int Flags; // eax
  __int64 v9; // rax
  _SLIST_ENTRY *v10; // rdi
  __int64 ListIndex; // rbx
  __int64 v12; // rax
  struct _MDL *v13; // rcx
  char *v14; // rbx

  NdisPacketOobOffset = a2->Private.NdisPacketOobOffset;
  MiniportSGDmaBlock = a1->MiniportSGDmaBlock;
  LOBYTE(a3) = 1;
  v6 = *(_SCATTER_GATHER_LIST **)((char *)a2->Reserved + NdisPacketOobOffset);
  *(unsigned __int64 *)((char *)a2->Reserved + NdisPacketOobOffset) = 0LL;
  MiniportSGDmaBlock->DmaAdapterObject->DmaOperations->PutScatterGatherList(
    MiniportSGDmaBlock->DmaAdapterObject,
    v6,
    a3);
  Flags = a2->Private.Flags;
  if ( (Flags & 0x2000) != 0 )
  {
    a2->Private.Flags = Flags & 0xFFFFDFFF;
    v9 = a2->Private.NdisPacketOobOffset;
    v10 = *(_SLIST_ENTRY **)&a2->MacReserved[v9 + 24];
    *(_QWORD *)&a2->MacReserved[v9 + 24] = 0LL;
    LODWORD(v7) = KeGetPcr()->Prcb.Number;
    ListIndex = PplpRetrieveListIndex(MiniportSGDmaBlock->SGListLookasideList, v7);
    ++*(_DWORD *)(ListIndex + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)ListIndex) < *(_WORD *)(ListIndex + 16) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)ListIndex, v10);
    }
    else
    {
      ++*(_DWORD *)(ListIndex + 32);
      (*(void (__fastcall **)(_SLIST_ENTRY *, __int64))(ListIndex + 56))(v10, ListIndex);
    }
  }
  else if ( (Flags & 0x800) != 0 )
  {
    a2->Private.Flags = Flags & 0xFFFFF7FF;
    v12 = a2->Private.NdisPacketOobOffset;
    v13 = *(struct _MDL **)&a2->MacReserved[v12 + 24];
    *(_QWORD *)&a2->MacReserved[v12 + 24] = 0LL;
    v14 = (char *)v13->StartVa + v13->ByteOffset;
    IoFreeMdl(v13);
    ExFreePoolWithTag(v14, 0);
  }
}
