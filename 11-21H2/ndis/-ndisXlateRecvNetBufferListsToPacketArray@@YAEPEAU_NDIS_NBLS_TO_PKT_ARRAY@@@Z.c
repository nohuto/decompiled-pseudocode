/*
 * XREFs of ?ndisXlateRecvNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@@Z @ 0x1C006E068
 * Callers:
 *     ?ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKE@Z @ 0x1C00BC5FC (-ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00BD4D0 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C00C47A4 (-ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C006C9A0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisCopyNBLInfoToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@W4_NDIS_XLATE_TYPE@@@Z @ 0x1C006DC84 (-ndisCopyNBLInfoToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@W4_NDIS_XLATE_TYPE@@@Z.c)
 *     ?ndisNetBufferToPacket@@YAHPEAU_NET_BUFFER@@EPEAPEAU_NDIS_PACKET@@@Z @ 0x1C006DF14 (-ndisNetBufferToPacket@@YAHPEAU_NET_BUFFER@@EPEAPEAU_NDIS_PACKET@@@Z.c)
 */

char __fastcall ndisXlateRecvNetBufferListsToPacketArray(struct _NDIS_NBLS_TO_PKT_ARRAY *a1)
{
  unsigned __int64 v1; // rbx
  int v2; // r13d
  unsigned int v4; // eax
  __int64 v5; // rsi
  __int64 v6; // r12
  char v7; // r15
  __int64 v8; // rax
  __int64 v9; // r14
  unsigned __int64 v10; // r9
  unsigned int v11; // r8d
  __int64 v12; // rbp
  int v13; // edx
  unsigned int v14; // ecx
  unsigned int v16; // [rsp+60h] [rbp+8h]

  v1 = *((_QWORD *)a1 + 2);
  v2 = 0;
  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  v4 = *((_DWORD *)a1 + 2);
  v5 = 0LL;
  v6 = *(_QWORD *)a1;
  v7 = 1;
  v16 = v4;
  while ( v1 && (unsigned int)v5 < v4 )
  {
    if ( (*(_DWORD *)(v1 + 136) & 0x10) != 0 && (*(_DWORD *)(v1 + 128) & 2) != 0 )
    {
      v8 = *(_QWORD *)(v1 + 48);
      *(_QWORD *)(v6 + 8 * v5) = v8;
      v9 = (unsigned int)v5;
      *(_DWORD *)(v8 + 36) |= 0x4000u;
      if ( *(int *)ndisNblTrackerMode < 3 )
        goto LABEL_11;
      v10 = *(_QWORD *)(v6 + 8 * v5);
      v11 = 29;
      goto LABEL_10;
    }
    v9 = (unsigned int)v5;
    v2 = ndisNetBufferToPacket(*(struct _NET_BUFFER **)(v1 + 8), 0, (struct _NDIS_PACKET **)(v6 + 8 * v5));
    if ( v2 )
      break;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      v10 = *(_QWORD *)(v6 + 8 * v5);
      v11 = 25;
LABEL_10:
      ndisNblTrackerRecordEventInternal(v1, 0LL, v11, v10, 0);
    }
LABEL_11:
    v12 = *(_QWORD *)(v6 + 8 * v9);
    *(_DWORD *)(*(unsigned __int16 *)(v12 + 42) + v12 + 32) = *((_DWORD *)a1 + 3);
    *(_DWORD *)(*(unsigned __int16 *)(v12 + 42) + v12 + 16) = 14;
    *(_QWORD *)(*(unsigned __int16 *)(*(_QWORD *)(v6 + 8 * v9) + 42LL) + *(_QWORD *)(v6 + 8 * v9) + 72LL) = 0LL;
    ndisCopyNBLInfoToPacket(v1, v12, 2u);
    v13 = *(_DWORD *)(v1 + 136);
    if ( (v13 & 0x80u) != 0 )
    {
      *(_DWORD *)(v12 + 36) |= 0x100u;
      *(_BYTE *)(v12 + 41) |= 2u;
      *(_QWORD *)(*(unsigned __int16 *)(v12 + 42) + v12 + 72) = *(_QWORD *)(v1 + 120);
      v13 = *(_DWORD *)(v1 + 136);
    }
    v14 = *(_DWORD *)(v12 + 36) | 0x80;
    if ( (v13 & 0x200) != 0 )
      v14 = *(_DWORD *)(v12 + 36) & 0xFFFFFF7F;
    *(_DWORD *)(v12 + 36) = v14 | 0x20000;
    v5 = (unsigned int)(v5 + 1);
    *(_QWORD *)(*(unsigned __int16 *)(*(_QWORD *)(v6 + 8 * v9) + 42LL) + *(_QWORD *)(v6 + 8 * v9) + 112LL) = v1;
    v1 = *(_QWORD *)v1;
    v4 = v16;
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
