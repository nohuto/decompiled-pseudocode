/*
 * XREFs of ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C00037F0
 * Callers:
 *     ?ndisReturnNblWithPowerQueue@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0001BA0 (-ndisReturnNblWithPowerQueue@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C00024F4 (-ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0002C10 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0003230 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     NdisMSendNetBufferListsComplete @ 0x1C0003540 (NdisMSendNetBufferListsComplete.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x1C00066F0 (NdisFIndicateReceiveNetBufferLists.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C0013860 (NdisMIndicateReceiveNetBufferLists.c)
 *     ?ndisQueueSendNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0039F74 (-ndisQueueSendNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisFDoLoopbackNetBufferList@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C005FE70 (-ndisFDoLoopbackNetBufferList@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@.c)
 *     ?ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00607B0 (-ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0061328 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x1C0061AB0 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 *     NdisNblTrackerTransferOwnership @ 0x1C006CFA0 (NdisNblTrackerTransferOwnership.c)
 *     ?ndisReturnQueuedLowPowerNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0098D5C (-ndisReturnQueuedLowPowerNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisQueueReceiveNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C00A7438 (-ndisQueueReceiveNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisReplayRecvNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C00A74A4 (-ndisReplayRecvNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisReplaySendNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00A750C (-ndisReplaySendNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00AAEA0 (-ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST.c)
 *     ?ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@Z @ 0x1C00AB5B0 (-ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@.c)
 *     NdisFreeFragmentNetBufferList @ 0x1C00AE5C0 (NdisFreeFragmentNetBufferList.c)
 *     ?ndisMIndicatePacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00C4980 (-ndisMIndicatePacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00C4EF0 (-ndisMSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisMSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00C50B0 (-ndisMSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0013B1C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C006C9A0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 */

void __fastcall ndisNblTrackerTransferOwnershipInternal(
        struct _NET_BUFFER_LIST *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  char v6; // r12
  char v7; // di
  char v8; // bp
  __int64 v9; // rsi
  __int64 v10; // r15
  __int64 v11; // r13
  struct _NET_BUFFER_LIST *Alignment; // r14
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  char *v16; // r8
  unsigned int *v17; // r9
  unsigned __int64 v18; // rdi
  char *SourceHandle; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdi
  _QWORD *v24; // rcx
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rbx
  __int64 v28; // rdx
  _QWORD *v29; // rcx
  char v30; // [rsp+80h] [rbp+8h]
  __int64 v31; // [rsp+88h] [rbp+10h]
  char *v32; // [rsp+90h] [rbp+18h]
  char v33; // [rsp+A0h] [rbp+28h]

  v31 = a2;
  v6 = 0;
  v7 = ndisNblTrackerEpoch;
  v8 = a5 & 1;
  v33 = 0;
  v9 = 0LL;
  v30 = v8;
  v10 = 0LL;
  v11 = 0LL;
  Alignment = a1;
  if ( *(int *)ndisNblTrackerMode >= 3 )
    ndisNblTrackerRecordEventInternal(a1, (struct NDIS_NBL_TRACKER_HANDLE__ *)a2, a4, (void *)a3, a5);
  v14 = a3 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v14 & 1) != 0 )
  {
    v15 = v14 & 0xFFFFFFFFFFFFFFF8uLL;
    v14 |= 2LL * (v7 & 1);
    v16 = *(char **)(v15 + 24);
  }
  else
  {
    v16 = (char *)v14;
  }
  v32 = v16;
  if ( Alignment )
  {
    v17 = &WPP_RECORDER_INITIALIZED;
    do
    {
      v18 = (unsigned __int64)Alignment->NetBufferListInfo[27];
      while ( Alignment->NetBufferListInfo[27] == (void *)v18 )
      {
        if ( v18 )
        {
          if ( (v18 & 4) != 0 )
            goto LABEL_40;
        }
        else if ( !Alignment->SourceHandle )
        {
          Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner(v31 & 0xFFFFFFFFFFFFFFFDuLL, a2, v16, v17);
        }
        SourceHandle = (char *)Alignment->SourceHandle;
        if ( SourceHandle )
        {
          a2 = (unsigned __int8)*SourceHandle;
          if ( (unsigned __int8)(a2 - 17) <= 1u || (_BYTE)a2 == 5 )
          {
            if ( SourceHandle != v16 || Alignment->ParentNetBufferList )
            {
              ++v9;
              v20 = v14;
            }
            else
            {
              ++v11;
              v20 = 24LL;
              ++v9;
            }
            goto LABEL_15;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != v17 )
          {
            LOBYTE(a2) = 3;
            WPP_RECORDER_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              a2,
              27,
              12,
              (struct _GUID *)&WPP_44b390fadec23ba9bcae0cc9320a34b9_Traceguids,
              (char)Alignment,
              *SourceHandle);
            goto LABEL_37;
          }
        }
        else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != v17 )
        {
          LOBYTE(a2) = 3;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            a2,
            27,
            11,
            (struct _GUID *)&WPP_44b390fadec23ba9bcae0cc9320a34b9_Traceguids,
            (char)Alignment);
LABEL_37:
          v17 = &WPP_RECORDER_INITIALIZED;
        }
LABEL_40:
        v16 = v32;
        v20 = v14 | 4;
LABEL_15:
        Alignment->NetBufferListInfo[27] = (void *)v20;
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
        if ( !Alignment )
          break;
      }
      v8 = v30;
      v21 = v10 - v9;
      v6 = v33;
      if ( (v18 & 1) != 0 && v21 )
      {
        if ( !v30 && !v33 )
        {
          v6 = 1;
          v33 = 1;
          v8 = KeGetCurrentIrql() == 2;
          v30 = v8;
        }
        v22 = v18;
        v23 = v18 & 0xFFFFFFFFFFFFFFF8uLL;
        a2 = 2 * ((v22 >> 1) & 1);
        if ( v8 )
        {
          v24 = (_QWORD *)(*(_QWORD *)(v23 + 8 * a2 + 40) + (KeGetPcr()->Prcb.Number << 12));
          *v24 += v21;
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 8 * a2 + 48), v21);
        }
      }
      v16 = v32;
      v10 = v9;
      v17 = &WPP_RECORDER_INITIALIZED;
    }
    while ( Alignment );
  }
  v25 = v9 - v11;
  if ( (v14 & 1) != 0 && v25 )
  {
    if ( !v8 && !v6 )
      v8 = KeGetCurrentIrql() == 2;
    v26 = v14;
    v27 = v14 & 0xFFFFFFFFFFFFFFF8uLL;
    v28 = 2 * ((v26 >> 1) & 1);
    if ( v8 )
    {
      v29 = (_QWORD *)(*(_QWORD *)(v27 + 8 * v28 + 40) + (KeGetPcr()->Prcb.Number << 12));
      *v29 += v25;
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + 8 * v28 + 48), v25);
    }
  }
}
