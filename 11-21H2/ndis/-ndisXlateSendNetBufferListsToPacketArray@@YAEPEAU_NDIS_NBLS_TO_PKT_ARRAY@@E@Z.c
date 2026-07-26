/*
 * XREFs of ?ndisXlateSendNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@E@Z @ 0x1C006E798
 * Callers:
 *     ?ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00BCA30 (-ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisMSendNetBufferListsToPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00C4FB0 (-ndisMSendNetBufferListsToPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C002DDD8 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C006C9A0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisCopyNBLInfoToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@W4_NDIS_XLATE_TYPE@@@Z @ 0x1C006DC84 (-ndisCopyNBLInfoToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@W4_NDIS_XLATE_TYPE@@@Z.c)
 *     ?ndisNetBufferToPacket@@YAHPEAU_NET_BUFFER@@EPEAPEAU_NDIS_PACKET@@@Z @ 0x1C006DF14 (-ndisNetBufferToPacket@@YAHPEAU_NET_BUFFER@@EPEAPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@Z @ 0x1C00AB5B0 (-ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@.c)
 *     NdisGetNetBufferListProtocolId @ 0x1C00ADE40 (NdisGetNetBufferListProtocolId.c)
 */

char __fastcall ndisXlateSendNetBufferListsToPacketArray(struct _NDIS_NBLS_TO_PKT_ARRAY *a1, char a2)
{
  __int64 v2; // r10
  struct _NET_BUFFER *v3; // rsi
  unsigned int v4; // r8d
  char v5; // r15
  unsigned __int64 v6; // rdi
  struct _NET_BUFFER_LIST *v7; // rbp
  char v8; // al
  struct _NET_BUFFER *v9; // rdx
  int v11; // r12d
  struct _NDIS_MINIPORT_BLOCK *v12; // rcx
  __int64 v13; // r13
  char v14; // bl
  _QWORD *v15; // r15
  struct _MDL *i; // rbx
  PVOID MappedSystemVa; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r9
  struct _NET_BUFFER *Alignment; // rax
  int v21; // ecx
  struct _NDIS_PACKET **v22; // rbp
  struct _NDIS_PACKET *v23; // rbp
  unsigned int v24; // ecx
  unsigned __int8 v25; // cl
  __int64 NdisPacketOobOffset; // rax
  signed __int32 v27; // eax
  signed __int32 v28; // eax
  struct _NET_BUFFER *v30; // [rsp+30h] [rbp-78h]
  __int64 v31; // [rsp+38h] [rbp-70h]
  struct _NET_BUFFER_LIST *v32; // [rsp+40h] [rbp-68h]
  struct _NDIS_MINIPORT_BLOCK *v33; // [rsp+48h] [rbp-60h]
  _QWORD *v34; // [rsp+50h] [rbp-58h]
  struct _NDIS_STACK_RESERVED *v35; // [rsp+58h] [rbp-50h] BYREF
  char v36; // [rsp+B0h] [rbp+8h]
  unsigned int v38; // [rsp+C8h] [rbp+20h]

  v2 = *(_QWORD *)a1;
  v3 = 0LL;
  v4 = *((_DWORD *)a1 + 2);
  v5 = 0;
  v6 = *((_QWORD *)a1 + 2);
  v7 = 0LL;
  v35 = 0LL;
  v8 = a2;
  v9 = (struct _NET_BUFFER *)*((_QWORD *)a1 + 3);
  v34 = 0LL;
  v11 = 0;
  v12 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)a1 + 5);
  v13 = 0LL;
  v31 = v2;
  v14 = 1;
  v38 = v4;
  v30 = v9;
  v36 = 0;
  v33 = v12;
  v32 = 0LL;
  if ( !v6 )
    goto LABEL_51;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v8 && (v12->SendFlags & 2) == 0 )
      {
        v15 = *(_QWORD **)(v6 + 8);
        v11 = 0;
        if ( v15 )
        {
          do
          {
            for ( i = (struct _MDL *)v15[4]; i; i = i->Next )
            {
              if ( (i->MdlFlags & 5) != 0 )
                MappedSystemVa = i->MappedSystemVa;
              else
                MappedSystemVa = MmMapLockedPagesSpecifyCache(i, 0, MmCached, 0LL, 0, 0x40000020u);
              if ( !MappedSystemVa )
              {
                v11 = -1073741670;
                break;
              }
            }
            v15 = (_QWORD *)*v15;
          }
          while ( v15 );
          if ( v11 )
          {
            v18 = *(_QWORD *)v6;
            *(_QWORD *)v6 = 0LL;
            *(_DWORD *)(v6 + 140) = v11;
            if ( v7 )
            {
              *v34 = v6;
            }
            else
            {
              v7 = (struct _NET_BUFFER_LIST *)v6;
              v32 = (struct _NET_BUFFER_LIST *)v6;
            }
            v34 = (_QWORD *)v6;
            v6 = v18;
            goto LABEL_29;
          }
          v9 = v30;
          v4 = v38;
          v2 = v31;
        }
        v5 = v36;
      }
      if ( (*(_DWORD *)(v6 + 136) & 0x10) == 0 || (*(_DWORD *)(v6 + 128) & 1) == 0 )
        break;
      if ( (unsigned int)v13 >= v4 )
        goto LABEL_50;
      v19 = *(_QWORD *)(v6 + 48);
      *(_QWORD *)(v2 + 8 * v13) = v19;
      v13 = (unsigned int)(v13 + 1);
      *(_DWORD *)(v19 + 36) |= 0x4000u;
      *(_QWORD *)(*(unsigned __int16 *)(v19 + 42) + v19 + 112) = v6;
      *(_DWORD *)(v6 + 140) = 0;
      v6 = *(_QWORD *)v6;
      if ( v6 )
      {
        v9 = *(struct _NET_BUFFER **)(v6 + 8);
        v30 = v9;
      }
      if ( *(int *)ndisNblTrackerMode >= 3 )
      {
        ndisNblTrackerRecordEventInternal(v6, 0LL, 0x17u, v19, 0);
LABEL_29:
        v2 = v31;
        v4 = v38;
        v9 = v30;
      }
      if ( !v6 )
        goto LABEL_50;
      v12 = v33;
      v8 = a2;
      v5 = v36;
    }
    Alignment = *(struct _NET_BUFFER **)(v6 + 8);
    if ( v9 == Alignment )
    {
      *(_DWORD *)(v6 + 96) = 0;
      if ( Alignment )
      {
        v21 = 0;
        do
        {
          *(_DWORD *)(v6 + 96) = ++v21;
          Alignment = (struct _NET_BUFFER *)Alignment->Link.Alignment;
        }
        while ( Alignment );
      }
    }
    v3 = v9;
    if ( v9 )
      break;
    if ( v11 )
      goto LABEL_50;
LABEL_48:
    *(_DWORD *)(v6 + 140) = 0;
    v6 = *(_QWORD *)v6;
    if ( !v6 )
      goto LABEL_50;
    v9 = *(struct _NET_BUFFER **)(v6 + 8);
    v4 = v38;
    v2 = v31;
    v12 = v33;
    v8 = a2;
    v30 = v9;
  }
  while ( (unsigned int)v13 < v4 )
  {
    v22 = (struct _NDIS_PACKET **)(v2 + 8 * v13);
    v11 = ndisNetBufferToPacket(v3, 1, v22);
    if ( v11 )
      break;
    v23 = *v22;
    ndisCopyNBLInfoToPacket(v6, (__int64)v23, 0);
    v23->Private.Flags &= 0xFFFFFFF0;
    v23->Private.Flags |= NdisGetNetBufferListProtocolId((PNET_BUFFER_LIST)v6);
    if ( *(int *)ndisNblTrackerMode >= 3 )
      ndisNblTrackerRecordEventInternal(v6, 0LL, 0x13u, (unsigned __int64)v23, 0);
    ++*(_DWORD *)&v23[-1].ProtocolReserved[4];
    NDIS_STACK_RESERVED_FROM_PACKET(v23, &v35);
    v4 = v38;
    v2 = v31;
    *(_QWORD *)v35 = *(_QWORD *)(v6 + 120);
    v5 |= (*((_DWORD *)a1 + 9) & 2) != 0;
    v36 = v5;
    v24 = v23->Private.Flags | 0x80;
    if ( v5 )
      v24 = v23->Private.Flags & 0xFFFFFF7F;
    v23->Private.Flags = v24;
    v25 = v23->Private.NdisPacketFlags | 0x20;
    if ( (*(_DWORD *)(v6 + 136) & 0x800) == 0 )
      v25 = v23->Private.NdisPacketFlags & 0xDF;
    NdisPacketOobOffset = v23->Private.NdisPacketOobOffset;
    v23->Private.NdisPacketFlags = v25;
    v13 = (unsigned int)(v13 + 1);
    *(_MDL **)((char *)&v23[1].Private.Head + NdisPacketOobOffset) = (_MDL *)v3;
    v3->MiniportReserved[0] = (void *)v6;
    v3 = (struct _NET_BUFFER *)v3->Link.Alignment;
    if ( !v3 )
    {
      v7 = v32;
      goto LABEL_48;
    }
  }
LABEL_50:
  v9 = v30;
  v7 = v32;
  v14 = 1;
  v12 = v33;
LABEL_51:
  *((_DWORD *)a1 + 8) = v13;
  *((_QWORD *)a1 + 2) = v6;
  if ( v6 )
  {
    if ( !v3 )
      v3 = v9;
  }
  else
  {
    v3 = 0LL;
  }
  *((_QWORD *)a1 + 3) = v3;
  if ( v11 || !v6 )
  {
    v14 = 0;
    if ( v6 )
    {
      if ( v3 && v3 != *(struct _NET_BUFFER **)(v6 + 8) )
      {
        do
        {
          v27 = _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 96), 0xFFFFFFFF);
          v3 = (struct _NET_BUFFER *)v3->Link.Alignment;
          v28 = v27 - 1;
        }
        while ( v3 );
        if ( !v28 )
          *((_QWORD *)a1 + 3) = *(_QWORD *)(v6 + 8);
      }
      do
      {
        *(_DWORD *)(v6 + 140) = -1073741670;
        v6 = *(_QWORD *)v6;
      }
      while ( v6 );
    }
  }
  if ( v7 )
    ndisMSendNetBufferListsCompleteInternal(v12, v7, *((_DWORD *)a1 + 9) & 1, 0);
  return v14;
}
