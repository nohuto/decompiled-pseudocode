/*
 * XREFs of ?ndisMProcessSGListS@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z @ 0x1C00C8B30
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C002DDD8 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00674F8 (-ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z @ 0x1C0067C30 (-ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z.c)
 */

void __fastcall ndisMProcessSGListS(
        struct _DEVICE_OBJECT *a1,
        struct _IRP *a2,
        struct _SCATTER_GATHER_LIST *a3,
        struct _NDIS_PACKET *a4)
{
  __int64 NdisPacketOobOffset; // rax
  _BYTE *v6; // rbx
  struct _NDIS_MINIPORT_BLOCK *v7; // rbx
  _LIST_ENTRY *v8; // rax
  _LIST_ENTRY *Blink; // rdx
  char v10; // di
  struct _NDIS_STACK_RESERVED *v11; // [rsp+40h] [rbp+18h] BYREF

  NdisPacketOobOffset = a4->Private.NdisPacketOobOffset;
  v11 = 0LL;
  *(unsigned __int64 *)((char *)a4->Reserved + NdisPacketOobOffset) = (unsigned __int64)a3;
  NDIS_STACK_RESERVED_FROM_PACKET(a4, &v11);
  v6 = *(_BYTE **)v11;
  if ( **(_BYTE **)v11 == 5 )
    v7 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)v6 + 4);
  else
    v7 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)v6 + 2);
  KeAcquireSpinLockAtDpcLevel(&v7->Lock);
  v7->MiniportThread = KeGetCurrentThread();
  v8 = (_LIST_ENTRY *)&a4->MacReserved[16];
  *(_QWORD *)&a4->MacReserved[24] = &a4->MacReserved[16];
  *(_QWORD *)&a4->MacReserved[16] = &a4->MacReserved[16];
  Blink = v7->PacketList.Blink;
  if ( Blink->Flink != &v7->PacketList )
    __fastfail(3u);
  v8->Flink = &v7->PacketList;
  *(_QWORD *)&a4->MacReserved[24] = Blink;
  Blink->Flink = v8;
  v7->PacketList.Blink = v8;
  if ( !v7->FirstPendingPacket )
    v7->FirstPendingPacket = a4;
  v10 = 0;
  if ( !v7->LockAcquired )
  {
    v7->LockAcquired = 1;
    v10 = 1;
    v7->LockThread = KeGetCurrentThread();
  }
  ndisMQueueWorkItem(v7, NdisWorkItemSend, 0LL);
  if ( v10 )
  {
    ndisMProcessDeferred(v7);
    v7->LockThread = 0LL;
    v7->LockAcquired = 0;
  }
  v7->MiniportThread = 0LL;
  KeReleaseSpinLockFromDpcLevel(&v7->Lock);
}
