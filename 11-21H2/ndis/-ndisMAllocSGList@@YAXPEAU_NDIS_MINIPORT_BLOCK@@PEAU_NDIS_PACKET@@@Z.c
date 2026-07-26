/*
 * XREFs of ?ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00C7BA8
 * Callers:
 *     ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00BCC10 (-ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMSendPacketsXToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00C3A10 (-ndisMSendPacketsXToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C002B684 (WPP_RECORDER_SF_d.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C002DDD8 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     NdisAllocateBuffer @ 0x1C00C09C0 (NdisAllocateBuffer.c)
 *     ?ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00C3450 (-ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     NdisQueryPacket @ 0x1C00C6D04 (NdisQueryPacket.c)
 *     ?ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z @ 0x1C00C6DB0 (-ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z.c)
 *     PplpRetrieveListIndex @ 0x1C00C9AEC (PplpRetrieveListIndex.c)
 */

void __fastcall ndisMAllocSGList(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET *a2)
{
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // r13
  __int64 v5; // rdx
  __int64 ListIndex; // rbx
  _SLIST_ENTRY *v7; // r15
  KIRQL v8; // r12
  UINT v9; // r14d
  char *v10; // r9
  __int64 v11; // rdx
  int v12; // ebx
  __int64 v13; // rbx
  unsigned __int8 *Pool2; // rax
  unsigned __int8 *v15; // r15
  unsigned int *v16; // rdx
  int v17; // ebx
  PNDIS_BUFFER v18; // r12
  bool v19; // sf
  char *v20; // rbx
  KIRQL v21; // al
  _DMA_ADAPTER *DmaAdapterObject; // rcx
  char v23[8]; // [rsp+28h] [rbp-48h]
  int v24; // [rsp+38h] [rbp-38h]
  PNDIS_BUFFER Buffer; // [rsp+60h] [rbp-10h] BYREF
  char *v26; // [rsp+68h] [rbp-8h]
  struct _NDIS_STACK_RESERVED *Status; // [rsp+B0h] [rbp+40h] BYREF
  UINT Length; // [rsp+C0h] [rbp+50h] BYREF
  PNDIS_BUFFER FirstBuffer; // [rsp+C8h] [rbp+58h] BYREF

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
LABEL_35:
      NDIS_STACK_RESERVED_FROM_PACKET(a2, &Status);
      (*(void (__fastcall **)(__int64, _QWORD, struct _NDIS_PACKET *))(*((_QWORD *)Status + 1) + 272LL))(
        3221225473LL,
        *((_QWORD *)Status + 1),
        a2);
      return;
    }
LABEL_36:
    ndisMSendCompleteX(a1, a2, 0xC0000001);
    return;
  }
  LODWORD(v5) = KeGetPcr()->Prcb.Number;
  v26 = (char *)FirstBuffer->StartVa + FirstBuffer->ByteOffset;
  ListIndex = PplpRetrieveListIndex(MiniportSGDmaBlock->SGListLookasideList, v5);
  ++*(_DWORD *)(ListIndex + 20);
  v7 = ExpInterlockedPopEntrySList((PSLIST_HEADER)ListIndex);
  if ( !v7 )
  {
    ++*(_DWORD *)(ListIndex + 24);
    v7 = (_SLIST_ENTRY *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(ListIndex + 48))(
                           *(unsigned int *)(ListIndex + 36),
                           *(unsigned int *)(ListIndex + 44),
                           *(unsigned int *)(ListIndex + 40),
                           ListIndex);
  }
  v8 = KfRaiseIrql(2u);
  if ( v7 )
  {
    a2->Private.Flags |= 0x2000u;
    v9 = Length;
    v10 = v26;
    *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = v7;
    LODWORD(Status) = MiniportSGDmaBlock->DmaAdapterObject->DmaOperations->BuildScatterGatherList(
                        MiniportSGDmaBlock->DmaAdapterObject,
                        a1->DeviceObject,
                        FirstBuffer,
                        v10,
                        v9,
                        ndisMProcessSGList,
                        a2,
                        1u,
                        v7,
                        MiniportSGDmaBlock->ScatterGatherListSize);
    v12 = (int)Status;
    if ( (int)Status >= 0 )
      goto LABEL_15;
    *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = 0LL;
    a2->Private.Flags &= ~0x2000u;
    LODWORD(v11) = KeGetPcr()->Prcb.Number;
    v13 = PplpRetrieveListIndex(MiniportSGDmaBlock->SGListLookasideList, v11);
    ++*(_DWORD *)(v13 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v13) < *(_WORD *)(v13 + 16) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v13, v7);
    }
    else
    {
      ++*(_DWORD *)(v13 + 32);
      (*(void (__fastcall **)(_SLIST_ENTRY *, __int64))(v13 + 56))(v7, v13);
    }
    v12 = (int)Status;
  }
  else
  {
    v12 = -1073741670;
    LODWORD(Status) = -1073741670;
  }
  v9 = Length;
  if ( v12 < 0 )
  {
    LOBYTE(v24) = 1;
    v12 = MiniportSGDmaBlock->DmaAdapterObject->DmaOperations->GetScatterGatherList(
            MiniportSGDmaBlock->DmaAdapterObject,
            a1->DeviceObject,
            FirstBuffer,
            v26,
            Length,
            ndisMProcessSGList,
            a2,
            v24);
    LODWORD(Status) = v12;
  }
LABEL_15:
  if ( v8 != 2 )
    KeLowerIrql(v8);
  if ( v12 < 0 )
  {
    Length = 0;
    Pool2 = (unsigned __int8 *)ExAllocatePool2(66LL, v9, 1735607374);
    v15 = Pool2;
    if ( Pool2 )
    {
      NdisAllocateBuffer((PNDIS_STATUS)&Status, &Buffer, 0LL, Pool2, v9);
      v17 = (int)Status;
      v18 = Buffer;
      v19 = (int)Status < 0;
      if ( (_DWORD)Status )
        goto LABEL_24;
      ndisMCopyFromPacketToBuffer(a2, v16, v9, v15, &Length);
      if ( Length == v9 )
      {
        a2->Private.Flags |= 0x800u;
        v20 = (char *)v18->StartVa + v18->ByteOffset;
        *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = v18;
        v21 = KfRaiseIrql(2u);
        DmaAdapterObject = MiniportSGDmaBlock->DmaAdapterObject;
        LOBYTE(v24) = 1;
        LOBYTE(Status) = v21;
        v17 = DmaAdapterObject->DmaOperations->GetScatterGatherList(
                DmaAdapterObject,
                a1->DeviceObject,
                v18,
                v20,
                v9,
                ndisMProcessSGList,
                a2,
                v24);
        if ( (_BYTE)Status != 2 )
          KeLowerIrql((KIRQL)Status);
        v19 = v17 < 0;
LABEL_24:
        if ( !v19 )
          return;
LABEL_27:
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v23 = v17;
          WPP_RECORDER_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            3u,
            0xDu,
            (struct _GUID *)&WPP_0ce672c581b5354e1037f225da7b2621_Traceguids,
            *(_QWORD *)v23);
        }
        if ( v18 )
          IoFreeMdl(v18);
        if ( v15 )
          ExFreePoolWithTag(v15, 0);
        *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) = 0LL;
        *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = 0LL;
        a2->Private.Flags &= ~0x800u;
        if ( (a1->Flags & 0x20000) != 0 )
        {
          Status = 0LL;
          goto LABEL_35;
        }
        goto LABEL_36;
      }
    }
    v18 = Buffer;
    v17 = -1073741670;
    goto LABEL_27;
  }
}
