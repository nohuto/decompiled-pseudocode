/*
 * XREFs of ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0023370
 * Callers:
 *     ndisDoPeriodicReceivesIndication @ 0x1C00A354C (ndisDoPeriodicReceivesIndication.c)
 * Callees:
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0002C10 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C0002FE0 (-ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ??$ndisIterativeDPInvokeHandlerOnTracker@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAXP6AX0PEAU_NET_BUFFER_LIST@@K@Z0PEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@@Z @ 0x1C00034C4 (--$ndisIterativeDPInvokeHandlerOnTracker@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAXP6AX0PEA.c)
 *     NdisReleaseRWLock @ 0x1C0006310 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockRead @ 0x1C0006630 (NdisAcquireRWLockRead.c)
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C0013A8C (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0013B1C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C003AC7C (-ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ??$ndisExpandDataPathStack@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAJPEAU_NET_BUFFER_LIST@@KKKPEAX1P6AX10K@Z@Z @ 0x1C005F6E8 (--$ndisExpandDataPathStack@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAJPEAU_NET_BUFFER_LIST@@KKKP.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0061328 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C006C9A0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C008C874 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C008C8CC (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00982E8 (-ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisIndicateToPmodeOpens@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C0098380 (-ndisIndicateToPmodeOpens@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisReturnPeriodicReceives@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@@Z @ 0x1C00A52F0 (-ndisReturnPeriodicReceives@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@@Z.c)
 *     ?ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C00C47A4 (-ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     PktMonClientNblDropNdis @ 0x1C00CCC38 (PktMonClientNblDropNdis.c)
 */

void __fastcall ndisMDispatchReceiveNetBufferListsWithLock(
        _QWORD *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  char v5; // r13
  _QWORD *v6; // rsi
  __int64 v7; // rcx
  struct _NET_BUFFER_LIST *v9; // r14
  __int64 v10; // rcx
  _QWORD *v11; // rdi
  KSPIN_LOCK *v12; // rsi
  unsigned int Number; // edi
  __int64 v14; // rdx
  __int64 v15; // r9
  char *v16; // r15
  unsigned int v17; // r8d
  struct _NET_BUFFER_LIST *Alignment; // rcx
  _QWORD *v19; // r13
  bool v20; // zf
  unsigned int v21; // eax
  struct _NET_BUFFER_LIST *v22; // rdx
  struct _NDIS_OPEN_BLOCK *v23; // rdi
  int v24; // r8d
  struct _NDIS_OPEN_BLOCK *v25; // rdi
  unsigned int v26; // esi
  unsigned int v27; // r12d
  unsigned int v28; // r14d
  __int64 v29; // rcx
  struct _NET_BUFFER_LIST *v30; // rdx
  struct _NDIS_OPEN_BLOCK *v31; // rdx
  unsigned int v32; // r12d
  unsigned int v33; // r13d
  unsigned int v34; // r14d
  unsigned int i; // edi
  __int64 v36; // rax
  KSPIN_LOCK *v37; // r8
  unsigned int v38; // eax
  int v39; // eax
  struct _NET_BUFFER_LIST *v40; // rcx
  __int64 v41; // rax
  unsigned __int64 v42; // rdi
  struct _NDIS_OPEN_BLOCK *v43; // r13
  char v44; // si
  unsigned __int64 v45; // rdi
  unsigned __int64 v46; // rcx
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
  struct _NDIS_FILTER_BLOCK *v57; // rdi
  void (__fastcall *NextReturnNetBufferListsHandler)(__int64); // r12
  __int64 NextReturnNetBufferListsContext; // r13
  __int64 *v60; // rsi
  unsigned int v61; // ecx
  struct _NDIS_FILTER_BLOCK *v62; // r8
  __int64 v63; // r14
  __int64 v64; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v65; // rax
  __int64 v66; // r8
  __int64 v67; // rsi
  struct _VF_NDIS_DISPATCH_TABLE *v68; // rax
  __int64 ChildRefCount; // r8
  struct _NET_BUFFER_LIST *Scratch; // rsi
  int v71; // edx
  int v72; // r8d
  void (__fastcall *v73)(__int64, __int64, __int64); // rax
  void (__fastcall *v74)(__int64, struct _NET_BUFFER_LIST *, __int64); // rax
  KIRQL OldIrql; // dl
  KSPIN_LOCK *v76; // rcx
  signed __int32 v77[6]; // [rsp+8h] [rbp-91h] BYREF
  struct _NDIS_FILTER_BLOCK *v78; // [rsp+28h] [rbp-71h]
  __int64 v79; // [rsp+38h] [rbp-61h]
  char v80; // [rsp+48h] [rbp-51h]
  struct _LOCK_STATE_EX LockState; // [rsp+4Ch] [rbp-4Dh] BYREF
  char v82; // [rsp+50h] [rbp-49h] BYREF
  KIRQL NewIrql; // [rsp+51h] [rbp-48h]
  unsigned int v84; // [rsp+54h] [rbp-45h]
  unsigned int v85; // [rsp+58h] [rbp-41h]
  struct _NDIS_OPEN_BLOCK *FilterNextOpen; // [rsp+60h] [rbp-39h]
  _BYTE *v87; // [rsp+68h] [rbp-31h]
  __int64 v88; // [rsp+70h] [rbp-29h] BYREF
  __int64 v89; // [rsp+78h] [rbp-21h]
  int v90; // [rsp+80h] [rbp-19h]
  __int64 Pool2; // [rsp+88h] [rbp-11h]
  __int64 v92; // [rsp+90h] [rbp-9h]
  _QWORD v93[10]; // [rsp+98h] [rbp-1h] BYREF
  struct _NET_BUFFER_LIST *v95; // [rsp+100h] [rbp+67h]

  v95 = a2;
  v5 = a5;
  v6 = a1;
  *(_WORD *)&LockState.OldIrql = 0;
  v7 = a1[50];
  LockState.Flags = 0;
  v92 = v7;
  v9 = a2;
  v10 = *(_QWORD *)(v7 + 288);
  v84 = a5 & 1;
  if ( (a5 & 1) != 0 )
  {
    v11 = (_QWORD *)(*(_QWORD *)(v10 + 32) + (KeGetPcr()->Prcb.Number << 12));
    LockState.OldIrql = 2;
    ++*v11;
    _InterlockedOr(v77, 0);
    v12 = (KSPIN_LOCK *)(v10 + 16);
    if ( *(_QWORD *)(v10 + 16) && *v11 <= 1uLL && *(struct _KTHREAD **)(v10 + 24) != KeGetCurrentThread() )
    {
      *v11 = 0LL;
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v10 + 16));
      *v11 = 1LL;
      KeReleaseSpinLockFromDpcLevel(v12);
    }
    v6 = a1;
    LockState.LockState = 3;
  }
  else
  {
    NdisAcquireRWLockRead((PNDIS_RW_LOCK_EX)v10, &LockState, 0);
    v85 = 0;
    if ( KeGetCurrentIrql() != 2 )
      goto LABEL_96;
  }
  v85 = 0;
  if ( ndisPerProcRcvTrackers )
  {
    Number = KeGetPcr()->Prcb.Number;
    v14 = 2096LL * Number;
    v85 = Number;
    v15 = *(unsigned int *)((char *)ndisPerProcRcvTrackers + v14);
    if ( (unsigned int)v15 < 3 )
    {
      v80 = 1;
      v16 = (char *)ndisPerProcRcvTrackers + 696 * v15 + v14 + 8;
      *((_DWORD *)ndisPerProcRcvTrackers + 524 * Number) = v15 + 1;
      Pool2 = (__int64)v16;
LABEL_7:
      v17 = a5;
      Alignment = v9;
      v19 = (_QWORD *)v6[50];
      v20 = (a5 & 2) == 0;
      v21 = a5 & 2;
      v16[692] = 0;
      LODWORD(v87) = v21;
      if ( v20 )
      {
        do
        {
          v22 = Alignment;
          Alignment->Flags = Alignment->Flags & 0xFFFFFFF0 | 4;
          Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
        }
        while ( Alignment );
      }
      else
      {
        v22 = 0LL;
      }
      v23 = (struct _NDIS_OPEN_BLOCK *)v19[41];
      if ( v23 && v23->ProtocolHandle->MajorNdisVersion >= 6u )
      {
        ndisMIndicateNetBufferListsToOpen(v23, v9, (char *)a3, a4, v17);
        *((_QWORD *)v16 + 8) = 0LL;
        *((_DWORD *)v16 + 20) = 0;
      }
      else
      {
        *((_DWORD *)v16 + 11) = a4;
        *((_QWORD *)v16 + 3) = v9;
        *((_QWORD *)v16 + 1) = v19;
        *((_DWORD *)v16 + 4) = v17;
        *(_QWORD *)v16 = v6;
        *((_QWORD *)v16 + 4) = v22;
        *((_DWORD *)v16 + 10) = a3;
        ndisSortNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)v16);
        if ( *((_QWORD *)v16 + 8) || *((_DWORD *)v16 + 172) )
        {
          if ( !*v19 || a3 )
            v16[692] = 1;
          else
            ndisIndicateXlatedPacketsToNdis5Protocols((struct _NDIS_NBL_RCV_TRACKER *)v16);
          if ( !v23 )
          {
            v25 = (struct _NDIS_OPEN_BLOCK *)v19[1];
            if ( v25 )
            {
              v26 = *((_DWORD *)v16 + 172);
              v27 = *((_DWORD *)v16 + 4) | 2;
              do
              {
                v28 = 0;
                FilterNextOpen = v25->FilterNextOpen;
                do
                {
                  v29 = v28++;
                  v30 = *(struct _NET_BUFFER_LIST **)&v16[40 * v29 + 64];
                  if ( v30 )
                    ndisMIndicateNetBufferListsToOpen(
                      v25,
                      v30,
                      (char *)*((unsigned int *)v16 + 10),
                      *(_DWORD *)&v16[40 * v29 + 80],
                      v27);
                }
                while ( v28 <= v26 );
                v25 = FilterNextOpen;
              }
              while ( FilterNextOpen );
              v6 = a1;
            }
            v31 = (struct _NDIS_OPEN_BLOCK *)v19[2];
            if ( v31 )
            {
              if ( (_DWORD)v87 )
              {
                ndisIndicateAllNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)v16, v31);
              }
              else
              {
                v32 = *((_DWORD *)v16 + 4);
                v33 = *((_DWORD *)v16 + 10);
                v34 = *((_DWORD *)v16 + 172);
                if ( *(_DWORD *)(*(_QWORD *)v16 + 2244LL) )
                  ndisIndicateToPmodeOpens((struct _NDIS_NBL_RCV_TRACKER *)v16);
                for ( i = 1; i <= v34; ++i )
                {
                  v36 = i;
                  ndisMIndicateNetBufferListsToOpen(
                    *(struct _NDIS_OPEN_BLOCK **)&v16[40 * v36 + 56],
                    *(struct _NET_BUFFER_LIST **)&v16[40 * v36 + 64],
                    (char *)v33,
                    *(_DWORD *)&v16[40 * v36 + 80],
                    v32);
                }
              }
            }
          }
        }
      }
      if ( !v16[692] )
        goto LABEL_32;
      v9 = (struct _NET_BUFFER_LIST *)*((_QWORD *)v16 + 8);
      v5 = a5;
      v95 = v9;
      goto LABEL_31;
    }
  }
LABEL_96:
  Pool2 = ExAllocatePool2(66LL, 696LL, 538985550);
  v16 = (char *)Pool2;
  v80 = 0;
  if ( Pool2 )
    goto LABEL_7;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      4u,
      0xBu,
      (struct _GUID *)&WPP_b73066c8574e3d1b9eeedc46f4c32798_Traceguids);
  v80 = 0;
LABEL_31:
  if ( !v9 )
    goto LABEL_32;
  if ( byte_1C00EC210 && (*((_DWORD *)v6 + 1465) & 2) != 0 )
    PktMonClientNblDropNdis((_DWORD)v6 + 5808, (_DWORD)v9, v24, 1, -1073676270, -536866809);
  if ( (v5 & 2) != 0 )
    goto LABEL_32;
  v89 = 0LL;
  v90 = -1;
  v39 = *((_DWORD *)v6 + 12);
  NewIrql = 2;
  v88 = 0LL;
  if ( v39 || *((_DWORD *)v6 + 20) )
  {
    LODWORD(v89) = v39;
    HIDWORD(v89) = *((_DWORD *)v6 + 20);
    v88 = v6[5];
    if ( !v88 )
      v88 = v6[5];
  }
  v40 = v9;
  do
  {
    v40->Flags = v40->Flags & 0xFFFFFFF4 | 8;
    v40 = (struct _NET_BUFFER_LIST *)v40->Link.Alignment;
  }
  while ( v40 );
  if ( Microsoft_Windows_Networking_CorrelationEnabled || byte_1C00EC210 )
    ndisMarkNetBufferListCorrelationIdsAsUsed(v9);
  if ( *((_DWORD *)v6 + 806) )
  {
    v9 = ndisReturnPeriodicReceives((struct _NDIS_MINIPORT_BLOCK *)v6, v9);
    v95 = v9;
  }
  if ( !v9 )
    goto LABEL_32;
  v41 = *(unsigned int *)ndisNblTrackerMode;
  if ( !*(_DWORD *)ndisNblTrackerMode )
    goto LABEL_72;
  v42 = v6[317];
  v43 = 0LL;
  v44 = ndisNblTrackerEpoch;
  LOBYTE(a5) = v84;
  FilterNextOpen = 0LL;
  v82 = 0;
  if ( *(int *)ndisNblTrackerMode >= 3 )
    ndisNblTrackerRecordEventInternal(v9, 0LL, 0x87u, (void *)v42, v84);
  v45 = v42 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v45 & 1) != 0 )
  {
    v46 = v45 & 0xFFFFFFFFFFFFFFF8uLL;
    v41 = 2LL * (v44 & 1);
    v45 |= v41;
    v47 = *(_BYTE **)(v46 + 24);
  }
  else
  {
    v47 = (_BYTE *)v45;
  }
  v48 = (_SLIST_HEADER *)v9;
  v87 = v47;
  v49 = 0LL;
  do
  {
    Region = v48[22].Region;
    while ( v48[22].Region == Region )
    {
      if ( Region )
      {
        if ( (Region & 4) != 0 )
          goto LABEL_116;
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
            v43 = (struct _NDIS_OPEN_BLOCK *)((char *)v43 + 1);
            v41 = v45;
          }
          else
          {
            ++v49;
            v41 = 24LL;
            v43 = (struct _NDIS_OPEN_BLOCK *)((char *)v43 + 1);
          }
          goto LABEL_63;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v79) = (unsigned __int8)*v51;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            0x1Bu,
            0xCu,
            (struct _GUID *)&WPP_44b390fadec23ba9bcae0cc9320a34b9_Traceguids,
            (char)v48,
            v79);
        }
      }
      else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          3u,
          0x1Bu,
          0xBu,
          (struct _GUID *)&WPP_44b390fadec23ba9bcae0cc9320a34b9_Traceguids,
          v48);
      }
LABEL_116:
      v47 = v87;
      v41 = v45 | 4;
LABEL_63:
      v48[22].Region = v41;
      v48 = (_SLIST_HEADER *)v48->Alignment;
      if ( !v48 )
        break;
    }
    if ( (Region & 1) != 0 )
      ndisNblTrackerUpdateOwnershipCount(Region, (char *)FilterNextOpen - (char *)v43, (char *)&a5, &v82);
    v47 = v87;
    FilterNextOpen = v43;
  }
  while ( v48 );
  v16 = (char *)Pool2;
  v52 = (unsigned __int64)v43 - v49;
  v9 = v95;
  if ( (v45 & 1) != 0 && v52 )
  {
    LOBYTE(v41) = a5;
    if ( !(_BYTE)a5 && !v82 )
    {
      LOBYTE(v41) = KeGetCurrentIrql() == 2;
      LOBYTE(a5) = v41;
    }
    v6 = a1;
    v53 = v45 >> 1;
    v54 = v45 & 0xFFFFFFFFFFFFFFF8uLL;
    v55 = 2 * (v53 & 1);
    if ( (_BYTE)v41 )
    {
      v41 = KeGetPcr()->Prcb.Number << 12;
      v56 = (_QWORD *)(*(_QWORD *)(v54 + 8 * v55 + 40) + (unsigned int)v41);
      *v56 += v52;
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v54 + 8 * v55 + 48), v52);
    }
  }
  else
  {
    v6 = a1;
  }
LABEL_72:
  if ( (v89 & 0x2000000000LL) != 0 )
  {
    if ( !v84 )
      NewIrql = KfRaiseIrql(2u);
    ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&v88, 5u);
  }
  v57 = (struct _NDIS_FILTER_BLOCK *)v6[318];
  NextReturnNetBufferListsHandler = (void (__fastcall *)(__int64))v6[330];
  NextReturnNetBufferListsContext = v6[316];
  if ( v57->Header.Type == 17 )
    goto LABEL_140;
  if ( !v84 && KeGetCurrentIrql() != 2 )
  {
    if ( *(_BYTE *)v6 == 5 )
    {
      if ( (int)ndisExpandDataPathStack<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>(
                  (int)v9,
                  v71,
                  v72,
                  v84,
                  v57,
                  NextReturnNetBufferListsContext,
                  (__int64)NextReturnNetBufferListsHandler) < 0 )
        ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v6, v9, 0);
      goto LABEL_90;
    }
LABEL_140:
    ((void (__fastcall *)(__int64, struct _NET_BUFFER_LIST *, _QWORD))NextReturnNetBufferListsHandler)(
      NextReturnNetBufferListsContext,
      v9,
      v84);
    goto LABEL_90;
  }
  LODWORD(v41) = KeGetPcr()->Prcb.Number;
  v60 = v93;
  v61 = v84;
  v9->Scratch = 0LL;
  v9->ChildRefCount = v61;
  v20 = v57->Header.Type == 5;
  a5 = v41;
  v93[2] = 0LL;
  v93[0] = v9;
  v93[1] = v9;
  if ( v20 )
  {
    while ( *v60 )
    {
      v62 = v57;
      v63 = (__int64)v57->IterativeDataPathTracker[v41];
      if ( *(_BYTE *)(v63 + 88) )
      {
        ndisIterativeDPInvokeHandlerOnTracker<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>(
          v57,
          NextReturnNetBufferListsHandler,
          NextReturnNetBufferListsContext,
          v60);
        v9 = (struct _NET_BUFFER_LIST *)*v60;
        goto LABEL_85;
      }
      *(_BYTE *)(v63 + 88) = 1;
      v64 = *v60;
      *v60 = 0LL;
      if ( v64 )
      {
        do
        {
          v65 = ndisVerifierNdisDispatch;
          v66 = *(unsigned int *)(v64 + 132);
          v67 = *(_QWORD *)(v64 + 112);
          *(_DWORD *)(v64 + 132) = 0;
          if ( v65 && v57->Header.Type == 5 && v57->VerifierContext )
          {
            v73 = (void (__fastcall *)(__int64, __int64, __int64))*((_QWORD *)v65 + 17);
            v78 = (struct _NDIS_FILTER_BLOCK *)NextReturnNetBufferListsHandler;
            v73(NextReturnNetBufferListsContext, v64, v66);
          }
          else
          {
            ((void (__fastcall *)(__int64, __int64, __int64))NextReturnNetBufferListsHandler)(
              NextReturnNetBufferListsContext,
              v64,
              v66);
          }
          v64 = v67;
        }
        while ( v67 );
        v62 = v57;
      }
      v41 = a5;
      v60 = (__int64 *)(v63 + 72);
      *(_BYTE *)(v63 + 88) = 0;
      v57 = (struct _NDIS_FILTER_BLOCK *)v57->NextReturnNetBufferListsObject;
      NextReturnNetBufferListsHandler = (void (__fastcall *)(__int64))v62->NextReturnNetBufferListsHandler;
      NextReturnNetBufferListsContext = (__int64)v62->NextReturnNetBufferListsContext;
      if ( v57->Header.Type != 5 )
      {
        v9 = *(struct _NET_BUFFER_LIST **)(v63 + 72);
        goto LABEL_85;
      }
    }
  }
  else
  {
LABEL_85:
    if ( v9 )
    {
      *v60 = 0LL;
      do
      {
        v68 = ndisVerifierNdisDispatch;
        ChildRefCount = (unsigned int)v9->ChildRefCount;
        Scratch = (struct _NET_BUFFER_LIST *)v9->Scratch;
        v9->ChildRefCount = 0;
        if ( v68 && v57->Header.Type == 5 && v57->VerifierContext )
        {
          v74 = (void (__fastcall *)(__int64, struct _NET_BUFFER_LIST *, __int64))*((_QWORD *)v68 + 17);
          v78 = (struct _NDIS_FILTER_BLOCK *)NextReturnNetBufferListsHandler;
          v74(NextReturnNetBufferListsContext, v9, ChildRefCount);
        }
        else
        {
          ((void (__fastcall *)(__int64, struct _NET_BUFFER_LIST *, __int64))NextReturnNetBufferListsHandler)(
            NextReturnNetBufferListsContext,
            v9,
            ChildRefCount);
        }
        v9 = Scratch;
      }
      while ( Scratch );
    }
  }
LABEL_90:
  if ( (v89 & 0x2000000000LL) != 0 )
  {
    ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&v88, 5u, 0x12uLL);
    if ( NewIrql != 2 )
      KeLowerIrql(NewIrql);
  }
LABEL_32:
  if ( v80 )
  {
    --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v85);
  }
  else if ( v16 )
  {
    ExFreePoolWithTag(v16, 0);
  }
  v37 = *(KSPIN_LOCK **)(v92 + 288);
  if ( v84 )
  {
    if ( LockState.LockState == 3 )
    {
      v38 = KeGetPcr()->Prcb.Number << 12;
      --*(_QWORD *)(v37[4] + v38);
      if ( LockState.OldIrql != 2 )
        KeLowerIrql(LockState.OldIrql);
    }
    else if ( LockState.LockState == 4 )
    {
      OldIrql = LockState.OldIrql;
      v76 = v37 + 2;
      v37[3] = 0LL;
      if ( OldIrql == 2 )
        KeReleaseSpinLockFromDpcLevel(v76);
      else
        KeReleaseSpinLock(v76, OldIrql);
    }
  }
  else
  {
    NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(v92 + 288), &LockState);
  }
}
