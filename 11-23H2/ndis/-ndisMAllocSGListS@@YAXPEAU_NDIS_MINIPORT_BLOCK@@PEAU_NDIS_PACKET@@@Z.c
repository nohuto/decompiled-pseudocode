/*
 * XREFs of ?ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00CCD2C
 * Callers:
 *     ?ndisMSendPacketsSGToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00CA6B0 (-ndisMSendPacketsSGToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C000301C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_L @ 0x1C0030D84 (WPP_RECORDER_SF_L_ea_1C0030D84.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0031788 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     NdisAllocateBuffer @ 0x1C00C55C0 (NdisAllocateBuffer.c)
 *     ?ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00C9AC8 (-ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C00CAA60 (-ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     NdisQueryPacket @ 0x1C00CB994 (NdisQueryPacket.c)
 *     ?ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z @ 0x1C00CBA40 (-ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z.c)
 *     ?ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00CD248 (-ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     PplpRetrieveListIndex @ 0x1C00CE7BC (PplpRetrieveListIndex.c)
 */

void __fastcall ndisMAllocSGListS(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET *a2)
{
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // r13
  __int64 v5; // rdx
  struct _NDIS_STACK_RESERVED *v6; // r14
  __int64 v7; // r15
  __int64 NdisPacketOobOffset; // rax
  char *v9; // rbx
  void *SGListLookasideList; // rcx
  struct _LOOKASIDE_LIST_EX *ListIndex; // rax
  PVOID v12; // r14
  KIRQL v13; // r15
  UINT v14; // r14d
  __int64 v15; // rdx
  int v16; // ebx
  struct _LOOKASIDE_LIST_EX *v17; // rax
  unsigned __int8 *Pool2; // rax
  unsigned __int8 *v19; // r12
  unsigned int *v20; // rdx
  signed int v21; // ebx
  PNDIS_BUFFER v22; // r15
  bool v23; // sf
  char *v24; // rbx
  KIRQL v25; // r13
  struct _NDIS_STACK_RESERVED *v26; // r15
  __int64 v27; // r13
  __int64 v28; // rax
  KIRQL v29; // dl
  char v30[8]; // [rsp+28h] [rbp-41h]
  int v31; // [rsp+38h] [rbp-31h]
  PVOID v32; // [rsp+40h] [rbp-29h]
  PNDIS_BUFFER FirstBuffer; // [rsp+60h] [rbp-9h] BYREF
  struct _NDIS_STACK_RESERVED *v34; // [rsp+68h] [rbp-1h] BYREF
  PNDIS_BUFFER Buffer; // [rsp+70h] [rbp+7h] BYREF
  PVOID Entry; // [rsp+78h] [rbp+Fh]
  char *v37; // [rsp+80h] [rbp+17h]
  _NDIS_SG_DMA_BLOCK *v38; // [rsp+88h] [rbp+1Fh]
  KIRQL NewIrql; // [rsp+D0h] [rbp+67h] BYREF
  int Status; // [rsp+E0h] [rbp+77h] BYREF
  UINT Length; // [rsp+E8h] [rbp+7Fh] BYREF

  MiniportSGDmaBlock = a1->MiniportSGDmaBlock;
  v38 = MiniportSGDmaBlock;
  FirstBuffer = 0LL;
  Length = 0;
  Buffer = 0LL;
  v34 = 0LL;
  NewIrql = 0;
  NdisQueryPacket(a2, &a2->Private.PhysicalCount, 0LL, &FirstBuffer, &Length);
  if ( !FirstBuffer )
  {
    *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) = 0LL;
    *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = 0LL;
    a2->Private.Flags &= ~0x800u;
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    NDIS_STACK_RESERVED_FROM_PACKET(a2, &v34);
    v6 = v34;
    v7 = *(_QWORD *)v34;
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
LABEL_42:
    KeAcquireSpinLockAtDpcLevel(&a1->Lock);
    v29 = NewIrql;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v29);
    return;
  }
  v9 = (char *)FirstBuffer->StartVa + FirstBuffer->ByteOffset;
  SGListLookasideList = MiniportSGDmaBlock->SGListLookasideList;
  LODWORD(v5) = KeGetPcr()->Prcb.Number;
  v37 = v9;
  ListIndex = (struct _LOOKASIDE_LIST_EX *)PplpRetrieveListIndex(SGListLookasideList, v5);
  Entry = ExAllocateFromLookasideListEx(ListIndex);
  v12 = Entry;
  NewIrql = KfRaiseIrql(2u);
  v13 = NewIrql;
  if ( v12 )
  {
    a2->Private.Flags |= 0x2000u;
    *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = v12;
    v32 = v12;
    v14 = Length;
    Status = MiniportSGDmaBlock->DmaAdapterObject->DmaOperations->BuildScatterGatherList(
               MiniportSGDmaBlock->DmaAdapterObject,
               a1->DeviceObject,
               FirstBuffer,
               v9,
               Length,
               (void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *))ndisMProcessSGListS,
               a2,
               1u,
               v32,
               MiniportSGDmaBlock->ScatterGatherListSize);
    v16 = Status;
    if ( Status >= 0 )
      goto LABEL_16;
    *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = 0LL;
    a2->Private.Flags &= ~0x2000u;
    LODWORD(v15) = KeGetPcr()->Prcb.Number;
    v17 = (struct _LOOKASIDE_LIST_EX *)PplpRetrieveListIndex(MiniportSGDmaBlock->SGListLookasideList, v15);
    ExFreeToLookasideListEx(v17, Entry);
    v16 = Status;
    v13 = NewIrql;
  }
  else
  {
    v16 = -1073741670;
    Status = -1073741670;
  }
  v14 = Length;
  if ( v16 < 0 )
  {
    LOBYTE(v31) = 1;
    v16 = MiniportSGDmaBlock->DmaAdapterObject->DmaOperations->GetScatterGatherList(
            MiniportSGDmaBlock->DmaAdapterObject,
            a1->DeviceObject,
            FirstBuffer,
            v37,
            Length,
            (void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *))ndisMProcessSGListS,
            a2,
            v31);
    Status = v16;
  }
LABEL_16:
  if ( v13 != 2 )
    KeLowerIrql(v13);
  if ( v16 < 0 )
  {
    Length = 0;
    Pool2 = (unsigned __int8 *)ExAllocatePool2(66LL, v14, 1735607374);
    v19 = Pool2;
    if ( Pool2 )
    {
      NdisAllocateBuffer(&Status, &Buffer, 0LL, Pool2, v14);
      v21 = Status;
      v22 = Buffer;
      v23 = Status < 0;
      if ( Status )
        goto LABEL_25;
      ndisMCopyFromPacketToBuffer(a2, v20, v14, v19, &Length);
      if ( Length == v14 )
      {
        a2->Private.Flags |= 0x800u;
        v24 = (char *)v22->StartVa + v22->ByteOffset;
        *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = v22;
        LOBYTE(v31) = 1;
        v25 = KfRaiseIrql(2u);
        NewIrql = v25;
        v21 = v38->DmaAdapterObject->DmaOperations->GetScatterGatherList(
                v38->DmaAdapterObject,
                a1->DeviceObject,
                v22,
                v24,
                v14,
                (void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *))ndisMProcessSGListS,
                a2,
                v31);
        if ( v25 != 2 )
          KeLowerIrql(v25);
        v23 = v21 < 0;
LABEL_25:
        if ( !v23 )
          return;
        goto LABEL_28;
      }
    }
    v22 = Buffer;
    v21 = -1073741670;
LABEL_28:
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v30 = v21;
      WPP_RECORDER_SF_L(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        3u,
        0x13u,
        (struct _GUID *)&WPP_9631851058cb35c6ce0e43959fab5e67_Traceguids,
        *(_QWORD *)v30);
    }
    if ( v22 )
      IoFreeMdl(v22);
    if ( v19 )
      ExFreePoolWithTag(v19, 0);
    *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) = 0LL;
    *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = 0LL;
    a2->Private.Flags &= ~0x800u;
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    NDIS_STACK_RESERVED_FROM_PACKET(a2, &v34);
    v26 = v34;
    v27 = *(_QWORD *)v34;
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
      ndisMSendCompletePacketToNetBufferLists((struct _NDIS_FILTER_BLOCK *)a1, a2, v21);
    else
      (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(v27 + 112))(v27, a2, (unsigned int)v21);
    goto LABEL_42;
  }
}
