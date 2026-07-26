/*
 * XREFs of ?ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00CD228
 * Callers:
 *     ?ndisMAbortPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAX@Z @ 0x1C0014744 (-ndisMAbortPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAX@Z.c)
 *     ?ndisMCoSendCompleteToNdisPacket@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C00C2A50 (-ndisMCoSendCompleteToNdisPacket@@YAXHPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C00C2AF0 (-ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00C8070 (-ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisMDeferredSendPacketsSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C9E40 (-ndisMDeferredSendPacketsSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDeferredSendSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00CA2B0 (-ndisMDeferredSendSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMSendCompleteSG@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00CA4F0 (-ndisMSendCompleteSG@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisMSendPacketsSGToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00CA690 (-ndisMSendPacketsSGToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00CCD0C (-ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     PplpRetrieveListIndex @ 0x1C00CE79C (PplpRetrieveListIndex.c)
 */

void __fastcall ndisMFreeSGList(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET *a2, __int64 a3)
{
  __int64 NdisPacketOobOffset; // rax
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // rsi
  _SCATTER_GATHER_LIST *v6; // rdx
  __int64 v7; // rdx
  unsigned int Flags; // eax
  __int64 v9; // rax
  void *v10; // rbx
  struct _LOOKASIDE_LIST_EX *ListIndex; // rax
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
    v10 = *(void **)&a2->MacReserved[v9 + 24];
    *(_QWORD *)&a2->MacReserved[v9 + 24] = 0LL;
    LODWORD(v7) = KeGetPcr()->Prcb.Number;
    ListIndex = (struct _LOOKASIDE_LIST_EX *)PplpRetrieveListIndex(MiniportSGDmaBlock->SGListLookasideList, v7);
    ExFreeToLookasideListEx(ListIndex, v10);
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
