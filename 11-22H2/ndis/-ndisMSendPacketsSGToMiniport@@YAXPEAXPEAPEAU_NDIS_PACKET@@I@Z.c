/*
 * XREFs of ?ndisMSendPacketsSGToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00CA690
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C00315F8 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00C9AA8 (-ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C00CAA40 (-ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMCheckPacketAndPad@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00CAA90 (-ndisMCheckPacketAndPad@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00CCD0C (-ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00CD228 (-ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 */

void __fastcall ndisMSendPacketsSGToMiniport(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_PACKET **a2,
        unsigned int a3)
{
  __int64 v5; // rbp
  struct _NDIS_PACKET *v6; // rbx
  unsigned int v7; // esi
  struct _NDIS_STACK_RESERVED *v8; // r12
  __int64 v9; // r13
  __int64 NdisPacketOobOffset; // rax
  KIRQL v11; // dl
  struct _NDIS_STACK_RESERVED *v12; // [rsp+60h] [rbp+8h] BYREF
  KIRQL NewIrql; // [rsp+70h] [rbp+18h] BYREF

  if ( a3 )
  {
    v12 = 0LL;
    NewIrql = 0;
    v5 = a3;
    do
    {
      v6 = *a2;
      v7 = 0;
      if ( (a1->SendFlags & 8) != 0 )
        v7 = ndisMCheckPacketAndPad(a1, *a2);
      *(unsigned int *)((char *)&v6->Private.Count + v6->Private.NdisPacketOobOffset) = 259;
      if ( v7 )
      {
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
        NDIS_STACK_RESERVED_FROM_PACKET(v6, &v12);
        v8 = v12;
        v9 = *(_QWORD *)v12;
        a1->Flags |= 0x400000u;
        *(_QWORD *)v8 = 1297040176LL;
        a1->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        if ( *(unsigned __int64 *)((char *)v6->Reserved + v6->Private.NdisPacketOobOffset) )
          ndisMFreeSGList(a1, v6);
        *((_DWORD *)v8 + 2) = 0;
        if ( (a1->SendFlags & 8) != 0 && *(void **)((char *)&v6[1].Private.Pool + v6->Private.NdisPacketOobOffset) )
          ndisFreePaddedMdl(v6);
        NdisPacketOobOffset = v6->Private.NdisPacketOobOffset;
        v6->Private.NdisPacketFlags &= 0xC0u;
        if ( *(_MDL **)((char *)&v6[1].Private.Head + NdisPacketOobOffset) )
          ndisMSendCompletePacketToNetBufferLists((struct _NDIS_FILTER_BLOCK *)a1, v6, v7);
        else
          (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(v9 + 112))(v9, v6, v7);
        KeAcquireSpinLockAtDpcLevel(&a1->Lock);
        v11 = NewIrql;
        a1->MiniportThread = 0LL;
        KeReleaseSpinLock(&a1->Lock, v11);
      }
      else
      {
        ndisMAllocSGListS(a1, v6);
      }
      ++a2;
      --v5;
    }
    while ( v5 );
  }
}
