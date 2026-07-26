/*
 * XREFs of ?ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00C7FC4
 * Callers:
 *     ?ndisMSendPacketsSGToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00C5A40 (-ndisMSendPacketsSGToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C002B684 (WPP_RECORDER_SF_d.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C002DDD8 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     NdisAllocateBuffer @ 0x1C00C09C0 (NdisAllocateBuffer.c)
 *     ?ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00C4E68 (-ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C00C5DF4 (-ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     NdisQueryPacket @ 0x1C00C6D04 (NdisQueryPacket.c)
 *     ?ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z @ 0x1C00C6DB0 (-ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z.c)
 *     ?ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00C8528 (-ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     PplpRetrieveListIndex @ 0x1C00C9AEC (PplpRetrieveListIndex.c)
 */

void __fastcall ndisMAllocSGListS(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET *a2)
{
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // r13
  __int64 v5; // rdx
  struct _NDIS_STACK_RESERVED *v6; // r14
  __int64 v7; // r15
  __int64 NdisPacketOobOffset; // rax
  __int64 ListIndex; // rbx
  _SLIST_ENTRY *v10; // r12
  KIRQL v11; // r15
  UINT v12; // r14d
  char *v13; // r9
  __int64 v14; // rdx
  int v15; // ebx
  __int64 v16; // rbx
  unsigned __int8 *Pool2; // rax
  unsigned __int8 *v18; // r15
  unsigned int *v19; // rdx
  signed int v20; // ebx
  PNDIS_BUFFER v21; // r12
  bool v22; // sf
  char *v23; // rbx
  KIRQL v24; // al
  _DMA_ADAPTER *DmaAdapterObject; // rcx
  struct _NDIS_STACK_RESERVED *v26; // r15
  __int64 v27; // r13
  __int64 v28; // rax
  KIRQL v29; // dl
  char v30[8]; // [rsp+28h] [rbp-58h]
  int v31; // [rsp+38h] [rbp-48h]
  PNDIS_BUFFER FirstBuffer; // [rsp+60h] [rbp-20h] BYREF
  struct _NDIS_STACK_RESERVED *v33; // [rsp+68h] [rbp-18h] BYREF
  PNDIS_BUFFER Buffer; // [rsp+70h] [rbp-10h] BYREF
  char *v35; // [rsp+78h] [rbp-8h]
  KIRQL NewIrql; // [rsp+C0h] [rbp+40h] BYREF
  int Status; // [rsp+D0h] [rbp+50h] BYREF
  UINT Length; // [rsp+D8h] [rbp+58h] BYREF

  MiniportSGDmaBlock = a1->MiniportSGDmaBlock;
  FirstBuffer = 0LL;
  Length = 0;
  Buffer = 0LL;
  v33 = 0LL;
  NewIrql = 0;
  NdisQueryPacket(a2, &a2->Private.PhysicalCount, 0LL, &FirstBuffer, &Length);
  if ( !FirstBuffer )
  {
    *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) = 0LL;
    *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = 0LL;
    a2->Private.Flags &= ~0x800u;
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    NDIS_STACK_RESERVED_FROM_PACKET(a2, &v33);
    v6 = v33;
    v7 = *(_QWORD *)v33;
    a1->Flags |= 0x400000u;
    *(_QWORD *)v6 = 1297040176LL;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    if ( *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) )
      ndisMFreeSGList(a1, a2);
    *((_DWORD *)v6 + 2) = 0;
    if ( (a1->SendFlags & 8) != 0 && *(void **)((char *)&a2[1].Private.Pool + a2->Private.NdisPacketOobOffset) )
      ndisFreePaddedMdl(a2);
    NdisPacketOobOffset = a2->Private.NdisPacketOobOffset;
    a2->Private.NdisPacketFlags &= 0xC0u;
    if ( *(_MDL **)((char *)&a2[1].Private.Head + NdisPacketOobOffset) )
      ndisMSendCompletePacketToNetBufferLists((struct _NDIS_FILTER_BLOCK *)a1, a2, 0);
    else
      (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(v7 + 112))(v7, a2, 0LL);
LABEL_47:
    KeAcquireSpinLockAtDpcLevel(&a1->Lock);
    v29 = NewIrql;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v29);
    return;
  }
  LODWORD(v5) = KeGetPcr()->Prcb.Number;
  v35 = (char *)FirstBuffer->StartVa + FirstBuffer->ByteOffset;
  ListIndex = PplpRetrieveListIndex(MiniportSGDmaBlock->SGListLookasideList, v5);
  ++*(_DWORD *)(ListIndex + 20);
  v10 = ExpInterlockedPopEntrySList((PSLIST_HEADER)ListIndex);
  if ( !v10 )
  {
    ++*(_DWORD *)(ListIndex + 24);
    v10 = (_SLIST_ENTRY *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(ListIndex + 48))(
                            *(unsigned int *)(ListIndex + 36),
                            *(unsigned int *)(ListIndex + 44),
                            *(unsigned int *)(ListIndex + 40),
                            ListIndex);
  }
  NewIrql = KfRaiseIrql(2u);
  v11 = NewIrql;
  if ( v10 )
  {
    a2->Private.Flags |= 0x2000u;
    v12 = Length;
    v13 = v35;
    *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = v10;
    Status = MiniportSGDmaBlock->DmaAdapterObject->DmaOperations->BuildScatterGatherList(
               MiniportSGDmaBlock->DmaAdapterObject,
               a1->DeviceObject,
               FirstBuffer,
               v13,
               v12,
               (void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *))ndisMProcessSGListS,
               a2,
               1u,
               v10,
               MiniportSGDmaBlock->ScatterGatherListSize);
    v15 = Status;
    if ( Status >= 0 )
      goto LABEL_21;
    *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = 0LL;
    a2->Private.Flags &= ~0x2000u;
    LODWORD(v14) = KeGetPcr()->Prcb.Number;
    v16 = PplpRetrieveListIndex(MiniportSGDmaBlock->SGListLookasideList, v14);
    ++*(_DWORD *)(v16 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v16) < *(_WORD *)(v16 + 16) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v16, v10);
    }
    else
    {
      ++*(_DWORD *)(v16 + 32);
      (*(void (__fastcall **)(_SLIST_ENTRY *, __int64))(v16 + 56))(v10, v16);
    }
    v15 = Status;
    v11 = NewIrql;
  }
  else
  {
    v15 = -1073741670;
    Status = -1073741670;
  }
  v12 = Length;
  if ( v15 < 0 )
  {
    LOBYTE(v31) = 1;
    v15 = MiniportSGDmaBlock->DmaAdapterObject->DmaOperations->GetScatterGatherList(
            MiniportSGDmaBlock->DmaAdapterObject,
            a1->DeviceObject,
            FirstBuffer,
            v35,
            Length,
            (void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *))ndisMProcessSGListS,
            a2,
            v31);
    Status = v15;
  }
LABEL_21:
  if ( v11 != 2 )
    KeLowerIrql(v11);
  if ( v15 < 0 )
  {
    Length = 0;
    Pool2 = (unsigned __int8 *)ExAllocatePool2(66LL, v12, 1735607374);
    v18 = Pool2;
    if ( Pool2 )
    {
      NdisAllocateBuffer(&Status, &Buffer, 0LL, Pool2, v12);
      v20 = Status;
      v21 = Buffer;
      v22 = Status < 0;
      if ( Status )
        goto LABEL_30;
      ndisMCopyFromPacketToBuffer(a2, v19, v12, v18, &Length);
      if ( Length == v12 )
      {
        a2->Private.Flags |= 0x800u;
        v23 = (char *)v21->StartVa + v21->ByteOffset;
        *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = v21;
        v24 = KfRaiseIrql(2u);
        DmaAdapterObject = MiniportSGDmaBlock->DmaAdapterObject;
        LOBYTE(v31) = 1;
        NewIrql = v24;
        v20 = DmaAdapterObject->DmaOperations->GetScatterGatherList(
                DmaAdapterObject,
                a1->DeviceObject,
                v21,
                v23,
                v12,
                (void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *))ndisMProcessSGListS,
                a2,
                v31);
        if ( NewIrql != 2 )
          KeLowerIrql(NewIrql);
        v22 = v20 < 0;
LABEL_30:
        if ( !v22 )
          return;
        goto LABEL_33;
      }
    }
    v21 = Buffer;
    v20 = -1073741670;
LABEL_33:
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v30 = v20;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        3u,
        0xEu,
        (struct _GUID *)&WPP_0ce672c581b5354e1037f225da7b2621_Traceguids,
        *(_QWORD *)v30);
    }
    if ( v21 )
      IoFreeMdl(v21);
    if ( v18 )
      ExFreePoolWithTag(v18, 0);
    *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) = 0LL;
    *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = 0LL;
    a2->Private.Flags &= ~0x800u;
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    NDIS_STACK_RESERVED_FROM_PACKET(a2, &v33);
    v26 = v33;
    v27 = *(_QWORD *)v33;
    a1->Flags |= 0x400000u;
    *(_QWORD *)v26 = 1297040176LL;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    if ( *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) )
      ndisMFreeSGList(a1, a2);
    *((_DWORD *)v26 + 2) = 0;
    if ( (a1->SendFlags & 8) != 0 && *(void **)((char *)&a2[1].Private.Pool + a2->Private.NdisPacketOobOffset) )
      ndisFreePaddedMdl(a2);
    v28 = a2->Private.NdisPacketOobOffset;
    a2->Private.NdisPacketFlags &= 0xC0u;
    if ( *(_MDL **)((char *)&a2[1].Private.Head + v28) )
      ndisMSendCompletePacketToNetBufferLists((struct _NDIS_FILTER_BLOCK *)a1, a2, v20);
    else
      (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(v27 + 112))(v27, a2, (unsigned int)v20);
    goto LABEL_47;
  }
}
