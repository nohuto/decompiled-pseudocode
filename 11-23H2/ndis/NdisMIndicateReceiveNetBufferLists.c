/*
 * XREFs of NdisMIndicateReceiveNetBufferLists @ 0x1C00138C0
 * Callers:
 *     ?IndicateReceivedNbls@NdisPoll@@AEAAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z @ 0x1C00C53C0 (-IndicateReceivedNbls@NdisPoll@@AEAAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0013284 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KKK@Z@Z @ 0x1C0037100 (-ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK.c)
 *     ?ndisPeriodicReceivesLearning@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAT_LARGE_INTEGER@@@Z @ 0x1C003755C (-ndisPeriodicReceivesLearning@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAT_LARGE_INTEGER@@@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C003DCD4 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C003DD2A (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C0040458 (-ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     PktMonClientNblLogNdis @ 0x1C0040FBA (PktMonClientNblLogNdis.c)
 *     ?ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C0072728 (-ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@@@Z @ 0x1C00728BC (-ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@.c)
 *     ?ndisMDummyReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C009EBE0 (-ndisMDummyReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00B47D8 (-ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisMIndicateReceiveNetBufferLists(
        NDIS_HANDLE MiniportAdapterHandle,
        PNET_BUFFER_LIST NetBufferList,
        NDIS_PORT_NUMBER PortNumber,
        ULONG NumberOfNetBufferLists,
        ULONG ReceiveFlags)
{
  KIRQL v5; // si
  unsigned int v6; // ebx
  int v8; // ecx
  ULONG v12; // r15d
  __int64 v13; // rbx
  __int64 v14; // r9
  __int64 v15; // rax
  LARGE_INTEGER *v16; // r15
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v18; // rax
  union _LARGE_INTEGER v19; // [rsp+40h] [rbp-48h] BYREF
  __int64 v20; // [rsp+48h] [rbp-40h] BYREF
  __int64 v21; // [rsp+50h] [rbp-38h]
  int v22; // [rsp+58h] [rbp-30h]
  char v23; // [rsp+90h] [rbp+8h]

  v5 = 2;
  v6 = 0;
  v8 = *((_DWORD *)MiniportAdapterHandle + 12);
  v23 = 2;
  v20 = 0LL;
  v21 = 0LL;
  v22 = -1;
  if ( v8 || *((_DWORD *)MiniportAdapterHandle + 20) )
  {
    HIDWORD(v21) = *((_DWORD *)MiniportAdapterHandle + 20);
    v15 = *((_QWORD *)MiniportAdapterHandle + 5);
    LODWORD(v21) = v8;
    v20 = v15;
    if ( !v15 )
      v20 = *((_QWORD *)MiniportAdapterHandle + 5);
  }
  if ( (*((_DWORD *)MiniportAdapterHandle + 922) & 0x800) != 0 )
  {
    ndisNblVerifyRxIndication(
      (ULONG_PTR)NetBufferList,
      PortNumber,
      NumberOfNetBufferLists,
      ReceiveFlags,
      (const struct _NDIS_OBJECT_HEADER *)MiniportAdapterHandle,
      *((enum _NDIS_MEDIUM *)MiniportAdapterHandle + 459));
    ndisNblPoisonScratchFields(NetBufferList);
  }
  if ( (v21 & 0x400000000LL) != 0 )
  {
    if ( (ReceiveFlags & 1) == 0 )
    {
      v5 = KfRaiseIrql(2u);
      v23 = v5;
    }
    ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&v20, 2u);
  }
  if ( (*((_DWORD *)MiniportAdapterHandle + 670) & 1) != 0 )
  {
    v16 = (LARGE_INTEGER *)NetBufferList;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( NetBufferList )
    {
      do
      {
        v16[44] = PerformanceCounter;
        v16 = (LARGE_INTEGER *)v16->QuadPart;
      }
      while ( v16 );
    }
  }
  if ( *((_BYTE *)MiniportAdapterHandle + 2664) )
  {
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
      ndisGenerateNetBufferListCorrelationIds(NetBufferList, NumberOfNetBufferLists);
    if ( *(_DWORD *)ndisNblTrackerMode )
    {
      v14 = 129LL;
      if ( (ReceiveFlags & 2) == 0 )
        v14 = 128LL;
      v12 = ReceiveFlags & 1;
      if ( (ReceiveFlags & 1) != 0 )
        v6 = 1;
      ndisNblTrackerTransferOwnershipInternal(
        NetBufferList,
        *((struct NDIS_NBL_TRACKER_HANDLE__ **)MiniportAdapterHandle + 510),
        *((_QWORD *)MiniportAdapterHandle + 313),
        v14,
        v6);
    }
    else
    {
      v12 = ReceiveFlags & 1;
    }
    if ( byte_1C00F5390 )
    {
      v18 = *((_QWORD *)MiniportAdapterHandle + 737);
      if ( v18 )
      {
        if ( (*(_DWORD *)(v18 + 56) & 1) != 0 )
          PktMonClientNblLogNdis((char *)MiniportAdapterHandle + 5872, NetBufferList, *(_QWORD *)&PortNumber, 1LL);
      }
    }
    v13 = MEMORY[0xFFFFF78000000320];
    ndisInvokeNextReceiveHandler(
      NetBufferList,
      PortNumber,
      NumberOfNetBufferLists,
      ReceiveFlags,
      *((struct _NDIS_OBJECT_HEADER **)MiniportAdapterHandle + 314),
      *((void **)MiniportAdapterHandle + 312),
      *((void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))MiniportAdapterHandle
      + 328));
    v19.QuadPart = ndisTimeIncrement * (MEMORY[0xFFFFF78000000320] - v13) / 10000;
    if ( v12 || KeGetCurrentIrql() == 2 )
      ndisPeriodicReceivesLearning((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, NumberOfNetBufferLists, &v19);
    if ( (ReceiveFlags & 2) != 0 && *(_DWORD *)ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(
        NetBufferList,
        *((struct NDIS_NBL_TRACKER_HANDLE__ **)MiniportAdapterHandle + 313),
        *((_QWORD *)MiniportAdapterHandle + 510),
        142LL,
        v12);
    if ( (Microsoft_Windows_Networking_CorrelationEnabled || byte_1C00F5390) && (ReceiveFlags & 2) != 0 )
      ndisMarkNetBufferListCorrelationIdsAsUsed(NetBufferList);
    v5 = v23;
  }
  else
  {
    ndisMDummyReceiveNetBufferLists(
      MiniportAdapterHandle,
      NetBufferList,
      PortNumber,
      NumberOfNetBufferLists,
      ReceiveFlags);
  }
  if ( (v21 & 0x400000000LL) != 0 )
  {
    ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&v20, 2u, 0xFuLL);
    if ( v5 != 2 )
      KeLowerIrql(v5);
  }
}
