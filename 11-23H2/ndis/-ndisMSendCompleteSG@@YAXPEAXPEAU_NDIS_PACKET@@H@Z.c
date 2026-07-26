/*
 * XREFs of ?ndisMSendCompleteSG@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00CA510
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0031788 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ?ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z @ 0x1C006D00C (-ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z.c)
 *     ?ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00C9AC8 (-ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00CA964 (-NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C00CAA60 (-ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00CD248 (-ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 */

void __fastcall ndisMSendCompleteSG(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET *a2, unsigned int a3)
{
  struct _NDIS_STACK_RESERVED *v6; // r14
  unsigned __int8 *WrapperReserved; // rax
  __int64 v8; // rdx
  __int64 v9; // rbp
  unsigned __int8 **v10; // rcx
  __int64 NdisPacketOobOffset; // rax
  struct _NDIS_STACK_RESERVED *v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  NDIS_STACK_RESERVED_FROM_PACKET(a2, &v12);
  if ( (*(_DWORD *)v12 & 0xFFFFFF00) != 0x4D4F4300LL && (a2->Private.NdisPacketFlags & 0x10) != 0 )
  {
    if ( !a3 )
      NDISM_SEND_PACKET_STATS(a1, a2);
    if ( (a2->Private.NdisPacketFlags & 8) != 0 )
    {
      *(unsigned int *)((char *)&a2->Private.Count + a2->Private.NdisPacketOobOffset) = a3;
      a2->Private.NdisPacketFlags &= ~8u;
    }
    else
    {
      KeAcquireSpinLockAtDpcLevel(&a1->Lock);
      v6 = v12;
      a1->MiniportThread = KeGetCurrentThread();
      WrapperReserved = a2->WrapperReserved;
      v8 = *(_QWORD *)&a2->MacReserved[16];
      v9 = *(_QWORD *)v6;
      if ( *(struct _NDIS_PACKET **)(v8 + 8) != (struct _NDIS_PACKET *)&a2->MacReserved[16]
        || (v10 = *(unsigned __int8 ***)&a2->MacReserved[24], *v10 != WrapperReserved) )
      {
        __fastfail(3u);
      }
      *v10 = (unsigned __int8 *)v8;
      *(_QWORD *)(v8 + 8) = v10;
      *(_QWORD *)&a2->MacReserved[24] = &a2->MacReserved[16];
      *(_QWORD *)WrapperReserved = WrapperReserved;
      a1->Flags |= 0x400000u;
      *(_QWORD *)v6 = 1297040177LL;
      if ( a1->FirstPendingPacket )
        ndisMQueueWorkItem(a1, NdisWorkItemSend, 0LL);
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
        ndisMSendCompletePacketToNetBufferLists((struct _NDIS_FILTER_BLOCK *)a1, a2, a3);
      else
        (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(v9 + 112))(v9, a2, a3);
    }
  }
}
