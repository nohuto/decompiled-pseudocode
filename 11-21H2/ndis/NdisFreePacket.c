/*
 * XREFs of NdisFreePacket @ 0x1C002DAD0
 * Callers:
 *     NdisAllocatePacketPoolEx @ 0x1C002D880 (NdisAllocatePacketPoolEx.c)
 *     ?ndisFreeConvertedPacket@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER@@E@Z @ 0x1C006DDD0 (-ndisFreeConvertedPacket@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER@@E@Z.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C008A680 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     NdisMTransferDataComplete @ 0x1C00C40A0 (NdisMTransferDataComplete.c)
 *     ndisLWM5IndicateReceive @ 0x1C00C63D0 (ndisLWM5IndicateReceive.c)
 * Callees:
 *     ?ndisFreePacketPoolHdr@@YAXPEAU_NDIS_PKT_POOL_HDR@@PEAU_NDIS_PKT_POOL@@@Z @ 0x1C00C0CD8 (-ndisFreePacketPoolHdr@@YAXPEAU_NDIS_PKT_POOL_HDR@@PEAU_NDIS_PKT_POOL@@@Z.c)
 */

void __stdcall NdisFreePacket(PNDIS_PACKET Packet)
{
  struct _NDIS_PKT_POOL *Pool; // rdi
  unsigned __int64 Flink; // rbx
  KSPIN_LOCK *p_Lock; // rbp
  _LIST_ENTRY *p_AgingBlocks; // r14
  KIRQL v5; // r14
  __int64 v6; // rcx
  _QWORD *v7; // rax
  struct _NDIS_PKT_POOL **Blink; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rcx
  struct _NDIS_PKT_POOL **v11; // rcx
  LONGLONG v12; // rbx
  KIRQL v13; // r15
  _SLIST_HEADER *v14; // rsi
  LONGLONG v15; // rcx
  _LIST_ENTRY *Alignment; // rax
  _LIST_ENTRY *p_FreeBlocks; // rax
  _LIST_ENTRY *v18; // rcx

  Pool = (struct _NDIS_PKT_POOL *)Packet->Private.Pool;
  Flink = (unsigned __int64)Packet & 0xFFFFFFFFFFFFF000uLL;
  Packet->Private.NdisPacketFlags = 0;
  if ( Pool->BlockSize != 4096 )
    Flink = (unsigned __int64)Pool->FreeBlocks.Flink;
  ExpInterlockedPushEntrySList((PSLIST_HEADER)(Flink + 32), (PSLIST_ENTRY)Packet);
  if ( Pool->MaxBlocks <= 1u )
    return;
  if ( Pool->BlocksAllocated > 1 && ExQueryDepthSList((PSLIST_HEADER)(Flink + 32)) == Pool->PktsPerBlock
    || *(_DWORD *)(Flink + 48) == 1 )
  {
    p_Lock = &Pool->Lock;
    v5 = KeAcquireSpinLockRaiseToDpc(&Pool->Lock);
    if ( ExQueryDepthSList((PSLIST_HEADER)(Flink + 32)) == Pool->PktsPerBlock )
    {
      *(_QWORD *)(Flink + 16) = MEMORY[0xFFFFF78000000320];
      v6 = *(_QWORD *)Flink;
      if ( *(_QWORD *)(*(_QWORD *)Flink + 8LL) == Flink )
      {
        v7 = *(_QWORD **)(Flink + 8);
        if ( *v7 == Flink )
        {
          *v7 = v6;
          *(_QWORD *)(v6 + 8) = v7;
          Blink = (struct _NDIS_PKT_POOL **)Pool->AgingBlocks.Blink;
          if ( *Blink == (struct _NDIS_PKT_POOL *)&Pool->AgingBlocks )
          {
            *(_QWORD *)Flink = &Pool->AgingBlocks;
            *(_QWORD *)(Flink + 8) = Blink;
            *Blink = (struct _NDIS_PKT_POOL *)Flink;
            Pool->AgingBlocks.Blink = (_LIST_ENTRY *)Flink;
            *(_DWORD *)(Flink + 48) = 2;
LABEL_20:
            KeReleaseSpinLock(&Pool->Lock, v5);
            goto LABEL_7;
          }
        }
      }
    }
    else
    {
      if ( *(_DWORD *)(Flink + 48) != 1 )
        goto LABEL_20;
      v9 = *(_QWORD *)Flink;
      if ( *(_QWORD *)(*(_QWORD *)Flink + 8LL) == Flink )
      {
        v10 = *(_QWORD **)(Flink + 8);
        if ( *v10 == Flink )
        {
          *v10 = v9;
          *(_QWORD *)(v9 + 8) = v10;
          v11 = (struct _NDIS_PKT_POOL **)Pool->FreeBlocks.Blink;
          if ( *v11 == (struct _NDIS_PKT_POOL *)&Pool->FreeBlocks )
          {
            *(_QWORD *)Flink = &Pool->FreeBlocks;
            *(_QWORD *)(Flink + 8) = v11;
            *v11 = (struct _NDIS_PKT_POOL *)Flink;
            Pool->FreeBlocks.Blink = (_LIST_ENTRY *)Flink;
            *(_DWORD *)(Flink + 48) = 0;
            goto LABEL_20;
          }
        }
      }
    }
LABEL_31:
    __fastfail(3u);
  }
  p_Lock = &Pool->Lock;
LABEL_7:
  p_AgingBlocks = &Pool->AgingBlocks;
  if ( p_AgingBlocks->Flink != p_AgingBlocks )
  {
    v12 = MEMORY[0xFFFFF78000000320];
    if ( MEMORY[0xFFFFF78000000320] > Pool->NextScavengeTick.QuadPart )
    {
      v13 = KeAcquireSpinLockRaiseToDpc(p_Lock);
      while ( 1 )
      {
        v14 = (_SLIST_HEADER *)p_AgingBlocks->Flink;
        if ( p_AgingBlocks->Flink == p_AgingBlocks )
          break;
        v15 = v14[1].Alignment + PoolAgingTicks.QuadPart;
        if ( v12 <= v15 )
        {
          Pool->NextScavengeTick.QuadPart = v15;
          break;
        }
        if ( (_LIST_ENTRY *)v14->Region != p_AgingBlocks )
          goto LABEL_31;
        Alignment = (_LIST_ENTRY *)v14->Alignment;
        if ( *(_SLIST_HEADER **)(v14->Alignment + 8) != v14 )
          goto LABEL_31;
        p_AgingBlocks->Flink = Alignment;
        Alignment->Blink = p_AgingBlocks;
        if ( ExQueryDepthSList(v14 + 2) == Pool->PktsPerBlock )
        {
          ndisFreePacketPoolHdr(v14, Pool);
        }
        else
        {
          p_FreeBlocks = &Pool->FreeBlocks;
          v18 = Pool->FreeBlocks.Flink;
          if ( v18->Blink != &Pool->FreeBlocks )
            goto LABEL_31;
          v14->Alignment = (unsigned __int64)v18;
          v14->Region = (unsigned __int64)p_FreeBlocks;
          v18->Blink = (_LIST_ENTRY *)v14;
          p_FreeBlocks->Flink = (_LIST_ENTRY *)v14;
          LODWORD(v14[3].Alignment) = 0;
        }
      }
      KeReleaseSpinLock(p_Lock, v13);
    }
  }
}
