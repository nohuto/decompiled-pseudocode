/*
 * XREFs of ?ndisMAbortPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAX@Z @ 0x1C00148D4
 * Callers:
 *     ?ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z @ 0x1C006D734 (-ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0145D48 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0031788 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ?ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00C9AC8 (-ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C00CAA60 (-ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00CD248 (-ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 */

void __fastcall ndisMAbortPackets(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OPEN_BLOCK *a2, void *a3)
{
  _SINGLE_LIST_ENTRY *Next; // rcx
  _LIST_ENTRY *p_PacketList; // r10
  _LIST_ENTRY *Flink; // r9
  __int64 *v7; // rdi
  _LIST_ENTRY *v8; // rax
  __int64 ***v9; // r9
  _QWORD *v10; // rcx
  __int64 *v11; // rax
  struct _NDIS_PACKET *v12; // rdi
  __int64 v13; // rsi
  __int64 NdisPacketOobOffset; // rax
  __int64 *v15; // [rsp+40h] [rbp-20h] BYREF
  __int64 **v16; // [rsp+48h] [rbp-18h]
  _QWORD v17[2]; // [rsp+50h] [rbp-10h] BYREF
  struct _NDIS_STACK_RESERVED *v18; // [rsp+90h] [rbp+30h] BYREF

  v18 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      3u,
      0x44u,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      (char)a1,
      0LL);
  Next = a1->WorkQueue[1].Next;
  if ( Next )
  {
    a1->WorkQueue[1] = (_SINGLE_LIST_ENTRY)Next->Next;
    Next->Next = (_SINGLE_LIST_ENTRY *)a1->SingleWorkItems[1];
    a1->SingleWorkItems[1].Next = Next;
  }
  a1->FirstPendingPacket = 0LL;
  v17[1] = v17;
  p_PacketList = &a1->PacketList;
  v17[0] = v17;
  v16 = &v15;
  v15 = (__int64 *)&v15;
  while ( 1 )
  {
    Flink = p_PacketList->Flink;
    if ( p_PacketList->Flink == p_PacketList )
      break;
    if ( Flink->Blink != p_PacketList
      || (v8 = Flink->Flink, Flink->Flink->Blink != Flink)
      || (p_PacketList->Flink = v8,
          v8->Blink = p_PacketList,
          NDIS_STACK_RESERVED_FROM_PACKET((struct _NDIS_PACKET *)&Flink[-4], &v18),
          v10 = v16,
          *v16 != (__int64 *)&v15) )
    {
LABEL_28:
      __fastfail(3u);
    }
    v9[1] = v16;
    *v9 = &v15;
    *v10 = v9;
    v16 = (__int64 **)v9;
  }
  a1->FirstPendingPacket = 0LL;
  while ( 1 )
  {
    v7 = v15;
    if ( v15 == (__int64 *)&v15 )
      break;
    if ( (__int64 **)v15[1] != &v15 )
      goto LABEL_28;
    v11 = (__int64 *)*v15;
    if ( *(__int64 **)(*v15 + 8) != v15 )
      goto LABEL_28;
    v15 = (__int64 *)*v15;
    v11[1] = (__int64)&v15;
    v12 = (struct _NDIS_PACKET *)(v7 - 8);
    NDIS_STACK_RESERVED_FROM_PACKET(v12, &v18);
    v13 = *(_QWORD *)v18;
    *(_QWORD *)v18 = 1297040183LL;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    if ( (a1->Flags & 0x40) != 0 && *(unsigned __int64 *)((char *)v12->Reserved + v12->Private.NdisPacketOobOffset) )
      ndisMFreeSGList(a1, v12);
    if ( (a1->SendFlags & 8) != 0 && *(void **)((char *)&v12[1].Private.Pool + v12->Private.NdisPacketOobOffset) )
      ndisFreePaddedMdl(v12);
    NdisPacketOobOffset = v12->Private.NdisPacketOobOffset;
    v12->Private.NdisPacketFlags &= 0xC0u;
    if ( *(_MDL **)((char *)&v12[1].Private.Head + NdisPacketOobOffset) )
      ndisMSendCompletePacketToNetBufferLists(&a1->Header, v12, -1073676276);
    else
      (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, __int64))(v13 + 112))(v13, v12, 3221291020LL);
    KeAcquireSpinLockAtDpcLevel(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
  }
  a1->Flags |= 0x400000u;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      3u,
      0x45u,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      (char)a1,
      0LL);
}
