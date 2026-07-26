/*
 * XREFs of ?ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00C2330
 * Callers:
 *     <none>
 * Callees:
 *     NdisMPauseComplete @ 0x1C0016980 (NdisMPauseComplete.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     ?NDIS_ACQUIRE_MINIPORT_RECV_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0069D14 (-NDIS_ACQUIRE_MINIPORT_RECV_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x1C00735B8 (-ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 *     ?ndisXlateReturnNetBufferListToPacket@@YAPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0073864 (-ndisXlateReturnNetBufferListToPacket@@YAPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C0090330 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00C2900 (-ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 */

void __fastcall ndisMCoIndicateReceiveNdisPacketToNetBufferLists(_QWORD *a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  __int64 v3; // rax
  void *v5; // r13
  __int64 v6; // rdi
  bool v7; // al
  struct _NET_BUFFER_LIST *v8; // rsi
  unsigned int v9; // r14d
  unsigned int v10; // r12d
  int v11; // eax
  KSPIN_LOCK *v12; // rcx
  KIRQL v13; // dl
  struct _NET_BUFFER_LIST *v14; // r13
  struct _NDIS_PACKET *v15; // rax
  unsigned int v16; // eax
  bool v17; // zf
  KIRQL v18; // dl
  struct _NET_BUFFER_LIST *Alignment; // rbx
  __int64 v20; // rsi
  struct _NDIS_PACKET **v21; // rbx
  struct _NDIS_PACKET *v22; // rdx
  unsigned int v23; // [rsp+20h] [rbp-48h]
  _QWORD v24[2]; // [rsp+28h] [rbp-40h] BYREF
  unsigned int v25; // [rsp+38h] [rbp-30h]
  int v26; // [rsp+3Ch] [rbp-2Ch]
  struct _NET_BUFFER_LIST *v27; // [rsp+40h] [rbp-28h]
  unsigned int v28; // [rsp+48h] [rbp-20h]
  unsigned int v29[2]; // [rsp+4Ch] [rbp-1Ch]
  int v30; // [rsp+54h] [rbp-14h]
  KIRQL NewIrql; // [rsp+C0h] [rbp+58h] BYREF
  bool v34; // [rsp+C8h] [rbp+60h]

  v3 = a1[9];
  v23 = 0;
  v5 = a1;
  v26 = 0;
  *(_QWORD *)v29 = 0LL;
  v6 = *(_QWORD *)(v3 + 120);
  v30 = 0;
  NewIrql = 0;
  v24[0] = v6;
  v24[1] = a2;
  v25 = a3;
  v27 = 0LL;
  v28 = 0;
  do
  {
    v7 = ndisXlateRecvPacketArrayToNetBufferLists((struct _NDIS_PKT_ARRAY_TO_NBLS *)v24);
    v8 = v27;
    v9 = v28;
    v34 = v7;
    if ( !v27 )
      break;
    v10 = v28 - v23;
    v23 = v28;
    NDIS_ACQUIRE_MINIPORT_RECV_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)v6, &NewIrql);
    v11 = *(_DWORD *)(v6 + 2008);
    v12 = (KSPIN_LOCK *)(v6 + 2000);
    *(_QWORD *)(v6 + 2016) = 0LL;
    v13 = NewIrql;
    if ( (unsigned int)(v11 - 5) <= 1 )
    {
      KeReleaseSpinLock(v12, NewIrql);
      do
      {
        Alignment = (struct _NET_BUFFER_LIST *)v8->Link.Alignment;
        v8->Link.Alignment = 0LL;
        ndisXlateReturnNetBufferListToPacket(v8);
        v8 = Alignment;
      }
      while ( Alignment );
      v9 -= v10;
      break;
    }
    *(_DWORD *)(v6 + 2012) += v10;
    KeReleaseSpinLock(v12, v13);
    ndisMCoIndicateReceiveNetBufferListsToNetBufferLists(v5, v8, v29[0], v29[1]);
    if ( (v29[1] & 2) != 0 )
    {
      do
      {
        v14 = (struct _NET_BUFFER_LIST *)v8->Link.Alignment;
        v15 = ndisXlateReturnNetBufferListToPacket(v8);
        if ( *(unsigned int *)((char *)&v15->Private.Count + v15->Private.NdisPacketOobOffset) != -1073741670 )
        {
          if ( (v15[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v15[-1].ProtocolReserved[4] == -1 )
            NDIS_FREE_XFER_DATA_PACKET(v15);
          else
            (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(v6 + 2160))(*(_QWORD *)(v6 + 24), v15);
        }
        v8 = v14;
      }
      while ( v14 );
      NDIS_ACQUIRE_MINIPORT_RECV_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)v6, &NewIrql);
      v16 = *(_DWORD *)(v6 + 2012) - v10;
      v17 = *(_DWORD *)(v6 + 2008) == 5;
      *(_DWORD *)(v6 + 2012) = v16;
      if ( v17 && !v16 )
      {
        v18 = NewIrql;
        *(_QWORD *)(v6 + 2016) = 0LL;
        *(_DWORD *)(v6 + 2008) = 6;
        KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 2000), v18);
        NdisMPauseComplete((NDIS_HANDLE)v6);
        break;
      }
      *(_QWORD *)(v6 + 2016) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 2000), NewIrql);
      v5 = a1;
    }
    v27 = 0LL;
  }
  while ( v34 );
  if ( v9 < a3 )
  {
    v20 = a3 - v9;
    v21 = &a2[v9];
    do
    {
      v22 = *v21++;
      if ( *(unsigned int *)((char *)&v22->Private.Count + v22->Private.NdisPacketOobOffset) != -1073741670 )
      {
        if ( (v22[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v22[-1].ProtocolReserved[4] == -1 )
          NDIS_FREE_XFER_DATA_PACKET(v22);
        else
          (*(void (__fastcall **)(_QWORD))(v6 + 2160))(*(_QWORD *)(v6 + 24));
      }
      --v20;
    }
    while ( v20 );
  }
}
