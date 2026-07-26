/*
 * XREFs of ?ndisMDeferredSendPacketsSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C5200
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C002DDD8 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00C4E68 (-ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C00C5DF4 (-ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00C6B78 (-ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00C8528 (-ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 */

unsigned __int8 __fastcall ndisMDeferredSendPacketsSG(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int MaxSendPackets; // r12d
  void (__fastcall *WSendPacketsHandler)(void *, _NDIS_PACKET **, unsigned int); // rsi
  unsigned int Flags; // eax
  unsigned int v6; // ebp
  _NDIS_PACKET **v7; // r15
  _NDIS_PACKET *FirstPendingPacket; // rdi
  unsigned __int8 *WrapperReserved; // rsi
  __int64 v10; // rax
  __int64 v11; // r9
  unsigned int v12; // eax
  __int64 v13; // rcx
  struct _NDIS_STACK_RESERVED *v14; // r14
  __int64 v15; // r13
  unsigned __int8 **v16; // rax
  __int64 NdisPacketOobOffset; // rax
  _QWORD *v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rdi
  unsigned int v21; // r14d
  struct _NDIS_STACK_RESERVED *v22; // r15
  __int64 v23; // r13
  _QWORD *v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 *v29; // rcx
  __int64 v30; // rax
  struct _NDIS_STACK_RESERVED *v31; // [rsp+20h] [rbp-D8h] BYREF
  unsigned int v32; // [rsp+28h] [rbp-D0h]
  void (__fastcall *v33)(void *, _NDIS_PACKET **, unsigned int); // [rsp+30h] [rbp-C8h]
  _QWORD v34[16]; // [rsp+40h] [rbp-B8h] BYREF

  v31 = 0LL;
  memset(v34, 0, sizeof(v34));
  MaxSendPackets = a1->MaxSendPackets;
  WSendPacketsHandler = a1->WSendPacketsHandler;
  Flags = a1->Flags;
  v32 = MaxSendPackets;
  v33 = WSendPacketsHandler;
  if ( (Flags & 0x400000) == 0 && !a1->FirstPendingPacket )
    a1->Flags = Flags | 0x400000;
  if ( a1->PacketList.Flink != &a1->PacketList )
  {
    if ( !a1->FirstPendingPacket )
      return 0;
LABEL_8:
    if ( (a1->Flags & 0x400000) == 0 )
      return 0;
    v6 = 0;
    v7 = (_NDIS_PACKET **)v34;
    if ( !MaxSendPackets )
      return 0;
    do
    {
      FirstPendingPacket = a1->FirstPendingPacket;
      if ( !FirstPendingPacket )
        break;
      NDIS_STACK_RESERVED_FROM_PACKET(a1->FirstPendingPacket, &v31);
      a1->FirstPendingPacket = 0LL;
      WrapperReserved = FirstPendingPacket->WrapperReserved;
      v10 = *(_QWORD *)&FirstPendingPacket->MacReserved[16];
      if ( v10 != v11 )
        a1->FirstPendingPacket = (_NDIS_PACKET *)(v10 - 64);
      if ( ((v12 = a1->Flags, (v12 & 0x4000) != 0)
         || (v12 & 0x8800000) != 0 && SLOBYTE(FirstPendingPacket->Private.Flags) >= 0)
        && ndisMLoopbackPacketX(a1, FirstPendingPacket) )
      {
        v13 = *(_QWORD *)WrapperReserved;
        v14 = v31;
        v15 = *(_QWORD *)v31;
        if ( *(unsigned __int8 **)(*(_QWORD *)WrapperReserved + 8LL) != WrapperReserved
          || (v16 = *(unsigned __int8 ***)&FirstPendingPacket->MacReserved[24], *v16 != WrapperReserved) )
        {
LABEL_51:
          __fastfail(3u);
        }
        *v16 = (unsigned __int8 *)v13;
        *(_QWORD *)(v13 + 8) = v16;
        *(_QWORD *)&FirstPendingPacket->MacReserved[24] = &FirstPendingPacket->MacReserved[16];
        *(_QWORD *)WrapperReserved = WrapperReserved;
        a1->Flags |= 0x400000u;
        *(_QWORD *)v14 = 1297040178LL;
        a1->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        if ( *(unsigned __int64 *)((char *)FirstPendingPacket->Reserved + FirstPendingPacket->Private.NdisPacketOobOffset) )
          ndisMFreeSGList(a1, FirstPendingPacket);
        *((_DWORD *)v14 + 2) = 0;
        if ( (a1->SendFlags & 8) != 0
          && *(void **)((char *)&FirstPendingPacket[1].Private.Pool + FirstPendingPacket->Private.NdisPacketOobOffset) )
        {
          ndisFreePaddedMdl(FirstPendingPacket);
        }
        NdisPacketOobOffset = FirstPendingPacket->Private.NdisPacketOobOffset;
        FirstPendingPacket->Private.NdisPacketFlags &= 0xC0u;
        if ( *(_MDL **)((char *)&FirstPendingPacket[1].Private.Head + NdisPacketOobOffset) )
          ndisMSendCompletePacketToNetBufferLists((struct _NDIS_FILTER_BLOCK *)a1, FirstPendingPacket, 0);
        else
          (*(void (__fastcall **)(__int64, _NDIS_PACKET *))(v15 + 112))(v15, FirstPendingPacket);
        KeAcquireSpinLockAtDpcLevel(&a1->Lock);
        a1->MiniportThread = KeGetCurrentThread();
      }
      else
      {
        *v7 = FirstPendingPacket;
        ++v6;
        FirstPendingPacket->Private.NdisPacketFlags |= 0x18u;
        *(unsigned int *)((char *)&FirstPendingPacket->Private.Count + FirstPendingPacket->Private.NdisPacketOobOffset) = 0;
        ++v7;
      }
    }
    while ( v6 < MaxSendPackets );
    if ( !v6 )
      return 0;
    a1->MiniportThread = 0LL;
    v18 = v34;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    v33(a1->MiniportAdapterContext, (_NDIS_PACKET **)v34, v6);
    KeAcquireSpinLockAtDpcLevel(&a1->Lock);
    v19 = 0LL;
    a1->MiniportThread = KeGetCurrentThread();
    while ( 1 )
    {
      v20 = *v18;
      v21 = *(_DWORD *)(*(unsigned __int16 *)(*v18 + 42LL) + *v18 + 32LL);
      *(_BYTE *)(*v18 + 41LL) &= ~8u;
      if ( v21 != 259 )
      {
        if ( v21 == -1073741670 )
        {
          a1->Flags &= ~0x400000u;
          a1->FirstPendingPacket = (_NDIS_PACKET *)v20;
          v28 = v6 - (unsigned int)v19;
          v29 = &v34[v19];
          do
          {
            v30 = *v29++;
            *(_BYTE *)(v30 + 41) &= ~0x10u;
            --v28;
          }
          while ( v28 );
LABEL_49:
          if ( !a1->FirstPendingPacket )
            return 0;
          MaxSendPackets = v32;
          goto LABEL_8;
        }
        NDIS_STACK_RESERVED_FROM_PACKET((struct _NDIS_PACKET *)v20, &v31);
        v22 = v31;
        v23 = *(_QWORD *)v31;
        if ( (*(_QWORD *)v31 & 0xFFFFFF00LL) != 0x4D4F4300 )
        {
          v24 = (_QWORD *)(v20 + 64);
          v25 = *(_QWORD *)(v20 + 64);
          if ( *(_QWORD *)(v25 + 8) != v20 + 64 )
            goto LABEL_51;
          v26 = *(_QWORD **)(v20 + 72);
          if ( (_QWORD *)*v26 != v24 )
            goto LABEL_51;
          *v26 = v25;
          *(_QWORD *)(v25 + 8) = v26;
          *(_QWORD *)(v20 + 72) = v20 + 64;
          *v24 = v24;
          a1->Flags |= 0x400000u;
          *(_QWORD *)v22 = 1297040179LL;
          a1->MiniportThread = 0LL;
          KeReleaseSpinLockFromDpcLevel(&a1->Lock);
          if ( *(_QWORD *)(*(unsigned __int16 *)(v20 + 42) + v20 + 80) )
            ndisMFreeSGList(a1, (struct _NDIS_PACKET *)v20);
          *((_DWORD *)v22 + 2) = 0;
          if ( (a1->SendFlags & 8) != 0 && *(_QWORD *)(*(unsigned __int16 *)(v20 + 42) + v20 + 128) )
            ndisFreePaddedMdl((struct _NDIS_PACKET *)v20);
          v27 = *(unsigned __int16 *)(v20 + 42);
          *(_BYTE *)(v20 + 41) &= 0xC0u;
          if ( *(_QWORD *)(v27 + v20 + 112) )
            ndisMSendCompletePacketToNetBufferLists((struct _NDIS_FILTER_BLOCK *)a1, (struct _NDIS_PACKET *)v20, v21);
          else
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(v23 + 112))(v23, v20, v21);
          KeAcquireSpinLockAtDpcLevel(&a1->Lock);
          a1->MiniportThread = KeGetCurrentThread();
        }
      }
      v19 = (unsigned int)(v19 + 1);
      ++v18;
      if ( (unsigned int)v19 >= v6 )
        goto LABEL_49;
    }
  }
  a1->FirstPendingPacket = 0LL;
  return 0;
}
