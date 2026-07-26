/*
 * XREFs of ?ndisMDeferredSendPackets@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C7C30
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0031788 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ?ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00C9AC8 (-ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00CA964 (-NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C00CAA60 (-ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00CB808 (-ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 */

unsigned __int8 __fastcall ndisMDeferredSendPackets(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int MaxSendPackets; // r12d
  void (__fastcall *WSendPacketsHandler)(void *, _NDIS_PACKET **, unsigned int); // r14
  unsigned int v4; // esi
  _NDIS_PACKET **v5; // rbp
  _NDIS_PACKET *FirstPendingPacket; // rdi
  unsigned __int8 *WrapperReserved; // r14
  __int64 v8; // rax
  __int64 v9; // r9
  unsigned int Flags; // eax
  __int64 v11; // rax
  struct _NDIS_STACK_RESERVED *v12; // r15
  __int64 v13; // r13
  unsigned __int8 **v14; // rcx
  __int64 NdisPacketOobOffset; // rax
  _QWORD *v16; // r12
  __int64 v17; // rbp
  __int64 v18; // rdi
  unsigned int v19; // r14d
  struct _NDIS_STACK_RESERVED *v20; // r15
  __int64 v21; // r13
  _QWORD *v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  __int64 v25; // rax
  __int64 *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rax
  struct _NDIS_STACK_RESERVED *v30; // [rsp+20h] [rbp-D8h] BYREF
  unsigned int v31; // [rsp+28h] [rbp-D0h]
  void (__fastcall *v32)(void *, _NDIS_PACKET **, unsigned int); // [rsp+30h] [rbp-C8h]
  _QWORD v33[16]; // [rsp+40h] [rbp-B8h] BYREF

  v30 = 0LL;
  memset(v33, 0, sizeof(v33));
  MaxSendPackets = a1->MaxSendPackets;
  WSendPacketsHandler = a1->WSendPacketsHandler;
  v31 = MaxSendPackets;
  v32 = WSendPacketsHandler;
  if ( a1->PacketList.Flink == &a1->PacketList )
    a1->FirstPendingPacket = 0LL;
  if ( a1->FirstPendingPacket )
  {
    while ( 1 )
    {
      if ( (a1->Flags & 0x400000) == 0 )
        return 0;
      v4 = 0;
      v5 = (_NDIS_PACKET **)v33;
      if ( !MaxSendPackets )
        return 0;
      do
      {
        FirstPendingPacket = a1->FirstPendingPacket;
        if ( !FirstPendingPacket )
          break;
        NDIS_STACK_RESERVED_FROM_PACKET(a1->FirstPendingPacket, &v30);
        a1->FirstPendingPacket = 0LL;
        WrapperReserved = FirstPendingPacket->WrapperReserved;
        v8 = *(_QWORD *)&FirstPendingPacket->MacReserved[16];
        if ( v8 != v9 )
          a1->FirstPendingPacket = (_NDIS_PACKET *)(v8 - 64);
        if ( ((Flags = a1->Flags, (Flags & 0x4000) != 0)
           || (Flags & 0x8800000) != 0 && SLOBYTE(FirstPendingPacket->Private.Flags) >= 0)
          && ndisMLoopbackPacketX(a1, FirstPendingPacket) )
        {
          v11 = *(_QWORD *)WrapperReserved;
          v12 = v30;
          v13 = *(_QWORD *)v30;
          if ( *(unsigned __int8 **)(*(_QWORD *)WrapperReserved + 8LL) != WrapperReserved
            || (v14 = *(unsigned __int8 ***)&FirstPendingPacket->MacReserved[24], *v14 != WrapperReserved) )
          {
LABEL_46:
            __fastfail(3u);
          }
          *v14 = (unsigned __int8 *)v11;
          *(_QWORD *)(v11 + 8) = v14;
          *(_QWORD *)&FirstPendingPacket->MacReserved[24] = &FirstPendingPacket->MacReserved[16];
          *(_QWORD *)WrapperReserved = WrapperReserved;
          a1->Flags |= 0x400000u;
          *(_QWORD *)v12 = 1297040178LL;
          a1->MiniportThread = 0LL;
          KeReleaseSpinLockFromDpcLevel(&a1->Lock);
          *((_DWORD *)v12 + 2) = 0;
          if ( (a1->SendFlags & 8) != 0
            && *(void **)((char *)&FirstPendingPacket[1].Private.Pool + FirstPendingPacket->Private.NdisPacketOobOffset) )
          {
            ndisFreePaddedMdl(FirstPendingPacket);
          }
          NdisPacketOobOffset = FirstPendingPacket->Private.NdisPacketOobOffset;
          FirstPendingPacket->Private.NdisPacketFlags &= 0xC0u;
          if ( *(_MDL **)((char *)&FirstPendingPacket[1].Private.Head + NdisPacketOobOffset) )
            ndisMSendCompletePacketToNetBufferLists(&a1->Header, FirstPendingPacket, 0);
          else
            (*(void (__fastcall **)(__int64, _NDIS_PACKET *))(v13 + 112))(v13, FirstPendingPacket);
          KeAcquireSpinLockAtDpcLevel(&a1->Lock);
          a1->MiniportThread = KeGetCurrentThread();
        }
        else
        {
          *v5 = FirstPendingPacket;
          ++v4;
          FirstPendingPacket->Private.NdisPacketFlags |= 0x18u;
          *(unsigned int *)((char *)&FirstPendingPacket->Private.Count + FirstPendingPacket->Private.NdisPacketOobOffset) = 0;
          ++v5;
        }
      }
      while ( v4 < MaxSendPackets );
      if ( !v4 )
        return 0;
      a1->MiniportThread = 0LL;
      v16 = v33;
      KeReleaseSpinLockFromDpcLevel(&a1->Lock);
      v32(a1->MiniportAdapterContext, (_NDIS_PACKET **)v33, v4);
      KeAcquireSpinLockAtDpcLevel(&a1->Lock);
      v17 = 0LL;
      a1->MiniportThread = KeGetCurrentThread();
      while ( 1 )
      {
        v18 = *v16;
        v19 = *(_DWORD *)(*(unsigned __int16 *)(*v16 + 42LL) + *v16 + 32LL);
        *(_BYTE *)(*v16 + 41LL) &= ~8u;
        if ( v19 == 259 )
          goto LABEL_39;
        if ( v19 == -1073741670 )
          break;
        if ( !v19 )
          NDISM_SEND_PACKET_STATS(a1, (struct _NDIS_PACKET *)v18);
        NDIS_STACK_RESERVED_FROM_PACKET((struct _NDIS_PACKET *)v18, &v30);
        v20 = v30;
        v21 = *(_QWORD *)v30;
        if ( (*(_QWORD *)v30 & 0xFFFFFF00LL) != 0x4D4F4300 )
        {
          v22 = (_QWORD *)(v18 + 64);
          v23 = *(_QWORD *)(v18 + 64);
          if ( *(_QWORD *)(v23 + 8) != v18 + 64 )
            goto LABEL_46;
          v24 = *(_QWORD **)(v18 + 72);
          if ( (_QWORD *)*v24 != v22 )
            goto LABEL_46;
          *v24 = v23;
          *(_QWORD *)(v23 + 8) = v24;
          *(_QWORD *)(v18 + 72) = v18 + 64;
          *v22 = v22;
          a1->Flags |= 0x400000u;
          *(_QWORD *)v20 = 1297040179LL;
          a1->MiniportThread = 0LL;
          KeReleaseSpinLockFromDpcLevel(&a1->Lock);
          *((_DWORD *)v20 + 2) = 0;
          if ( (a1->SendFlags & 8) != 0 && *(_QWORD *)(*(unsigned __int16 *)(v18 + 42) + v18 + 128) )
            ndisFreePaddedMdl((struct _NDIS_PACKET *)v18);
          v25 = *(unsigned __int16 *)(v18 + 42);
          *(_BYTE *)(v18 + 41) &= 0xC0u;
          if ( *(_QWORD *)(v25 + v18 + 112) )
            ndisMSendCompletePacketToNetBufferLists(&a1->Header, (struct _NDIS_PACKET *)v18, v19);
          else
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(v21 + 112))(v21, v18, v19);
          KeAcquireSpinLockAtDpcLevel(&a1->Lock);
          a1->MiniportThread = KeGetCurrentThread();
        }
LABEL_39:
        v17 = (unsigned int)(v17 + 1);
        ++v16;
        if ( (unsigned int)v17 >= v4 )
          goto LABEL_44;
      }
      a1->Flags &= ~0x400000u;
      a1->FirstPendingPacket = (_NDIS_PACKET *)v18;
      if ( (unsigned int)v17 < v4 )
      {
        v26 = &v33[v17];
        v27 = v4 - (unsigned int)v17;
        do
        {
          v28 = *v26++;
          *(_BYTE *)(v28 + 41) &= ~0x10u;
          --v27;
        }
        while ( v27 );
      }
LABEL_44:
      if ( !a1->FirstPendingPacket )
        return 0;
      MaxSendPackets = v31;
    }
  }
  return 0;
}
