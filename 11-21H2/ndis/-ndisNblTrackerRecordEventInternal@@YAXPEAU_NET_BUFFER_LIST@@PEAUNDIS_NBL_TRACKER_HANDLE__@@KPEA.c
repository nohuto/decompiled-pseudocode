/*
 * XREFs of ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C006C9A0
 * Callers:
 *     ?ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0002170 (-ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00025B0 (-ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0002C10 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C00037F0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     NdisAllocateNetBufferList @ 0x1C0003CA0 (NdisAllocateNetBufferList.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C0004090 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisAllocateCloneNetBufferList @ 0x1C0004450 (NdisAllocateCloneNetBufferList.c)
 *     NdisSendNetBufferLists @ 0x1C00049F0 (NdisSendNetBufferLists.c)
 *     NdisFreeNetBufferList @ 0x1C0005150 (NdisFreeNetBufferList.c)
 *     ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x1C00052B0 (-ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z.c)
 *     NdisReturnNetBufferLists @ 0x1C0005660 (NdisReturnNetBufferLists.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x1C00066F0 (NdisFIndicateReceiveNetBufferLists.c)
 *     NdisFReturnNetBufferLists @ 0x1C0006A00 (NdisFReturnNetBufferLists.c)
 *     NdisFSendNetBufferLists @ 0x1C0007AD0 (NdisFSendNetBufferLists.c)
 *     NdisFSendNetBufferListsComplete @ 0x1C0007F50 (NdisFSendNetBufferListsComplete.c)
 *     NdisFreeCloneNetBufferList @ 0x1C0013560 (NdisFreeCloneNetBufferList.c)
 *     ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0023370 (-ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1C006CE6C (-ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE_.c)
 *     NdisNblTrackerRecordEvent @ 0x1C006CF70 (NdisNblTrackerRecordEvent.c)
 *     ?ndisXlateRecvNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@@Z @ 0x1C006E068 (-ndisXlateRecvNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@@Z.c)
 *     ?ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x1C006E218 (-ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 *     ?ndisXlateReturnNetBufferListToPacket@@YAPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C006E4C8 (-ndisXlateReturnNetBufferListToPacket@@YAPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z @ 0x1C006E568 (-ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisXlateSendCompleteNetBufferListToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAPEAU_NDIS_PACKET@@PEAH@Z @ 0x1C006E600 (-ndisXlateSendCompleteNetBufferListToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAPEAU_NDIS_PACKET@@PEAH@.c)
 *     ?ndisXlateSendCompletePacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@H@Z @ 0x1C006E698 (-ndisXlateSendCompletePacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisXlateSendNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@E@Z @ 0x1C006E798 (-ndisXlateSendNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@E@Z.c)
 *     ?ndisXlateSendPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x1C006EBA0 (-ndisXlateSendPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 *     ?ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0098440 (-ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisDoPeriodicReceivesIndication @ 0x1C00A354C (ndisDoPeriodicReceivesIndication.c)
 *     ndisMIndicateSplitNblChain @ 0x1C00A41C4 (ndisMIndicateSplitNblChain.c)
 *     NdisAllocateFragmentNetBufferList @ 0x1C00ADE60 (NdisAllocateFragmentNetBufferList.c)
 *     NdisAllocateReassembledNetBufferList @ 0x1C00AE280 (NdisAllocateReassembledNetBufferList.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     ?ndisIsPossibleSmuggling@@YAET_NDIS_NBL_TRACKER_OWNER@@0PEAX@Z @ 0x1C006C794 (-ndisIsPossibleSmuggling@@YAET_NDIS_NBL_TRACKER_OWNER@@0PEAX@Z.c)
 *     ?ndisNblTrackerPrintComponentNameToDebugger@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C006C878 (-ndisNblTrackerPrintComponentNameToDebugger@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 *     ?ndisCaptureStackTrace@@YAKK@Z @ 0x1C00C0064 (-ndisCaptureStackTrace@@YAKK@Z.c)
 *     ?ndisReleaseStackTrace@@YAXK@Z @ 0x1C00C0364 (-ndisReleaseStackTrace@@YAXK@Z.c)
 */

void __fastcall ndisNblTrackerRecordEventInternal(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        char a5)
{
  unsigned int v6; // ecx
  unsigned int v7; // r13d
  unsigned int v8; // ebx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r14
  struct _NET_BUFFER_LIST *v11; // r9
  struct _NET_BUFFER_LIST **v12; // r9
  unsigned int v13; // r11d
  unsigned int v14; // r10d
  unsigned int v15; // esi
  unsigned __int64 v16; // rbp
  unsigned int v17; // r11d
  unsigned int v18; // ebx
  __int64 v19; // r12
  unsigned int v20; // r14d
  int v21; // ecx
  ULONG_PTR v22; // rcx
  unsigned int Number; // edx
  int v24; // edx
  unsigned __int64 *v25; // r10
  unsigned int v26; // r8d
  unsigned int v27; // edx
  unsigned __int64 v28; // rax
  __int64 v29; // r13
  struct _NET_BUFFER_LIST *v30; // r14
  unsigned __int64 v31; // rbp
  unsigned __int64 v32; // r12
  __int64 v33; // rcx
  unsigned int v35; // [rsp+24h] [rbp-74h]
  struct _NET_BUFFER_LIST *v37; // [rsp+30h] [rbp-68h]
  unsigned __int64 v38; // [rsp+38h] [rbp-60h]
  __int128 v39; // [rsp+40h] [rbp-58h] BYREF
  __int64 v40; // [rsp+50h] [rbp-48h]

  v40 = 0LL;
  v37 = ndisBreakNbl;
  v6 = ndisMaxNumberOfProcessors + 1;
  v7 = 0;
  v8 = 0;
  v9 = a2 & 0xFFFFFFFFFFFFFFFDuLL;
  v38 = a2 | 0x8000000000000002uLL;
  v10 = a4;
  v11 = (struct _NET_BUFFER_LIST *)a1;
  v39 = 0LL;
  if ( a1 )
  {
    do
    {
      v6 = (ndisIsPossibleSmuggling(v9, (__int64)v11->NetBufferListInfo[27]) != 0) + 1;
      v8 += v6;
      if ( v8 > v14 )
        return;
      if ( v13 < 0x1F )
        break;
      v11 = *v12;
    }
    while ( v11 );
  }
  v15 = 8;
  v16 = v10 & 0xFFFFFFFFFFFFF000uLL;
  if ( (v10 & 0xFFFFFFFFFFFFF000uLL) != 0 )
    v15 = 16;
  if ( *(int *)ndisNblTrackerMode >= 4 )
    v7 = ndisCaptureStackTrace(v6);
  v17 = v15 + 8 * v8;
  v35 = v17;
  v18 = v17 >> 3;
  v19 = _InterlockedExchangeAdd((volatile signed __int32 *)&ndisNblTrackerHistoryNextIndex, v17 >> 3)
      % ndisNblTrackerHistorySize;
  if ( *(int *)ndisNblTrackerMode >= 4 )
  {
    v20 = 0;
    if ( v18 )
    {
      do
      {
        v21 = HIDWORD(ndisNblTrackerHistoryBuffer[(v20 + (unsigned int)v19) % ndisNblTrackerHistorySize]);
        if ( v21 >= 0 )
        {
          v22 = v21 & 0x3FFFFFF;
          if ( (_DWORD)v22 )
            ndisReleaseStackTrace(v22);
        }
        ++v20;
      }
      while ( v20 < v18 );
      v17 = v35;
    }
    v10 = a4;
  }
  Number = KeGetPcr()->Prcb.Number;
  LOBYTE(v39) = a3;
  v24 = v39 & 0xFFFFF | (Number << 20);
  LODWORD(v39) = v24;
  if ( v16 )
  {
    DWORD1(v39) = DWORD1(v39) & 0x80000000 | v7 & 0x3FFFFFF | ((a5 & 0xF) << 26) & 0xBFFFFFFF;
    *((_QWORD *)&v39 + 1) = v10 | 0x8000000000000000uLL;
  }
  else
  {
    DWORD1(v39) = DWORD1(v39) & 0xC0000000 | v7 & 0x3FFFFFF | ((a5 & 0xF) << 26) | 0x40000000;
    LODWORD(v39) = v24 ^ (v24 ^ ((_DWORD)v10 << 8)) & 0xFFF00;
  }
  v25 = (unsigned __int64 *)&v39;
  v26 = 0;
  do
  {
    v27 = (v26 + (unsigned int)v19) % ndisNblTrackerHistorySize;
    v28 = *v25;
    ++v26;
    ++v25;
    ndisNblTrackerHistoryBuffer[v27] = v28;
  }
  while ( v26 < v15 >> 3 );
  if ( v15 < v17 )
  {
    v29 = v19;
    do
    {
      v30 = 0LL;
      v31 = a1;
      v32 = (v29 + ((unsigned __int64)v15 >> 3)) % ndisNblTrackerHistorySize;
      if ( a1 )
      {
        if ( (struct _NET_BUFFER_LIST *)a1 == v37 )
        {
          DbgPrint("Break on NBL %p (ndis!ndisBreakNbl)\n", v37);
          if ( a4 )
          {
            if ( a3 >= 0x1F )
            {
              DbgPrint("NBL will be given to: ");
              ndisNblTrackerPrintComponentNameToDebugger((struct _NDIS_NBL_TRACKER *)(a4 & 0xFFFFFFFFFFFFFFF8uLL));
            }
          }
          __debugbreak();
        }
        if ( a3 < 0x1F || (v30 = *(struct _NET_BUFFER_LIST **)a1) == 0LL )
          v31 = a1 | 1;
        v33 = v31 | 4;
        if ( !*(_DWORD *)(a1 + 140) )
          v33 = v31;
        v31 = v33;
        if ( ndisIsPossibleSmuggling(v9, *(_QWORD *)(a1 + 360)) )
        {
          v15 += 8;
          if ( v15 >= v17 )
          {
            ndisNblTrackerHistoryBuffer[(unsigned int)v32] = 0LL;
            return;
          }
          ndisNblTrackerHistoryBuffer[(unsigned int)v32] = v38;
          LODWORD(v32) = (v29 + ((unsigned __int64)v15 >> 3)) % ndisNblTrackerHistorySize;
        }
      }
      v15 += 8;
      a1 = (unsigned __int64)v30;
      ndisNblTrackerHistoryBuffer[(unsigned int)v32] = v31;
    }
    while ( v15 < v17 );
  }
}
