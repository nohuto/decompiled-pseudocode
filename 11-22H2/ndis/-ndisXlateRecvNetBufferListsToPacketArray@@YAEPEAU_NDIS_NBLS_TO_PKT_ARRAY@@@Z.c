/*
 * XREFs of ?ndisXlateRecvNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@@Z @ 0x1C0073400
 * Callers:
 *     ?ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKE@Z @ 0x1C00C167C (-ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00C2580 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C00C93E4 (-ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0071D48 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisCopyNBLInfoToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@W4_NDIS_XLATE_TYPE@@@Z @ 0x1C007301C (-ndisCopyNBLInfoToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@W4_NDIS_XLATE_TYPE@@@Z.c)
 *     ?ndisNetBufferToPacket@@YAHPEAU_NET_BUFFER@@EPEAPEAU_NDIS_PACKET@@@Z @ 0x1C00732AC (-ndisNetBufferToPacket@@YAHPEAU_NET_BUFFER@@EPEAPEAU_NDIS_PACKET@@@Z.c)
 */

char __fastcall ndisXlateRecvNetBufferListsToPacketArray(struct _NDIS_NBLS_TO_PKT_ARRAY *a1)
{
  unsigned __int64 v1; // rbx
  int v2; // r12d
  unsigned int v4; // eax
  __int64 v5; // rsi
  __int64 v6; // r13
  char v7; // r15
  struct _NDIS_PACKET *v8; // rax
  struct _NDIS_PACKET **v9; // r14
  unsigned int v10; // r8d
  struct _NDIS_PACKET *v11; // rbp
  unsigned int *p_Flags; // r8
  unsigned int v13; // edx
  unsigned int v15; // [rsp+60h] [rbp+8h]

  v1 = *((_QWORD *)a1 + 2);
  v2 = 0;
  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  v4 = *((_DWORD *)a1 + 2);
  v5 = 0LL;
  v6 = *(_QWORD *)a1;
  v7 = 1;
  v15 = v4;
  while ( v1 && (unsigned int)v5 < v4 )
  {
    if ( (*(_DWORD *)(v1 + 136) & 0x10) != 0 && (*(_DWORD *)(v1 + 128) & 2) != 0 )
    {
      v8 = *(struct _NDIS_PACKET **)(v1 + 48);
      v9 = (struct _NDIS_PACKET **)(v6 + 8 * v5);
      *v9 = v8;
      v8->Private.Flags |= 0x4000u;
      if ( *(int *)ndisNblTrackerMode < 3 )
        goto LABEL_11;
      v10 = 29;
      goto LABEL_10;
    }
    v9 = (struct _NDIS_PACKET **)(v6 + 8 * v5);
    v2 = ndisNetBufferToPacket(*(struct _NET_BUFFER **)(v1 + 8), 0, v9);
    if ( v2 )
      break;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      v10 = 25;
LABEL_10:
      ndisNblTrackerRecordEventInternal(v1, 0LL, v10, (unsigned __int64)*v9, 0);
    }
LABEL_11:
    v11 = *v9;
    *(unsigned int *)((char *)&v11->Private.Count + (*v9)->Private.NdisPacketOobOffset) = *((_DWORD *)a1 + 3);
    *(_DWORD *)((char *)&v11->Private.Tail + v11->Private.NdisPacketOobOffset) = 14;
    *(_QWORD *)&(*v9)->MacReserved[(*v9)->Private.NdisPacketOobOffset + 24] = 0LL;
    ndisCopyNBLInfoToPacket(v1, (__int64)v11, 2u);
    p_Flags = &v11->Private.Flags;
    if ( (*(_DWORD *)(v1 + 136) & 0x80u) != 0 )
    {
      *p_Flags |= 0x100u;
      v11->Private.NdisPacketFlags |= 2u;
      *(_QWORD *)&v11->MacReserved[v11->Private.NdisPacketOobOffset + 24] = *(_QWORD *)(v1 + 120);
    }
    v13 = *p_Flags | 0x80;
    if ( (*(_DWORD *)(v1 + 136) & 0x200) != 0 )
      v13 = *p_Flags & 0xFFFFFF7F;
    *p_Flags = v13 | 0x20000;
    v5 = (unsigned int)(v5 + 1);
    *(_MDL **)((char *)&(*v9)[1].Private.Head + (*v9)->Private.NdisPacketOobOffset) = (_MDL *)v1;
    v1 = *(_QWORD *)v1;
    v4 = v15;
  }
  *((_DWORD *)a1 + 8) = v5;
  *((_QWORD *)a1 + 2) = v1;
  if ( v1 )
    *((_QWORD *)a1 + 3) = *(_QWORD *)(v1 + 8);
  if ( v2 )
  {
    if ( (_DWORD)v5 )
      return v7;
    return 0;
  }
  else if ( !v1 )
  {
    return 0;
  }
  return v7;
}
