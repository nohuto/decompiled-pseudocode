/*
 * XREFs of ?ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00CC948
 * Callers:
 *     ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00C1C90 (-ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMSendPacketsXToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00C8630 (-ndisMSendPacketsXToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C0030BF4 (WPP_RECORDER_SF_L_ea_1C0030BF4.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C00315F8 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     NdisAllocateBuffer @ 0x1C00C55A0 (NdisAllocateBuffer.c)
 *     ?ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00C8070 (-ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     NdisQueryPacket @ 0x1C00CB974 (NdisQueryPacket.c)
 *     ?ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z @ 0x1C00CBA20 (-ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z.c)
 *     PplpRetrieveListIndex @ 0x1C00CE79C (PplpRetrieveListIndex.c)
 */

void __fastcall ndisMAllocSGList(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET *a2)
{
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // r13
  __int64 v5; // rdx
  char *v6; // rbx
  void *SGListLookasideList; // rcx
  struct _LOOKASIDE_LIST_EX *ListIndex; // rax
  PVOID v9; // r14
  KIRQL v10; // r12
  UINT v11; // r14d
  __int64 v12; // rdx
  int v13; // ebx
  struct _LOOKASIDE_LIST_EX *v14; // rax
  unsigned __int8 *Pool2; // rax
  unsigned __int8 *v16; // r12
  unsigned int *v17; // rdx
  int v18; // ebx
  PNDIS_BUFFER v19; // r15
  bool v20; // sf
  char *v21; // rbx
  KIRQL v22; // al
  _DMA_ADAPTER *DmaAdapterObject; // rcx
  char v24[8]; // [rsp+28h] [rbp-58h]
  int v25; // [rsp+38h] [rbp-48h]
  PVOID v26; // [rsp+40h] [rbp-40h]
  PNDIS_BUFFER Buffer; // [rsp+60h] [rbp-20h] BYREF
  PVOID Entry; // [rsp+68h] [rbp-18h]
  char *v29; // [rsp+70h] [rbp-10h]
  struct _NDIS_STACK_RESERVED *Status; // [rsp+C0h] [rbp+40h] BYREF
  UINT Length; // [rsp+D0h] [rbp+50h] BYREF
  PNDIS_BUFFER FirstBuffer; // [rsp+D8h] [rbp+58h] BYREF

  MiniportSGDmaBlock = a1->MiniportSGDmaBlock;
  FirstBuffer = 0LL;
  Length = 0;
  Buffer = 0LL;
  NdisQueryPacket(a2, &a2->Private.PhysicalCount, 0LL, &FirstBuffer, &Length);
  if ( !FirstBuffer )
  {
    *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) = 0LL;
    *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = 0LL;
    a2->Private.Flags &= ~0x800u;
    if ( (a1->Flags & 0x20000) != 0 )
    {
      Status = 0LL;
LABEL_30:
      NDIS_STACK_RESERVED_FROM_PACKET(a2, &Status);
      (*(void (__fastcall **)(__int64, _QWORD, struct _NDIS_PACKET *))(*((_QWORD *)Status + 1) + 272LL))(
        3221225473LL,
        *((_QWORD *)Status + 1),
        a2);
      return;
    }
LABEL_31:
    ndisMSendCompleteX(a1, a2, 0xC0000001);
    return;
  }
  v6 = (char *)FirstBuffer->StartVa + FirstBuffer->ByteOffset;
  SGListLookasideList = MiniportSGDmaBlock->SGListLookasideList;
  LODWORD(v5) = KeGetPcr()->Prcb.Number;
  v29 = v6;
  ListIndex = (struct _LOOKASIDE_LIST_EX *)PplpRetrieveListIndex(SGListLookasideList, v5);
  Entry = ExAllocateFromLookasideListEx(ListIndex);
  v9 = Entry;
  v10 = KfRaiseIrql(2u);
  if ( Entry )
  {
    a2->Private.Flags |= 0x2000u;
    *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = v9;
    v26 = v9;
    v11 = Length;
    LODWORD(Status) = MiniportSGDmaBlock->DmaAdapterObject->DmaOperations->BuildScatterGatherList(
                        MiniportSGDmaBlock->DmaAdapterObject,
                        a1->DeviceObject,
                        FirstBuffer,
                        v6,
                        Length,
                        ndisMProcessSGList,
                        a2,
                        1u,
                        v26,
                        MiniportSGDmaBlock->ScatterGatherListSize);
    v13 = (int)Status;
    if ( (int)Status >= 0 )
      goto LABEL_10;
    *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = 0LL;
    a2->Private.Flags &= ~0x2000u;
    LODWORD(v12) = KeGetPcr()->Prcb.Number;
    v14 = (struct _LOOKASIDE_LIST_EX *)PplpRetrieveListIndex(MiniportSGDmaBlock->SGListLookasideList, v12);
    ExFreeToLookasideListEx(v14, Entry);
    v13 = (int)Status;
  }
  else
  {
    v13 = -1073741670;
    LODWORD(Status) = -1073741670;
  }
  v11 = Length;
  if ( v13 < 0 )
  {
    LOBYTE(v25) = 1;
    v13 = MiniportSGDmaBlock->DmaAdapterObject->DmaOperations->GetScatterGatherList(
            MiniportSGDmaBlock->DmaAdapterObject,
            a1->DeviceObject,
            FirstBuffer,
            v29,
            Length,
            ndisMProcessSGList,
            a2,
            v25);
    LODWORD(Status) = v13;
  }
LABEL_10:
  if ( v10 != 2 )
    KeLowerIrql(v10);
  if ( v13 < 0 )
  {
    Length = 0;
    Pool2 = (unsigned __int8 *)ExAllocatePool2(66LL, v11, 1735607374);
    v16 = Pool2;
    if ( Pool2 )
    {
      NdisAllocateBuffer((PNDIS_STATUS)&Status, &Buffer, 0LL, Pool2, v11);
      v18 = (int)Status;
      v19 = Buffer;
      v20 = (int)Status < 0;
      if ( (_DWORD)Status )
        goto LABEL_19;
      ndisMCopyFromPacketToBuffer(a2, v17, v11, v16, &Length);
      if ( Length == v11 )
      {
        a2->Private.Flags |= 0x800u;
        v21 = (char *)v19->StartVa + v19->ByteOffset;
        *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = v19;
        v22 = KfRaiseIrql(2u);
        DmaAdapterObject = MiniportSGDmaBlock->DmaAdapterObject;
        LOBYTE(v25) = 1;
        LOBYTE(Status) = v22;
        v18 = DmaAdapterObject->DmaOperations->GetScatterGatherList(
                DmaAdapterObject,
                a1->DeviceObject,
                v19,
                v21,
                v11,
                ndisMProcessSGList,
                a2,
                v25);
        if ( (_BYTE)Status != 2 )
          KeLowerIrql((KIRQL)Status);
        v20 = v18 < 0;
LABEL_19:
        if ( !v20 )
          return;
LABEL_22:
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v24 = v18;
          WPP_RECORDER_SF_L(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            3u,
            0x12u,
            (struct _GUID *)&WPP_9631851058cb35c6ce0e43959fab5e67_Traceguids,
            *(_QWORD *)v24);
        }
        if ( v19 )
          IoFreeMdl(v19);
        if ( v16 )
          ExFreePoolWithTag(v16, 0);
        *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) = 0LL;
        *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = 0LL;
        a2->Private.Flags &= ~0x800u;
        if ( (a1->Flags & 0x20000) != 0 )
        {
          Status = 0LL;
          goto LABEL_30;
        }
        goto LABEL_31;
      }
    }
    v19 = Buffer;
    v18 = -1073741670;
    goto LABEL_22;
  }
}
