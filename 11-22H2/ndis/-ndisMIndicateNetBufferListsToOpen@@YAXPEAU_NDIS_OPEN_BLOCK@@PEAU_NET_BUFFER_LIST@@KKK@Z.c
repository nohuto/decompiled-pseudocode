/*
 * XREFs of ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00125A0
 * Callers:
 *     ?ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0011EB0 (-ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0032490 (-ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C003DC5A (-ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisIndicateToPmodeOpens@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C003DCF2 (-ndisIndicateToPmodeOpens@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C009E310 (-ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisDoPeriodicReceivesIndication @ 0x1C00A9F54 (ndisDoPeriodicReceivesIndication.c)
 *     ndisMIndicateSplitNblChain @ 0x1C00AAC30 (ndisMIndicateSplitNblChain.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0008318 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0012D74 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C00130F4 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C001320C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C00136A4 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C003DB54 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C003DBAA (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     PktMonClientNblLogNdis @ 0x1C0040E3A (PktMonClientNblLogNdis.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0071D48 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x1C0092358 (-ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z.c)
 *     ?ndisTraceRcv@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_KI@Z @ 0x1C009ED0C (-ndisTraceRcv@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_KI@Z.c)
 */

void __fastcall ndisMIndicateNetBufferListsToOpen(
        struct _NDIS_OPEN_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // r13
  __int64 v6; // rsi
  struct _NDIS_OPEN_BLOCK *v7; // r14
  unsigned int Number; // r12d
  unsigned int v9; // r10d
  int PcwDatapathEventMask; // ecx
  KIRQL v12; // di
  bool v13; // cl
  __int64 Flags; // rdx
  unsigned int v15; // ebx
  char v16; // di
  unsigned int v17; // r8d
  NDIS_NBL_TRACKER_HANDLE__ *NblTracker; // rbx
  __int64 v19; // r9
  unsigned __int64 v20; // rbx
  unsigned int *v21; // r10
  struct _NET_BUFFER_LIST *Alignment; // r13
  void *v23; // rdi
  unsigned __int8 *SourceHandle; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // rsi
  bool v27; // cl
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rbx
  __int64 v30; // rdx
  _QWORD *v31; // rcx
  wchar_t *Buffer; // rax
  unsigned __int64 v33; // r11
  __int64 Clock; // rax
  _PKTMON_COMPONENT_CONTEXT *CompContext; // rax
  KIRQL v36; // al
  unsigned __int16 v37; // ax
  __int64 v38; // rax
  __int64 v39; // [rsp+30h] [rbp-51h]
  char v40; // [rsp+40h] [rbp-41h] BYREF
  char v41; // [rsp+41h] [rbp-40h]
  unsigned int v42; // [rsp+44h] [rbp-3Dh]
  wchar_t *v43; // [rsp+48h] [rbp-39h] BYREF
  __int64 v44; // [rsp+50h] [rbp-31h]
  int v45; // [rsp+58h] [rbp-29h]
  __int64 v46; // [rsp+60h] [rbp-21h]
  unsigned __int8 *v47; // [rsp+68h] [rbp-19h]
  __int64 v48; // [rsp+70h] [rbp-11h]
  __int64 v49; // [rsp+78h] [rbp-9h]
  _NDIS_MINIPORT_BLOCK *v50; // [rsp+80h] [rbp-1h]
  bool v52; // [rsp+E8h] [rbp+67h] BYREF
  unsigned int v53; // [rsp+F0h] [rbp+6Fh]
  unsigned int v54; // [rsp+F8h] [rbp+77h]

  v54 = a4;
  v53 = (unsigned int)a3;
  MiniportHandle = a1->MiniportHandle;
  v6 = 0LL;
  v7 = a1;
  v50 = MiniportHandle;
  Number = -1;
  v49 = 0LL;
  v9 = a4;
  v43 = 0LL;
  PcwDatapathEventMask = MiniportHandle->PcwDatapathEventMask;
  v44 = 0LL;
  v45 = -1;
  if ( PcwDatapathEventMask || MiniportHandle->PcwDatapathCycleMask )
  {
    HIDWORD(v44) = MiniportHandle->PcwDatapathCycleMask;
    Buffer = MiniportHandle->Reserved4.Buffer;
    LODWORD(v44) = PcwDatapathEventMask;
    v43 = Buffer;
    if ( !Buffer )
    {
      Number = v45;
      v43 = MiniportHandle->Reserved4.Buffer;
    }
  }
  v12 = 2;
  v13 = a2->SourceHandle == v7;
  Flags = a2->Flags;
  LOBYTE(a3) = (Flags & 0x200) != 0;
  if ( (a2->NblFlags & 0x8000) != 0 && a2->NetBufferListInfo[5] == v7 )
  {
    v13 = 1;
LABEL_71:
    if ( (Flags & 0x200) == 0 )
      goto LABEL_20;
    goto LABEL_5;
  }
  if ( v13 )
    goto LABEL_71;
LABEL_5:
  if ( MiniportHandle->CheckPacketFilters && !v7->PacketFilters
    || (v7->PacketFilters & 0x10000) != 0 && !v13 && (Flags & 0x80u) != 0LL )
  {
LABEL_20:
    if ( (a5 & 2) == 0 )
    {
      if ( (a5 & 1) != 0 )
        LODWORD(v6) = 1;
      ndisReturnNetBufferListsInternal(&MiniportHandle->Header, a2, v6, 0LL);
    }
    return;
  }
  if ( (_BYTE)dword_1C00F76B0 )
  {
    v41 = 1;
    Clock = WmiGetClock(0LL, 0LL);
    v9 = v54;
    v49 = Clock;
  }
  else
  {
    v41 = 0;
  }
  v15 = a5;
  v42 = a5;
  if ( !*(_DWORD *)ndisNblTrackerMode )
    goto LABEL_11;
  v48 = 0LL;
  v16 = ndisNblTrackerEpoch;
  v17 = 133;
  v46 = 0LL;
  if ( (a5 & 2) == 0 )
    v17 = 132;
  v40 = 0;
  NblTracker = v7->NblTracker;
  v19 = 0LL;
  v52 = (a5 & 1) != 0;
  if ( *(int *)ndisNblTrackerMode >= 3 )
  {
    ndisNblTrackerRecordEventInternal(a2, (struct NDIS_NBL_TRACKER_HANDLE__ *)0x20, v17, NblTracker, (a5 & 1) != 0);
    v19 = 0LL;
  }
  v20 = (unsigned __int64)NblTracker & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v20 & 1) != 0 )
  {
    a3 = *(unsigned __int8 **)((v20 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    v20 |= 2LL * (v16 & 1);
  }
  else
  {
    a3 = (unsigned __int8 *)v20;
  }
  v47 = a3;
  v21 = &WPP_RECORDER_INITIALIZED;
  Alignment = a2;
  do
  {
    v23 = Alignment->NetBufferListInfo[27];
    while ( Alignment->NetBufferListInfo[27] == v23 )
    {
      if ( v23 )
      {
        if ( ((unsigned __int8)v23 & 4) != 0 )
          goto LABEL_80;
      }
      else if ( !Alignment->SourceHandle )
      {
        Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner(32LL, Flags, a3, v19);
      }
      SourceHandle = (unsigned __int8 *)Alignment->SourceHandle;
      if ( SourceHandle )
      {
        Flags = *SourceHandle;
        if ( (unsigned __int8)(Flags - 17) <= 1u || (_BYTE)Flags == 5 )
        {
          if ( SourceHandle != a3 || Alignment->ParentNetBufferList )
          {
            ++v6;
            v25 = v20;
          }
          else
          {
            ++v19;
            v25 = 24LL;
            v46 = v19;
            ++v6;
          }
          goto LABEL_39;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != v21 )
        {
          LODWORD(v39) = *SourceHandle;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            0x1Bu,
            0xCu,
            (struct _GUID *)&WPP_1f4f9304c13d30d166c4c68f5fb6e586_Traceguids,
            (char)Alignment,
            v39);
          goto LABEL_79;
        }
      }
      else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != v21 )
      {
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          3u,
          0x1Bu,
          0xBu,
          (struct _GUID *)&WPP_1f4f9304c13d30d166c4c68f5fb6e586_Traceguids,
          Alignment);
LABEL_79:
        a3 = v47;
        v21 = &WPP_RECORDER_INITIALIZED;
        v19 = v46;
      }
LABEL_80:
      v25 = v20 | 4;
LABEL_39:
      Alignment->NetBufferListInfo[27] = (void *)v25;
      Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      if ( !Alignment )
        break;
    }
    if ( ((unsigned __int8)v23 & 1) != 0 )
    {
      ndisNblTrackerUpdateOwnershipCount(v23, v48 - v6, &v52, &v40);
      a3 = v47;
      v21 = &WPP_RECORDER_INITIALIZED;
      v19 = v46;
    }
    v48 = v6;
  }
  while ( Alignment );
  v7 = a1;
  v26 = v6 - v19;
  MiniportHandle = v50;
  if ( (v20 & 1) != 0 && v26 )
  {
    v27 = v52;
    if ( !v52 && !v40 )
    {
      v27 = KeGetCurrentIrql() == 2;
      v52 = v27;
    }
    v9 = v54;
    v28 = v20 >> 1;
    v29 = v20 & 0xFFFFFFFFFFFFFFF8uLL;
    v12 = 2;
    v30 = 2 * (v28 & 1);
    if ( v27 )
    {
      Number = v45;
      v31 = (_QWORD *)(*(_QWORD *)(v29 + 8 * v30 + 40) + (KeGetPcr()->Prcb.Number << 12));
      *v31 += v26;
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 8 * v30 + 48), v26);
      Number = v45;
    }
  }
  else
  {
    v9 = v54;
    v12 = 2;
  }
  v15 = v42;
LABEL_11:
  if ( byte_1C00F5390 )
  {
    CompContext = v7->PktMonEdge.CompContext;
    if ( CompContext )
    {
      if ( (*((_DWORD *)CompContext + 14) & 1) != 0 )
      {
        PktMonClientNblLogNdis(&v7->PktMonEdge, a2, a3, 1LL);
        v9 = v54;
      }
    }
  }
  if ( (v44 & 0x3014) != 0 || (v44 & 0x800000000LL) != 0 )
  {
    if ( (v15 & 1) == 0 )
    {
      v36 = KfRaiseIrql(2u);
      v9 = v54;
      v12 = v36;
    }
    if ( (v44 & 4) != 0 )
    {
      if ( Number == -1 )
      {
        Number = KeGetPcr()->Prcb.Number;
        v45 = Number;
      }
      ++*(_QWORD *)((char *)v43 + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData + 16);
    }
    if ( (v44 & 0x10) != 0 )
    {
      if ( Number == -1 )
      {
        Number = KeGetPcr()->Prcb.Number;
        v45 = Number;
      }
      v33 = v9;
      *(_QWORD *)((char *)v43 + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData + 32) += v9;
    }
    else
    {
      v33 = v9;
    }
    if ( (v15 & 2) != 0 )
    {
      if ( (v44 & 0x1000) != 0 )
        ndisPcwAddEvent((struct NDIS_PCW_CONTEXT *)&v43, 0x1DuLL, 1uLL);
      if ( (v44 & 0x2000) != 0 )
        ndisPcwAddEvent((struct NDIS_PCW_CONTEXT *)&v43, 0x1EuLL, v33);
    }
    if ( (v44 & 0x800000000LL) != 0 )
    {
      ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&v43, 3u);
    }
    else if ( v12 != 2 )
    {
      KeLowerIrql(v12);
      v9 = v54;
    }
  }
  v7->ReceiveNetBufferLists(v7->ReceiveNetBufferListsContext, a2, v53, v9, v15);
  if ( (v44 & 0x800000000LL) != 0 )
  {
    ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&v43, 3u, 0x10uLL);
    if ( v12 != 2 )
      KeLowerIrql(v12);
  }
  if ( (v15 & 2) != 0 && *(_DWORD *)ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(
      a2,
      v7->NblTracker,
      (struct NDIS_NBL_TRACKER_HANDLE__ *)0x20,
      NdisNblTrackerEvent_ProtocolReturnedResources,
      v15 & 1);
  if ( (_BYTE)dword_1C00F76B0 )
    WmiGetClock(0LL, 0LL);
  if ( v41 )
  {
    v37 = v7->FrameTypeArray[0];
    if ( v37 == 0xDD86 || v37 == 1544 || v37 == 8 )
    {
      v38 = WmiGetClock(0LL, 0LL);
      ndisTraceRcv(MiniportHandle, v38 - v49, v54);
    }
  }
}
