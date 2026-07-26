/*
 * XREFs of ndisMIndicateSplitNblChain @ 0x1C00A41C4
 * Callers:
 *     ?ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0039800 (-ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
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

struct _NET_BUFFER_LIST *__fastcall ndisMIndicateSplitNblChain(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  struct _NET_BUFFER_LIST *result; // rax
  struct _NDIS_FILTER_BLOCK *v7; // rsi
  _SLIST_HEADER *v8; // rdx
  unsigned int v9; // ecx
  unsigned int v10; // r8d
  struct _NET_BUFFER_LIST *v11; // r13
  unsigned int v12; // edi
  struct _NET_BUFFER_LIST *v13; // r15
  unsigned int Number; // r14d
  struct _NDIS_RCV_TRACKER_ARRAY *v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // rcx
  char *v19; // r12
  struct _NET_BUFFER_LIST *Alignment; // rcx
  unsigned __int64 RcvLinkSpeedIndicateUp; // r14
  __int64 v22; // rsi
  int v23; // r8d
  struct _NET_BUFFER_LIST *v24; // r14
  struct _NDIS_OPEN_BLOCK *v25; // rdi
  unsigned int v26; // r14d
  unsigned int v27; // r13d
  struct _NDIS_OPEN_BLOCK *FilterNextOpen; // r15
  unsigned int v29; // esi
  __int64 v30; // rcx
  struct _NET_BUFFER_LIST *v31; // rdx
  struct _NDIS_OPEN_BLOCK *v32; // rdx
  unsigned int v33; // r14d
  unsigned int v34; // r15d
  unsigned int v35; // esi
  unsigned int i; // edi
  __int64 v37; // rax
  unsigned int v38; // r15d
  int FilterFriendlyName; // eax
  struct _NET_BUFFER_LIST *v40; // rcx
  __int64 v41; // rax
  unsigned __int64 NextDirectRequestHandle; // rdi
  __int64 v43; // r13
  char v44; // si
  unsigned __int64 v45; // rdi
  unsigned __int64 v46; // rcx
  _BYTE *v47; // r8
  _SLIST_HEADER *v48; // r15
  unsigned __int64 Region; // rsi
  __int64 v50; // r12
  _BYTE *v51; // rcx
  unsigned __int64 v52; // r13
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // rdi
  __int64 v55; // rdx
  _QWORD *v56; // rcx
  struct _NDIS_FILTER_BLOCK *v57; // rdi
  void (__fastcall *Flink)(__int64); // r15
  __int64 IfBlock; // r13
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 *v62; // rsi
  unsigned int v63; // ecx
  bool v64; // zf
  struct _NDIS_FILTER_BLOCK *v65; // r8
  __int64 v66; // r14
  __int64 v67; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v68; // rax
  __int64 v69; // r8
  __int64 v70; // rsi
  struct _VF_NDIS_DISPATCH_TABLE *v71; // rax
  __int64 ChildRefCount; // r8
  struct _NET_BUFFER_LIST *Scratch; // rsi
  _SLIST_HEADER *v74; // rcx
  _SLIST_HEADER *v75; // rax
  __int64 v76; // [rsp+38h] [rbp-89h]
  char v77; // [rsp+48h] [rbp-79h] BYREF
  KIRQL NewIrql; // [rsp+49h] [rbp-78h]
  char v79; // [rsp+4Ah] [rbp-77h]
  unsigned int v80; // [rsp+4Ch] [rbp-75h]
  unsigned int v81; // [rsp+50h] [rbp-71h]
  unsigned int v82; // [rsp+54h] [rbp-6Dh]
  _SLIST_HEADER *v83; // [rsp+58h] [rbp-69h]
  unsigned __int64 v84; // [rsp+60h] [rbp-61h]
  __int64 Pool2; // [rsp+68h] [rbp-59h]
  _BYTE *v86; // [rsp+70h] [rbp-51h]
  __int64 v87; // [rsp+78h] [rbp-49h]
  struct _NET_BUFFER_LIST *v88; // [rsp+80h] [rbp-41h]
  Rtl::KString *value; // [rsp+88h] [rbp-39h] BYREF
  __int64 v90; // [rsp+90h] [rbp-31h]
  int v91; // [rsp+98h] [rbp-29h]
  struct _NET_BUFFER_LIST *v92; // [rsp+A0h] [rbp-21h]
  _QWORD v93[12]; // [rsp+A8h] [rbp-19h] BYREF
  struct _NET_BUFFER_LIST *v95; // [rsp+120h] [rbp+5Fh]
  unsigned int v97; // [rsp+130h] [rbp+6Fh] BYREF

  v97 = a4;
  v95 = a2;
  result = a2;
  v83 = 0LL;
  v7 = a1;
  v8 = 0LL;
  if ( !result )
    return result;
  v9 = a5 & 1;
  v10 = a6;
  v80 = a5 & 2;
  v81 = v9;
  do
  {
    v92 = result;
    v11 = result;
    v12 = 0;
    if ( v10 )
    {
      do
      {
        if ( !result )
          break;
        ++v12;
        v8 = (_SLIST_HEADER *)result;
        result = (struct _NET_BUFFER_LIST *)result->Link.Alignment;
      }
      while ( v12 < v10 );
      v83 = v8;
      v95 = result;
    }
    v8->Alignment = 0LL;
    v13 = 0LL;
    v82 = 0;
    v79 = 0;
    if ( v9 || KeGetCurrentIrql() == 2 )
    {
      if ( ndisPerProcRcvTrackers )
      {
        Number = KeGetPcr()->Prcb.Number;
        v15 = ndisPerProcRcvTrackers;
        v16 = 2096LL * Number;
        v82 = Number;
        v17 = *(unsigned int *)((char *)ndisPerProcRcvTrackers + v16);
        if ( (unsigned int)v17 < 3 )
        {
          v79 = 1;
          v18 = v16 + 696 * v17;
          v19 = (char *)ndisPerProcRcvTrackers + v18 + 8;
          *(_DWORD *)((char *)ndisPerProcRcvTrackers + v16) = v17 + 1;
          Pool2 = (__int64)v15 + v18 + 8;
LABEL_12:
          Alignment = v11;
          RcvLinkSpeedIndicateUp = v7->RcvLinkSpeedIndicateUp;
          v84 = RcvLinkSpeedIndicateUp;
          v19[692] = 0;
          if ( !v80 )
          {
            do
            {
              v13 = Alignment;
              Alignment->Flags = Alignment->Flags & 0xFFFFFFF0 | 4;
              Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
            }
            while ( Alignment );
          }
          v22 = *(_QWORD *)(RcvLinkSpeedIndicateUp + 328);
          if ( v22 && *(_BYTE *)(*(_QWORD *)(v22 + 24) + 56LL) >= 6u )
          {
            ndisMIndicateNetBufferListsToOpen(
              *(struct _NDIS_OPEN_BLOCK **)(RcvLinkSpeedIndicateUp + 328),
              v11,
              (char *)a3,
              v12,
              a5);
            *((_QWORD *)v19 + 8) = 0LL;
            *((_DWORD *)v19 + 20) = 0;
          }
          else
          {
            *((_DWORD *)v19 + 4) = a5;
            *((_QWORD *)v19 + 4) = v13;
            *(_QWORD *)v19 = a1;
            *((_QWORD *)v19 + 3) = v11;
            *((_QWORD *)v19 + 1) = RcvLinkSpeedIndicateUp;
            *((_DWORD *)v19 + 10) = a3;
            *((_DWORD *)v19 + 11) = v12;
            ndisSortNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)v19);
            if ( *((_QWORD *)v19 + 8) || *((_DWORD *)v19 + 172) )
            {
              if ( !*(_QWORD *)RcvLinkSpeedIndicateUp || a3 )
                v19[692] = 1;
              else
                ndisIndicateXlatedPacketsToNdis5Protocols((struct _NDIS_NBL_RCV_TRACKER *)v19);
              if ( !v22 )
              {
                v25 = *(struct _NDIS_OPEN_BLOCK **)(RcvLinkSpeedIndicateUp + 8);
                if ( v25 )
                {
                  v26 = *((_DWORD *)v19 + 172);
                  v27 = *((_DWORD *)v19 + 4) | 2;
                  do
                  {
                    FilterNextOpen = v25->FilterNextOpen;
                    v29 = 0;
                    do
                    {
                      v30 = v29++;
                      v31 = *(struct _NET_BUFFER_LIST **)&v19[40 * v30 + 64];
                      if ( v31 )
                        ndisMIndicateNetBufferListsToOpen(
                          v25,
                          v31,
                          (char *)*((unsigned int *)v19 + 10),
                          *(_DWORD *)&v19[40 * v30 + 80],
                          v27);
                    }
                    while ( v29 <= v26 );
                    v25 = FilterNextOpen;
                  }
                  while ( FilterNextOpen );
                  RcvLinkSpeedIndicateUp = v84;
                }
                v32 = *(struct _NDIS_OPEN_BLOCK **)(RcvLinkSpeedIndicateUp + 16);
                if ( v32 )
                {
                  if ( v80 )
                  {
                    ndisIndicateAllNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)v19, v32);
                  }
                  else
                  {
                    v33 = *((_DWORD *)v19 + 4);
                    v34 = *((_DWORD *)v19 + 10);
                    v35 = *((_DWORD *)v19 + 172);
                    if ( *(_DWORD *)(*(_QWORD *)v19 + 2244LL) )
                      ndisIndicateToPmodeOpens((struct _NDIS_NBL_RCV_TRACKER *)v19);
                    for ( i = 1; i <= v35; ++i )
                    {
                      v37 = i;
                      ndisMIndicateNetBufferListsToOpen(
                        *(struct _NDIS_OPEN_BLOCK **)&v19[40 * v37 + 56],
                        *(struct _NET_BUFFER_LIST **)&v19[40 * v37 + 64],
                        (char *)v34,
                        *(_DWORD *)&v19[40 * v37 + 80],
                        v33);
                    }
                  }
                }
              }
            }
          }
          if ( !v19[692] )
            goto LABEL_138;
          v24 = (struct _NET_BUFFER_LIST *)*((_QWORD *)v19 + 8);
          v7 = a1;
          v88 = v24;
          goto LABEL_46;
        }
      }
    }
    Pool2 = ExAllocatePool2(66LL, 696LL, 538985550);
    v19 = (char *)Pool2;
    if ( Pool2 )
      goto LABEL_12;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        4u,
        0xBu,
        (struct _GUID *)&WPP_b73066c8574e3d1b9eeedc46f4c32798_Traceguids);
    v24 = v11;
    v88 = v11;
LABEL_46:
    if ( !v24 )
      goto LABEL_138;
    if ( byte_1C00EC210 && (v7[6].PhysicalMediaType & 2) != 0 )
      PktMonClientNblDropNdis((_DWORD)v7 + 5808, (_DWORD)v24, v23, 1, -1073676270, -536866809);
    v38 = v80;
    if ( v80 )
      goto LABEL_139;
    v91 = -1;
    FilterFriendlyName = (int)v7->FilterFriendlyName;
    NewIrql = 2;
    value = 0LL;
    v90 = 0LL;
    if ( FilterFriendlyName || *(_DWORD *)&v7->Ref.ReferenceCount )
    {
      LODWORD(v90) = FilterFriendlyName;
      HIDWORD(v90) = *(_DWORD *)&v7->Ref.ReferenceCount;
      value = v7->FilterInstanceName.__ptr_.__value_;
      if ( !value )
        value = v7->FilterInstanceName.__ptr_.__value_;
    }
    v40 = v24;
    do
    {
      v40->Flags = v40->Flags & 0xFFFFFFF4 | 8;
      v40 = (struct _NET_BUFFER_LIST *)v40->Link.Alignment;
    }
    while ( v40 );
    if ( Microsoft_Windows_Networking_CorrelationEnabled || byte_1C00EC210 )
      ndisMarkNetBufferListCorrelationIdsAsUsed(v24);
    if ( LODWORD(v7[3].NextSendNetBufferListsCompleteHandler) )
    {
      v24 = ndisReturnPeriodicReceives((struct _NDIS_MINIPORT_BLOCK *)v7, v24);
      v88 = v24;
    }
    if ( !v24 )
      goto LABEL_139;
    v41 = *(unsigned int *)ndisNblTrackerMode;
    if ( !*(_DWORD *)ndisNblTrackerMode )
      goto LABEL_101;
    NextDirectRequestHandle = (unsigned __int64)v7[2].NextDirectRequestHandle;
    v43 = 0LL;
    v44 = ndisNblTrackerEpoch;
    LOBYTE(v97) = v81;
    v84 = 0LL;
    v87 = 0LL;
    v77 = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
      ndisNblTrackerRecordEventInternal((unsigned __int64)v24, 0LL, 0x87u, NextDirectRequestHandle, v81);
    v45 = NextDirectRequestHandle & 0xFFFFFFFFFFFFFFFDuLL;
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
    v48 = (_SLIST_HEADER *)v24;
    v86 = v47;
    do
    {
      Region = v48[22].Region;
      v50 = v87;
      while ( v48[22].Region == Region )
      {
        if ( Region )
        {
          if ( (Region & 4) != 0 )
            goto LABEL_79;
        }
        else if ( !v48[7].Region )
        {
          v48[7].Region = ndisSourceHandleFromOwner(0LL);
        }
        v51 = (_BYTE *)v48[7].Region;
        if ( v51 )
        {
          if ( *v51 == 5 || (unsigned __int8)(*v51 - 17) <= 1u )
          {
            if ( v51 != v47 || v48[1].Region )
            {
              ++v43;
              v41 = v45;
            }
            else
            {
              ++v50;
              v41 = 24LL;
              ++v43;
            }
            goto LABEL_80;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v76) = (unsigned __int8)*v51;
            WPP_RECORDER_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              3u,
              0x1Bu,
              0xCu,
              (struct _GUID *)&WPP_44b390fadec23ba9bcae0cc9320a34b9_Traceguids,
              (char)v48,
              v76);
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
LABEL_79:
        v47 = v86;
        v41 = v45 | 4;
LABEL_80:
        v48[22].Region = v41;
        v48 = (_SLIST_HEADER *)v48->Alignment;
        if ( !v48 )
          break;
      }
      v87 = v50;
      if ( (Region & 1) != 0 )
        ndisNblTrackerUpdateOwnershipCount(Region, v84 - v43, (char *)&v97, &v77);
      v47 = v86;
      v84 = v43;
    }
    while ( v48 );
    v52 = v43 - v87;
    v24 = v88;
    v19 = (char *)Pool2;
    if ( (v45 & 1) != 0 && v52 )
    {
      LOBYTE(v41) = v97;
      if ( !(_BYTE)v97 && !v77 )
      {
        LOBYTE(v41) = KeGetCurrentIrql() == 2;
        LOBYTE(v97) = v41;
      }
      v7 = a1;
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
      v7 = a1;
    }
LABEL_101:
    if ( (v90 & 0x2000000000LL) != 0 )
    {
      if ( !v81 )
        NewIrql = KfRaiseIrql(2u);
      ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&value, 5u);
    }
    v57 = *(struct _NDIS_FILTER_BLOCK **)&v7[2].DirectOidRequestCount;
    Flink = (void (__fastcall *)(__int64))v7[2].PktMonComp.EdgeList.Flink;
    IfBlock = (__int64)v7[2].IfBlock;
    if ( v57->Header.Type == 17 )
      goto LABEL_134;
    if ( !v81 && KeGetCurrentIrql() != 2 )
    {
      if ( v7->Header.Type == 5 )
      {
        if ( ndisExpandDataPathStack<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>(
               (__int64)v24,
               v60,
               v61,
               v81,
               v57,
               IfBlock,
               (void (__fastcall *)(__int64, __int64, _QWORD))Flink) < 0 )
          ndisQueueStackExpansionFallbackNbls(v7, v24, 0);
        goto LABEL_135;
      }
LABEL_134:
      ((void (__fastcall *)(__int64, struct _NET_BUFFER_LIST *, _QWORD))Flink)(IfBlock, v24, v81);
      goto LABEL_135;
    }
    LODWORD(v41) = KeGetPcr()->Prcb.Number;
    v62 = v93;
    v63 = v81;
    v24->Scratch = 0LL;
    v24->ChildRefCount = v63;
    v64 = v57->Header.Type == 5;
    v97 = v41;
    v93[2] = 0LL;
    v93[0] = v24;
    v93[1] = v24;
    if ( v64 )
    {
      while ( *v62 )
      {
        v65 = v57;
        v66 = (__int64)v57->IterativeDataPathTracker[v41];
        if ( *(_BYTE *)(v66 + 88) )
        {
          ndisIterativeDPInvokeHandlerOnTracker<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>(
            v57,
            Flink,
            IfBlock,
            v62);
          v24 = (struct _NET_BUFFER_LIST *)*v62;
          goto LABEL_125;
        }
        *(_BYTE *)(v66 + 88) = 1;
        v67 = *v62;
        *v62 = 0LL;
        if ( v67 )
        {
          do
          {
            v68 = ndisVerifierNdisDispatch;
            v69 = *(unsigned int *)(v67 + 132);
            v70 = *(_QWORD *)(v67 + 112);
            *(_DWORD *)(v67 + 132) = 0;
            if ( v68 && v57->Header.Type == 5 && v57->VerifierContext )
              (*((void (__fastcall **)(__int64, __int64, __int64))v68 + 17))(IfBlock, v67, v69);
            else
              ((void (__fastcall *)(__int64, __int64, __int64))Flink)(IfBlock, v67, v69);
            v67 = v70;
          }
          while ( v70 );
          v65 = v57;
        }
        v41 = v97;
        v62 = (__int64 *)(v66 + 72);
        *(_BYTE *)(v66 + 88) = 0;
        v57 = (struct _NDIS_FILTER_BLOCK *)v57->NextReturnNetBufferListsObject;
        Flink = (void (__fastcall *)(__int64))v65->NextReturnNetBufferListsHandler;
        IfBlock = (__int64)v65->NextReturnNetBufferListsContext;
        if ( v57->Header.Type != 5 )
        {
          v24 = *(struct _NET_BUFFER_LIST **)(v66 + 72);
          goto LABEL_125;
        }
      }
    }
    else
    {
LABEL_125:
      if ( v24 )
      {
        *v62 = 0LL;
        do
        {
          v71 = ndisVerifierNdisDispatch;
          ChildRefCount = (unsigned int)v24->ChildRefCount;
          Scratch = (struct _NET_BUFFER_LIST *)v24->Scratch;
          v24->ChildRefCount = 0;
          if ( v71 && v57->Header.Type == 5 && v57->VerifierContext )
            (*((void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, __int64))v71 + 17))(
              IfBlock,
              v24,
              ChildRefCount);
          else
            ((void (__fastcall *)(__int64, struct _NET_BUFFER_LIST *, __int64))Flink)(IfBlock, v24, ChildRefCount);
          v24 = Scratch;
        }
        while ( Scratch );
      }
    }
LABEL_135:
    if ( (v90 & 0x2000000000LL) != 0 )
    {
      ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&value, 5u, 18LL);
      if ( NewIrql != 2 )
        KeLowerIrql(NewIrql);
    }
LABEL_138:
    v38 = v80;
LABEL_139:
    if ( v79 )
    {
      --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v82);
    }
    else if ( v19 )
    {
      ExFreePoolWithTag(v19, 0);
    }
    v8 = v83;
    if ( v38 )
    {
      if ( v83->Alignment )
      {
        v8 = (_SLIST_HEADER *)v92;
        v83 = (_SLIST_HEADER *)v92;
        v74 = (_SLIST_HEADER *)v92->Link.Alignment;
        if ( v92->Link.Alignment )
        {
          do
          {
            v75 = (_SLIST_HEADER *)v74->Alignment;
            v8 = v74;
            v83 = v74;
            v74 = v75;
          }
          while ( v75 );
        }
      }
      result = v95;
      v8->Alignment = (unsigned __int64)v95;
    }
    else
    {
      result = v95;
    }
    v7 = a1;
    v9 = v81;
    v10 = a6;
  }
  while ( result );
  return result;
}
