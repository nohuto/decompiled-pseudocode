/*
 * XREFs of ndisDoPeriodicReceivesIndication @ 0x1C00A354C
 * Callers:
 *     ?ndisPeriodicReceivesWorker@@YAXPEAX@Z @ 0x1C0039940 (-ndisPeriodicReceivesWorker@@YAXPEAX@Z.c)
 *     ndisEmptyPeriodicReceivesQueue @ 0x1C00A3EB0 (ndisEmptyPeriodicReceivesQueue.c)
 * Callees:
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0002C10 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C0002FE0 (-ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ??$ndisIterativeDPInvokeHandlerOnTracker@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAXP6AX0PEAU_NET_BUFFER_LIST@@K@Z0PEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@@Z @ 0x1C00034C4 (--$ndisIterativeDPInvokeHandlerOnTracker@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAXP6AX0PEA.c)
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C0013A8C (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0013B1C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0023370 (-ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C003AC7C (-ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C006C9A0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C008C874 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C008C8CC (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisIndicateToPmodeOpens@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C0098380 (-ndisIndicateToPmodeOpens@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisReturnPeriodicReceives@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@@Z @ 0x1C00A52F0 (-ndisReturnPeriodicReceives@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@@Z.c)
 *     ?ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C00C47A4 (-ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     PktMonClientNblDropNdis @ 0x1C00CCC38 (PktMonClientNblDropNdis.c)
 */

__int64 __fastcall ndisDoPeriodicReceivesIndication(char *a1, struct _NET_BUFFER_LIST *Alignment)
{
  __int64 result; // rax
  char *v4; // r14
  struct _NET_BUFFER_LIST *v5; // r15
  unsigned int v6; // r12d
  struct _NET_BUFFER_LIST *v7; // rax
  unsigned int v8; // r13d
  KSPIN_LOCK *v9; // rcx
  unsigned int Number; // edi
  struct _NDIS_RCV_TRACKER_ARRAY *v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // rcx
  char *v15; // rsi
  _QWORD *v16; // r13
  struct _NET_BUFFER_LIST *v17; // rcx
  struct _NET_BUFFER_LIST *v18; // rdx
  struct _NDIS_OPEN_BLOCK *v19; // rdi
  int v20; // r8d
  struct _NDIS_OPEN_BLOCK *v21; // r15
  unsigned int v22; // r13d
  unsigned int v23; // r14d
  struct _NDIS_OPEN_BLOCK *FilterNextOpen; // r12
  unsigned int v25; // edi
  __int64 v26; // rcx
  struct _NET_BUFFER_LIST *v27; // rdx
  unsigned int v28; // r12d
  unsigned int v29; // r13d
  unsigned int v30; // r15d
  unsigned int i; // edi
  __int64 v32; // rax
  int v33; // eax
  struct _NET_BUFFER_LIST *v34; // rcx
  __int64 v35; // rax
  unsigned __int64 v36; // rdi
  __int64 v37; // r13
  char v38; // r12
  unsigned __int64 v39; // rdi
  unsigned __int64 v40; // rcx
  _BYTE *v41; // r8
  _SLIST_HEADER *v42; // r12
  unsigned __int64 Region; // rsi
  __int64 v44; // r14
  _BYTE *v45; // rcx
  unsigned __int64 v46; // r13
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rdi
  __int64 v49; // rdx
  _QWORD *v50; // rcx
  struct _NDIS_FILTER_BLOCK *v51; // rdi
  void (__fastcall *NextReturnNetBufferListsHandler)(__int64); // r12
  __int64 NextReturnNetBufferListsContext; // r13
  __int64 *v54; // rsi
  bool v55; // zf
  struct _NDIS_FILTER_BLOCK *v56; // r8
  __int64 v57; // r15
  __int64 v58; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v59; // rax
  __int64 v60; // r8
  __int64 v61; // rsi
  struct _VF_NDIS_DISPATCH_TABLE *v62; // rax
  __int64 ChildRefCount; // r8
  struct _NET_BUFFER_LIST *Scratch; // rsi
  int v65; // eax
  __int64 v66; // [rsp+30h] [rbp-69h]
  char v67[4]; // [rsp+40h] [rbp-59h] BYREF
  unsigned int v68; // [rsp+44h] [rbp-55h]
  unsigned int v69; // [rsp+48h] [rbp-51h]
  int v70; // [rsp+4Ch] [rbp-4Dh]
  PVOID P; // [rsp+50h] [rbp-49h]
  __int64 v72; // [rsp+58h] [rbp-41h]
  _BYTE *v73; // [rsp+60h] [rbp-39h]
  __int64 v74; // [rsp+68h] [rbp-31h]
  struct _NET_BUFFER_LIST *v75; // [rsp+70h] [rbp-29h]
  __int64 v76; // [rsp+78h] [rbp-21h] BYREF
  __int64 v77; // [rsp+80h] [rbp-19h]
  int v78; // [rsp+88h] [rbp-11h]
  _QWORD v79[12]; // [rsp+90h] [rbp-9h] BYREF
  struct _NET_BUFFER_LIST *v81; // [rsp+108h] [rbp+6Fh]
  char v82; // [rsp+110h] [rbp+77h]
  _QWORD *v83; // [rsp+118h] [rbp+7Fh] BYREF

  result = 0LL;
  v70 = 0;
  v4 = a1;
  do
  {
    v75 = Alignment;
    v5 = Alignment;
    if ( !Alignment )
      return result;
    v6 = (unsigned int)Alignment->ProtocolReserved[0];
    v7 = Alignment;
    Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    v8 = 1;
    v81 = Alignment;
    v69 = 1;
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
      v69 = v8;
      v81 = Alignment;
    }
    *((_DWORD *)v4 + 799) -= v8;
    v7->Link.Alignment = 0LL;
    if ( (unsigned __int8)v4[32] < 6u && (*((_DWORD *)v4 + 30) & 0x40000) == 0 )
    {
      while ( 1 )
      {
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v4 + 12);
        v9 = (KSPIN_LOCK *)(v4 + 96);
        *((_QWORD *)v4 + 65) = KeGetCurrentThread();
        if ( !v4[89] )
          break;
        *((_QWORD *)v4 + 65) = 0LL;
        KeReleaseSpinLockFromDpcLevel(v9);
        KeStallExecutionProcessor(1u);
      }
      v4[89] = 1;
      *((_QWORD *)v4 + 233) = KeGetCurrentThread();
      *((_QWORD *)v4 + 65) = 0LL;
      KeReleaseSpinLockFromDpcLevel(v9);
    }
    if ( v4[1995] )
    {
      ndisMDispatchReceiveNetBufferListsWithLock(v4, v5, v6, v8, 1u);
      goto LABEL_134;
    }
    Number = 0;
    v68 = 0;
    v82 = 0;
    if ( ndisPerProcRcvTrackers )
    {
      Number = KeGetPcr()->Prcb.Number;
      v11 = ndisPerProcRcvTrackers;
      v12 = 2096LL * Number;
      v68 = Number;
      v13 = *(unsigned int *)((char *)ndisPerProcRcvTrackers + v12);
      if ( (unsigned int)v13 < 3 )
      {
        v82 = 1;
        v14 = v12 + 696 * v13;
        v15 = (char *)ndisPerProcRcvTrackers + v14 + 8;
        *(_DWORD *)((char *)ndisPerProcRcvTrackers + v12) = v13 + 1;
        P = (char *)v11 + v14 + 8;
LABEL_18:
        v16 = (_QWORD *)*((_QWORD *)v4 + 50);
        v17 = v5;
        v83 = v16;
        v15[692] = 0;
        do
        {
          v18 = v17;
          v17->Flags = v17->Flags & 0xFFFFFFF0 | 4;
          v17 = (struct _NET_BUFFER_LIST *)v17->Link.Alignment;
        }
        while ( v17 );
        v19 = (struct _NDIS_OPEN_BLOCK *)v16[41];
        if ( v19 && v19->ProtocolHandle->MajorNdisVersion >= 6u )
        {
          ndisMIndicateNetBufferListsToOpen(v19, v5, (char *)v6, v69, 1u);
          *((_QWORD *)v15 + 8) = 0LL;
          *((_DWORD *)v15 + 20) = 0;
        }
        else
        {
          *((_DWORD *)v15 + 11) = v69;
          *((_QWORD *)v15 + 3) = v5;
          *((_QWORD *)v15 + 1) = v16;
          *((_DWORD *)v15 + 4) = 1;
          *(_QWORD *)v15 = v4;
          *((_QWORD *)v15 + 4) = v18;
          *((_DWORD *)v15 + 10) = v6;
          ndisSortNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)v15);
          if ( *((_QWORD *)v15 + 8) || *((_DWORD *)v15 + 172) )
          {
            if ( !*v16 || v6 )
              v15[692] = 1;
            else
              ndisIndicateXlatedPacketsToNdis5Protocols((struct _NDIS_NBL_RCV_TRACKER *)v15);
            if ( !v19 )
            {
              v21 = (struct _NDIS_OPEN_BLOCK *)v16[1];
              if ( v21 )
              {
                v22 = *((_DWORD *)v15 + 172);
                v23 = *((_DWORD *)v15 + 4) | 2;
                do
                {
                  FilterNextOpen = v21->FilterNextOpen;
                  v25 = 0;
                  do
                  {
                    v26 = v25++;
                    v27 = *(struct _NET_BUFFER_LIST **)&v15[40 * v26 + 64];
                    if ( v27 )
                      ndisMIndicateNetBufferListsToOpen(
                        v21,
                        v27,
                        (char *)*((unsigned int *)v15 + 10),
                        *(_DWORD *)&v15[40 * v26 + 80],
                        v23);
                  }
                  while ( v25 <= v22 );
                  v21 = FilterNextOpen;
                }
                while ( FilterNextOpen );
                v4 = a1;
                v16 = v83;
              }
              if ( v16[2] )
              {
                v28 = *((_DWORD *)v15 + 4);
                v29 = *((_DWORD *)v15 + 10);
                v30 = *((_DWORD *)v15 + 172);
                if ( *(_DWORD *)(*(_QWORD *)v15 + 2244LL) )
                  ndisIndicateToPmodeOpens((struct _NDIS_NBL_RCV_TRACKER *)v15);
                for ( i = 1; i <= v30; ++i )
                {
                  v32 = i;
                  ndisMIndicateNetBufferListsToOpen(
                    *(struct _NDIS_OPEN_BLOCK **)&v15[40 * v32 + 56],
                    *(struct _NET_BUFFER_LIST **)&v15[40 * v32 + 64],
                    (char *)v29,
                    *(_DWORD *)&v15[40 * v32 + 80],
                    v28);
                }
              }
            }
          }
        }
        Number = v68;
        if ( !v15[692] )
          goto LABEL_129;
        v5 = (struct _NET_BUFFER_LIST *)*((_QWORD *)v15 + 8);
        v75 = v5;
        P = v15;
        if ( !v5 )
          goto LABEL_129;
        goto LABEL_48;
      }
    }
    P = (PVOID)ExAllocatePool2(66LL, 696LL, 538985550);
    v15 = (char *)P;
    if ( P )
      goto LABEL_18;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        4u,
        0xBu,
        (struct _GUID *)&WPP_b73066c8574e3d1b9eeedc46f4c32798_Traceguids);
LABEL_48:
    if ( byte_1C00EC210 && (*((_DWORD *)v4 + 1465) & 2) != 0 )
      PktMonClientNblDropNdis((_DWORD)v4 + 5808, (_DWORD)v5, v20, 1, -1073676270, -536866809);
    v78 = -1;
    v33 = *((_DWORD *)v4 + 12);
    v76 = 0LL;
    v77 = 0LL;
    if ( v33 || *((_DWORD *)v4 + 20) )
    {
      LODWORD(v77) = v33;
      HIDWORD(v77) = *((_DWORD *)v4 + 20);
      v76 = *((_QWORD *)v4 + 5);
      if ( !v76 )
        v76 = *((_QWORD *)v4 + 5);
    }
    v34 = v5;
    do
    {
      v34->Flags = v34->Flags & 0xFFFFFFF4 | 8;
      v34 = (struct _NET_BUFFER_LIST *)v34->Link.Alignment;
    }
    while ( v34 );
    if ( Microsoft_Windows_Networking_CorrelationEnabled || byte_1C00EC210 )
      ndisMarkNetBufferListCorrelationIdsAsUsed(v5);
    if ( *((_DWORD *)v4 + 806) )
    {
      v5 = ndisReturnPeriodicReceives((struct _NDIS_MINIPORT_BLOCK *)v4, v5);
      v75 = v5;
    }
    if ( !v5 )
      goto LABEL_129;
    v35 = *(unsigned int *)ndisNblTrackerMode;
    if ( !*(_DWORD *)ndisNblTrackerMode )
      goto LABEL_100;
    v36 = *((_QWORD *)v4 + 317);
    v37 = 0LL;
    v38 = ndisNblTrackerEpoch;
    v72 = 0LL;
    v74 = 0LL;
    LOBYTE(v83) = 1;
    v67[0] = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
      ndisNblTrackerRecordEventInternal((unsigned __int64)v5, 0LL, 0x87u, v36, 1);
    v39 = v36 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v39 & 1) != 0 )
    {
      P = v15;
      v40 = v39 & 0xFFFFFFFFFFFFFFF8uLL;
      v39 |= 2LL * (v38 & 1);
      v35 = v68;
      v41 = *(_BYTE **)(v40 + 24);
    }
    else
    {
      v41 = (_BYTE *)v39;
    }
    v42 = (_SLIST_HEADER *)v5;
    v73 = v41;
    do
    {
      Region = v42[22].Region;
      v44 = v74;
      while ( v42[22].Region == Region )
      {
        if ( Region )
        {
          if ( (Region & 4) != 0 )
            goto LABEL_79;
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
              ++v37;
              v35 = v39;
            }
            else
            {
              ++v44;
              v35 = 24LL;
              ++v37;
            }
            goto LABEL_80;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v66) = (unsigned __int8)*v45;
            WPP_RECORDER_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              3u,
              0x1Bu,
              0xCu,
              (struct _GUID *)&WPP_44b390fadec23ba9bcae0cc9320a34b9_Traceguids,
              (char)v42,
              v66);
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
            v42);
        }
LABEL_79:
        v41 = v73;
        v35 = v39 | 4;
LABEL_80:
        v42[22].Region = v35;
        v42 = (_SLIST_HEADER *)v42->Alignment;
        if ( !v42 )
          break;
      }
      v74 = v44;
      if ( (Region & 1) != 0 )
        ndisNblTrackerUpdateOwnershipCount(Region, v72 - v37, (char *)&v83, v67);
      v41 = v73;
      v72 = v37;
    }
    while ( v42 );
    v46 = v37 - v74;
    v4 = a1;
    v5 = v75;
    if ( (v39 & 1) != 0 && v46 )
    {
      LOBYTE(v35) = (_BYTE)v83;
      if ( !(_BYTE)v83 && !v67[0] )
      {
        LOBYTE(v35) = KeGetCurrentIrql() == 2;
        LOBYTE(v83) = v35;
      }
      v47 = v39;
      v48 = v39 & 0xFFFFFFFFFFFFFFF8uLL;
      v49 = 2 * ((v47 >> 1) & 1);
      if ( (_BYTE)v35 )
      {
        v35 = KeGetPcr()->Prcb.Number << 12;
        v50 = (_QWORD *)(*(_QWORD *)(v48 + 8 * v49 + 40) + (unsigned int)v35);
        *v50 += v46;
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v48 + 8 * v49 + 48), v46);
      }
    }
LABEL_100:
    if ( (v77 & 0x2000000000LL) != 0 )
      ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&v76, 5u);
    v51 = (struct _NDIS_FILTER_BLOCK *)*((_QWORD *)v4 + 318);
    NextReturnNetBufferListsHandler = (void (__fastcall *)(__int64))*((_QWORD *)v4 + 330);
    NextReturnNetBufferListsContext = *((_QWORD *)v4 + 316);
    if ( v51->Header.Type == 17 )
    {
      (*((void (__fastcall **)(_QWORD, struct _NET_BUFFER_LIST *, __int64))v4 + 330))(*((_QWORD *)v4 + 316), v5, 1LL);
    }
    else
    {
      LODWORD(v35) = KeGetPcr()->Prcb.Number;
      v54 = v79;
      v5->Scratch = 0LL;
      v5->ChildRefCount = 1;
      v55 = v51->Header.Type == 5;
      LODWORD(v83) = v35;
      v79[2] = 0LL;
      v79[0] = v5;
      v79[1] = v5;
      if ( v55 )
      {
        while ( *v54 )
        {
          v56 = v51;
          v57 = (__int64)v51->IterativeDataPathTracker[v35];
          if ( *(_BYTE *)(v57 + 88) )
          {
            ndisIterativeDPInvokeHandlerOnTracker<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>(
              v51,
              NextReturnNetBufferListsHandler,
              NextReturnNetBufferListsContext,
              v54);
            v5 = (struct _NET_BUFFER_LIST *)*v54;
            goto LABEL_118;
          }
          *(_BYTE *)(v57 + 88) = 1;
          v58 = *v54;
          *v54 = 0LL;
          if ( v58 )
          {
            do
            {
              v59 = ndisVerifierNdisDispatch;
              v60 = *(unsigned int *)(v58 + 132);
              v61 = *(_QWORD *)(v58 + 112);
              *(_DWORD *)(v58 + 132) = 0;
              if ( v59 && v51->Header.Type == 5 && v51->VerifierContext )
                (*((void (__fastcall **)(__int64, __int64, __int64))v59 + 17))(
                  NextReturnNetBufferListsContext,
                  v58,
                  v60);
              else
                ((void (__fastcall *)(__int64, __int64, __int64))NextReturnNetBufferListsHandler)(
                  NextReturnNetBufferListsContext,
                  v58,
                  v60);
              v58 = v61;
            }
            while ( v61 );
            v56 = v51;
          }
          v35 = (unsigned int)v83;
          v54 = (__int64 *)(v57 + 72);
          *(_BYTE *)(v57 + 88) = 0;
          v51 = (struct _NDIS_FILTER_BLOCK *)v51->NextReturnNetBufferListsObject;
          NextReturnNetBufferListsHandler = (void (__fastcall *)(__int64))v56->NextReturnNetBufferListsHandler;
          NextReturnNetBufferListsContext = (__int64)v56->NextReturnNetBufferListsContext;
          if ( v51->Header.Type != 5 )
          {
            v5 = *(struct _NET_BUFFER_LIST **)(v57 + 72);
            goto LABEL_118;
          }
        }
      }
      else
      {
LABEL_118:
        if ( v5 )
        {
          *v54 = 0LL;
          do
          {
            v62 = ndisVerifierNdisDispatch;
            ChildRefCount = (unsigned int)v5->ChildRefCount;
            Scratch = (struct _NET_BUFFER_LIST *)v5->Scratch;
            v5->ChildRefCount = 0;
            if ( v62 && v51->Header.Type == 5 && v51->VerifierContext )
              (*((void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, __int64))v62 + 17))(
                NextReturnNetBufferListsContext,
                v5,
                ChildRefCount);
            else
              ((void (__fastcall *)(__int64, struct _NET_BUFFER_LIST *, __int64))NextReturnNetBufferListsHandler)(
                NextReturnNetBufferListsContext,
                v5,
                ChildRefCount);
            v5 = Scratch;
          }
          while ( Scratch );
        }
      }
    }
    if ( (v77 & 0x2000000000LL) != 0 )
      ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&v76, 5u, 18LL);
    Number = v68;
LABEL_129:
    if ( v82 )
    {
      --*((_DWORD *)ndisPerProcRcvTrackers + 524 * Number);
    }
    else if ( P )
    {
      ExFreePoolWithTag(P, 0);
    }
    Alignment = v81;
    v8 = v69;
LABEL_134:
    if ( (unsigned __int8)v4[32] < 6u && (*((_DWORD *)v4 + 30) & 0x40000) == 0 )
    {
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v4 + 12);
      v4[89] = 0;
      *((_QWORD *)v4 + 233) = 0LL;
      *((_QWORD *)v4 + 65) = 0LL;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v4 + 12);
    }
    v65 = v70;
    *((_DWORD *)v4 + 811) += v8;
    result = v8 + v65;
    v70 = result;
  }
  while ( Alignment );
  return result;
}
