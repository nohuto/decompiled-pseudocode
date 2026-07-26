/*
 * XREFs of ndisDoPeriodicReceivesIndication @ 0x1C00A9F54
 * Callers:
 *     ?ndisPeriodicReceivesWorker@@YAXPEAX@Z @ 0x1C003E930 (-ndisPeriodicReceivesWorker@@YAXPEAX@Z.c)
 *     ndisEmptyPeriodicReceivesQueue @ 0x1C00AA914 (ndisEmptyPeriodicReceivesQueue.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006690 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0008318 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00125A0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C0012970 (-ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ??$ndisIterativeDPInvokeHandlerOnTracker@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAXP6AX0PEAU_NET_BUFFER_LIST@@K@Z0PEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@@Z @ 0x1C0013038 (--$ndisIterativeDPInvokeHandlerOnTracker@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAXP6AX0PEA.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C001320C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C00136A4 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0032490 (-ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C003DB54 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C003DBAA (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisIndicateToPmodeOpens@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C003DCF2 (-ndisIndicateToPmodeOpens@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C00402D8 (-ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0071D48 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisReturnPeriodicReceives@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@@Z @ 0x1C00AB998 (-ndisReturnPeriodicReceives@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@@Z.c)
 *     ?ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C00C93E4 (-ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     PktMonClientNblDropNdis @ 0x1C00D3218 (PktMonClientNblDropNdis.c)
 */

__int64 __fastcall ndisDoPeriodicReceivesIndication(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_BUFFER_LIST *Alignment)
{
  unsigned int v3; // r13d
  struct _NDIS_MINIPORT_BLOCK *v4; // r14
  struct _NET_BUFFER_LIST *v5; // rdi
  unsigned int v6; // r15d
  struct _NET_BUFFER_LIST *v7; // rax
  unsigned int v8; // esi
  KSPIN_LOCK *p_Lock; // rcx
  unsigned int Number; // esi
  char *v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r9
  char *v14; // r12
  _X_FILTER *EthDB; // r13
  struct _NET_BUFFER_LIST *v16; // rcx
  __int64 v17; // rdx
  struct _NDIS_OPEN_BLOCK *SingleActiveOpen; // rsi
  struct _NET_BUFFER_LIST **v19; // rdi
  char v20; // r15
  struct _NDIS_OPEN_BLOCK *NoFTypeOpenList; // rdi
  unsigned int v22; // r14d
  unsigned int v23; // r13d
  struct _NDIS_OPEN_BLOCK *FilterNextOpen; // r15
  unsigned int v25; // esi
  __int64 v26; // rcx
  struct _NET_BUFFER_LIST *v27; // rdx
  unsigned int v28; // r15d
  unsigned int v29; // r13d
  unsigned int v30; // esi
  unsigned int i; // edi
  __int64 v32; // rax
  int PcwDatapathEventMask; // eax
  struct _NET_BUFFER_LIST *v34; // r13
  struct _NET_BUFFER_LIST *v35; // rcx
  __int64 v36; // rax
  unsigned __int64 ReturnNetBufferListsTracker; // rdi
  unsigned __int64 v38; // r8
  char v39; // si
  unsigned __int64 v40; // rdi
  _BYTE *v41; // r9
  _SLIST_HEADER *v42; // r15
  unsigned __int64 Region; // rsi
  __int64 v44; // r14
  _BYTE *v45; // rcx
  unsigned __int64 v46; // r8
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rdi
  __int64 v49; // rdx
  _QWORD *v50; // rcx
  struct _NDIS_FILTER_BLOCK *ReturnNetBufferListsObject; // rdi
  __int64 ReturnNetBufferListsContext; // r10
  void (__fastcall *ReturnNetBufferListsHandler)(__int64); // r15
  __int64 *v54; // rsi
  bool v55; // zf
  struct _NDIS_FILTER_BLOCK *v56; // r8
  __int64 v57; // r13
  __int64 v58; // rdx
  __int64 v59; // r14
  struct _VF_NDIS_DISPATCH_TABLE *v60; // rax
  __int64 v61; // r8
  __int64 v62; // rsi
  struct _VF_NDIS_DISPATCH_TABLE *v63; // rax
  __int64 ChildRefCount; // r8
  struct _NET_BUFFER_LIST *Scratch; // rsi
  __int64 v67; // [rsp+30h] [rbp-69h]
  char v68[4]; // [rsp+40h] [rbp-59h] BYREF
  unsigned int v69; // [rsp+44h] [rbp-55h]
  unsigned int v70; // [rsp+48h] [rbp-51h]
  unsigned int v71; // [rsp+4Ch] [rbp-4Dh]
  __int64 Pool2; // [rsp+50h] [rbp-49h]
  unsigned __int64 v73; // [rsp+58h] [rbp-41h]
  struct _NET_BUFFER_LIST *v74; // [rsp+60h] [rbp-39h]
  _BYTE *v75; // [rsp+68h] [rbp-31h]
  __int64 v76; // [rsp+70h] [rbp-29h]
  wchar_t *Buffer; // [rsp+78h] [rbp-21h] BYREF
  __int64 v78; // [rsp+80h] [rbp-19h]
  int v79; // [rsp+88h] [rbp-11h]
  __int64 v80; // [rsp+90h] [rbp-9h]
  _QWORD v81[11]; // [rsp+98h] [rbp-1h] BYREF
  struct _NET_BUFFER_LIST *v83; // [rsp+108h] [rbp+6Fh]
  char v84; // [rsp+110h] [rbp+77h]
  _X_FILTER *v85; // [rsp+118h] [rbp+7Fh] BYREF

  v3 = 0;
  v71 = 0;
  v4 = a1;
  do
  {
    v5 = Alignment;
    if ( !Alignment )
      return v3;
    v6 = (unsigned int)Alignment->ProtocolReserved[0];
    v7 = Alignment;
    Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    v8 = 1;
    v83 = Alignment;
    v70 = 1;
    if ( Alignment )
    {
      do
      {
        if ( v6 != LODWORD(Alignment->ProtocolReserved[0]) )
          break;
        v7 = Alignment;
        ++v8;
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      }
      while ( Alignment );
      v70 = v8;
      v83 = Alignment;
    }
    v4->PeriodicReceiveQueue.NumNblsDequeued -= v8;
    v7->Link.Alignment = 0LL;
    if ( v4->MajorNdisVersion < 6u && (v4->Flags & 0x40000) == 0 )
    {
      while ( 1 )
      {
        KeAcquireSpinLockAtDpcLevel(&v4->Lock);
        p_Lock = &v4->Lock;
        v4->MiniportThread = KeGetCurrentThread();
        if ( !v4->LockAcquired )
          break;
        v4->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(p_Lock);
        KeStallExecutionProcessor(1u);
      }
      v4->LockAcquired = 1;
      v4->LockThread = KeGetCurrentThread();
      v4->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(p_Lock);
      v8 = v70;
    }
    if ( v4->InitMode )
    {
      ndisMDispatchReceiveNetBufferListsWithLock((struct _NDIS_FILTER_BLOCK *)v4, v5, v6, v8, 1u);
      goto LABEL_138;
    }
    Number = 0;
    v69 = 0;
    v84 = 0;
    if ( ndisPerProcRcvTrackers )
    {
      Number = KeGetPcr()->Prcb.Number;
      v11 = (char *)ndisPerProcRcvTrackers;
      v12 = 2096LL * Number;
      v69 = Number;
      v13 = *(unsigned int *)((char *)ndisPerProcRcvTrackers + v12);
      if ( (unsigned int)v13 < 3 )
      {
        v84 = 1;
        v14 = (char *)ndisPerProcRcvTrackers + 696 * v13 + v12 + 8;
        *(_DWORD *)((char *)ndisPerProcRcvTrackers + v12) = v13 + 1;
LABEL_18:
        EthDB = v4->EthDB;
        v16 = v5;
        v85 = EthDB;
        v14[692] = 0;
        do
        {
          v17 = (__int64)v16;
          v16->Flags = v16->Flags & 0xFFFFFFF0 | 4;
          v16 = (struct _NET_BUFFER_LIST *)v16->Link.Alignment;
        }
        while ( v16 );
        SingleActiveOpen = EthDB->SingleActiveOpen;
        if ( SingleActiveOpen && SingleActiveOpen->ProtocolHandle->MajorNdisVersion >= 6u )
        {
          ndisMIndicateNetBufferListsToOpen(SingleActiveOpen, v5, (unsigned __int8 *)v6, v70, 1u);
          v19 = (struct _NET_BUFFER_LIST **)(v14 + 64);
          *((_DWORD *)v14 + 20) = 0;
          *((_QWORD *)v14 + 8) = 0LL;
        }
        else
        {
          *((_DWORD *)v14 + 11) = v70;
          *((_QWORD *)v14 + 3) = v5;
          *((_QWORD *)v14 + 1) = EthDB;
          *((_DWORD *)v14 + 4) = 1;
          *(_QWORD *)v14 = v4;
          *((_QWORD *)v14 + 4) = v17;
          *((_DWORD *)v14 + 10) = v6;
          ndisSortNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)v14, v17, v11);
          v19 = (struct _NET_BUFFER_LIST **)(v14 + 64);
          if ( !*((_QWORD *)v14 + 8) )
          {
            if ( !*((_DWORD *)v14 + 172) )
              goto LABEL_49;
            v19 = (struct _NET_BUFFER_LIST **)(v14 + 64);
          }
          if ( !EthDB->OpenList || v6 )
            v14[692] = 1;
          else
            ndisIndicateXlatedPacketsToNdis5Protocols((struct _NDIS_NBL_RCV_TRACKER *)v14);
          if ( !SingleActiveOpen )
          {
            NoFTypeOpenList = EthDB->NoFTypeOpenList;
            if ( NoFTypeOpenList )
            {
              v22 = *((_DWORD *)v14 + 172);
              v23 = *((_DWORD *)v14 + 4) | 2;
              do
              {
                FilterNextOpen = NoFTypeOpenList->FilterNextOpen;
                v25 = 0;
                do
                {
                  v26 = v25++;
                  v27 = *(struct _NET_BUFFER_LIST **)&v14[40 * v26 + 64];
                  if ( v27 )
                    ndisMIndicateNetBufferListsToOpen(
                      NoFTypeOpenList,
                      v27,
                      (unsigned __int8 *)*((unsigned int *)v14 + 10),
                      *(_DWORD *)&v14[40 * v26 + 80],
                      v23);
                }
                while ( v25 <= v22 );
                NoFTypeOpenList = FilterNextOpen;
              }
              while ( FilterNextOpen );
              v4 = a1;
              EthDB = v85;
            }
            if ( EthDB->FTypeOpenList )
            {
              v28 = *((_DWORD *)v14 + 4);
              v29 = *((_DWORD *)v14 + 10);
              v30 = *((_DWORD *)v14 + 172);
              if ( *(_DWORD *)(*(_QWORD *)v14 + 2244LL) )
                ndisIndicateToPmodeOpens((struct _NDIS_NBL_RCV_TRACKER *)v14);
              for ( i = 1; i <= v30; ++i )
              {
                v32 = i;
                ndisMIndicateNetBufferListsToOpen(
                  *(struct _NDIS_OPEN_BLOCK **)&v14[40 * v32 + 56],
                  *(struct _NET_BUFFER_LIST **)&v14[40 * v32 + 64],
                  (unsigned __int8 *)v29,
                  *(_DWORD *)&v14[40 * v32 + 80],
                  v28);
              }
            }
            v19 = (struct _NET_BUFFER_LIST **)(v14 + 64);
          }
        }
LABEL_49:
        Number = v69;
        if ( !v14[692] )
          goto LABEL_133;
        v5 = *v19;
        v20 = v84;
        Pool2 = (__int64)v14;
        if ( !v5 )
          goto LABEL_133;
        goto LABEL_51;
      }
    }
    Pool2 = ExAllocatePool2(66LL, 696LL, 538985550);
    v14 = (char *)Pool2;
    if ( Pool2 )
      goto LABEL_18;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        4u,
        0xBu,
        (struct _GUID *)&WPP_36f24d049e8d3fc3e46fb027110f7201_Traceguids);
    v20 = 0;
LABEL_51:
    if ( byte_1C00F5390 && (*((_DWORD *)&v4->PktMonComp + 14) & 2) != 0 )
      PktMonClientNblDropNdis((_DWORD)v4 + 5808, (_DWORD)v5, (_DWORD)v11, 1, -1073676270, -536866809);
    v79 = -1;
    PcwDatapathEventMask = v4->PcwDatapathEventMask;
    Buffer = 0LL;
    v78 = 0LL;
    if ( PcwDatapathEventMask || v4->PcwDatapathCycleMask )
    {
      LODWORD(v78) = PcwDatapathEventMask;
      HIDWORD(v78) = v4->PcwDatapathCycleMask;
      Buffer = v4->Reserved4.Buffer;
      if ( !Buffer )
        Buffer = v4->Reserved4.Buffer;
    }
    v34 = v5;
    v74 = v5;
    v35 = v5;
    do
    {
      v35->Flags = v35->Flags & 0xFFFFFFF4 | 8;
      v35 = (struct _NET_BUFFER_LIST *)v35->Link.Alignment;
    }
    while ( v35 );
    if ( Microsoft_Windows_Networking_CorrelationEnabled
      || (Pool2 = (__int64)v14, v69 = Number, v84 = v20, byte_1C00F5390) )
    {
      ndisMarkNetBufferListCorrelationIdsAsUsed(v5);
    }
    if ( v4->PeriodicReceiveQueue.NblsAllocated )
    {
      v34 = ndisReturnPeriodicReceives(v4, v5);
      v74 = v34;
    }
    if ( !v34 )
      goto LABEL_133;
    v36 = *(unsigned int *)ndisNblTrackerMode;
    if ( !*(_DWORD *)ndisNblTrackerMode )
      goto LABEL_103;
    ReturnNetBufferListsTracker = (unsigned __int64)v4->Next.ReturnNetBufferListsTracker;
    v38 = 0LL;
    v39 = ndisNblTrackerEpoch;
    v73 = 0LL;
    v80 = 0LL;
    v76 = 0LL;
    LOBYTE(v85) = 1;
    v68[0] = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal((unsigned __int64)v34, 0LL, 0x87u, ReturnNetBufferListsTracker, 1);
      v38 = 0LL;
    }
    v40 = ReturnNetBufferListsTracker & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v40 & 1) != 0 )
    {
      Pool2 = (__int64)v14;
      v84 = v20;
      v41 = *(_BYTE **)((v40 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v40 |= 2LL * (v39 & 1);
      v36 = v69;
    }
    else
    {
      v41 = (_BYTE *)v40;
    }
    v42 = (_SLIST_HEADER *)v34;
    v75 = v41;
    do
    {
      Region = v42[22].Region;
      v44 = v76;
      while ( v42[22].Region == Region )
      {
        if ( Region )
        {
          if ( (Region & 4) != 0 )
            goto LABEL_82;
        }
        else if ( !v42[7].Region )
        {
          v42[7].Region = ndisSourceHandleFromOwner(0LL);
        }
        v45 = (_BYTE *)v42[7].Region;
        if ( v45 )
        {
          if ( *v45 == 5 || (unsigned __int8)(*v45 - 17) <= 1u )
          {
            if ( v45 != v41 || v42[1].Region )
            {
              ++v38;
              v36 = v40;
              v73 = v38;
            }
            else
            {
              ++v44;
              v36 = 24LL;
              v73 = ++v38;
            }
            goto LABEL_83;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v67) = (unsigned __int8)*v45;
            WPP_RECORDER_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              3u,
              0x1Bu,
              0xCu,
              (struct _GUID *)&WPP_1f4f9304c13d30d166c4c68f5fb6e586_Traceguids,
              (char)v42,
              v67);
          }
        }
        else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            0x1Bu,
            0xBu,
            (struct _GUID *)&WPP_1f4f9304c13d30d166c4c68f5fb6e586_Traceguids,
            v42);
        }
LABEL_82:
        v38 = v73;
        v41 = v75;
        v36 = v40 | 4;
LABEL_83:
        v42[22].Region = v36;
        v42 = (_SLIST_HEADER *)v42->Alignment;
        if ( !v42 )
          break;
      }
      v76 = v44;
      if ( (Region & 1) != 0 )
      {
        ndisNblTrackerUpdateOwnershipCount(Region, v80 - v38, (char *)&v85, v68);
        v38 = v73;
      }
      v41 = v75;
      v80 = v38;
    }
    while ( v42 );
    v46 = v38 - v76;
    v4 = a1;
    v34 = v74;
    v14 = (char *)Pool2;
    v73 = v46;
    if ( (v40 & 1) != 0 && v46 )
    {
      LOBYTE(v36) = (_BYTE)v85;
      if ( !(_BYTE)v85 && !v68[0] )
      {
        LOBYTE(v36) = KeGetCurrentIrql();
        v46 = v73;
        LOBYTE(v36) = (_BYTE)v36 == 2;
        LOBYTE(v85) = v36;
      }
      v47 = v40;
      v48 = v40 & 0xFFFFFFFFFFFFFFF8uLL;
      v49 = 2 * ((v47 >> 1) & 1);
      if ( (_BYTE)v36 )
      {
        v36 = KeGetPcr()->Prcb.Number << 12;
        v50 = (_QWORD *)(*(_QWORD *)(v48 + 8 * v49 + 40) + (unsigned int)v36);
        *v50 += v46;
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v48 + 8 * v49 + 48), v46);
      }
    }
LABEL_103:
    if ( (v78 & 0x2000000000LL) != 0 )
      ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&Buffer, 5u);
    ReturnNetBufferListsObject = (struct _NDIS_FILTER_BLOCK *)v4->Next.ReturnNetBufferListsObject;
    ReturnNetBufferListsContext = (__int64)v4->Next.ReturnNetBufferListsContext;
    ReturnNetBufferListsHandler = (void (__fastcall *)(__int64))v4->Next.ReturnNetBufferListsHandler;
    Pool2 = ReturnNetBufferListsContext;
    if ( ReturnNetBufferListsObject->Header.Type == 17 )
    {
      ((void (__fastcall *)(__int64, struct _NET_BUFFER_LIST *, __int64))ReturnNetBufferListsHandler)(
        ReturnNetBufferListsContext,
        v34,
        1LL);
    }
    else
    {
      LODWORD(v36) = KeGetPcr()->Prcb.Number;
      v54 = v81;
      v34->Scratch = 0LL;
      v34->ChildRefCount = 1;
      v55 = ReturnNetBufferListsObject->Header.Type == 5;
      LODWORD(v85) = v36;
      v81[2] = 0LL;
      v81[0] = v34;
      v81[1] = v34;
      if ( v55 )
      {
        while ( *v54 )
        {
          v56 = ReturnNetBufferListsObject;
          v57 = (__int64)ReturnNetBufferListsObject->IterativeDataPathTracker[v36];
          if ( *(_BYTE *)(v57 + 88) )
          {
            ndisIterativeDPInvokeHandlerOnTracker<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>(
              ReturnNetBufferListsObject,
              ReturnNetBufferListsHandler,
              ReturnNetBufferListsContext,
              v54);
            ReturnNetBufferListsContext = Pool2;
            v34 = (struct _NET_BUFFER_LIST *)*v54;
            goto LABEL_122;
          }
          *(_BYTE *)(v57 + 88) = 1;
          v58 = *v54;
          *v54 = 0LL;
          if ( v58 )
          {
            v59 = Pool2;
            do
            {
              v60 = ndisVerifierNdisDispatch;
              v61 = *(unsigned int *)(v58 + 132);
              v62 = *(_QWORD *)(v58 + 112);
              *(_DWORD *)(v58 + 132) = 0;
              if ( v60 && ReturnNetBufferListsObject->Header.Type == 5 && ReturnNetBufferListsObject->VerifierContext )
                (*((void (__fastcall **)(__int64, __int64, __int64))v60 + 17))(v59, v58, v61);
              else
                ((void (__fastcall *)(__int64, __int64, __int64))ReturnNetBufferListsHandler)(v59, v58, v61);
              v58 = v62;
            }
            while ( v62 );
            v4 = a1;
            v56 = ReturnNetBufferListsObject;
          }
          v36 = (unsigned int)v85;
          v54 = (__int64 *)(v57 + 72);
          *(_BYTE *)(v57 + 88) = 0;
          ReturnNetBufferListsObject = (struct _NDIS_FILTER_BLOCK *)ReturnNetBufferListsObject->NextReturnNetBufferListsObject;
          ReturnNetBufferListsContext = (__int64)v56->NextReturnNetBufferListsContext;
          ReturnNetBufferListsHandler = (void (__fastcall *)(__int64))v56->NextReturnNetBufferListsHandler;
          Pool2 = ReturnNetBufferListsContext;
          if ( ReturnNetBufferListsObject->Header.Type != 5 )
          {
            v34 = *(struct _NET_BUFFER_LIST **)(v57 + 72);
            goto LABEL_122;
          }
        }
      }
      else
      {
LABEL_122:
        if ( v34 )
        {
          *v54 = 0LL;
          do
          {
            v63 = ndisVerifierNdisDispatch;
            ChildRefCount = (unsigned int)v34->ChildRefCount;
            Scratch = (struct _NET_BUFFER_LIST *)v34->Scratch;
            v34->ChildRefCount = 0;
            if ( v63 && ReturnNetBufferListsObject->Header.Type == 5 && ReturnNetBufferListsObject->VerifierContext )
              (*((void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, __int64))v63 + 17))(
                ReturnNetBufferListsContext,
                v34,
                ChildRefCount);
            else
              ((void (__fastcall *)(__int64, struct _NET_BUFFER_LIST *, __int64))ReturnNetBufferListsHandler)(
                ReturnNetBufferListsContext,
                v34,
                ChildRefCount);
            ReturnNetBufferListsContext = Pool2;
            v34 = Scratch;
          }
          while ( Scratch );
        }
      }
    }
    if ( (v78 & 0x2000000000LL) != 0 )
      ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&Buffer, 5u, 18LL);
    Number = v69;
LABEL_133:
    if ( v84 )
    {
      --*((_DWORD *)ndisPerProcRcvTrackers + 524 * Number);
    }
    else if ( v14 )
    {
      ExFreePoolWithTag(v14, 0);
    }
    Alignment = v83;
    v8 = v70;
    v3 = v71;
LABEL_138:
    if ( v4->MajorNdisVersion < 6u && (v4->Flags & 0x40000) == 0 )
    {
      KeAcquireSpinLockAtDpcLevel(&v4->Lock);
      v4->LockAcquired = 0;
      v4->LockThread = 0LL;
      v4->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&v4->Lock);
    }
    v4->PeriodicReceiveQueue.TrackingIndicated += v8;
    v3 += v8;
    v71 = v3;
  }
  while ( Alignment );
  return v3;
}
