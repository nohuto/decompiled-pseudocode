/*
 * XREFs of ?ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PACKET@@EE@Z @ 0x1C00C1884
 * Callers:
 *     ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00C1C90 (-ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00C1EB0 (-ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00C2080 (-ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006690 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x1C00735B8 (-ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 *     ?ndisXlateReturnNetBufferListToPacket@@YAPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0073864 (-ndisXlateReturnNetBufferListToPacket@@YAPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@@Z.c)
 */

void __fastcall ndisCoIndicatePromiscPacket(
        _QWORD *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _NDIS_OPEN_BLOCK *a3,
        struct _NDIS_PACKET *a4,
        char a5)
{
  __int64 v5; // r12
  unsigned __int8 PmodeOpens; // al
  struct _NDIS_OPEN_BLOCK *v8; // rdi
  struct _NDIS_OPEN_BLOCK *FilterNextOpen; // r14
  struct _NET_BUFFER_LIST *v11; // rsi
  struct _NET_BUFFER_LIST *i; // rax
  struct _NET_BUFFER_LIST *Alignment; // rax
  struct _NET_BUFFER_LIST *v14; // rcx
  __int64 NdisPacketOobOffset; // rax
  unsigned int v16; // ebx
  __int128 v17; // [rsp+30h] [rbp-30h] BYREF
  struct _NET_BUFFER_LIST *v18[2]; // [rsp+40h] [rbp-20h]
  __int128 v19; // [rsp+50h] [rbp-10h]
  struct _NDIS_PACKET *v20; // [rsp+90h] [rbp+30h] BYREF

  v20 = 0LL;
  v5 = a1[9];
  PmodeOpens = a2->PmodeOpens;
  v8 = a3;
  v17 = 0LL;
  *(_OWORD *)v18 = 0LL;
  v19 = 0LL;
  if ( a3 && PmodeOpens )
  {
    do
    {
      if ( a5 )
        FilterNextOpen = v8->FilterNextOpen;
      else
        FilterNextOpen = v8->MiniportNextOpen;
      if ( (v8->OpenFlags & 4) != 0 )
      {
        if ( v8->ProtocolHandle->MajorNdisVersion < 6u )
        {
          *((_BYTE *)v8->ReceivedAPacketSlot + (KeGetPcr()->Prcb.Number << 12)) = 1;
          NdisPacketOobOffset = a4->Private.NdisPacketOobOffset;
          v16 = *(unsigned int *)((char *)&a4->Private.Count + NdisPacketOobOffset);
          *(unsigned int *)((char *)&a4->Private.Count + NdisPacketOobOffset) = -1073741670;
          a4->Private.Flags |= 0x100u;
          v8->ProtocolHandle->CoReceivePacketHandler(v8->ProtocolBindingContext, (void *)(v5 + 136), a4);
          *(unsigned int *)((char *)&a4->Private.Count + a4->Private.NdisPacketOobOffset) = v16;
          a4->Private.Flags &= ~0x100u;
        }
        else
        {
          v18[1] = 0LL;
          LODWORD(v19) = 0;
          *((_QWORD *)&v17 + 1) = &v20;
          *(_QWORD *)&v17 = a2;
          v20 = a4;
          LODWORD(v18[0]) = 1;
          DWORD2(v19) = 3;
          ndisXlateRecvPacketArrayToNetBufferLists((struct _NDIS_PKT_ARRAY_TO_NBLS *)&v17);
          if ( (_DWORD)v19 )
          {
            v11 = v18[1];
            *((_BYTE *)v8->ReceivedAPacketSlot + (KeGetPcr()->Prcb.Number << 12)) = 1;
            for ( i = v11; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
              i->Flags |= 0x80u;
            v11->NblFlags |= 0x8000u;
            v8->ProtocolHandle->CoReceiveNetBufferListsHandler(
              v8->ProtocolBindingContext,
              (void *)(v5 + 136),
              v11,
              DWORD1(v19),
              3u);
            Alignment = v11;
            do
            {
              Alignment->Flags &= ~0x80u;
              Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
            }
            while ( Alignment );
            v11->NblFlags &= ~0x8000u;
            do
            {
              v14 = v11;
              v11 = (struct _NET_BUFFER_LIST *)v11->Link.Alignment;
              ndisXlateReturnNetBufferListToPacket(v14);
            }
            while ( v11 );
          }
          else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0x13u,
              0xAu,
              (struct _GUID *)&WPP_e90bf158f27a33b0bb566add4f73b7c2_Traceguids);
          }
        }
      }
      v8 = FilterNextOpen;
    }
    while ( FilterNextOpen );
  }
}
