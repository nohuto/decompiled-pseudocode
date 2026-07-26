/*
 * XREFs of ?ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0011EB0
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

void __fastcall ndisMTopReceiveNetBufferLists(
        _DWORD *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v6; // r10d
  struct _NET_BUFFER_LIST *v7; // rbp
  _DWORD *v8; // r13
  struct _NET_BUFFER_LIST *v9; // rbx
  unsigned int v10; // edi
  unsigned int v11; // r15d
  unsigned int Number; // r14d
  struct _NDIS_RCV_TRACKER_ARRAY *v13; // r9
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  char *v17; // rsi
  _QWORD *v18; // r15
  struct _NET_BUFFER_LIST *Alignment; // rax
  int v20; // r13d
  struct _NDIS_OPEN_BLOCK *v21; // r14
  int v22; // r8d
  __int64 v23; // r9
  struct _NET_BUFFER_LIST **v24; // rbp
  struct _NDIS_OPEN_BLOCK *v25; // rbx
  unsigned int v26; // r13d
  unsigned int v27; // r14d
  struct _NDIS_OPEN_BLOCK *FilterNextOpen; // rbp
  __int64 v29; // rdi
  __int64 v30; // rcx
  struct _NET_BUFFER_LIST *v31; // rdx
  struct _NDIS_OPEN_BLOCK *v32; // rdx
  unsigned int v33; // ebp
  unsigned int v34; // r14d
  unsigned int v35; // edi
  unsigned int i; // ebx
  __int64 v37; // rdx
  int v38; // edi
  unsigned int v39; // r12d
  int v40; // eax
  struct _NET_BUFFER_LIST *v41; // rcx
  __int64 updated; // rax
  struct _NDIS_FILTER_BLOCK *v43; // rbx
  void (__fastcall *NextReturnNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int); // r14
  __int64 NextReturnNetBufferListsContext; // r15
  char v46; // di
  unsigned __int64 v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r14
  unsigned __int64 v51; // rbx
  unsigned __int8 *v52; // r13
  _SLIST_HEADER *v53; // r15
  unsigned __int64 Region; // rdi
  unsigned __int8 *v55; // rcx
  unsigned __int64 v56; // r14
  bool v57; // cl
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // rbx
  __int64 v60; // rdx
  _QWORD *v61; // rcx
  struct _NET_BUFFER_LIST **v62; // rdi
  bool v63; // zf
  struct _NDIS_FILTER_BLOCK *v64; // r13
  __int64 v65; // rbp
  struct _NET_BUFFER_LIST *v66; // rdx
  void **p_VerifierContext; // rdi
  struct _VF_NDIS_DISPATCH_TABLE *v68; // rax
  __int64 ChildRefCount; // r8
  struct _NET_BUFFER_LIST *Scratch; // r12
  void **v71; // rdi
  struct _VF_NDIS_DISPATCH_TABLE *v72; // rax
  __int64 v73; // r8
  struct _NET_BUFFER_LIST *v74; // r12
  int v75; // edx
  int v76; // r8d
  char v77[8]; // [rsp+30h] [rbp-A8h]
  char v78; // [rsp+40h] [rbp-98h] BYREF
  KIRQL v79; // [rsp+41h] [rbp-97h]
  char v80; // [rsp+42h] [rbp-96h]
  int v81; // [rsp+44h] [rbp-94h]
  unsigned int v82; // [rsp+48h] [rbp-90h]
  __int64 v83; // [rsp+50h] [rbp-88h]
  void (__fastcall *v84)(_QWORD, _QWORD); // [rsp+58h] [rbp-80h] BYREF
  __int64 v85; // [rsp+60h] [rbp-78h]
  int v86; // [rsp+68h] [rbp-70h]
  __int64 v87; // [rsp+70h] [rbp-68h]
  __int64 Pool2; // [rsp+78h] [rbp-60h]
  _QWORD v89[4]; // [rsp+80h] [rbp-58h] BYREF
  unsigned int v91; // [rsp+E0h] [rbp+8h]
  int v92; // [rsp+E8h] [rbp+10h] BYREF
  unsigned int v93; // [rsp+F0h] [rbp+18h]

  v93 = a3;
  v6 = a3;
  v7 = a2;
  v8 = a1;
  if ( (a2->NblFlags & 0x8000) != 0 )
  {
    (*((void (__fastcall **)(_DWORD *, struct _NET_BUFFER_LIST *))a1 + 268))(a1, a2);
    return;
  }
  if ( !*((_BYTE *)a1 + 2665) )
  {
    (*((void (__fastcall **)(_DWORD *))a1 + 267))(a1);
    return;
  }
  v9 = 0LL;
  v10 = a5;
  v11 = a5 & 1;
  v82 = 0;
  v81 = v11;
  v80 = 0;
  if ( (a5 & 1) == 0 )
  {
    if ( KeGetCurrentIrql() != 2 )
      goto LABEL_100;
    v6 = v93;
  }
  if ( ndisPerProcRcvTrackers )
  {
    Number = KeGetPcr()->Prcb.Number;
    v13 = ndisPerProcRcvTrackers;
    v14 = 2096LL * Number;
    v82 = Number;
    v15 = *(unsigned int *)((char *)ndisPerProcRcvTrackers + v14);
    if ( (unsigned int)v15 < 3 )
    {
      v80 = 1;
      v16 = v14 + 696 * v15;
      v17 = (char *)ndisPerProcRcvTrackers + v16 + 8;
      *(_DWORD *)((char *)ndisPerProcRcvTrackers + v14) = v15 + 1;
      Pool2 = (__int64)v13 + v16 + 8;
LABEL_7:
      v18 = (_QWORD *)*((_QWORD *)v8 + 50);
      Alignment = v7;
      v17[692] = 0;
      v20 = v10 & 2;
      v92 = v20;
      if ( (v10 & 2) == 0 )
      {
        do
        {
          v9 = Alignment;
          Alignment->Flags = Alignment->Flags & 0xFFFFFFF0 | 4;
          Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
        }
        while ( Alignment );
      }
      v21 = (struct _NDIS_OPEN_BLOCK *)v18[41];
      if ( v21 && v21->ProtocolHandle->MajorNdisVersion >= 6u )
      {
        ndisMIndicateNetBufferListsToOpen(v21, v7, v6, a4, v10);
        v24 = (struct _NET_BUFFER_LIST **)(v17 + 64);
        *((_DWORD *)v17 + 20) = 0;
        *((_QWORD *)v17 + 8) = 0LL;
      }
      else
      {
        *(_QWORD *)v17 = a1;
        *((_QWORD *)v17 + 3) = v7;
        *((_QWORD *)v17 + 1) = v18;
        *((_DWORD *)v17 + 4) = v10;
        *((_QWORD *)v17 + 4) = v9;
        *((_DWORD *)v17 + 10) = v6;
        *((_DWORD *)v17 + 11) = a4;
        ndisSortNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)v17);
        if ( *((_QWORD *)v17 + 8) || (v24 = (struct _NET_BUFFER_LIST **)(v17 + 64), *((_DWORD *)v17 + 172)) )
        {
          if ( !*v18 || v93 )
            v17[692] = 1;
          else
            ndisIndicateXlatedPacketsToNdis5Protocols((struct _NDIS_NBL_RCV_TRACKER *)v17);
          v24 = (struct _NET_BUFFER_LIST **)(v17 + 64);
          if ( !v21 )
          {
            v25 = (struct _NDIS_OPEN_BLOCK *)v18[1];
            if ( v25 )
            {
              v26 = *((_DWORD *)v17 + 172);
              v27 = *((_DWORD *)v17 + 4) | 2;
              do
              {
                FilterNextOpen = v25->FilterNextOpen;
                v29 = 0LL;
                do
                {
                  v30 = (unsigned int)v29;
                  v31 = *(struct _NET_BUFFER_LIST **)&v17[40 * v29 + 64];
                  v29 = (unsigned int)(v29 + 1);
                  if ( v31 )
                    ndisMIndicateNetBufferListsToOpen(
                      v25,
                      v31,
                      *((_DWORD *)v17 + 10),
                      *(_DWORD *)&v17[40 * v30 + 80],
                      v27);
                }
                while ( (unsigned int)v29 <= v26 );
                v25 = FilterNextOpen;
              }
              while ( FilterNextOpen );
              v20 = v92;
            }
            v32 = (struct _NDIS_OPEN_BLOCK *)v18[2];
            if ( v32 )
            {
              if ( v20 )
              {
                ndisIndicateAllNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)v17, v32);
              }
              else
              {
                v33 = *((_DWORD *)v17 + 4);
                v34 = *((_DWORD *)v17 + 10);
                v35 = *((_DWORD *)v17 + 172);
                if ( *(_DWORD *)(*(_QWORD *)v17 + 2244LL) )
                  ndisIndicateToPmodeOpens((struct _NDIS_NBL_RCV_TRACKER *)v17);
                for ( i = 1; i <= v35; ++i )
                {
                  v37 = i;
                  ndisMIndicateNetBufferListsToOpen(
                    *(struct _NDIS_OPEN_BLOCK **)&v17[40 * v37 + 56],
                    *(struct _NET_BUFFER_LIST **)&v17[40 * v37 + 64],
                    v34,
                    *(_DWORD *)&v17[40 * v37 + 80],
                    v33);
                }
              }
            }
            v24 = (struct _NET_BUFFER_LIST **)(v17 + 64);
          }
        }
      }
      v38 = v20;
      if ( !v17[692] )
        goto LABEL_33;
      v7 = *v24;
      v8 = a1;
      v11 = v81;
      goto LABEL_32;
    }
  }
LABEL_100:
  Pool2 = ExAllocatePool2(66LL, 696LL, 538985550);
  v17 = (char *)Pool2;
  if ( Pool2 )
  {
    v6 = v93;
    goto LABEL_7;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      4u,
      0xBu,
      (struct _GUID *)&WPP_36f24d049e8d3fc3e46fb027110f7201_Traceguids);
  v38 = v10 & 2;
LABEL_32:
  if ( !v7 )
    goto LABEL_33;
  if ( byte_1C00F5390 && (v8[1466] & 2) != 0 )
    PktMonClientNblDropNdis((_DWORD)v8 + 5808, (_DWORD)v7, v22, 1, -1073676270, -536866809);
  if ( v38 )
    goto LABEL_33;
  v39 = 0;
  v81 = 0;
  if ( v11 )
  {
    v39 = 1;
    v81 = 1;
  }
  v40 = v8[12];
  v79 = 2;
  v84 = 0LL;
  v85 = 0LL;
  v86 = -1;
  if ( v40 || v8[20] )
  {
    LODWORD(v85) = v40;
    HIDWORD(v85) = v8[20];
    v84 = (void (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)v8 + 5);
    if ( !v84 )
      v84 = (void (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)v8 + 5);
  }
  v41 = v7;
  do
  {
    v41->Flags = v41->Flags & 0xFFFFFFF4 | 8;
    v41 = (struct _NET_BUFFER_LIST *)v41->Link.Alignment;
  }
  while ( v41 );
  if ( Microsoft_Windows_Networking_CorrelationEnabled
    || byte_1C00F5390 != (_BYTE)Microsoft_Windows_Networking_CorrelationEnabled )
  {
    ndisMarkNetBufferListCorrelationIdsAsUsed(v7);
  }
  if ( v8[806] )
    v7 = ndisReturnPeriodicReceives((struct _NDIS_MINIPORT_BLOCK *)v8, v7);
  if ( !v7 )
    goto LABEL_33;
  updated = *(unsigned int *)ndisNblTrackerMode;
  if ( !*(_DWORD *)ndisNblTrackerMode )
    goto LABEL_53;
  v46 = ndisNblTrackerEpoch;
  v47 = *((_QWORD *)v8 + 317);
  v48 = 0LL;
  LOBYTE(v92) = v39 != 0;
  v49 = 0LL;
  v87 = 0LL;
  v50 = 0LL;
  v83 = 0LL;
  v78 = 0;
  if ( *(int *)ndisNblTrackerMode >= 3 )
  {
    ndisNblTrackerRecordEventInternal(v7, 0LL, 0x87u, (void *)v47, v39 != 0);
    v49 = 0LL;
  }
  v51 = v47 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v51 & 1) != 0 )
  {
    v52 = *(unsigned __int8 **)((v51 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    updated = 2LL * (v46 & 1);
    v51 |= updated;
  }
  else
  {
    v52 = (unsigned __int8 *)v51;
  }
  v53 = (_SLIST_HEADER *)v7;
  do
  {
    Region = v53[22].Region;
    while ( v53[22].Region == Region )
    {
      if ( Region )
      {
        if ( (Region & 4) != 0 )
          goto LABEL_119;
      }
      else if ( !v53[7].Region )
      {
        v53[7].Region = ndisSourceHandleFromOwner(0LL, v48, v49, v23);
      }
      v55 = (unsigned __int8 *)v53[7].Region;
      if ( v55 )
      {
        v48 = *v55;
        if ( (unsigned __int8)(v48 - 17) <= 1u || (_BYTE)v48 == 5 )
        {
          if ( v55 != v52 || v53[1].Region )
          {
            ++v50;
            updated = v51;
          }
          else
          {
            ++v49;
            updated = 24LL;
            v83 = v49;
            ++v50;
          }
          goto LABEL_71;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v77 = *v55;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            0x1Bu,
            0xCu,
            (struct _GUID *)&WPP_1f4f9304c13d30d166c4c68f5fb6e586_Traceguids,
            (char)v53,
            *(_QWORD *)v77);
          goto LABEL_118;
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
          v53);
LABEL_118:
        v49 = v83;
      }
LABEL_119:
      updated = v51 | 4;
LABEL_71:
      v53[22].Region = updated;
      v53 = (_SLIST_HEADER *)v53->Alignment;
      if ( !v53 )
        break;
    }
    if ( (Region & 1) != 0 )
    {
      updated = ndisNblTrackerUpdateOwnershipCount(Region, v87 - v50, &v92, &v78);
      v49 = v83;
    }
    v87 = v50;
  }
  while ( v53 );
  v17 = (char *)Pool2;
  v56 = v50 - v49;
  v39 = v81;
  if ( (v51 & 1) != 0 && v56 )
  {
    v57 = v92;
    if ( !(_BYTE)v92 && !v78 )
    {
      v57 = KeGetCurrentIrql() == 2;
      LOBYTE(v92) = v57;
    }
    v8 = a1;
    v58 = v51 >> 1;
    v59 = v51 & 0xFFFFFFFFFFFFFFF8uLL;
    v60 = 2 * (v58 & 1);
    if ( v57 )
    {
      updated = KeGetPcr()->Prcb.Number << 12;
      v61 = (_QWORD *)(*(_QWORD *)(v59 + 8 * v60 + 40) + (unsigned int)updated);
      *v61 += v56;
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v59 + 8 * v60 + 48), v56);
    }
  }
  else
  {
    v8 = a1;
  }
LABEL_53:
  if ( (v85 & 0x2000000000LL) != 0 )
  {
    if ( !v39 )
      v79 = KfRaiseIrql(2u);
    ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&v84, 5u);
  }
  v43 = (struct _NDIS_FILTER_BLOCK *)*((_QWORD *)v8 + 318);
  NextReturnNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))*((_QWORD *)v8 + 330);
  NextReturnNetBufferListsContext = *((_QWORD *)v8 + 316);
  if ( v43->Header.Type == 17 )
  {
LABEL_55:
    NextReturnNetBufferListsHandler((void *)NextReturnNetBufferListsContext, v7, v39);
  }
  else if ( v39 || KeGetCurrentIrql() == 2 )
  {
    LODWORD(updated) = KeGetPcr()->Prcb.Number;
    v62 = (struct _NET_BUFFER_LIST **)v89;
    v7->Scratch = 0LL;
    v7->ChildRefCount = v39;
    v63 = v43->Header.Type == 5;
    v91 = updated;
    v89[2] = 0LL;
    v89[0] = v7;
    v89[1] = v7;
    if ( v63 )
    {
      while ( *v62 )
      {
        v64 = v43;
        v65 = (__int64)v43->IterativeDataPathTracker[updated];
        if ( *(_BYTE *)(v65 + 88) )
        {
          ndisIterativeDPInvokeHandlerOnTracker<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>(v43);
          v7 = *v62;
          goto LABEL_91;
        }
        *(_BYTE *)(v65 + 88) = 1;
        v66 = *v62;
        *v62 = 0LL;
        if ( v66 )
        {
          p_VerifierContext = &v43->VerifierContext;
          do
          {
            v68 = ndisVerifierNdisDispatch;
            ChildRefCount = (unsigned int)v66->ChildRefCount;
            Scratch = (struct _NET_BUFFER_LIST *)v66->Scratch;
            v66->ChildRefCount = 0;
            if ( v68 && v43->Header.Type == 5 && *p_VerifierContext )
            {
              (*((void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, __int64, void *, void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int)))v68
               + 17))(
                NextReturnNetBufferListsContext,
                v66,
                ChildRefCount,
                *p_VerifierContext,
                NextReturnNetBufferListsHandler);
            }
            else
            {
              NextReturnNetBufferListsHandler((void *)NextReturnNetBufferListsContext, v66, ChildRefCount);
              p_VerifierContext = &v43->VerifierContext;
            }
            v66 = Scratch;
          }
          while ( Scratch );
        }
        updated = v91;
        v62 = (struct _NET_BUFFER_LIST **)(v65 + 72);
        *(_BYTE *)(v65 + 88) = 0;
        v43 = (struct _NDIS_FILTER_BLOCK *)v43->NextReturnNetBufferListsObject;
        NextReturnNetBufferListsHandler = v64->NextReturnNetBufferListsHandler;
        NextReturnNetBufferListsContext = (__int64)v64->NextReturnNetBufferListsContext;
        if ( v43->Header.Type != 5 )
        {
          v7 = *(struct _NET_BUFFER_LIST **)(v65 + 72);
          goto LABEL_91;
        }
      }
    }
    else
    {
LABEL_91:
      if ( v7 )
      {
        *v62 = 0LL;
        v71 = &v43->VerifierContext;
        do
        {
          v72 = ndisVerifierNdisDispatch;
          v73 = (unsigned int)v7->ChildRefCount;
          v74 = (struct _NET_BUFFER_LIST *)v7->Scratch;
          v7->ChildRefCount = 0;
          if ( v72 && v43->Header.Type == 5 && *v71 )
          {
            (*((void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, __int64, void *, void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int)))v72
             + 17))(
              NextReturnNetBufferListsContext,
              v7,
              v73,
              *v71,
              NextReturnNetBufferListsHandler);
          }
          else
          {
            NextReturnNetBufferListsHandler((void *)NextReturnNetBufferListsContext, v7, v73);
            v71 = &v43->VerifierContext;
          }
          v7 = v74;
        }
        while ( v74 );
      }
    }
  }
  else
  {
    if ( *(_BYTE *)v8 != 5 )
      goto LABEL_55;
    if ( (int)ndisExpandDataPathStack<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>(
                (int)v7,
                v75,
                v76,
                0,
                v43,
                NextReturnNetBufferListsContext,
                (__int64)NextReturnNetBufferListsHandler) < 0 )
      ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v8, v7, 0);
  }
  if ( (v85 & 0x2000000000LL) != 0 )
  {
    ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&v84, 5u, 0x12uLL);
    if ( v79 != 2 )
      KeLowerIrql(v79);
  }
LABEL_33:
  if ( v80 )
  {
    --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v82);
  }
  else if ( v17 )
  {
    ExFreePoolWithTag(v17, 0);
  }
}
