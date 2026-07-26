/*
 * XREFs of ?ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x1C006E218
 * Callers:
 *     ?ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PACKET@@EE@Z @ 0x1C00BC804 (-ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_P.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00BD280 (-ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMIndicatePacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00C4980 (-ndisMIndicatePacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C0004090 (NdisAllocateNetBufferAndNetBufferList.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C006C9A0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisCopyPacketInfoToNBL@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@W4_NDIS_XLATE_TYPE@@@Z @ 0x1C006DD40 (-ndisCopyPacketInfoToNBL@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@W4_NDIS_XLATE_TYPE@@@Z.c)
 *     ?ndisPacketToNetBuffer@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER@@@Z @ 0x1C006E024 (-ndisPacketToNetBuffer@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER@@@Z.c)
 *     ?XlateReceivePacketStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAEK@Z @ 0x1C008A724 (-XlateReceivePacketStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAEK@Z.c)
 *     ?ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00AE8FC (-ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 */

bool __fastcall ndisXlateRecvPacketArrayToNetBufferLists(struct _NDIS_PKT_ARRAY_TO_NBLS *a1)
{
  struct _NET_BUFFER_LIST *v1; // r15
  unsigned int v3; // r8d
  int v4; // r10d
  __int64 v5; // r14
  unsigned int v6; // r13d
  __int64 v7; // rcx
  int v8; // ebp
  struct _NDIS_PACKET *v9; // rdi
  __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  char v12; // r12
  PNET_BUFFER_LIST NetBufferAndNetBufferList; // rax
  _MDL *Head; // rcx
  unsigned __int8 *MappedSystemVa; // rax
  int v16; // edx
  struct _NDIS_PKT_ARRAY_TO_NBLS *v17; // rax
  bool v18; // cl
  unsigned int v19; // eax
  int v20; // edx
  bool v21; // r9
  struct _NDIS_MINIPORT_BLOCK *v23; // [rsp+30h] [rbp-58h]
  int v24; // [rsp+90h] [rbp+8h]
  unsigned int v25; // [rsp+98h] [rbp+10h]
  _QWORD *v26; // [rsp+A0h] [rbp+18h]
  __int64 v27; // [rsp+A8h] [rbp+20h]

  v1 = 0LL;
  v3 = *((_DWORD *)a1 + 4);
  v4 = -1073741670;
  v5 = *((unsigned int *)a1 + 8);
  v26 = 0LL;
  v23 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v6 = 0;
  v25 = v3;
  v7 = *((_QWORD *)a1 + 1) + 8 * v5;
  v8 = *(_DWORD *)(*(unsigned __int16 *)(*(_QWORD *)v7 + 42LL) + *(_QWORD *)v7 + 32LL);
  while ( 1 )
  {
    v27 = v7;
    if ( (unsigned int)v5 >= v3 )
      break;
    v9 = *(struct _NDIS_PACKET **)v7;
    v10 = *(unsigned __int16 *)(*(_QWORD *)v7 + 42LL);
    v24 = *(_DWORD *)(v10 + *(_QWORD *)v7 + 32);
    if ( v24 != v8 )
      break;
    if ( (v9->Private.NdisPacketFlags & 0x80u) == 0 )
    {
      v12 = 0;
      v11 = 0LL;
    }
    else
    {
      v11 = *(unsigned __int64 *)((char *)&v9[1].Private.Tail + v10);
      v12 = 1;
      if ( v11 )
      {
        if ( *(int *)ndisNblTrackerMode >= 3 )
          ndisNblTrackerRecordEventInternal(v11, 0LL, 0x12u, (unsigned __int64)v9, 0);
        *(_QWORD *)v11 = 0LL;
        goto LABEL_13;
      }
    }
    if ( ndisNetBufferListPool )
    {
      NetBufferAndNetBufferList = NdisAllocateNetBufferAndNetBufferList(ndisNetBufferListPool, 0, 0, 0LL, 0, 0LL);
      v11 = (unsigned __int64)NetBufferAndNetBufferList;
      v4 = -1073741670;
      if ( v12 )
        *(_MDL **)((char *)&v9[1].Private.Tail + v9->Private.NdisPacketOobOffset) = (_MDL *)NetBufferAndNetBufferList;
    }
    if ( !v11 )
    {
      if ( v1 )
        v8 = -1073741670;
      v21 = v1 != 0LL;
      goto LABEL_35;
    }
LABEL_13:
    ndisPacketToNetBuffer(v9, *(struct _NET_BUFFER **)(v11 + 8));
    Head = v9->Private.Head;
    if ( (Head->MdlFlags & 5) != 0 )
      MappedSystemVa = (unsigned __int8 *)Head->MappedSystemVa;
    else
      MappedSystemVa = (unsigned __int8 *)MmMapLockedPagesSpecifyCache(Head, 0, MmCached, 0LL, 0, 0x40000000u);
    if ( !*(_MDL **)((char *)&v9[1].Private.Head + v9->Private.NdisPacketOobOffset)
      && (v9->Private.NdisPacketFlags & 2) == 0 )
    {
      XlateReceivePacketStats(v23, MappedSystemVa, v9->Private.TotalLength);
    }
    *(_DWORD *)(v11 + 136) |= 0x10u;
    *(_QWORD *)(v11 + 48) = v9;
    ndisCopyPacketInfoToNBL((__int64)v9, (_QWORD *)v11, 2u);
    v16 = *(_DWORD *)(v11 + 136);
    if ( (v9->Private.Flags & 0x100) != 0 )
    {
      *(_DWORD *)(v11 + 128) |= 0x8000u;
      v16 |= 0x80u;
      *(_DWORD *)(v11 + 136) = v16;
      v17 = (struct _NDIS_PKT_ARRAY_TO_NBLS *)&v9->MacReserved[v9->Private.NdisPacketOobOffset + 24];
    }
    else
    {
      v17 = a1;
    }
    v8 = v24;
    v4 = -1073741670;
    *(_QWORD *)(v11 + 120) = *(_QWORD *)v17;
    v18 = SLOBYTE(v9->Private.Flags) >= 0 && (v16 & 0x80u) != 0;
    v19 = v16 & 0xFFFFFDFF;
    v20 = v16 | 0x200;
    if ( !v18 )
      v20 = v19;
    *(_DWORD *)(v11 + 136) = v20;
    if ( v24 != -1073741670 )
      *(unsigned int *)((char *)&v9->Private.Count + v9->Private.NdisPacketOobOffset) = 259;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal(v11, 0LL, 0x1Bu, (unsigned __int64)v9, 0);
      v4 = -1073741670;
    }
    if ( v1 )
      *v26 = v11;
    else
      v1 = (struct _NET_BUFFER_LIST *)v11;
    ++v6;
    v3 = v25;
    LODWORD(v5) = v5 + 1;
    v7 = v27 + 8;
    v26 = (_QWORD *)v11;
  }
  v21 = (_DWORD)v5 != v3;
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
    ndisGenerateNetBufferListCorrelationIds(v1, v6);
LABEL_35:
  *((_QWORD *)a1 + 3) = v1;
  *((_DWORD *)a1 + 8) = v5;
  *((_DWORD *)a1 + 9) = v6;
  if ( v8 == v4 )
    *((_DWORD *)a1 + 10) |= 2u;
  return v21;
}
