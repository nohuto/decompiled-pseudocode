/*
 * XREFs of ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0032620
 * Callers:
 *     ndisDoPeriodicReceivesIndication @ 0x1C00A9F74 (ndisDoPeriodicReceivesIndication.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x1C0003410 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockRead @ 0x1C0003A60 (NdisAcquireRWLockRead.c)
 *     WPP_RECORDER_SF_ @ 0x1C0006820 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qD @ 0x1C00084A8 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0012730 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C0012B00 (-ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ??$ndisIterativeDPInvokeHandlerOnTracker@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAXP6AX0PEAU_NET_BUFFER_LIST@@K@Z0PEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@@Z @ 0x1C00131C8 (--$ndisIterativeDPInvokeHandlerOnTracker@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAXP6AX0PEA.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C001339C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C0013834 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C003DCD4 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C003DD2A (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C003DDDA (-ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisIndicateToPmodeOpens@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C003DE72 (-ndisIndicateToPmodeOpens@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C0040458 (-ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ??$ndisExpandDataPathStack@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAJPEAU_NET_BUFFER_LIST@@KKKPEAX1P6AX10K@Z@Z @ 0x1C0064688 (--$ndisExpandDataPathStack@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAJPEAU_NET_BUFFER_LIST@@KKKP.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00662BC (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0071D68 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisReturnPeriodicReceives@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@@Z @ 0x1C00AB9B8 (-ndisReturnPeriodicReceives@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@@Z.c)
 *     ?ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C00C9404 (-ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     PktMonClientNblDropNdis @ 0x1C00D3238 (PktMonClientNblDropNdis.c)
 */

void __fastcall ndisMDispatchReceiveNetBufferListsWithLock(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v5; // esi
  struct _NDIS_MINIPORT_BLOCK *v6; // r13
  struct _NDIS_RW_LOCK_EX **v7; // rcx
  struct _NET_BUFFER_LIST *v8; // r14
  KSPIN_LOCK *v9; // rcx
  _QWORD *v10; // rdi
  KSPIN_LOCK *v11; // r15
  struct _KTHREAD *CurrentThread; // rax
  struct _NET_BUFFER_LIST *v13; // r12
  char *v14; // r8
  __int64 v15; // r9
  char *v16; // r15
  __int64 EthDB; // rdx
  struct _NET_BUFFER_LIST *Alignment; // rcx
  struct _NDIS_OPEN_BLOCK *v19; // rdi
  struct _NET_BUFFER_LIST **v20; // r14
  struct _NDIS_OPEN_BLOCK *v21; // r12
  struct _NDIS_OPEN_BLOCK *BindingHandle; // rdi
  unsigned int v23; // r13d
  unsigned int v24; // r14d
  unsigned int v25; // esi
  __int64 v26; // rcx
  struct _NET_BUFFER_LIST *v27; // rdx
  struct _NDIS_OPEN_BLOCK *MiniportHandle; // rdx
  unsigned int v29; // r14d
  unsigned int v30; // r12d
  unsigned int v31; // esi
  unsigned int i; // edi
  __int64 v33; // rax
  int v34; // esi
  PNDIS_RW_LOCK_EX v35; // r8
  unsigned int v36; // eax
  int PcwDatapathEventMask; // eax
  struct _NET_BUFFER_LIST *v38; // rcx
  __int64 v39; // rax
  void (__fastcall *ReturnNetBufferListsHandler)(__int64); // r12
  __int64 ReturnNetBufferListsContext; // r13
  struct _NDIS_FILTER_BLOCK *IfBlock; // rdi
  NDIS_NBL_TRACKER_HANDLE__ *ReturnNetBufferListsTracker; // rdi
  _QWORD *v44; // r13
  char v45; // si
  unsigned __int64 v46; // rdi
  _BYTE *v47; // r8
  _SLIST_HEADER *v48; // r12
  __int64 v49; // r14
  unsigned __int64 Region; // rsi
  _BYTE *v51; // rcx
  unsigned __int64 v52; // r13
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // rdi
  __int64 v55; // rdx
  _QWORD *v56; // rcx
  __int64 *v57; // rsi
  unsigned int v58; // ecx
  bool v59; // zf
  struct _NDIS_FILTER_BLOCK *v60; // r8
  __int64 v61; // r14
  __int64 v62; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v63; // rax
  __int64 v64; // r8
  __int64 v65; // rsi
  struct _VF_NDIS_DISPATCH_TABLE *v66; // rax
  __int64 ChildRefCount; // r8
  struct _NET_BUFFER_LIST *Scratch; // rsi
  int v69; // edx
  int v70; // r8d
  void (__fastcall *v71)(__int64, __int64, __int64); // rax
  void (__fastcall *v72)(__int64, struct _NET_BUFFER_LIST *, __int64); // rax
  KIRQL OldIrql; // dl
  KSPIN_LOCK *v74; // rcx
  signed __int32 v75[6]; // [rsp+8h] [rbp-A1h] BYREF
  struct _NDIS_FILTER_BLOCK *v76; // [rsp+28h] [rbp-81h]
  __int64 v77; // [rsp+38h] [rbp-71h]
  char v78; // [rsp+48h] [rbp-61h]
  struct _LOCK_STATE_EX LockState; // [rsp+4Ch] [rbp-5Dh] BYREF
  char v80; // [rsp+50h] [rbp-59h] BYREF
  KIRQL NewIrql; // [rsp+51h] [rbp-58h]
  unsigned int v82; // [rsp+54h] [rbp-55h]
  unsigned int v83; // [rsp+58h] [rbp-51h]
  struct _NDIS_OPEN_BLOCK *FilterNextOpen; // [rsp+60h] [rbp-49h]
  _BYTE *v85; // [rsp+68h] [rbp-41h]
  __int64 Pool2; // [rsp+70h] [rbp-39h]
  wchar_t *Buffer; // [rsp+78h] [rbp-31h] BYREF
  __int64 v88; // [rsp+80h] [rbp-29h]
  int v89; // [rsp+88h] [rbp-21h]
  PNDIS_RW_LOCK_EX *v90; // [rsp+90h] [rbp-19h]
  _QWORD v91[12]; // [rsp+98h] [rbp-11h] BYREF
  struct _NET_BUFFER_LIST *v93; // [rsp+110h] [rbp+67h]

  v93 = a2;
  v5 = a5;
  v6 = (struct _NDIS_MINIPORT_BLOCK *)a1;
  *(_WORD *)&LockState.OldIrql = 0;
  v7 = (struct _NDIS_RW_LOCK_EX **)(a1->RcvLinkSpeedIndicateUp + 288);
  LockState.Flags = 0;
  v90 = v7;
  v82 = a5 & 1;
  v8 = a2;
  v9 = (KSPIN_LOCK *)*v7;
  if ( (a5 & 1) != 0 )
  {
    v10 = (_QWORD *)(v9[4] + (KeGetPcr()->Prcb.Number << 12));
    LockState.OldIrql = 2;
    ++*v10;
    _InterlockedOr(v75, 0);
    v11 = v9 + 2;
    CurrentThread = (struct _KTHREAD *)v9[2];
    if ( CurrentThread )
    {
      if ( *v10 <= 1uLL )
      {
        CurrentThread = KeGetCurrentThread();
        if ( (struct _KTHREAD *)v9[3] != CurrentThread )
        {
          *v10 = 0LL;
          KeAcquireSpinLockAtDpcLevel(v9 + 2);
          *v10 = 1LL;
          KeReleaseSpinLockFromDpcLevel(v11);
        }
      }
    }
    LockState.LockState = 3;
    v13 = 0LL;
    v83 = 0;
    v78 = 0;
  }
  else
  {
    NdisAcquireRWLockRead((PNDIS_RW_LOCK_EX)v9, &LockState, 0);
    v13 = 0LL;
    v83 = 0;
    v78 = 0;
    if ( KeGetCurrentIrql() != 2 )
      goto LABEL_103;
  }
  if ( ndisPerProcRcvTrackers )
  {
    LODWORD(CurrentThread) = KeGetPcr()->Prcb.Number;
    v14 = (char *)ndisPerProcRcvTrackers;
    v83 = (unsigned int)CurrentThread;
    v15 = *((unsigned int *)ndisPerProcRcvTrackers + 524 * (_QWORD)CurrentThread);
    if ( (unsigned int)v15 < 3 )
    {
      v78 = 1;
      v16 = (char *)ndisPerProcRcvTrackers + 2096 * (_QWORD)CurrentThread + 696 * v15 + 8;
      *((_DWORD *)ndisPerProcRcvTrackers + 524 * (_QWORD)CurrentThread) = v15 + 1;
      Pool2 = (__int64)v16;
      goto LABEL_7;
    }
  }
LABEL_103:
  Pool2 = ExAllocatePool2(66LL, 696LL, 538985550);
  v16 = (char *)Pool2;
  if ( Pool2 )
  {
LABEL_7:
    EthDB = (__int64)v6->EthDB;
    FilterNextOpen = (struct _NDIS_OPEN_BLOCK *)EthDB;
    a5 = v5 & 2;
    Alignment = v8;
    v16[692] = 0;
    if ( (v5 & 2) == 0 )
    {
      do
      {
        v13 = Alignment;
        Alignment->Flags = Alignment->Flags & 0xFFFFFFF0 | 4;
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      }
      while ( Alignment );
    }
    v19 = *(struct _NDIS_OPEN_BLOCK **)(EthDB + 328);
    if ( v19 && v19->ProtocolHandle->MajorNdisVersion >= 6u )
    {
      ndisMIndicateNetBufferListsToOpen(v19, v8, (unsigned __int8 *)a3, a4, v5);
      v20 = (struct _NET_BUFFER_LIST **)(v16 + 64);
      *((_DWORD *)v16 + 20) = 0;
      *((_QWORD *)v16 + 8) = 0LL;
      goto LABEL_31;
    }
    *((_DWORD *)v16 + 4) = v5;
    *((_DWORD *)v16 + 10) = a3;
    *((_QWORD *)v16 + 3) = v8;
    *((_QWORD *)v16 + 1) = EthDB;
    *(_QWORD *)v16 = v6;
    *((_QWORD *)v16 + 4) = v13;
    *((_DWORD *)v16 + 11) = a4;
    ndisSortNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)v16, EthDB, v14);
    v20 = (struct _NET_BUFFER_LIST **)(v16 + 64);
    if ( !*((_QWORD *)v16 + 8) )
    {
      if ( !*((_DWORD *)v16 + 172) )
      {
LABEL_31:
        v34 = a5;
        if ( !v16[692] )
          goto LABEL_34;
        v8 = *v20;
        v93 = v8;
        goto LABEL_33;
      }
      v20 = (struct _NET_BUFFER_LIST **)(v16 + 64);
    }
    v21 = FilterNextOpen;
    if ( !FilterNextOpen->MacHandle || a3 )
      v16[692] = 1;
    else
      ndisIndicateXlatedPacketsToNdis5Protocols((struct _NDIS_NBL_RCV_TRACKER *)v16);
    if ( !v19 )
    {
      BindingHandle = (struct _NDIS_OPEN_BLOCK *)v21->BindingHandle;
      if ( BindingHandle )
      {
        v23 = *((_DWORD *)v16 + 172);
        v24 = *((_DWORD *)v16 + 4) | 2;
        do
        {
          v25 = 0;
          FilterNextOpen = BindingHandle->FilterNextOpen;
          do
          {
            v26 = v25++;
            v27 = *(struct _NET_BUFFER_LIST **)&v16[40 * v26 + 64];
            if ( v27 )
              ndisMIndicateNetBufferListsToOpen(
                BindingHandle,
                v27,
                (unsigned __int8 *)*((unsigned int *)v16 + 10),
                *(_DWORD *)&v16[40 * v26 + 80],
                v24);
          }
          while ( v25 <= v23 );
          BindingHandle = FilterNextOpen;
        }
        while ( FilterNextOpen );
        v6 = (struct _NDIS_MINIPORT_BLOCK *)a1;
      }
      MiniportHandle = (struct _NDIS_OPEN_BLOCK *)v21->MiniportHandle;
      if ( MiniportHandle )
      {
        if ( a5 )
        {
          ndisIndicateAllNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)v16, MiniportHandle);
        }
        else
        {
          v29 = *((_DWORD *)v16 + 4);
          v30 = *((_DWORD *)v16 + 10);
          v31 = *((_DWORD *)v16 + 172);
          if ( *(_DWORD *)(*(_QWORD *)v16 + 2244LL) )
            ndisIndicateToPmodeOpens((struct _NDIS_NBL_RCV_TRACKER *)v16);
          for ( i = 1; i <= v31; ++i )
          {
            v33 = i;
            ndisMIndicateNetBufferListsToOpen(
              *(struct _NDIS_OPEN_BLOCK **)&v16[40 * v33 + 56],
              *(struct _NET_BUFFER_LIST **)&v16[40 * v33 + 64],
              (unsigned __int8 *)v30,
              *(_DWORD *)&v16[40 * v33 + 80],
              v29);
          }
        }
      }
      v20 = (struct _NET_BUFFER_LIST **)(v16 + 64);
    }
    goto LABEL_31;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      4u,
      0xBu,
      (struct _GUID *)&WPP_36f24d049e8d3fc3e46fb027110f7201_Traceguids);
  v34 = v5 & 2;
LABEL_33:
  if ( !v8 )
    goto LABEL_34;
  if ( byte_1C00F5390 && (*((_DWORD *)&v6->PktMonComp + 14) & 2) != 0 )
    PktMonClientNblDropNdis((_DWORD)v6 + 5808, (_DWORD)v8, (_DWORD)v14, 1, -1073676270, -536866809);
  if ( v34 )
    goto LABEL_34;
  v89 = -1;
  PcwDatapathEventMask = v6->PcwDatapathEventMask;
  NewIrql = 2;
  Buffer = 0LL;
  v88 = 0LL;
  if ( PcwDatapathEventMask || v6->PcwDatapathCycleMask )
  {
    LODWORD(v88) = PcwDatapathEventMask;
    HIDWORD(v88) = v6->PcwDatapathCycleMask;
    Buffer = v6->Reserved4.Buffer;
    if ( !Buffer )
      Buffer = v6->Reserved4.Buffer;
  }
  v38 = v8;
  do
  {
    v38->Flags = v38->Flags & 0xFFFFFFF4 | 8;
    v38 = (struct _NET_BUFFER_LIST *)v38->Link.Alignment;
  }
  while ( v38 );
  if ( Microsoft_Windows_Networking_CorrelationEnabled || byte_1C00F5390 )
    ndisMarkNetBufferListCorrelationIdsAsUsed(v8);
  if ( v6->PeriodicReceiveQueue.NblsAllocated )
  {
    v8 = ndisReturnPeriodicReceives(v6, v8);
    v93 = v8;
  }
  if ( !v8 )
    goto LABEL_34;
  v39 = *(unsigned int *)ndisNblTrackerMode;
  if ( !*(_DWORD *)ndisNblTrackerMode )
    goto LABEL_54;
  ReturnNetBufferListsTracker = v6->Next.ReturnNetBufferListsTracker;
  v44 = 0LL;
  v45 = ndisNblTrackerEpoch;
  LOBYTE(a5) = v82;
  FilterNextOpen = 0LL;
  v80 = 0;
  if ( *(int *)ndisNblTrackerMode >= 3 )
    ndisNblTrackerRecordEventInternal(v8, 0LL, 0x87u, ReturnNetBufferListsTracker, v82);
  v46 = (unsigned __int64)ReturnNetBufferListsTracker & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v46 & 1) != 0 )
  {
    v47 = *(_BYTE **)((v46 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    v39 = 2LL * (v45 & 1);
    v46 |= v39;
  }
  else
  {
    v47 = (_BYTE *)v46;
  }
  v48 = (_SLIST_HEADER *)v8;
  v85 = v47;
  v49 = 0LL;
  do
  {
    Region = v48[22].Region;
    while ( v48[22].Region == Region )
    {
      if ( Region )
      {
        if ( (Region & 4) != 0 )
          goto LABEL_120;
      }
      else if ( !v48[7].Region )
      {
        v48[7].Region = ndisSourceHandleFromOwner(0LL);
      }
      v51 = (_BYTE *)v48[7].Region;
      if ( v51 )
      {
        if ( (unsigned __int8)(*v51 - 17) <= 1u || *v51 == 5 )
        {
          if ( v51 != v47 || v48[1].Region )
          {
            v44 = (_QWORD *)((char *)v44 + 1);
            v39 = v46;
          }
          else
          {
            ++v49;
            v39 = 24LL;
            v44 = (_QWORD *)((char *)v44 + 1);
          }
          goto LABEL_72;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v77) = (unsigned __int8)*v51;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            0x1Bu,
            0xCu,
            (struct _GUID *)&WPP_1f4f9304c13d30d166c4c68f5fb6e586_Traceguids,
            (char)v48,
            v77);
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
          v48);
      }
LABEL_120:
      v47 = v85;
      v39 = v46 | 4;
LABEL_72:
      v48[22].Region = v39;
      v48 = (_SLIST_HEADER *)v48->Alignment;
      if ( !v48 )
        break;
    }
    if ( (Region & 1) != 0 )
      ndisNblTrackerUpdateOwnershipCount(Region, (char *)FilterNextOpen - (char *)v44, (char *)&a5, &v80);
    v47 = v85;
    FilterNextOpen = (struct _NDIS_OPEN_BLOCK *)v44;
  }
  while ( v48 );
  v16 = (char *)Pool2;
  v52 = (unsigned __int64)v44 - v49;
  v8 = v93;
  if ( (v46 & 1) != 0 && v52 )
  {
    LOBYTE(v39) = a5;
    if ( !(_BYTE)a5 && !v80 )
    {
      LOBYTE(v39) = KeGetCurrentIrql() == 2;
      LOBYTE(a5) = v39;
    }
    v53 = v46;
    v54 = v46 & 0xFFFFFFFFFFFFFFF8uLL;
    v55 = 2 * ((v53 >> 1) & 1);
    if ( (_BYTE)v39 )
    {
      v39 = KeGetPcr()->Prcb.Number << 12;
      v56 = (_QWORD *)(*(_QWORD *)(v54 + 8 * v55 + 40) + (unsigned int)v39);
      *v56 += v52;
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v54 + 8 * v55 + 48), v52);
    }
  }
  v6 = (struct _NDIS_MINIPORT_BLOCK *)a1;
LABEL_54:
  if ( (v88 & 0x2000000000LL) != 0 )
  {
    if ( !v82 )
      NewIrql = KfRaiseIrql(2u);
    ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&Buffer, 5u);
  }
  ReturnNetBufferListsHandler = (void (__fastcall *)(__int64))v6->Next.ReturnNetBufferListsHandler;
  ReturnNetBufferListsContext = (__int64)v6->Next.ReturnNetBufferListsContext;
  IfBlock = (struct _NDIS_FILTER_BLOCK *)a1[2].IfBlock;
  if ( IfBlock->Header.Type == 17 )
  {
LABEL_56:
    ((void (__fastcall *)(__int64, struct _NET_BUFFER_LIST *, _QWORD))ReturnNetBufferListsHandler)(
      ReturnNetBufferListsContext,
      v8,
      v82);
  }
  else if ( v82 || KeGetCurrentIrql() == 2 )
  {
    LODWORD(v39) = KeGetPcr()->Prcb.Number;
    v57 = v91;
    v58 = v82;
    v8->Scratch = 0LL;
    v8->ChildRefCount = v58;
    v59 = IfBlock->Header.Type == 5;
    a5 = v39;
    v91[2] = 0LL;
    v91[0] = v8;
    v91[1] = v8;
    if ( v59 )
    {
      while ( *v57 )
      {
        v60 = IfBlock;
        v61 = (__int64)IfBlock->IterativeDataPathTracker[v39];
        if ( *(_BYTE *)(v61 + 88) )
        {
          ndisIterativeDPInvokeHandlerOnTracker<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>(
            IfBlock,
            ReturnNetBufferListsHandler,
            ReturnNetBufferListsContext,
            v57);
          v8 = (struct _NET_BUFFER_LIST *)*v57;
          goto LABEL_93;
        }
        *(_BYTE *)(v61 + 88) = 1;
        v62 = *v57;
        *v57 = 0LL;
        if ( v62 )
        {
          do
          {
            v63 = ndisVerifierNdisDispatch;
            v64 = *(unsigned int *)(v62 + 132);
            v65 = *(_QWORD *)(v62 + 112);
            *(_DWORD *)(v62 + 132) = 0;
            if ( v63 && IfBlock->Header.Type == 5 && IfBlock->VerifierContext )
            {
              v71 = (void (__fastcall *)(__int64, __int64, __int64))*((_QWORD *)v63 + 17);
              v76 = (struct _NDIS_FILTER_BLOCK *)ReturnNetBufferListsHandler;
              v71(ReturnNetBufferListsContext, v62, v64);
            }
            else
            {
              ((void (__fastcall *)(__int64, __int64, __int64))ReturnNetBufferListsHandler)(
                ReturnNetBufferListsContext,
                v62,
                v64);
            }
            v62 = v65;
          }
          while ( v65 );
          v60 = IfBlock;
        }
        v39 = a5;
        v57 = (__int64 *)(v61 + 72);
        *(_BYTE *)(v61 + 88) = 0;
        IfBlock = (struct _NDIS_FILTER_BLOCK *)IfBlock->NextReturnNetBufferListsObject;
        ReturnNetBufferListsHandler = (void (__fastcall *)(__int64))v60->NextReturnNetBufferListsHandler;
        ReturnNetBufferListsContext = (__int64)v60->NextReturnNetBufferListsContext;
        if ( IfBlock->Header.Type != 5 )
        {
          v8 = *(struct _NET_BUFFER_LIST **)(v61 + 72);
          goto LABEL_93;
        }
      }
    }
    else
    {
LABEL_93:
      if ( v8 )
      {
        *v57 = 0LL;
        do
        {
          v66 = ndisVerifierNdisDispatch;
          ChildRefCount = (unsigned int)v8->ChildRefCount;
          Scratch = (struct _NET_BUFFER_LIST *)v8->Scratch;
          v8->ChildRefCount = 0;
          if ( v66 && IfBlock->Header.Type == 5 && IfBlock->VerifierContext )
          {
            v72 = (void (__fastcall *)(__int64, struct _NET_BUFFER_LIST *, __int64))*((_QWORD *)v66 + 17);
            v76 = (struct _NDIS_FILTER_BLOCK *)ReturnNetBufferListsHandler;
            v72(ReturnNetBufferListsContext, v8, ChildRefCount);
          }
          else
          {
            ((void (__fastcall *)(__int64, struct _NET_BUFFER_LIST *, __int64))ReturnNetBufferListsHandler)(
              ReturnNetBufferListsContext,
              v8,
              ChildRefCount);
          }
          v8 = Scratch;
        }
        while ( Scratch );
      }
    }
  }
  else
  {
    if ( a1->Header.Type != 5 )
      goto LABEL_56;
    if ( (int)ndisExpandDataPathStack<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>(
                (int)v8,
                v69,
                v70,
                v82,
                IfBlock,
                ReturnNetBufferListsContext,
                (__int64)ReturnNetBufferListsHandler) < 0 )
      ndisQueueStackExpansionFallbackNbls(a1, v8, 0);
  }
  if ( (v88 & 0x2000000000LL) != 0 )
  {
    ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&Buffer, 5u, 0x12uLL);
    if ( NewIrql != 2 )
      KeLowerIrql(NewIrql);
  }
LABEL_34:
  if ( v78 )
  {
    --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v83);
  }
  else if ( v16 )
  {
    ExFreePoolWithTag(v16, 0);
  }
  v35 = *v90;
  if ( v82 )
  {
    if ( LockState.LockState == 3 )
    {
      v36 = KeGetPcr()->Prcb.Number << 12;
      --*(_QWORD *)(*((_QWORD *)v35 + 4) + v36);
      if ( LockState.OldIrql != 2 )
        KeLowerIrql(LockState.OldIrql);
    }
    else if ( LockState.LockState == 4 )
    {
      OldIrql = LockState.OldIrql;
      v74 = (KSPIN_LOCK *)((char *)v35 + 16);
      *((_QWORD *)v35 + 3) = 0LL;
      if ( OldIrql == 2 )
        KeReleaseSpinLockFromDpcLevel(v74);
      else
        KeReleaseSpinLock(v74, OldIrql);
    }
  }
  else
  {
    NdisReleaseRWLock(*v90, &LockState);
  }
}
