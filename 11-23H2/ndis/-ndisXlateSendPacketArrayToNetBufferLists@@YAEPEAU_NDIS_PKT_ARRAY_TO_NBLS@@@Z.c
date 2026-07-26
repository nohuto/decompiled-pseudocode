/*
 * XREFs of ?ndisXlateSendPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x1C0073F60
 * Callers:
 *     ?ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00C1ED0 (-ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00C9D10 (-ndisMSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C0002160 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisFreeNetBufferList @ 0x1C0003B20 (NdisFreeNetBufferList.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0071D68 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisCopyPacketInfoToNBL@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@W4_NDIS_XLATE_TYPE@@@Z @ 0x1C00730F8 (-ndisCopyPacketInfoToNBL@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@W4_NDIS_XLATE_TYPE@@@Z.c)
 *     ?ndisPacketToNetBuffer@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER@@@Z @ 0x1C00733DC (-ndisPacketToNetBuffer@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER@@@Z.c)
 */

bool __fastcall ndisXlateSendPacketArrayToNetBufferLists(struct _NDIS_PKT_ARRAY_TO_NBLS *a1)
{
  unsigned int v1; // r13d
  bool v2; // di
  __int64 v4; // rcx
  char v5; // dl
  unsigned __int64 v6; // rsi
  int v7; // r12d
  __int64 v8; // rbx
  struct _NDIS_PACKET **v9; // r15
  int v10; // ecx
  int v11; // eax
  bool result; // al
  PNET_BUFFER_LIST NetBufferAndNetBufferList; // rax
  unsigned __int64 v14; // rbp
  int v15; // edx
  unsigned int v16; // eax
  int v17; // edx
  unsigned __int64 v18; // rbx
  char v19; // [rsp+70h] [rbp+8h]
  _QWORD *v20; // [rsp+78h] [rbp+10h]

  v1 = *((_DWORD *)a1 + 4);
  v2 = 0;
  v20 = 0LL;
  v4 = *((_QWORD *)a1 + 1);
  v5 = 1;
  v6 = 0LL;
  v19 = 1;
  v7 = 0;
  v8 = *((unsigned int *)a1 + 8);
  if ( (unsigned int)v8 >= v1 )
  {
LABEL_9:
    *((_DWORD *)a1 + 10) = v7;
    *((_DWORD *)a1 + 8) = v8;
    v2 = (_DWORD)v8 != v1;
  }
  else
  {
    v9 = (struct _NDIS_PACKET **)(v4 + 8 * v8);
    while ( 1 )
    {
      if ( v5 == 1 )
      {
        v19 = 0;
        v10 = v7 | 2;
        if ( ((*v9)->Private.Flags & 0x80u) != 0 )
          v10 = v7;
        v7 = v10;
      }
      else
      {
        v11 = (*v9)->Private.Flags & 0x80;
        if ( (v7 & 2) != 0 )
        {
          if ( v11 )
            goto LABEL_9;
        }
        else if ( !v11 )
        {
          goto LABEL_9;
        }
      }
      NetBufferAndNetBufferList = NdisAllocateNetBufferAndNetBufferList(ndisNetBufferListPool, 0, 0, 0LL, 0, 0LL);
      v14 = (unsigned __int64)NetBufferAndNetBufferList;
      if ( !NetBufferAndNetBufferList )
        break;
      ndisPacketToNetBuffer(*v9, NetBufferAndNetBufferList->FirstNetBuffer);
      if ( !v6 )
        v6 = v14;
      if ( v20 )
        *v20 = v14;
      *(_QWORD *)(v14 + 120) = *(_QWORD *)a1;
      *(_QWORD *)(v14 + 48) = *v9;
      v20 = (_QWORD *)v14;
      ndisCopyPacketInfoToNBL((__int64)*v9, (_QWORD *)v14, 0);
      *(_BYTE *)(v6 + 200) = (*v9)->Private.Flags & 0xF;
      *(_QWORD *)(v6 + 184) = *(_QWORD *)((char *)&(*v9)[1].Private.PhysicalCount + (*v9)->Private.NdisPacketOobOffset);
      v15 = *(_DWORD *)(v14 + 136) | 0x10;
      *(_DWORD *)(v14 + 136) = v15;
      v16 = v15 & 0xFFFFF7FF;
      v17 = v15 | 0x800;
      if ( ((*v9)->Private.NdisPacketFlags & 0x20) == 0 )
        v17 = v16;
      *(_DWORD *)(v14 + 136) = v17;
      if ( *(int *)ndisNblTrackerMode >= 3 )
        ndisNblTrackerRecordEventInternal(v14, 0LL, 0x15u, (unsigned __int64)*v9, 0);
      v5 = v19;
      LODWORD(v8) = v8 + 1;
      ++v9;
      if ( (unsigned int)v8 >= v1 )
        goto LABEL_9;
    }
    if ( v6 )
    {
      do
      {
        if ( *(int *)ndisNblTrackerMode >= 3 )
          ndisNblTrackerRecordEventInternal(v6, 0LL, 0x16u, 0LL, 0);
        *(_QWORD *)(*(_QWORD *)(v6 + 8) + 32LL) = 0LL;
        v18 = *(_QWORD *)v6;
        NdisFreeNetBufferList((PNET_BUFFER_LIST)v6);
        v6 = v18;
      }
      while ( v18 );
    }
    v6 = 0LL;
  }
  result = v2;
  *((_QWORD *)a1 + 3) = v6;
  return result;
}
