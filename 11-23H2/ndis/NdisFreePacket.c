/*
 * XREFs of NdisFreePacket @ 0x1C0031480
 * Callers:
 *     NdisAllocatePacketPoolEx @ 0x1C00311C0 (NdisAllocatePacketPoolEx.c)
 *     ?ndisFreeConvertedPacket@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER@@E@Z @ 0x1C0073188 (-ndisFreeConvertedPacket@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER@@E@Z.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C0090350 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     NdisMTransferDataComplete @ 0x1C00C8CD0 (NdisMTransferDataComplete.c)
 *     ndisLWM5IndicateReceive @ 0x1C00CB040 (ndisLWM5IndicateReceive.c)
 * Callees:
 *     ?ndisFreePacketPoolHdr@@YAXPEAU_NDIS_PKT_POOL_HDR@@PEAU_NDIS_PKT_POOL@@@Z @ 0x1C00C58D8 (-ndisFreePacketPoolHdr@@YAXPEAU_NDIS_PKT_POOL_HDR@@PEAU_NDIS_PKT_POOL@@@Z.c)
 */

void __stdcall NdisFreePacket(PNDIS_PACKET Packet)
{
  struct _NDIS_PKT_POOL *Pool; // rdi
  unsigned __int64 Flink; // rbx
  unsigned __int16 *p_PktsPerBlock; // rsi
  KSPIN_LOCK *p_Lock; // rbp
  _LIST_ENTRY *p_AgingBlocks; // r14
  KIRQL v6; // r15
  __int64 v7; // rcx
  _QWORD *v8; // rax
  struct _NDIS_PKT_POOL **Blink; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rcx
  struct _NDIS_PKT_POOL **v12; // rcx
  LONGLONG v13; // rbx
  KIRQL v14; // r15
  _SLIST_HEADER *v15; // rsi
  LONGLONG v16; // rcx
  _LIST_ENTRY *Alignment; // rax
  _LIST_ENTRY *p_FreeBlocks; // rax
  _LIST_ENTRY *v19; // rcx

  Pool = (struct _NDIS_PKT_POOL *)Packet->Private.Pool;
  Flink = (unsigned __int64)Packet & 0xFFFFFFFFFFFFF000uLL;
  Packet->Private.NdisPacketFlags = 0;
  if ( Pool->BlockSize != 4096 )
    Flink = (unsigned __int64)Pool->FreeBlocks.Flink;
  ExpInterlockedPushEntrySList((PSLIST_HEADER)(Flink + 32), (PSLIST_ENTRY)Packet);
  if ( Pool->MaxBlocks <= 1u )
    return;
  if ( Pool->BlocksAllocated > 1 )
  {
    p_PktsPerBlock = &Pool->PktsPerBlock;
    if ( ExQueryDepthSList((PSLIST_HEADER)(Flink + 32)) == Pool->PktsPerBlock )
    {
LABEL_11:
      p_Lock = &Pool->Lock;
      v6 = KeAcquireSpinLockRaiseToDpc(&Pool->Lock);
      if ( ExQueryDepthSList((PSLIST_HEADER)(Flink + 32)) == *p_PktsPerBlock )
      {
        *(_QWORD *)(Flink + 16) = MEMORY[0xFFFFF78000000320];
        v7 = *(_QWORD *)Flink;
        if ( *(_QWORD *)(*(_QWORD *)Flink + 8LL) == Flink )
        {
          v8 = *(_QWORD **)(Flink + 8);
          if ( *v8 == Flink )
          {
            *v8 = v7;
            *(_QWORD *)(v7 + 8) = v8;
            Blink = (struct _NDIS_PKT_POOL **)Pool->AgingBlocks.Blink;
            if ( *Blink == (struct _NDIS_PKT_POOL *)&Pool->AgingBlocks )
            {
              *(_QWORD *)Flink = &Pool->AgingBlocks;
              *(_QWORD *)(Flink + 8) = Blink;
              *Blink = (struct _NDIS_PKT_POOL *)Flink;
              Pool->AgingBlocks.Blink = (_LIST_ENTRY *)Flink;
              *(_DWORD *)(Flink + 48) = 2;
LABEL_21:
              KeReleaseSpinLock(&Pool->Lock, v6);
              goto LABEL_8;
            }
          }
        }
      }
      else
      {
        if ( *(_DWORD *)(Flink + 48) != 1 )
          goto LABEL_21;
        v10 = *(_QWORD *)Flink;
        if ( *(_QWORD *)(*(_QWORD *)Flink + 8LL) == Flink )
        {
          v11 = *(_QWORD **)(Flink + 8);
          if ( *v11 == Flink )
          {
            *v11 = v10;
            *(_QWORD *)(v10 + 8) = v11;
            v12 = (struct _NDIS_PKT_POOL **)Pool->FreeBlocks.Blink;
            if ( *v12 == (struct _NDIS_PKT_POOL *)&Pool->FreeBlocks )
            {
              *(_QWORD *)Flink = &Pool->FreeBlocks;
              *(_QWORD *)(Flink + 8) = v12;
              *v12 = (struct _NDIS_PKT_POOL *)Flink;
              Pool->FreeBlocks.Blink = (_LIST_ENTRY *)Flink;
              *(_DWORD *)(Flink + 48) = 0;
              goto LABEL_21;
            }
          }
        }
      }
LABEL_32:
      __fastfail(3u);
    }
  }
  else
  {
    p_PktsPerBlock = &Pool->PktsPerBlock;
  }
  if ( *(_DWORD *)(Flink + 48) == 1 )
    goto LABEL_11;
  p_Lock = &Pool->Lock;
LABEL_8:
  p_AgingBlocks = &Pool->AgingBlocks;
  if ( p_AgingBlocks->Flink != p_AgingBlocks )
  {
    v13 = MEMORY[0xFFFFF78000000320];
    if ( MEMORY[0xFFFFF78000000320] > Pool->NextScavengeTick.QuadPart )
    {
      v14 = KeAcquireSpinLockRaiseToDpc(p_Lock);
      while ( 1 )
      {
        v15 = (_SLIST_HEADER *)p_AgingBlocks->Flink;
        if ( p_AgingBlocks->Flink == p_AgingBlocks )
          break;
        v16 = v15[1].Alignment + PoolAgingTicks.QuadPart;
        if ( v13 <= v16 )
        {
          Pool->NextScavengeTick.QuadPart = v16;
          break;
        }
        if ( (_LIST_ENTRY *)v15->Region != p_AgingBlocks )
          goto LABEL_32;
        Alignment = (_LIST_ENTRY *)v15->Alignment;
        if ( *(_SLIST_HEADER **)(v15->Alignment + 8) != v15 )
          goto LABEL_32;
        p_AgingBlocks->Flink = Alignment;
        Alignment->Blink = p_AgingBlocks;
        if ( ExQueryDepthSList(v15 + 2) == Pool->PktsPerBlock )
        {
          ndisFreePacketPoolHdr(v15, Pool);
        }
        else
        {
          p_FreeBlocks = &Pool->FreeBlocks;
          v19 = Pool->FreeBlocks.Flink;
          if ( v19->Blink != &Pool->FreeBlocks )
            goto LABEL_32;
          v15->Alignment = (unsigned __int64)v19;
          v15->Region = (unsigned __int64)p_FreeBlocks;
          v19->Blink = (_LIST_ENTRY *)v15;
          p_FreeBlocks->Flink = (_LIST_ENTRY *)v15;
          LODWORD(v15[3].Alignment) = 0;
        }
      }
      KeReleaseSpinLock(p_Lock, v14);
    }
  }
}
