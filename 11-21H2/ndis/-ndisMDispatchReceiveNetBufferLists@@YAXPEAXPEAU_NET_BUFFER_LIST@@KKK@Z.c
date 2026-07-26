/*
 * XREFs of ?ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0098440
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0002C10 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C0002FE0 (-ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ??$ndisIterativeDPInvokeHandlerOnTracker@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAXP6AX0PEAU_NET_BUFFER_LIST@@K@Z0PEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@@Z @ 0x1C00034C4 (--$ndisIterativeDPInvokeHandlerOnTracker@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAXP6AX0PEA.c)
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

void __fastcall ndisMDispatchReceiveNetBufferLists(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  _UNKNOWN **v5; // rax
  unsigned int v6; // edi
  char v7; // r13
  struct _NET_BUFFER_LIST *v9; // r14
  struct _NDIS_FILTER_BLOCK *v10; // rsi
  struct _NDIS_RCV_TRACKER_ARRAY *v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // rcx
  char *v15; // r15
  _QWORD *RcvLinkSpeedIndicateUp; // r13
  struct _NET_BUFFER_LIST *Alignment; // rcx
  unsigned int v18; // r8d
  struct _NET_BUFFER_LIST *v19; // rdx
  int v20; // r8d
  struct _NDIS_OPEN_BLOCK *v21; // rdi
  struct _NDIS_OPEN_BLOCK *v22; // rdi
  unsigned int v23; // esi
  unsigned int v24; // r12d
  unsigned int v25; // r14d
  __int64 v26; // rcx
  struct _NET_BUFFER_LIST *v27; // rdx
  struct _NDIS_OPEN_BLOCK *v28; // rdx
  unsigned int v29; // r12d
  unsigned int v30; // r13d
  unsigned int v31; // r14d
  unsigned int i; // edi
  __int64 v33; // rax
  int FilterFriendlyName; // eax
  struct _NET_BUFFER_LIST *v35; // rcx
  __int64 v36; // rax
  unsigned __int64 NextDirectRequestHandle; // rdi
  struct _NDIS_OPEN_BLOCK *v38; // r12
  char v39; // si
  unsigned __int64 v40; // rdi
  unsigned __int64 v41; // rcx
  _BYTE *v42; // r8
  _SLIST_HEADER *v43; // r13
  __int64 v44; // r14
  unsigned __int64 Region; // rsi
  _BYTE *v46; // rcx
  unsigned __int64 v47; // r12
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rdi
  __int64 v50; // rdx
  _QWORD *v51; // rcx
  struct _NDIS_FILTER_BLOCK *v52; // rdi
  void (__fastcall *Flink)(__int64); // r12
  __int64 IfBlock; // r13
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 *v57; // rsi
  int v58; // ecx
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
  __int64 v69; // [rsp+38h] [rbp-51h]
  char v70; // [rsp+48h] [rbp-41h] BYREF
  KIRQL NewIrql; // [rsp+49h] [rbp-40h]
  char v72; // [rsp+4Ah] [rbp-3Fh]
  int v73; // [rsp+4Ch] [rbp-3Dh]
  struct _NDIS_OPEN_BLOCK *FilterNextOpen; // [rsp+50h] [rbp-39h]
  unsigned int v75; // [rsp+58h] [rbp-31h]
  _BYTE *v76; // [rsp+60h] [rbp-29h]
  Rtl::KString *value; // [rsp+68h] [rbp-21h] BYREF
  __int64 v78; // [rsp+70h] [rbp-19h]
  int v79; // [rsp+78h] [rbp-11h]
  __int64 Pool2; // [rsp+80h] [rbp-9h]
  _QWORD v81[10]; // [rsp+88h] [rbp-1h] BYREF
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+57h] BYREF
  struct _NET_BUFFER_LIST *v84; // [rsp+F0h] [rbp+67h]

  v5 = &retaddr;
  v84 = a2;
  v6 = a5;
  v75 = 0;
  v7 = a5 & 1;
  v72 = 0;
  v73 = a5 & 1;
  v9 = a2;
  v10 = a1;
  if ( (a5 & 1) != 0 || KeGetCurrentIrql() == 2 )
  {
    if ( ndisPerProcRcvTrackers )
    {
      LODWORD(v5) = KeGetPcr()->Prcb.Number;
      v11 = ndisPerProcRcvTrackers;
      v12 = 2096LL * (_QWORD)v5;
      v75 = (unsigned int)v5;
      v13 = *((unsigned int *)ndisPerProcRcvTrackers + 524 * (_QWORD)v5);
      if ( (unsigned int)v13 < 3 )
      {
        v72 = 1;
        v14 = v12 + 696 * v13;
        v15 = (char *)ndisPerProcRcvTrackers + v14 + 8;
        *(_DWORD *)((char *)ndisPerProcRcvTrackers + v12) = v13 + 1;
        Pool2 = (__int64)v11 + v14 + 8;
LABEL_6:
        RcvLinkSpeedIndicateUp = (_QWORD *)v10->RcvLinkSpeedIndicateUp;
        v15[692] = 0;
        LODWORD(v76) = v6 & 2;
        Alignment = v9;
        v18 = v6;
        if ( (v6 & 2) != 0 )
        {
          v19 = 0LL;
        }
        else
        {
          do
          {
            v19 = Alignment;
            Alignment->Flags = Alignment->Flags & 0xFFFFFFF0 | 4;
            Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
          }
          while ( Alignment );
        }
        v21 = (struct _NDIS_OPEN_BLOCK *)RcvLinkSpeedIndicateUp[41];
        if ( v21 && v21->ProtocolHandle->MajorNdisVersion >= 6u )
        {
          ndisMIndicateNetBufferListsToOpen(v21, v9, (char *)a3, a4, v18);
          *((_QWORD *)v15 + 8) = 0LL;
          *((_DWORD *)v15 + 20) = 0;
        }
        else
        {
          *((_DWORD *)v15 + 11) = a4;
          *((_QWORD *)v15 + 3) = v9;
          *((_QWORD *)v15 + 1) = RcvLinkSpeedIndicateUp;
          *((_DWORD *)v15 + 4) = v18;
          *(_QWORD *)v15 = v10;
          *((_QWORD *)v15 + 4) = v19;
          *((_DWORD *)v15 + 10) = a3;
          ndisSortNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)v15);
          if ( *((_QWORD *)v15 + 8) || *((_DWORD *)v15 + 172) )
          {
            if ( !*RcvLinkSpeedIndicateUp || a3 )
              v15[692] = 1;
            else
              ndisIndicateXlatedPacketsToNdis5Protocols((struct _NDIS_NBL_RCV_TRACKER *)v15);
            if ( !v21 )
            {
              v22 = (struct _NDIS_OPEN_BLOCK *)RcvLinkSpeedIndicateUp[1];
              if ( v22 )
              {
                v23 = *((_DWORD *)v15 + 172);
                v24 = *((_DWORD *)v15 + 4) | 2;
                do
                {
                  v25 = 0;
                  FilterNextOpen = v22->FilterNextOpen;
                  do
                  {
                    v26 = v25++;
                    v27 = *(struct _NET_BUFFER_LIST **)&v15[40 * v26 + 64];
                    if ( v27 )
                      ndisMIndicateNetBufferListsToOpen(
                        v22,
                        v27,
                        (char *)*((unsigned int *)v15 + 10),
                        *(_DWORD *)&v15[40 * v26 + 80],
                        v24);
                  }
                  while ( v25 <= v23 );
                  v22 = FilterNextOpen;
                }
                while ( FilterNextOpen );
                v10 = a1;
              }
              v28 = (struct _NDIS_OPEN_BLOCK *)RcvLinkSpeedIndicateUp[2];
              if ( v28 )
              {
                if ( (_DWORD)v76 )
                {
                  ndisIndicateAllNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)v15, v28);
                }
                else
                {
                  v29 = *((_DWORD *)v15 + 4);
                  v30 = *((_DWORD *)v15 + 10);
                  v31 = *((_DWORD *)v15 + 172);
                  if ( *(_DWORD *)(*(_QWORD *)v15 + 2244LL) )
                    ndisIndicateToPmodeOpens((struct _NDIS_NBL_RCV_TRACKER *)v15);
                  for ( i = 1; i <= v31; ++i )
                  {
                    v33 = i;
                    ndisMIndicateNetBufferListsToOpen(
                      *(struct _NDIS_OPEN_BLOCK **)&v15[40 * v33 + 56],
                      *(struct _NET_BUFFER_LIST **)&v15[40 * v33 + 64],
                      (char *)v30,
                      *(_DWORD *)&v15[40 * v33 + 80],
                      v29);
                  }
                }
              }
            }
          }
        }
        if ( !v15[692] )
          goto LABEL_133;
        v9 = (struct _NET_BUFFER_LIST *)*((_QWORD *)v15 + 8);
        LOBYTE(v6) = a5;
        v7 = v73;
        v84 = v9;
        goto LABEL_41;
      }
    }
  }
  Pool2 = ExAllocatePool2(66LL, 696LL, 538985550);
  v15 = (char *)Pool2;
  if ( Pool2 )
    goto LABEL_6;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      4u,
      0xBu,
      (struct _GUID *)&WPP_b73066c8574e3d1b9eeedc46f4c32798_Traceguids);
LABEL_41:
  if ( !v9 )
    goto LABEL_133;
  if ( byte_1C00EC210 && (v10[6].PhysicalMediaType & 2) != 0 )
    PktMonClientNblDropNdis((_DWORD)v10 + 5808, (_DWORD)v9, v20, 1, -1073676270, -536866809);
  if ( (v6 & 2) != 0 )
    goto LABEL_133;
  v79 = -1;
  FilterFriendlyName = (int)v10->FilterFriendlyName;
  NewIrql = 2;
  value = 0LL;
  v78 = 0LL;
  if ( FilterFriendlyName || *(_DWORD *)&v10->Ref.ReferenceCount )
  {
    LODWORD(v78) = FilterFriendlyName;
    HIDWORD(v78) = *(_DWORD *)&v10->Ref.ReferenceCount;
    value = v10->FilterInstanceName.__ptr_.__value_;
    if ( !value )
      value = v10->FilterInstanceName.__ptr_.__value_;
  }
  v35 = v9;
  do
  {
    v35->Flags = v35->Flags & 0xFFFFFFF4 | 8;
    v35 = (struct _NET_BUFFER_LIST *)v35->Link.Alignment;
  }
  while ( v35 );
  if ( Microsoft_Windows_Networking_CorrelationEnabled || byte_1C00EC210 )
    ndisMarkNetBufferListCorrelationIdsAsUsed(v9);
  if ( LODWORD(v10[3].NextSendNetBufferListsCompleteHandler) )
  {
    v9 = ndisReturnPeriodicReceives((struct _NDIS_MINIPORT_BLOCK *)v10, v9);
    v84 = v9;
  }
  if ( !v9 )
    goto LABEL_133;
  v36 = *(unsigned int *)ndisNblTrackerMode;
  if ( !*(_DWORD *)ndisNblTrackerMode )
    goto LABEL_96;
  NextDirectRequestHandle = (unsigned __int64)v10[2].NextDirectRequestHandle;
  v38 = 0LL;
  v39 = ndisNblTrackerEpoch;
  FilterNextOpen = 0LL;
  LOBYTE(a5) = v7;
  v70 = 0;
  if ( *(int *)ndisNblTrackerMode >= 3 )
    ndisNblTrackerRecordEventInternal((unsigned __int64)v9, 0LL, 0x87u, NextDirectRequestHandle, v7);
  v40 = NextDirectRequestHandle & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v40 & 1) != 0 )
  {
    v41 = v40 & 0xFFFFFFFFFFFFFFF8uLL;
    v36 = 2LL * (v39 & 1);
    v40 |= v36;
    v42 = *(_BYTE **)(v41 + 24);
  }
  else
  {
    v42 = (_BYTE *)v40;
  }
  v43 = (_SLIST_HEADER *)v9;
  v76 = v42;
  v44 = 0LL;
  do
  {
    Region = v43[22].Region;
    while ( v43[22].Region == Region )
    {
      if ( Region )
      {
        if ( (Region & 4) != 0 )
          goto LABEL_74;
      }
      else if ( !v43[7].Region )
      {
        v43[7].Region = ndisSourceHandleFromOwner(0LL);
      }
      v46 = (_BYTE *)v43[7].Region;
      if ( v46 )
      {
        if ( *v46 == 5 || (unsigned __int8)(*v46 - 17) <= 1u )
        {
          if ( v46 != v42 || v43[1].Region )
          {
            v38 = (struct _NDIS_OPEN_BLOCK *)((char *)v38 + 1);
            v36 = v40;
          }
          else
          {
            ++v44;
            v36 = 24LL;
            v38 = (struct _NDIS_OPEN_BLOCK *)((char *)v38 + 1);
          }
          goto LABEL_75;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v69) = (unsigned __int8)*v46;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            0x1Bu,
            0xCu,
            (struct _GUID *)&WPP_44b390fadec23ba9bcae0cc9320a34b9_Traceguids,
            (char)v43,
            v69);
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
          v43);
      }
LABEL_74:
      v42 = v76;
      v36 = v40 | 4;
LABEL_75:
      v43[22].Region = v36;
      v43 = (_SLIST_HEADER *)v43->Alignment;
      if ( !v43 )
        break;
    }
    if ( (Region & 1) != 0 )
      ndisNblTrackerUpdateOwnershipCount(Region, (char *)FilterNextOpen - (char *)v38, (char *)&a5, &v70);
    v42 = v76;
    FilterNextOpen = v38;
  }
  while ( v43 );
  v15 = (char *)Pool2;
  v47 = (unsigned __int64)v38 - v44;
  v9 = v84;
  if ( (v40 & 1) != 0 && v47 )
  {
    LOBYTE(v36) = a5;
    if ( !(_BYTE)a5 && !v70 )
    {
      LOBYTE(v36) = KeGetCurrentIrql() == 2;
      LOBYTE(a5) = v36;
    }
    v10 = a1;
    v48 = v40 >> 1;
    v49 = v40 & 0xFFFFFFFFFFFFFFF8uLL;
    v50 = 2 * (v48 & 1);
    if ( (_BYTE)v36 )
    {
      v36 = KeGetPcr()->Prcb.Number << 12;
      v51 = (_QWORD *)(*(_QWORD *)(v49 + 8 * v50 + 40) + (unsigned int)v36);
      *v51 += v47;
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v49 + 8 * v50 + 48), v47);
    }
  }
  else
  {
    v10 = a1;
  }
LABEL_96:
  if ( (v78 & 0x2000000000LL) != 0 )
  {
    if ( !v73 )
      NewIrql = KfRaiseIrql(2u);
    ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&value, 5u);
  }
  v52 = *(struct _NDIS_FILTER_BLOCK **)&v10[2].DirectOidRequestCount;
  Flink = (void (__fastcall *)(__int64))v10[2].PktMonComp.EdgeList.Flink;
  IfBlock = (__int64)v10[2].IfBlock;
  if ( v52->Header.Type == 17 )
    goto LABEL_129;
  if ( !v73 && KeGetCurrentIrql() != 2 )
  {
    if ( v10->Header.Type == 5 )
    {
      if ( ndisExpandDataPathStack<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>(
             (__int64)v9,
             v55,
             v56,
             v73,
             v52,
             IfBlock,
             (void (__fastcall *)(__int64, __int64, _QWORD))Flink) < 0 )
        ndisQueueStackExpansionFallbackNbls(v10, v9, 0);
      goto LABEL_130;
    }
LABEL_129:
    ((void (__fastcall *)(__int64, struct _NET_BUFFER_LIST *, _QWORD))Flink)(IfBlock, v9, (unsigned int)v73);
    goto LABEL_130;
  }
  LODWORD(v36) = KeGetPcr()->Prcb.Number;
  v57 = v81;
  v58 = v73;
  v9->Scratch = 0LL;
  v9->ChildRefCount = v58;
  v59 = v52->Header.Type == 5;
  a5 = v36;
  v81[2] = 0LL;
  v81[0] = v9;
  v81[1] = v9;
  if ( v59 )
  {
    while ( *v57 )
    {
      v60 = v52;
      v61 = (__int64)v52->IterativeDataPathTracker[v36];
      if ( *(_BYTE *)(v61 + 88) )
      {
        ndisIterativeDPInvokeHandlerOnTracker<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>(
          v52,
          Flink,
          IfBlock,
          v57);
        v9 = (struct _NET_BUFFER_LIST *)*v57;
        goto LABEL_120;
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
          if ( v63 && v52->Header.Type == 5 && v52->VerifierContext )
            (*((void (__fastcall **)(__int64, __int64, __int64))v63 + 17))(IfBlock, v62, v64);
          else
            ((void (__fastcall *)(__int64, __int64, __int64))Flink)(IfBlock, v62, v64);
          v62 = v65;
        }
        while ( v65 );
        v60 = v52;
      }
      v36 = a5;
      v57 = (__int64 *)(v61 + 72);
      *(_BYTE *)(v61 + 88) = 0;
      v52 = (struct _NDIS_FILTER_BLOCK *)v52->NextReturnNetBufferListsObject;
      Flink = (void (__fastcall *)(__int64))v60->NextReturnNetBufferListsHandler;
      IfBlock = (__int64)v60->NextReturnNetBufferListsContext;
      if ( v52->Header.Type != 5 )
      {
        v9 = *(struct _NET_BUFFER_LIST **)(v61 + 72);
        goto LABEL_120;
      }
    }
  }
  else
  {
LABEL_120:
    if ( v9 )
    {
      *v57 = 0LL;
      do
      {
        v66 = ndisVerifierNdisDispatch;
        ChildRefCount = (unsigned int)v9->ChildRefCount;
        Scratch = (struct _NET_BUFFER_LIST *)v9->Scratch;
        v9->ChildRefCount = 0;
        if ( v66 && v52->Header.Type == 5 && v52->VerifierContext )
          (*((void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, __int64))v66 + 17))(IfBlock, v9, ChildRefCount);
        else
          ((void (__fastcall *)(__int64, struct _NET_BUFFER_LIST *, __int64))Flink)(IfBlock, v9, ChildRefCount);
        v9 = Scratch;
      }
      while ( Scratch );
    }
  }
LABEL_130:
  if ( (v78 & 0x2000000000LL) != 0 )
  {
    ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&value, 5u, 18LL);
    if ( NewIrql != 2 )
      KeLowerIrql(NewIrql);
  }
LABEL_133:
  if ( v72 )
  {
    --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v75);
  }
  else if ( v15 )
  {
    ExFreePoolWithTag(v15, 0);
  }
}
