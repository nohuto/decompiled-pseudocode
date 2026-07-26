/*
 * XREFs of ?ndisMDeferredSendPackets@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C3000
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C002DDD8 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00C4E68 (-ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00C5CF4 (-NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C00C5DF4 (-ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00C6B78 (-ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 */

unsigned __int8 __fastcall ndisMDeferredSendPackets(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int MaxSendPackets; // r12d
  void (__fastcall *WSendPacketsHandler)(void *, _NDIS_PACKET **, unsigned int); // rsi
  unsigned int v5; // ebp
  _NDIS_PACKET **v6; // r15
  _NDIS_PACKET *FirstPendingPacket; // rdi
  unsigned __int8 *WrapperReserved; // rsi
  __int64 v9; // rax
  __int64 v10; // r9
  unsigned int Flags; // eax
  __int64 v12; // rcx
  struct _NDIS_STACK_RESERVED *v13; // r14
  __int64 v14; // r13
  unsigned __int8 **v15; // rax
  __int64 NdisPacketOobOffset; // rax
  _QWORD *v17; // r12
  __int64 v18; // rsi
  __int64 v19; // rdi
  unsigned int v20; // r14d
  struct _NDIS_STACK_RESERVED *v21; // r15
  __int64 v22; // r13
  _QWORD *v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 *v28; // rcx
  __int64 v29; // rax
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
  if ( a1->PacketList.Flink != &a1->PacketList )
  {
    if ( !a1->FirstPendingPacket )
      return 0;
LABEL_5:
    if ( (a1->Flags & 0x400000) == 0 )
      return 0;
    v5 = 0;
    v6 = (_NDIS_PACKET **)v33;
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
      v9 = *(_QWORD *)&FirstPendingPacket->MacReserved[16];
      if ( v9 != v10 )
        a1->FirstPendingPacket = (_NDIS_PACKET *)(v9 - 64);
      if ( ((Flags = a1->Flags, (Flags & 0x4000) != 0)
         || (Flags & 0x8800000) != 0 && SLOBYTE(FirstPendingPacket->Private.Flags) >= 0)
        && ndisMLoopbackPacketX(a1, FirstPendingPacket) )
      {
        v12 = *(_QWORD *)WrapperReserved;
        v13 = v30;
        v14 = *(_QWORD *)v30;
        if ( *(unsigned __int8 **)(*(_QWORD *)WrapperReserved + 8LL) != WrapperReserved
          || (v15 = *(unsigned __int8 ***)&FirstPendingPacket->MacReserved[24], *v15 != WrapperReserved) )
        {
LABEL_46:
          __fastfail(3u);
        }
        *v15 = (unsigned __int8 *)v12;
        *(_QWORD *)(v12 + 8) = v15;
        *(_QWORD *)&FirstPendingPacket->MacReserved[24] = &FirstPendingPacket->MacReserved[16];
        *(_QWORD *)WrapperReserved = WrapperReserved;
        a1->Flags |= 0x400000u;
        *(_QWORD *)v13 = 1297040178LL;
        a1->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        *((_DWORD *)v13 + 2) = 0;
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
          (*(void (__fastcall **)(__int64, _NDIS_PACKET *))(v14 + 112))(v14, FirstPendingPacket);
        KeAcquireSpinLockAtDpcLevel(&a1->Lock);
        a1->MiniportThread = KeGetCurrentThread();
      }
      else
      {
        *v6 = FirstPendingPacket;
        ++v5;
        FirstPendingPacket->Private.NdisPacketFlags |= 0x18u;
        *(unsigned int *)((char *)&FirstPendingPacket->Private.Count + FirstPendingPacket->Private.NdisPacketOobOffset) = 0;
        ++v6;
      }
    }
    while ( v5 < MaxSendPackets );
    if ( !v5 )
      return 0;
    a1->MiniportThread = 0LL;
    v17 = v33;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    v32(a1->MiniportAdapterContext, (_NDIS_PACKET **)v33, v5);
    KeAcquireSpinLockAtDpcLevel(&a1->Lock);
    v18 = 0LL;
    a1->MiniportThread = KeGetCurrentThread();
    while ( 1 )
    {
      v19 = *v17;
      v20 = *(_DWORD *)(*(unsigned __int16 *)(*v17 + 42LL) + *v17 + 32LL);
      *(_BYTE *)(*v17 + 41LL) &= ~8u;
      if ( v20 != 259 )
      {
        if ( v20 == -1073741670 )
        {
          a1->Flags &= ~0x400000u;
          a1->FirstPendingPacket = (_NDIS_PACKET *)v19;
          v27 = v5 - (unsigned int)v18;
          v28 = &v33[v18];
          do
          {
            v29 = *v28++;
            *(_BYTE *)(v29 + 41) &= ~0x10u;
            --v27;
          }
          while ( v27 );
LABEL_44:
          if ( !a1->FirstPendingPacket )
            return 0;
          MaxSendPackets = v31;
          goto LABEL_5;
        }
        if ( !v20 )
          NDISM_SEND_PACKET_STATS(a1, (struct _NDIS_PACKET *)v19);
        NDIS_STACK_RESERVED_FROM_PACKET((struct _NDIS_PACKET *)v19, &v30);
        v21 = v30;
        v22 = *(_QWORD *)v30;
        if ( (*(_QWORD *)v30 & 0xFFFFFF00LL) != 0x4D4F4300 )
        {
          v23 = (_QWORD *)(v19 + 64);
          v24 = *(_QWORD *)(v19 + 64);
          if ( *(_QWORD *)(v24 + 8) != v19 + 64 )
            goto LABEL_46;
          v25 = *(_QWORD **)(v19 + 72);
          if ( (_QWORD *)*v25 != v23 )
            goto LABEL_46;
          *v25 = v24;
          *(_QWORD *)(v24 + 8) = v25;
          *(_QWORD *)(v19 + 72) = v19 + 64;
          *v23 = v23;
          a1->Flags |= 0x400000u;
          *(_QWORD *)v21 = 1297040179LL;
          a1->MiniportThread = 0LL;
          KeReleaseSpinLockFromDpcLevel(&a1->Lock);
          *((_DWORD *)v21 + 2) = 0;
          if ( (a1->SendFlags & 8) != 0 && *(_QWORD *)(*(unsigned __int16 *)(v19 + 42) + v19 + 128) )
            ndisFreePaddedMdl((struct _NDIS_PACKET *)v19);
          v26 = *(unsigned __int16 *)(v19 + 42);
          *(_BYTE *)(v19 + 41) &= 0xC0u;
          if ( *(_QWORD *)(v26 + v19 + 112) )
            ndisMSendCompletePacketToNetBufferLists(&a1->Header, (struct _NDIS_PACKET *)v19, v20);
          else
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(v22 + 112))(v22, v19, v20);
          KeAcquireSpinLockAtDpcLevel(&a1->Lock);
          a1->MiniportThread = KeGetCurrentThread();
        }
      }
      v18 = (unsigned int)(v18 + 1);
      ++v17;
      if ( (unsigned int)v18 >= v5 )
        goto LABEL_44;
    }
  }
  a1->FirstPendingPacket = 0LL;
  return 0;
}
