/*
 * XREFs of ?ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C009E310
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006690 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0008318 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00125A0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C0012970 (-ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ??$ndisIterativeDPInvokeHandlerOnTracker@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAXP6AX0PEAU_NET_BUFFER_LIST@@K@Z0PEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@@Z @ 0x1C0013038 (--$ndisIterativeDPInvokeHandlerOnTracker@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAXP6AX0PEA.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C001320C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C00136A4 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C003DB54 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C003DBAA (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C003DC5A (-ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisIndicateToPmodeOpens@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C003DCF2 (-ndisIndicateToPmodeOpens@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C00402D8 (-ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ??$ndisExpandDataPathStack@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAJPEAU_NET_BUFFER_LIST@@KKKPEAX1P6AX10K@Z@Z @ 0x1C0064668 (--$ndisExpandDataPathStack@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAJPEAU_NET_BUFFER_LIST@@KKKP.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C006629C (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0071D48 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisReturnPeriodicReceives@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@@Z @ 0x1C00AB998 (-ndisReturnPeriodicReceives@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@@Z.c)
 *     ?ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C00C93E4 (-ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     PktMonClientNblDropNdis @ 0x1C00D3218 (PktMonClientNblDropNdis.c)
 */

void __fastcall ndisMDispatchReceiveNetBufferLists(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v5; // edi
  char v6; // r13
  struct _NET_BUFFER_LIST *v7; // r14
  struct _NDIS_FILTER_BLOCK *v8; // rsi
  unsigned int Number; // r12d
  char *v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rcx
  char *v14; // r15
  unsigned __int64 RcvLinkSpeedIndicateUp; // r12
  struct _NET_BUFFER_LIST *Alignment; // rcx
  __int64 v17; // rdx
  int v18; // edi
  __int64 v19; // r13
  struct _NET_BUFFER_LIST **v20; // r14
  struct _NDIS_OPEN_BLOCK *v21; // rdi
  unsigned int v22; // esi
  unsigned int v23; // r13d
  unsigned int v24; // r14d
  __int64 v25; // rcx
  struct _NET_BUFFER_LIST *v26; // rdx
  struct _NDIS_OPEN_BLOCK *v27; // rdx
  unsigned int v28; // r12d
  unsigned int v29; // r13d
  unsigned int v30; // r14d
  unsigned int i; // edi
  __int64 v32; // rax
  int FilterFriendlyName; // eax
  struct _NET_BUFFER_LIST *v34; // rcx
  __int64 v35; // rax
  unsigned __int64 v36; // rdi
  struct _NDIS_OPEN_BLOCK *v37; // r12
  char v38; // si
  unsigned __int64 v39; // rdi
  _BYTE *v40; // r8
  _SLIST_HEADER *v41; // r13
  __int64 v42; // r14
  unsigned __int64 Region; // rsi
  _BYTE *v44; // rcx
  unsigned __int64 v45; // r12
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rdi
  __int64 v48; // rdx
  _QWORD *v49; // rcx
  struct _NDIS_FILTER_BLOCK *IfBlock; // rdi
  void (__fastcall *Flink)(__int64); // r12
  __int64 NextReturnNetBufferListsContext; // r13
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 *v55; // rsi
  int v56; // ecx
  bool v57; // zf
  struct _NDIS_FILTER_BLOCK *v58; // r8
  __int64 v59; // r14
  __int64 v60; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v61; // rax
  __int64 v62; // r8
  __int64 v63; // rsi
  struct _VF_NDIS_DISPATCH_TABLE *v64; // rax
  __int64 ChildRefCount; // r8
  struct _NET_BUFFER_LIST *Scratch; // rsi
  __int64 v67; // [rsp+38h] [rbp-61h]
  char v68; // [rsp+48h] [rbp-51h] BYREF
  KIRQL NewIrql; // [rsp+49h] [rbp-50h]
  char v70; // [rsp+4Ah] [rbp-4Fh]
  int v71; // [rsp+4Ch] [rbp-4Dh]
  unsigned int v72; // [rsp+50h] [rbp-49h]
  _BYTE *v73; // [rsp+58h] [rbp-41h]
  struct _NDIS_OPEN_BLOCK *FilterNextOpen; // [rsp+60h] [rbp-39h]
  Rtl::KString *value; // [rsp+68h] [rbp-31h] BYREF
  __int64 v76; // [rsp+70h] [rbp-29h]
  int v77; // [rsp+78h] [rbp-21h]
  __int64 Pool2; // [rsp+80h] [rbp-19h]
  _QWORD v79[12]; // [rsp+88h] [rbp-11h] BYREF
  struct _NET_BUFFER_LIST *v81; // [rsp+100h] [rbp+67h]

  v81 = a2;
  v5 = a5;
  v6 = a5 & 1;
  v72 = 0;
  v71 = a5 & 1;
  v7 = a2;
  v8 = a1;
  v70 = 0;
  if ( (a5 & 1) != 0 || KeGetCurrentIrql() == 2 )
  {
    if ( ndisPerProcRcvTrackers )
    {
      Number = KeGetPcr()->Prcb.Number;
      v10 = (char *)ndisPerProcRcvTrackers;
      v11 = 2096LL * Number;
      v72 = Number;
      v12 = *(unsigned int *)((char *)ndisPerProcRcvTrackers + v11);
      if ( (unsigned int)v12 < 3 )
      {
        v70 = 1;
        v13 = v11 + 696 * v12;
        v14 = (char *)ndisPerProcRcvTrackers + v13 + 8;
        *(_DWORD *)((char *)ndisPerProcRcvTrackers + v11) = v12 + 1;
        Pool2 = (__int64)&v10[v13 + 8];
        goto LABEL_6;
      }
    }
  }
  Pool2 = ExAllocatePool2(66LL, 696LL, 538985550);
  v14 = (char *)Pool2;
  if ( Pool2 )
  {
LABEL_6:
    RcvLinkSpeedIndicateUp = v8->RcvLinkSpeedIndicateUp;
    v14[692] = 0;
    a5 = v5 & 2;
    Alignment = v7;
    if ( (v5 & 2) != 0 )
    {
      v17 = 0LL;
    }
    else
    {
      do
      {
        v17 = (__int64)Alignment;
        Alignment->Flags = Alignment->Flags & 0xFFFFFFF0 | 4;
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      }
      while ( Alignment );
    }
    v19 = *(_QWORD *)(RcvLinkSpeedIndicateUp + 328);
    if ( v19 && *(_BYTE *)(*(_QWORD *)(v19 + 24) + 56LL) >= 6u )
    {
      ndisMIndicateNetBufferListsToOpen(
        *(struct _NDIS_OPEN_BLOCK **)(RcvLinkSpeedIndicateUp + 328),
        v7,
        (unsigned __int8 *)a3,
        a4,
        v5);
      v20 = (struct _NET_BUFFER_LIST **)(v14 + 64);
      *((_DWORD *)v14 + 20) = 0;
      *((_QWORD *)v14 + 8) = 0LL;
LABEL_42:
      v18 = a5;
      if ( !v14[692] )
        goto LABEL_136;
      v7 = *v20;
      v6 = v71;
      v81 = v7;
      goto LABEL_44;
    }
    *((_DWORD *)v14 + 4) = v5;
    *((_DWORD *)v14 + 10) = a3;
    *((_QWORD *)v14 + 3) = v7;
    *((_QWORD *)v14 + 1) = RcvLinkSpeedIndicateUp;
    *(_QWORD *)v14 = v8;
    *((_QWORD *)v14 + 4) = v17;
    *((_DWORD *)v14 + 11) = a4;
    ndisSortNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)v14, v17, v10);
    v20 = (struct _NET_BUFFER_LIST **)(v14 + 64);
    if ( !*((_QWORD *)v14 + 8) )
    {
      if ( !*((_DWORD *)v14 + 172) )
        goto LABEL_42;
      v20 = (struct _NET_BUFFER_LIST **)(v14 + 64);
    }
    if ( !*(_QWORD *)RcvLinkSpeedIndicateUp || a3 )
      v14[692] = 1;
    else
      ndisIndicateXlatedPacketsToNdis5Protocols((struct _NDIS_NBL_RCV_TRACKER *)v14);
    if ( !v19 )
    {
      v21 = *(struct _NDIS_OPEN_BLOCK **)(RcvLinkSpeedIndicateUp + 8);
      if ( v21 )
      {
        v22 = *((_DWORD *)v14 + 172);
        v23 = *((_DWORD *)v14 + 4) | 2;
        do
        {
          v24 = 0;
          FilterNextOpen = v21->FilterNextOpen;
          do
          {
            v25 = v24++;
            v26 = *(struct _NET_BUFFER_LIST **)&v14[40 * v25 + 64];
            if ( v26 )
              ndisMIndicateNetBufferListsToOpen(
                v21,
                v26,
                (unsigned __int8 *)*((unsigned int *)v14 + 10),
                *(_DWORD *)&v14[40 * v25 + 80],
                v23);
          }
          while ( v24 <= v22 );
          v21 = FilterNextOpen;
        }
        while ( FilterNextOpen );
        v8 = a1;
      }
      v27 = *(struct _NDIS_OPEN_BLOCK **)(RcvLinkSpeedIndicateUp + 16);
      if ( v27 )
      {
        if ( a5 )
        {
          ndisIndicateAllNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)v14, v27);
        }
        else
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
      }
      v20 = (struct _NET_BUFFER_LIST **)(v14 + 64);
    }
    goto LABEL_42;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      4u,
      0xBu,
      (struct _GUID *)&WPP_36f24d049e8d3fc3e46fb027110f7201_Traceguids);
  v18 = v5 & 2;
LABEL_44:
  if ( !v7 )
    goto LABEL_136;
  if ( byte_1C00F5390 && (v8[6].DroppedSendNbls & 2) != 0 )
    PktMonClientNblDropNdis((_DWORD)v8 + 5808, (_DWORD)v7, (_DWORD)v10, 1, -1073676270, -536866809);
  if ( v18 )
    goto LABEL_136;
  v77 = -1;
  FilterFriendlyName = (int)v8->FilterFriendlyName;
  NewIrql = 2;
  value = 0LL;
  v76 = 0LL;
  if ( FilterFriendlyName || *(_DWORD *)&v8->Ref.ReferenceCount )
  {
    LODWORD(v76) = FilterFriendlyName;
    HIDWORD(v76) = *(_DWORD *)&v8->Ref.ReferenceCount;
    value = v8->FilterInstanceName.__ptr_.__value_;
    if ( !value )
      value = v8->FilterInstanceName.__ptr_.__value_;
  }
  v34 = v7;
  do
  {
    v34->Flags = v34->Flags & 0xFFFFFFF4 | 8;
    v34 = (struct _NET_BUFFER_LIST *)v34->Link.Alignment;
  }
  while ( v34 );
  if ( Microsoft_Windows_Networking_CorrelationEnabled || byte_1C00F5390 )
    ndisMarkNetBufferListCorrelationIdsAsUsed(v7);
  if ( LODWORD(v8[3].NextSendNetBufferListsContext) )
  {
    v7 = ndisReturnPeriodicReceives((struct _NDIS_MINIPORT_BLOCK *)v8, v7);
    v81 = v7;
  }
  if ( !v7 )
    goto LABEL_136;
  v35 = *(unsigned int *)ndisNblTrackerMode;
  if ( !*(_DWORD *)ndisNblTrackerMode )
    goto LABEL_99;
  v36 = *(_QWORD *)&v8[2].IfIndex;
  v37 = 0LL;
  v38 = ndisNblTrackerEpoch;
  FilterNextOpen = 0LL;
  LOBYTE(a5) = v6;
  v68 = 0;
  if ( *(int *)ndisNblTrackerMode >= 3 )
    ndisNblTrackerRecordEventInternal((unsigned __int64)v7, 0LL, 0x87u, v36, v6);
  v39 = v36 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v39 & 1) != 0 )
  {
    v40 = *(_BYTE **)((v39 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    v35 = 2LL * (v38 & 1);
    v39 |= v35;
  }
  else
  {
    v40 = (_BYTE *)v39;
  }
  v41 = (_SLIST_HEADER *)v7;
  v73 = v40;
  v42 = 0LL;
  do
  {
    Region = v41[22].Region;
    while ( v41[22].Region == Region )
    {
      if ( Region )
      {
        if ( (Region & 4) != 0 )
          goto LABEL_77;
      }
      else if ( !v41[7].Region )
      {
        v41[7].Region = ndisSourceHandleFromOwner(0LL);
      }
      v44 = (_BYTE *)v41[7].Region;
      if ( v44 )
      {
        if ( *v44 == 5 || (unsigned __int8)(*v44 - 17) <= 1u )
        {
          if ( v44 != v40 || v41[1].Region )
          {
            v37 = (struct _NDIS_OPEN_BLOCK *)((char *)v37 + 1);
            v35 = v39;
          }
          else
          {
            ++v42;
            v35 = 24LL;
            v37 = (struct _NDIS_OPEN_BLOCK *)((char *)v37 + 1);
          }
          goto LABEL_78;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v67) = (unsigned __int8)*v44;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            0x1Bu,
            0xCu,
            (struct _GUID *)&WPP_1f4f9304c13d30d166c4c68f5fb6e586_Traceguids,
            (char)v41,
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
          v41);
      }
LABEL_77:
      v40 = v73;
      v35 = v39 | 4;
LABEL_78:
      v41[22].Region = v35;
      v41 = (_SLIST_HEADER *)v41->Alignment;
      if ( !v41 )
        break;
    }
    if ( (Region & 1) != 0 )
      ndisNblTrackerUpdateOwnershipCount(Region, (char *)FilterNextOpen - (char *)v37, (char *)&a5, &v68);
    v40 = v73;
    FilterNextOpen = v37;
  }
  while ( v41 );
  v14 = (char *)Pool2;
  v45 = (unsigned __int64)v37 - v42;
  v7 = v81;
  if ( (v39 & 1) != 0 && v45 )
  {
    LOBYTE(v35) = a5;
    if ( !(_BYTE)a5 && !v68 )
    {
      LOBYTE(v35) = KeGetCurrentIrql() == 2;
      LOBYTE(a5) = v35;
    }
    v8 = a1;
    v46 = v39 >> 1;
    v47 = v39 & 0xFFFFFFFFFFFFFFF8uLL;
    v48 = 2 * (v46 & 1);
    if ( (_BYTE)v35 )
    {
      v35 = KeGetPcr()->Prcb.Number << 12;
      v49 = (_QWORD *)(*(_QWORD *)(v47 + 8 * v48 + 40) + (unsigned int)v35);
      *v49 += v45;
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v47 + 8 * v48 + 48), v45);
    }
  }
  else
  {
    v8 = a1;
  }
LABEL_99:
  if ( (v76 & 0x2000000000LL) != 0 )
  {
    if ( !v71 )
      NewIrql = KfRaiseIrql(2u);
    ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&value, 5u);
  }
  IfBlock = (struct _NDIS_FILTER_BLOCK *)v8[2].IfBlock;
  Flink = (void (__fastcall *)(__int64))v8[2].PktMonComp.ListLink.Flink;
  NextReturnNetBufferListsContext = *(_QWORD *)v8[2].InterfaceGuid.Data4;
  if ( IfBlock->Header.Type == 17 )
    goto LABEL_132;
  if ( !v71 && KeGetCurrentIrql() != 2 )
  {
    if ( v8->Header.Type == 5 )
    {
      if ( ndisExpandDataPathStack<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>(
             (__int64)v7,
             v53,
             v54,
             v71,
             IfBlock,
             NextReturnNetBufferListsContext,
             (void (__fastcall *)(__int64, __int64, _QWORD))Flink) < 0 )
        ndisQueueStackExpansionFallbackNbls(v8, v7, 0);
      goto LABEL_133;
    }
LABEL_132:
    ((void (__fastcall *)(__int64, struct _NET_BUFFER_LIST *, _QWORD))Flink)(
      NextReturnNetBufferListsContext,
      v7,
      (unsigned int)v71);
    goto LABEL_133;
  }
  LODWORD(v35) = KeGetPcr()->Prcb.Number;
  v55 = v79;
  v56 = v71;
  v7->Scratch = 0LL;
  v7->ChildRefCount = v56;
  v57 = IfBlock->Header.Type == 5;
  a5 = v35;
  v79[2] = 0LL;
  v79[0] = v7;
  v79[1] = v7;
  if ( v57 )
  {
    while ( *v55 )
    {
      v58 = IfBlock;
      v59 = (__int64)IfBlock->IterativeDataPathTracker[v35];
      if ( *(_BYTE *)(v59 + 88) )
      {
        ndisIterativeDPInvokeHandlerOnTracker<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>(
          IfBlock,
          Flink,
          NextReturnNetBufferListsContext,
          v55);
        v7 = (struct _NET_BUFFER_LIST *)*v55;
        goto LABEL_123;
      }
      *(_BYTE *)(v59 + 88) = 1;
      v60 = *v55;
      *v55 = 0LL;
      if ( v60 )
      {
        do
        {
          v61 = ndisVerifierNdisDispatch;
          v62 = *(unsigned int *)(v60 + 132);
          v63 = *(_QWORD *)(v60 + 112);
          *(_DWORD *)(v60 + 132) = 0;
          if ( v61 && IfBlock->Header.Type == 5 && IfBlock->VerifierContext )
            (*((void (__fastcall **)(__int64, __int64, __int64))v61 + 17))(NextReturnNetBufferListsContext, v60, v62);
          else
            ((void (__fastcall *)(__int64, __int64, __int64))Flink)(NextReturnNetBufferListsContext, v60, v62);
          v60 = v63;
        }
        while ( v63 );
        v58 = IfBlock;
      }
      v35 = a5;
      v55 = (__int64 *)(v59 + 72);
      *(_BYTE *)(v59 + 88) = 0;
      IfBlock = (struct _NDIS_FILTER_BLOCK *)IfBlock->NextReturnNetBufferListsObject;
      Flink = (void (__fastcall *)(__int64))v58->NextReturnNetBufferListsHandler;
      NextReturnNetBufferListsContext = (__int64)v58->NextReturnNetBufferListsContext;
      if ( IfBlock->Header.Type != 5 )
      {
        v7 = *(struct _NET_BUFFER_LIST **)(v59 + 72);
        goto LABEL_123;
      }
    }
  }
  else
  {
LABEL_123:
    if ( v7 )
    {
      *v55 = 0LL;
      do
      {
        v64 = ndisVerifierNdisDispatch;
        ChildRefCount = (unsigned int)v7->ChildRefCount;
        Scratch = (struct _NET_BUFFER_LIST *)v7->Scratch;
        v7->ChildRefCount = 0;
        if ( v64 && IfBlock->Header.Type == 5 && IfBlock->VerifierContext )
          (*((void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, __int64))v64 + 17))(
            NextReturnNetBufferListsContext,
            v7,
            ChildRefCount);
        else
          ((void (__fastcall *)(__int64, struct _NET_BUFFER_LIST *, __int64))Flink)(
            NextReturnNetBufferListsContext,
            v7,
            ChildRefCount);
        v7 = Scratch;
      }
      while ( Scratch );
    }
  }
LABEL_133:
  if ( (v76 & 0x2000000000LL) != 0 )
  {
    ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&value, 5u, 18LL);
    if ( NewIrql != 2 )
      KeLowerIrql(NewIrql);
  }
LABEL_136:
  if ( v70 )
  {
    --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v72);
  }
  else if ( v14 )
  {
    ExFreePoolWithTag(v14, 0);
  }
}
