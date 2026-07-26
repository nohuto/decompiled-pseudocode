/*
 * XREFs of ndisMIndicateSplitNblChain @ 0x1C00AAC30
 * Callers:
 *     ?ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C003E410 (-ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
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

unsigned __int64 __fastcall ndisMIndicateSplitNblChain(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned __int64 result; // rax
  struct _NDIS_FILTER_BLOCK *v7; // rsi
  struct _NET_BUFFER_LIST *v8; // rdx
  unsigned int v9; // r8d
  unsigned int v10; // ecx
  unsigned int v11; // r12d
  unsigned int v12; // r15d
  struct _NET_BUFFER_LIST *v13; // r13
  unsigned int v14; // edi
  struct _NET_BUFFER_LIST *v15; // r14
  char *v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rcx
  char *v20; // r10
  unsigned __int64 RcvLinkSpeedIndicateUp; // r13
  struct _NET_BUFFER_LIST *v22; // rdx
  struct _NET_BUFFER_LIST *Alignment; // rcx
  __int64 v24; // rsi
  _BYTE *v25; // r10
  struct _NET_BUFFER_LIST **v26; // r14
  struct _NET_BUFFER_LIST *v27; // r14
  unsigned int v28; // r14d
  struct _NET_BUFFER_LIST **v29; // r12
  struct _NDIS_OPEN_BLOCK *v30; // rsi
  unsigned int v31; // r13d
  unsigned int v32; // r12d
  unsigned int v33; // edi
  _QWORD *v34; // r14
  __int64 v35; // rcx
  struct _NET_BUFFER_LIST *v36; // rdx
  struct _NDIS_OPEN_BLOCK *v37; // rdx
  struct _NDIS_OPEN_BLOCK **v38; // r13
  unsigned int v39; // r14d
  unsigned int v40; // r15d
  unsigned int v41; // esi
  unsigned int i; // edi
  __int64 v43; // rax
  int FilterFriendlyName; // eax
  struct _NET_BUFFER_LIST *v45; // rcx
  __int64 v46; // rax
  unsigned __int64 v47; // rdi
  struct _NDIS_OPEN_BLOCK *v48; // r12
  char v49; // si
  unsigned __int64 v50; // rdi
  _BYTE *v51; // r8
  _SLIST_HEADER *v52; // r15
  unsigned __int64 Region; // rsi
  struct _NET_BUFFER_LIST **v54; // r13
  _BYTE *v55; // rcx
  unsigned __int64 v56; // r12
  unsigned __int64 v57; // rdx
  unsigned __int64 v58; // rdi
  __int64 v59; // rdx
  _QWORD *v60; // rcx
  unsigned int v61; // r13d
  struct _NDIS_FILTER_BLOCK *IfBlock; // rdi
  void (__fastcall *Flink)(__int64); // r15
  __int64 NextReturnNetBufferListsContext; // r12
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 *v67; // rsi
  bool v68; // zf
  struct _NDIS_FILTER_BLOCK *v69; // r13
  __int64 v70; // r14
  __int64 v71; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v72; // rax
  __int64 v73; // r8
  __int64 v74; // rsi
  struct _VF_NDIS_DISPATCH_TABLE *v75; // rax
  __int64 ChildRefCount; // r8
  struct _NET_BUFFER_LIST *Scratch; // rsi
  struct _NET_BUFFER_LIST *v78; // rcx
  struct _NET_BUFFER_LIST *v79; // rax
  __int64 v80; // [rsp+38h] [rbp-89h]
  char v81; // [rsp+48h] [rbp-79h] BYREF
  KIRQL NewIrql; // [rsp+49h] [rbp-78h]
  char v83; // [rsp+4Ah] [rbp-77h]
  unsigned int v84; // [rsp+4Ch] [rbp-75h]
  unsigned int v85; // [rsp+50h] [rbp-71h]
  PVOID P; // [rsp+58h] [rbp-69h]
  unsigned int v87; // [rsp+60h] [rbp-61h]
  struct _NET_BUFFER_LIST *v88; // [rsp+68h] [rbp-59h]
  struct _NET_BUFFER_LIST **v89; // [rsp+70h] [rbp-51h]
  struct _NET_BUFFER_LIST *v90; // [rsp+78h] [rbp-49h]
  struct _NDIS_OPEN_BLOCK *FilterNextOpen; // [rsp+80h] [rbp-41h]
  _BYTE *v92; // [rsp+88h] [rbp-39h]
  Rtl::KString *value; // [rsp+90h] [rbp-31h] BYREF
  __int64 v94; // [rsp+98h] [rbp-29h]
  int v95; // [rsp+A0h] [rbp-21h]
  struct _NET_BUFFER_LIST *v96; // [rsp+A8h] [rbp-19h]
  _QWORD v97[11]; // [rsp+B0h] [rbp-11h] BYREF
  struct _NET_BUFFER_LIST *v99; // [rsp+120h] [rbp+5Fh]
  unsigned int v101; // [rsp+130h] [rbp+6Fh] BYREF

  v101 = a4;
  v99 = a2;
  result = (unsigned __int64)a2;
  v88 = 0LL;
  v7 = a1;
  v8 = 0LL;
  if ( !result )
    return result;
  v9 = a6;
  v10 = a5 & 1;
  v11 = a5 & 2;
  v85 = v10;
  v84 = v11;
  v12 = v11;
  do
  {
    v96 = (struct _NET_BUFFER_LIST *)result;
    v13 = (struct _NET_BUFFER_LIST *)result;
    v14 = 0;
    if ( v9 )
    {
      do
      {
        v12 = v11;
        if ( !result )
          break;
        ++v14;
        v8 = (struct _NET_BUFFER_LIST *)result;
        result = *(_QWORD *)result;
      }
      while ( v14 < v9 );
      v88 = v8;
      v99 = (struct _NET_BUFFER_LIST *)result;
    }
    v8->Link.Alignment = 0LL;
    v15 = 0LL;
    v87 = 0;
    v83 = 0;
    if ( v10 || KeGetCurrentIrql() == 2 )
    {
      v12 = v11;
      if ( ndisPerProcRcvTrackers )
      {
        LODWORD(result) = KeGetPcr()->Prcb.Number;
        v16 = (char *)ndisPerProcRcvTrackers;
        v17 = 2096 * result;
        v87 = result;
        v18 = *((unsigned int *)ndisPerProcRcvTrackers + 524 * result);
        if ( (unsigned int)v18 < 3 )
        {
          v83 = 1;
          v19 = v17 + 696 * v18;
          v20 = (char *)ndisPerProcRcvTrackers + v19 + 8;
          *(_DWORD *)((char *)ndisPerProcRcvTrackers + v17) = v18 + 1;
          P = &v16[v19 + 8];
LABEL_12:
          RcvLinkSpeedIndicateUp = v7->RcvLinkSpeedIndicateUp;
          v22 = v96;
          v90 = (struct _NET_BUFFER_LIST *)RcvLinkSpeedIndicateUp;
          Alignment = v96;
          v20[692] = 0;
          if ( !v12 )
          {
            do
            {
              v15 = Alignment;
              Alignment->Flags = Alignment->Flags & 0xFFFFFFF0 | 4;
              Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
            }
            while ( Alignment );
          }
          v24 = *(_QWORD *)(RcvLinkSpeedIndicateUp + 328);
          if ( v24 && *(_BYTE *)(*(_QWORD *)(v24 + 24) + 56LL) >= 6u )
          {
            ndisMIndicateNetBufferListsToOpen(
              *(struct _NDIS_OPEN_BLOCK **)(RcvLinkSpeedIndicateUp + 328),
              v22,
              (unsigned __int8 *)a3,
              v14,
              a5);
            v25 = P;
            v26 = (struct _NET_BUFFER_LIST **)((char *)P + 64);
            *((_DWORD *)P + 20) = 0;
            *v26 = 0LL;
LABEL_47:
            if ( !v25[692] )
              goto LABEL_141;
            v27 = *v26;
            v7 = a1;
            v90 = v27;
            goto LABEL_49;
          }
          *((_DWORD *)v20 + 4) = a5;
          *((_QWORD *)v20 + 4) = v15;
          v28 = a3;
          *(_QWORD *)v20 = a1;
          *((_QWORD *)v20 + 3) = v22;
          *((_QWORD *)v20 + 1) = RcvLinkSpeedIndicateUp;
          *((_DWORD *)v20 + 10) = a3;
          *((_DWORD *)v20 + 11) = v14;
          ndisSortNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)v20, (__int64)v22, v16);
          v25 = P;
          v29 = (struct _NET_BUFFER_LIST **)((char *)P + 64);
          v89 = (struct _NET_BUFFER_LIST **)((char *)P + 64);
          if ( !*((_QWORD *)P + 8) )
          {
            v26 = (struct _NET_BUFFER_LIST **)((char *)P + 64);
            if ( !*((_DWORD *)P + 172) )
            {
LABEL_46:
              v11 = v84;
              goto LABEL_47;
            }
            v28 = a3;
          }
          if ( !*(_QWORD *)RcvLinkSpeedIndicateUp || v28 )
          {
            *((_BYTE *)P + 692) = 1;
          }
          else
          {
            ndisIndicateXlatedPacketsToNdis5Protocols((struct _NDIS_NBL_RCV_TRACKER *)P);
            v25 = P;
          }
          v26 = v29;
          if ( !v24 )
          {
            v30 = *(struct _NDIS_OPEN_BLOCK **)(RcvLinkSpeedIndicateUp + 8);
            if ( v30 )
            {
              v31 = *((_DWORD *)v25 + 172);
              v32 = *((_DWORD *)v25 + 4) | 2;
              do
              {
                v33 = 0;
                FilterNextOpen = v30->FilterNextOpen;
                v34 = P;
                do
                {
                  v35 = v33++;
                  v36 = (struct _NET_BUFFER_LIST *)v34[5 * v35 + 8];
                  if ( v36 )
                    ndisMIndicateNetBufferListsToOpen(
                      v30,
                      v36,
                      (unsigned __int8 *)*((unsigned int *)v34 + 10),
                      v34[5 * v35 + 10],
                      v32);
                }
                while ( v33 <= v31 );
                v30 = FilterNextOpen;
              }
              while ( FilterNextOpen );
              RcvLinkSpeedIndicateUp = (unsigned __int64)v90;
              v29 = v89;
            }
            v37 = *(struct _NDIS_OPEN_BLOCK **)(RcvLinkSpeedIndicateUp + 16);
            if ( v37 )
            {
              if ( v12 )
              {
                ndisIndicateAllNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)P, v37);
              }
              else
              {
                v38 = (struct _NDIS_OPEN_BLOCK **)P;
                v39 = *((_DWORD *)P + 4);
                v40 = *((_DWORD *)P + 10);
                v41 = *((_DWORD *)P + 172);
                if ( *(_DWORD *)(*(_QWORD *)P + 2244LL) )
                  ndisIndicateToPmodeOpens((struct _NDIS_NBL_RCV_TRACKER *)P);
                for ( i = 1; i <= v41; ++i )
                {
                  v43 = i;
                  ndisMIndicateNetBufferListsToOpen(
                    v38[5 * v43 + 7],
                    (struct _NET_BUFFER_LIST *)v38[5 * v43 + 8],
                    (unsigned __int8 *)v40,
                    (unsigned int)v38[5 * v43 + 10],
                    v39);
                }
              }
            }
            v25 = P;
            v26 = v29;
          }
          goto LABEL_46;
        }
      }
    }
    P = (PVOID)ExAllocatePool2(66LL, 696LL, 538985550);
    v20 = (char *)P;
    if ( P )
      goto LABEL_12;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        4u,
        0xBu,
        (struct _GUID *)&WPP_36f24d049e8d3fc3e46fb027110f7201_Traceguids);
    v27 = v13;
    v90 = v13;
LABEL_49:
    if ( !v27 )
      goto LABEL_141;
    if ( byte_1C00F5390 && (v7[6].DroppedSendNbls & 2) != 0 )
      PktMonClientNblDropNdis((_DWORD)v7 + 5808, (_DWORD)v27, (_DWORD)v16, 1, -1073676270, -536866809);
    if ( v11 )
      goto LABEL_141;
    v95 = -1;
    FilterFriendlyName = (int)v7->FilterFriendlyName;
    NewIrql = 2;
    value = 0LL;
    v94 = 0LL;
    if ( FilterFriendlyName || *(_DWORD *)&v7->Ref.ReferenceCount )
    {
      LODWORD(v94) = FilterFriendlyName;
      HIDWORD(v94) = *(_DWORD *)&v7->Ref.ReferenceCount;
      value = v7->FilterInstanceName.__ptr_.__value_;
      if ( !value )
        value = v7->FilterInstanceName.__ptr_.__value_;
    }
    v45 = v27;
    do
    {
      v45->Flags = v45->Flags & 0xFFFFFFF4 | 8;
      v45 = (struct _NET_BUFFER_LIST *)v45->Link.Alignment;
    }
    while ( v45 );
    if ( Microsoft_Windows_Networking_CorrelationEnabled || byte_1C00F5390 )
      ndisMarkNetBufferListCorrelationIdsAsUsed(v27);
    if ( LODWORD(v7[3].NextSendNetBufferListsContext) )
    {
      v27 = ndisReturnPeriodicReceives((struct _NDIS_MINIPORT_BLOCK *)v7, v27);
      v90 = v27;
    }
    if ( !v27 )
      goto LABEL_141;
    v46 = *(unsigned int *)ndisNblTrackerMode;
    if ( !*(_DWORD *)ndisNblTrackerMode )
      goto LABEL_104;
    v47 = *(_QWORD *)&v7[2].IfIndex;
    v48 = 0LL;
    v49 = ndisNblTrackerEpoch;
    LOBYTE(v101) = v85;
    FilterNextOpen = 0LL;
    v89 = 0LL;
    v81 = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
      ndisNblTrackerRecordEventInternal((unsigned __int64)v27, 0LL, 0x87u, v47, v85);
    v50 = v47 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v50 & 1) != 0 )
    {
      v51 = *(_BYTE **)((v50 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v46 = 2LL * (v49 & 1);
      v50 |= v46;
    }
    else
    {
      v51 = (_BYTE *)v50;
    }
    v52 = (_SLIST_HEADER *)v27;
    v92 = v51;
    do
    {
      Region = v52[22].Region;
      v54 = v89;
      while ( v52[22].Region == Region )
      {
        if ( Region )
        {
          if ( (Region & 4) != 0 )
            goto LABEL_82;
        }
        else if ( !v52[7].Region )
        {
          v52[7].Region = ndisSourceHandleFromOwner(0LL);
        }
        v55 = (_BYTE *)v52[7].Region;
        if ( v55 )
        {
          if ( *v55 == 5 || (unsigned __int8)(*v55 - 17) <= 1u )
          {
            if ( v55 != v51 || v52[1].Region )
            {
              v48 = (struct _NDIS_OPEN_BLOCK *)((char *)v48 + 1);
              v46 = v50;
            }
            else
            {
              v54 = (struct _NET_BUFFER_LIST **)((char *)v54 + 1);
              v46 = 24LL;
              v48 = (struct _NDIS_OPEN_BLOCK *)((char *)v48 + 1);
            }
            goto LABEL_83;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v80) = (unsigned __int8)*v55;
            WPP_RECORDER_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              3u,
              0x1Bu,
              0xCu,
              (struct _GUID *)&WPP_1f4f9304c13d30d166c4c68f5fb6e586_Traceguids,
              (char)v52,
              v80);
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
            v52);
        }
LABEL_82:
        v51 = v92;
        v46 = v50 | 4;
LABEL_83:
        v52[22].Region = v46;
        v52 = (_SLIST_HEADER *)v52->Alignment;
        if ( !v52 )
          break;
      }
      v89 = v54;
      if ( (Region & 1) != 0 )
        ndisNblTrackerUpdateOwnershipCount(Region, (char *)FilterNextOpen - (char *)v48, (char *)&v101, &v81);
      v51 = v92;
      FilterNextOpen = v48;
    }
    while ( v52 );
    v56 = (char *)v48 - (char *)v89;
    v27 = v90;
    if ( (v50 & 1) != 0 && v56 )
    {
      LOBYTE(v46) = v101;
      if ( !(_BYTE)v101 && !v81 )
      {
        LOBYTE(v46) = KeGetCurrentIrql() == 2;
        LOBYTE(v101) = v46;
      }
      v7 = a1;
      v57 = v50 >> 1;
      v58 = v50 & 0xFFFFFFFFFFFFFFF8uLL;
      v59 = 2 * (v57 & 1);
      if ( (_BYTE)v46 )
      {
        v46 = KeGetPcr()->Prcb.Number << 12;
        v60 = (_QWORD *)(*(_QWORD *)(v58 + 8 * v59 + 40) + (unsigned int)v46);
        *v60 += v56;
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v58 + 8 * v59 + 48), v56);
      }
    }
    else
    {
      v7 = a1;
    }
LABEL_104:
    v61 = v85;
    if ( (v94 & 0x2000000000LL) != 0 )
    {
      if ( !v85 )
        NewIrql = KfRaiseIrql(2u);
      ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&value, 5u);
    }
    IfBlock = (struct _NDIS_FILTER_BLOCK *)v7[2].IfBlock;
    Flink = (void (__fastcall *)(__int64))v7[2].PktMonComp.ListLink.Flink;
    NextReturnNetBufferListsContext = *(_QWORD *)v7[2].InterfaceGuid.Data4;
    if ( IfBlock->Header.Type == 17 )
      goto LABEL_136;
    if ( !v61 && KeGetCurrentIrql() != 2 )
    {
      if ( v7->Header.Type == 5 )
      {
        if ( ndisExpandDataPathStack<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>(
               (__int64)v27,
               v65,
               v66,
               0,
               IfBlock,
               NextReturnNetBufferListsContext,
               (void (__fastcall *)(__int64, __int64, _QWORD))Flink) < 0 )
          ndisQueueStackExpansionFallbackNbls(v7, v27, 0);
        goto LABEL_137;
      }
LABEL_136:
      ((void (__fastcall *)(__int64, struct _NET_BUFFER_LIST *, _QWORD))Flink)(
        NextReturnNetBufferListsContext,
        v27,
        v61);
      goto LABEL_137;
    }
    LODWORD(v46) = KeGetPcr()->Prcb.Number;
    v67 = v97;
    v27->Scratch = 0LL;
    v27->ChildRefCount = v61;
    v68 = IfBlock->Header.Type == 5;
    v101 = v46;
    v97[2] = 0LL;
    v97[0] = v27;
    v97[1] = v27;
    if ( v68 )
    {
      while ( *v67 )
      {
        v69 = IfBlock;
        v70 = (__int64)IfBlock->IterativeDataPathTracker[v46];
        if ( *(_BYTE *)(v70 + 88) )
        {
          ndisIterativeDPInvokeHandlerOnTracker<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>(
            IfBlock,
            Flink,
            NextReturnNetBufferListsContext,
            v67);
          v27 = (struct _NET_BUFFER_LIST *)*v67;
          goto LABEL_127;
        }
        *(_BYTE *)(v70 + 88) = 1;
        v71 = *v67;
        *v67 = 0LL;
        if ( v71 )
        {
          do
          {
            v72 = ndisVerifierNdisDispatch;
            v73 = *(unsigned int *)(v71 + 132);
            v74 = *(_QWORD *)(v71 + 112);
            *(_DWORD *)(v71 + 132) = 0;
            if ( v72 && IfBlock->Header.Type == 5 && IfBlock->VerifierContext )
              (*((void (__fastcall **)(__int64, __int64, __int64))v72 + 17))(NextReturnNetBufferListsContext, v71, v73);
            else
              ((void (__fastcall *)(__int64, __int64, __int64))Flink)(NextReturnNetBufferListsContext, v71, v73);
            v71 = v74;
          }
          while ( v74 );
        }
        v46 = v101;
        v67 = (__int64 *)(v70 + 72);
        *(_BYTE *)(v70 + 88) = 0;
        IfBlock = (struct _NDIS_FILTER_BLOCK *)IfBlock->NextReturnNetBufferListsObject;
        Flink = (void (__fastcall *)(__int64))v69->NextReturnNetBufferListsHandler;
        NextReturnNetBufferListsContext = (__int64)v69->NextReturnNetBufferListsContext;
        if ( IfBlock->Header.Type != 5 )
        {
          v27 = *(struct _NET_BUFFER_LIST **)(v70 + 72);
          goto LABEL_127;
        }
      }
    }
    else
    {
LABEL_127:
      if ( v27 )
      {
        *v67 = 0LL;
        do
        {
          v75 = ndisVerifierNdisDispatch;
          ChildRefCount = (unsigned int)v27->ChildRefCount;
          Scratch = (struct _NET_BUFFER_LIST *)v27->Scratch;
          v27->ChildRefCount = 0;
          if ( v75 && IfBlock->Header.Type == 5 && IfBlock->VerifierContext )
            (*((void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, __int64))v75 + 17))(
              NextReturnNetBufferListsContext,
              v27,
              ChildRefCount);
          else
            ((void (__fastcall *)(__int64, struct _NET_BUFFER_LIST *, __int64))Flink)(
              NextReturnNetBufferListsContext,
              v27,
              ChildRefCount);
          v27 = Scratch;
        }
        while ( Scratch );
      }
    }
LABEL_137:
    if ( (v94 & 0x2000000000LL) != 0 )
    {
      ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&value, 5u, 18LL);
      if ( NewIrql != 2 )
        KeLowerIrql(NewIrql);
    }
    v11 = v84;
LABEL_141:
    v12 = v11;
    if ( v83 )
    {
      --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v87);
    }
    else if ( P )
    {
      ExFreePoolWithTag(P, 0);
    }
    v8 = v88;
    if ( v11 )
    {
      if ( v88->Link.Alignment )
      {
        v8 = v96;
        v88 = v96;
        v78 = (struct _NET_BUFFER_LIST *)v96->Link.Alignment;
        if ( v96->Link.Alignment )
        {
          do
          {
            v79 = (struct _NET_BUFFER_LIST *)v78->Link.Alignment;
            v8 = v78;
            v88 = v78;
            v78 = v79;
          }
          while ( v79 );
        }
      }
      result = (unsigned __int64)v99;
      v8->Link.Alignment = (unsigned __int64)v99;
    }
    else
    {
      result = (unsigned __int64)v99;
    }
    v7 = a1;
    v10 = v85;
    v9 = a6;
  }
  while ( result );
  return result;
}
