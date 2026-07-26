/*
 * XREFs of ?ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00025B0
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

void __fastcall ndisMTopReceiveNetBufferLists(
        _DWORD *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  struct _NET_BUFFER_LIST *v7; // rbp
  _DWORD *v8; // rdi
  struct _NET_BUFFER_LIST *v9; // rbx
  char v10; // r13
  unsigned int Number; // r14d
  struct _NDIS_RCV_TRACKER_ARRAY *v12; // r9
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  char *v16; // rsi
  _QWORD *v17; // r14
  struct _NET_BUFFER_LIST *Alignment; // rax
  int v19; // r13d
  struct _NDIS_OPEN_BLOCK *v20; // rdi
  int v21; // r8d
  __int64 v22; // r9
  struct _NDIS_OPEN_BLOCK *v23; // rbx
  unsigned int v24; // r12d
  unsigned int v25; // r15d
  struct _NDIS_OPEN_BLOCK *FilterNextOpen; // rbp
  __int64 v27; // rdi
  __int64 v28; // rcx
  struct _NET_BUFFER_LIST *v29; // rdx
  struct _NDIS_OPEN_BLOCK *v30; // rdx
  unsigned int v31; // ebp
  unsigned int v32; // r14d
  unsigned int v33; // edi
  unsigned int i; // ebx
  __int64 v35; // rdx
  unsigned int v36; // r12d
  int v37; // eax
  struct _NET_BUFFER_LIST *v38; // rcx
  __int64 updated; // rax
  unsigned __int64 v40; // rbx
  char v41; // di
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r14
  unsigned __int64 v45; // rbx
  char *v46; // r13
  _SLIST_HEADER *v47; // r15
  unsigned __int64 Region; // rdi
  char *v49; // rcx
  unsigned __int64 v50; // r14
  bool v51; // cl
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // rbx
  __int64 v54; // rdx
  _QWORD *v55; // rcx
  struct _NDIS_FILTER_BLOCK *v56; // rbx
  void (__fastcall *NextReturnNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int); // r14
  __int64 NextReturnNetBufferListsContext; // r15
  struct _NET_BUFFER_LIST **v59; // rdi
  bool v60; // zf
  struct _NDIS_FILTER_BLOCK *v61; // r13
  __int64 v62; // rbp
  struct _NET_BUFFER_LIST *v63; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v64; // rax
  __int64 ChildRefCount; // r8
  struct _NET_BUFFER_LIST *Scratch; // rdi
  struct _VF_NDIS_DISPATCH_TABLE *v67; // rax
  __int64 v68; // r8
  struct _NET_BUFFER_LIST *v69; // rdi
  int v70; // edx
  int v71; // edx
  int v72; // r8d
  char v73; // [rsp+40h] [rbp-98h] BYREF
  KIRQL v74; // [rsp+41h] [rbp-97h]
  char v75; // [rsp+42h] [rbp-96h]
  int v76; // [rsp+44h] [rbp-94h]
  unsigned int v77; // [rsp+48h] [rbp-90h]
  __int64 v78; // [rsp+50h] [rbp-88h]
  void (__fastcall *v79)(_QWORD, _QWORD); // [rsp+58h] [rbp-80h] BYREF
  __int64 v80; // [rsp+60h] [rbp-78h]
  int v81; // [rsp+68h] [rbp-70h]
  __int64 v82; // [rsp+70h] [rbp-68h]
  __int64 Pool2; // [rsp+78h] [rbp-60h]
  _QWORD v84[4]; // [rsp+80h] [rbp-58h] BYREF
  unsigned int v86; // [rsp+E0h] [rbp+8h]
  unsigned int v87; // [rsp+E8h] [rbp+10h] BYREF

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
  v77 = 0;
  v87 = a5 & 1;
  v75 = 0;
  if ( (a5 & 1) != 0 || KeGetCurrentIrql() == 2 )
  {
    if ( ndisPerProcRcvTrackers )
    {
      Number = KeGetPcr()->Prcb.Number;
      v12 = ndisPerProcRcvTrackers;
      v13 = 2096LL * Number;
      v77 = Number;
      v14 = *(unsigned int *)((char *)ndisPerProcRcvTrackers + v13);
      if ( (unsigned int)v14 < 3 )
      {
        v75 = 1;
        v15 = v13 + 696 * v14;
        v16 = (char *)ndisPerProcRcvTrackers + v15 + 8;
        *(_DWORD *)((char *)ndisPerProcRcvTrackers + v13) = v14 + 1;
        Pool2 = (__int64)v12 + v15 + 8;
LABEL_7:
        v17 = (_QWORD *)*((_QWORD *)v8 + 50);
        Alignment = v7;
        v16[692] = 0;
        v19 = v10 & 2;
        if ( !v19 )
        {
          do
          {
            v9 = Alignment;
            Alignment->Flags = Alignment->Flags & 0xFFFFFFF0 | 4;
            Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
          }
          while ( Alignment );
        }
        v20 = (struct _NDIS_OPEN_BLOCK *)v17[41];
        if ( v20 && v20->ProtocolHandle->MajorNdisVersion >= 6u )
        {
          v10 = a5;
          ndisMIndicateNetBufferListsToOpen(v20, v7, a3, a4, a5);
          *((_QWORD *)v16 + 8) = 0LL;
          *((_DWORD *)v16 + 20) = 0;
        }
        else
        {
          *((_DWORD *)v16 + 4) = a5;
          *(_QWORD *)v16 = a1;
          *((_QWORD *)v16 + 3) = v7;
          *((_QWORD *)v16 + 1) = v17;
          *((_QWORD *)v16 + 4) = v9;
          *((_DWORD *)v16 + 10) = a3;
          *((_DWORD *)v16 + 11) = a4;
          ndisSortNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)v16);
          if ( !*((_QWORD *)v16 + 8) && !*((_DWORD *)v16 + 172) )
            goto LABEL_103;
          if ( !*v17 || a3 )
            v16[692] = 1;
          else
            ndisIndicateXlatedPacketsToNdis5Protocols((struct _NDIS_NBL_RCV_TRACKER *)v16);
          if ( !v20 )
          {
            v23 = (struct _NDIS_OPEN_BLOCK *)v17[1];
            if ( v23 )
            {
              v24 = *((_DWORD *)v16 + 172);
              v25 = *((_DWORD *)v16 + 4) | 2;
              do
              {
                FilterNextOpen = v23->FilterNextOpen;
                v27 = 0LL;
                do
                {
                  v28 = (unsigned int)v27;
                  v29 = *(struct _NET_BUFFER_LIST **)&v16[40 * v27 + 64];
                  v27 = (unsigned int)(v27 + 1);
                  if ( v29 )
                    ndisMIndicateNetBufferListsToOpen(
                      v23,
                      v29,
                      *((_DWORD *)v16 + 10),
                      *(_DWORD *)&v16[40 * v28 + 80],
                      v25);
                }
                while ( (unsigned int)v27 <= v24 );
                v23 = FilterNextOpen;
              }
              while ( FilterNextOpen );
            }
            v30 = (struct _NDIS_OPEN_BLOCK *)v17[2];
            if ( v30 )
            {
              if ( v19 )
              {
                ndisIndicateAllNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)v16, v30);
              }
              else
              {
                v31 = *((_DWORD *)v16 + 4);
                v32 = *((_DWORD *)v16 + 10);
                v33 = *((_DWORD *)v16 + 172);
                if ( *(_DWORD *)(*(_QWORD *)v16 + 2244LL) )
                  ndisIndicateToPmodeOpens((struct _NDIS_NBL_RCV_TRACKER *)v16);
                for ( i = 1; i <= v33; ++i )
                {
                  v35 = i;
                  ndisMIndicateNetBufferListsToOpen(
                    *(struct _NDIS_OPEN_BLOCK **)&v16[40 * v35 + 56],
                    *(struct _NET_BUFFER_LIST **)&v16[40 * v35 + 64],
                    v32,
                    *(_DWORD *)&v16[40 * v35 + 80],
                    v31);
                }
              }
            }
            v10 = a5;
          }
          else
          {
LABEL_103:
            v10 = a5;
          }
        }
        if ( !v16[692] )
          goto LABEL_32;
        v7 = (struct _NET_BUFFER_LIST *)*((_QWORD *)v16 + 8);
        v8 = a1;
        goto LABEL_31;
      }
    }
  }
  Pool2 = ExAllocatePool2(66LL, 696LL, 538985550LL);
  v16 = (char *)Pool2;
  if ( Pool2 )
    goto LABEL_7;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v70) = 2;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v70,
      4,
      11,
      (struct _GUID *)&WPP_b73066c8574e3d1b9eeedc46f4c32798_Traceguids);
  }
LABEL_31:
  if ( !v7 )
    goto LABEL_32;
  if ( byte_1C00EC210 && (v8[1465] & 2) != 0 )
    PktMonClientNblDropNdis((_DWORD)v8 + 5808, (_DWORD)v7, v21, 1, -1073676270, -536866809);
  if ( (v10 & 2) != 0 )
    goto LABEL_32;
  v36 = 0;
  v76 = 0;
  if ( v87 )
  {
    v36 = 1;
    v76 = 1;
  }
  v37 = v8[12];
  v74 = 2;
  v79 = 0LL;
  v80 = 0LL;
  v81 = -1;
  if ( v37 || v8[20] )
  {
    LODWORD(v80) = v37;
    HIDWORD(v80) = v8[20];
    v79 = (void (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)v8 + 5);
    if ( !v79 )
      v79 = (void (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)v8 + 5);
  }
  v38 = v7;
  do
  {
    v38->Flags = v38->Flags & 0xFFFFFFF4 | 8;
    v38 = (struct _NET_BUFFER_LIST *)v38->Link.Alignment;
  }
  while ( v38 );
  if ( Microsoft_Windows_Networking_CorrelationEnabled
    || byte_1C00EC210 != (_BYTE)Microsoft_Windows_Networking_CorrelationEnabled )
  {
    ndisMarkNetBufferListCorrelationIdsAsUsed(v7);
  }
  if ( v8[806] )
    v7 = ndisReturnPeriodicReceives((struct _NDIS_MINIPORT_BLOCK *)v8, v7);
  if ( !v7 )
    goto LABEL_32;
  updated = *(unsigned int *)ndisNblTrackerMode;
  if ( !*(_DWORD *)ndisNblTrackerMode )
    goto LABEL_72;
  v40 = *((_QWORD *)v8 + 317);
  v41 = ndisNblTrackerEpoch;
  v42 = 0LL;
  v43 = 0LL;
  v82 = 0LL;
  v44 = 0LL;
  v78 = 0LL;
  LOBYTE(v87) = v36 != 0;
  v73 = 0;
  if ( *(int *)ndisNblTrackerMode >= 3 )
  {
    ndisNblTrackerRecordEventInternal(v7, 0LL, 0x87u, (void *)v40, v36 != 0);
    v43 = 0LL;
  }
  v45 = v40 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v45 & 1) != 0 )
  {
    v46 = *(char **)((v45 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    updated = 2LL * (v41 & 1);
    v45 |= updated;
  }
  else
  {
    v46 = (char *)v45;
  }
  v47 = (_SLIST_HEADER *)v7;
  do
  {
    Region = v47[22].Region;
    while ( v47[22].Region == Region )
    {
      if ( Region )
      {
        if ( (Region & 4) != 0 )
          goto LABEL_115;
      }
      else if ( !v47[7].Region )
      {
        v47[7].Region = ndisSourceHandleFromOwner(0LL, v42, v43, v22);
      }
      v49 = (char *)v47[7].Region;
      if ( v49 )
      {
        v42 = (unsigned __int8)*v49;
        if ( (unsigned __int8)(v42 - 17) <= 1u || (_BYTE)v42 == 5 )
        {
          if ( v49 != v46 || v47[1].Region )
          {
            ++v44;
            updated = v45;
          }
          else
          {
            ++v43;
            updated = 24LL;
            v78 = v43;
            ++v44;
          }
          goto LABEL_63;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v42) = 3;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v42,
            27,
            12,
            (struct _GUID *)&WPP_44b390fadec23ba9bcae0cc9320a34b9_Traceguids,
            (char)v47,
            *v49);
          goto LABEL_114;
        }
      }
      else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v42) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v42,
          27,
          11,
          (struct _GUID *)&WPP_44b390fadec23ba9bcae0cc9320a34b9_Traceguids,
          (char)v47);
LABEL_114:
        v43 = v78;
      }
LABEL_115:
      updated = v45 | 4;
LABEL_63:
      v47[22].Region = updated;
      v47 = (_SLIST_HEADER *)v47->Alignment;
      if ( !v47 )
        break;
    }
    if ( (Region & 1) != 0 )
    {
      updated = ndisNblTrackerUpdateOwnershipCount(Region, v82 - v44, &v87, &v73);
      v43 = v78;
    }
    v82 = v44;
  }
  while ( v47 );
  v16 = (char *)Pool2;
  v50 = v44 - v43;
  v36 = v76;
  if ( (v45 & 1) != 0 && v50 )
  {
    v51 = v87;
    if ( !(_BYTE)v87 && !v73 )
    {
      v51 = KeGetCurrentIrql() == 2;
      LOBYTE(v87) = v51;
    }
    v8 = a1;
    v52 = v45 >> 1;
    v53 = v45 & 0xFFFFFFFFFFFFFFF8uLL;
    v54 = 2 * (v52 & 1);
    if ( v51 )
    {
      updated = KeGetPcr()->Prcb.Number << 12;
      v55 = (_QWORD *)(*(_QWORD *)(v53 + 8 * v54 + 40) + (unsigned int)updated);
      *v55 += v50;
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v53 + 8 * v54 + 48), v50);
    }
  }
  else
  {
    v8 = a1;
  }
LABEL_72:
  if ( (v80 & 0x2000000000LL) != 0 )
  {
    if ( !v36 )
      v74 = KfRaiseIrql(2u);
    ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&v79, 5u);
  }
  v56 = (struct _NDIS_FILTER_BLOCK *)*((_QWORD *)v8 + 318);
  NextReturnNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))*((_QWORD *)v8 + 330);
  NextReturnNetBufferListsContext = *((_QWORD *)v8 + 316);
  if ( v56->Header.Type == 17 )
  {
    (*((void (__fastcall **)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD))v8 + 330))(*((_QWORD *)v8 + 316), v7, v36);
  }
  else if ( v36 || KeGetCurrentIrql() == 2 )
  {
    LODWORD(updated) = KeGetPcr()->Prcb.Number;
    v59 = (struct _NET_BUFFER_LIST **)v84;
    v7->Scratch = 0LL;
    v7->ChildRefCount = v36;
    v60 = v56->Header.Type == 5;
    v86 = updated;
    v84[2] = 0LL;
    v84[0] = v7;
    v84[1] = v7;
    if ( v60 )
    {
      while ( *v59 )
      {
        v61 = v56;
        v62 = (__int64)v56->IterativeDataPathTracker[updated];
        if ( *(_BYTE *)(v62 + 88) )
        {
          ndisIterativeDPInvokeHandlerOnTracker<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>(v56);
          v7 = *v59;
          goto LABEL_84;
        }
        *(_BYTE *)(v62 + 88) = 1;
        v63 = *v59;
        *v59 = 0LL;
        if ( v63 )
        {
          do
          {
            v64 = ndisVerifierNdisDispatch;
            ChildRefCount = (unsigned int)v63->ChildRefCount;
            Scratch = (struct _NET_BUFFER_LIST *)v63->Scratch;
            v63->ChildRefCount = 0;
            if ( v64 && v56->Header.Type == 5 && v56->VerifierContext )
              (*((void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, __int64))v64 + 17))(
                NextReturnNetBufferListsContext,
                v63,
                ChildRefCount);
            else
              NextReturnNetBufferListsHandler((void *)NextReturnNetBufferListsContext, v63, ChildRefCount);
            v63 = Scratch;
          }
          while ( Scratch );
        }
        updated = v86;
        v59 = (struct _NET_BUFFER_LIST **)(v62 + 72);
        *(_BYTE *)(v62 + 88) = 0;
        v56 = (struct _NDIS_FILTER_BLOCK *)v56->NextReturnNetBufferListsObject;
        NextReturnNetBufferListsHandler = v61->NextReturnNetBufferListsHandler;
        NextReturnNetBufferListsContext = (__int64)v61->NextReturnNetBufferListsContext;
        if ( v56->Header.Type != 5 )
        {
          v7 = *(struct _NET_BUFFER_LIST **)(v62 + 72);
          goto LABEL_84;
        }
      }
    }
    else
    {
LABEL_84:
      if ( v7 )
      {
        *v59 = 0LL;
        do
        {
          v67 = ndisVerifierNdisDispatch;
          v68 = (unsigned int)v7->ChildRefCount;
          v69 = (struct _NET_BUFFER_LIST *)v7->Scratch;
          v7->ChildRefCount = 0;
          if ( v67 && v56->Header.Type == 5 && v56->VerifierContext )
            (*((void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, __int64))v67 + 17))(
              NextReturnNetBufferListsContext,
              v7,
              v68);
          else
            NextReturnNetBufferListsHandler((void *)NextReturnNetBufferListsContext, v7, v68);
          v7 = v69;
        }
        while ( v69 );
      }
    }
  }
  else if ( *(_BYTE *)v8 == 5 )
  {
    if ( (int)ndisExpandDataPathStack<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>(
                (int)v7,
                v71,
                v72,
                0,
                v56,
                NextReturnNetBufferListsContext,
                (__int64)NextReturnNetBufferListsHandler) < 0 )
      ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v8, v7, 0);
  }
  else
  {
    NextReturnNetBufferListsHandler((void *)NextReturnNetBufferListsContext, v7, 0);
  }
  if ( (v80 & 0x2000000000LL) != 0 )
  {
    ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&v79, 5u, 0x12uLL);
    if ( v74 != 2 )
      KeLowerIrql(v74);
  }
LABEL_32:
  if ( v75 )
  {
    --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v77);
  }
  else if ( v16 )
  {
    ExFreePoolWithTag(v16, 0);
  }
}
