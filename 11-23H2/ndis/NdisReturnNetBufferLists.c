/*
 * XREFs of NdisReturnNetBufferLists @ 0x1C0002580
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C00084A8 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     ??$ndisIterativeDPInvokeHandlerOnTracker@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAXP6AX0PEAU_NET_BUFFER_LIST@@K@Z0PEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@@Z @ 0x1C00131C8 (--$ndisIterativeDPInvokeHandlerOnTracker@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAXP6AX0PEA.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C001339C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C003DCD4 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C003DD2A (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C0040458 (-ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ??$ndisExpandDataPathStack@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAJPEAU_NET_BUFFER_LIST@@KKKPEAX1P6AX10K@Z@Z @ 0x1C0064688 (--$ndisExpandDataPathStack@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAJPEAU_NET_BUFFER_LIST@@KKKP.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00662BC (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0071D68 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C0072728 (-ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C00727D0 (-ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x1C0092378 (-ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z.c)
 *     ?ndisReturnPeriodicReceives@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@@Z @ 0x1C00AB9B8 (-ndisReturnPeriodicReceives@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@@Z.c)
 */

void __stdcall NdisReturnNetBufferLists(
        NDIS_HANDLE NdisBindingHandle,
        PNET_BUFFER_LIST NetBufferLists,
        ULONG ReturnFlags)
{
  struct _NET_BUFFER_LIST *v3; // r10
  KIRQL v4; // r11
  struct _NDIS_MINIPORT_BLOCK *v5; // rsi
  ULONG v7; // r13d
  PNET_BUFFER_LIST v8; // r14
  int PcwDatapathEventMask; // ecx
  int v10; // ebx
  int v11; // eax
  PNET_BUFFER_LIST i; // rax
  __int64 v13; // rax
  struct _NDIS_FILTER_BLOCK *ReturnNetBufferListsObject; // rbx
  void (__fastcall *ReturnNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int); // r15
  __int64 ReturnNetBufferListsContext; // r12
  int v17; // edx
  int v18; // r8d
  PNET_BUFFER_LIST *v19; // rdi
  bool v20; // zf
  struct _NDIS_FILTER_BLOCK *v21; // r13
  __int64 v22; // r14
  PNET_BUFFER_LIST v23; // rdx
  void **p_VerifierContext; // rdi
  struct _VF_NDIS_DISPATCH_TABLE *v25; // rax
  __int64 ChildRefCount; // r8
  struct _NET_BUFFER_LIST *Scratch; // rsi
  void **v28; // rdi
  struct _VF_NDIS_DISPATCH_TABLE *v29; // rax
  __int64 v30; // r8
  struct _NET_BUFFER_LIST *v31; // rsi
  struct NDIS_NBL_TRACKER_HANDLE__ *v32; // rcx
  NDIS_NBL_TRACKER_HANDLE__ *ReturnNetBufferListsTracker; // rbx
  char v34; // di
  char v35; // r12
  struct _NET_BUFFER_LIST *v36; // r15
  struct _NET_BUFFER_LIST *v37; // r9
  unsigned __int64 v38; // rbx
  char *v39; // r8
  struct NDIS_NBL_TRACKER_HANDLE__ *v40; // r13
  unsigned int *v41; // r10
  _SLIST_HEADER *v42; // rsi
  unsigned __int64 Region; // rdi
  char *v44; // rcx
  char v45; // r8
  unsigned __int64 v46; // rcx
  _QWORD *v47; // rcx
  unsigned __int64 v48; // r15
  unsigned __int64 v49; // rdx
  wchar_t *Buffer; // rax
  _SLIST_HEADER *Alignment; // rax
  unsigned int v52; // ecx
  unsigned __int64 v53; // r10
  int v54; // eax
  KIRQL v55; // r11
  KIRQL v56; // [rsp+48h] [rbp-69h]
  struct _NET_BUFFER_LIST *v57; // [rsp+50h] [rbp-61h]
  wchar_t *v58; // [rsp+58h] [rbp-59h] BYREF
  __int64 v59; // [rsp+60h] [rbp-51h]
  int v60; // [rsp+68h] [rbp-49h]
  unsigned __int64 v61; // [rsp+70h] [rbp-41h]
  char *v62; // [rsp+78h] [rbp-39h]
  wchar_t *v63; // [rsp+80h] [rbp-31h] BYREF
  __int64 v64; // [rsp+88h] [rbp-29h]
  int v65; // [rsp+90h] [rbp-21h]
  struct NDIS_NBL_TRACKER_HANDLE__ *v66; // [rsp+98h] [rbp-19h]
  struct _NDIS_MINIPORT_BLOCK *v67; // [rsp+A0h] [rbp-11h]
  _QWORD v68[4]; // [rsp+A8h] [rbp-9h] BYREF
  char v69; // [rsp+118h] [rbp+67h]
  PNET_BUFFER_LIST v70; // [rsp+120h] [rbp+6Fh]
  unsigned int v71; // [rsp+120h] [rbp+6Fh]

  v70 = NetBufferLists;
  v3 = 0LL;
  v4 = 2;
  v5 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)NdisBindingHandle + 2);
  v7 = ReturnFlags;
  v8 = NetBufferLists;
  PcwDatapathEventMask = v5->PcwDatapathEventMask;
  v67 = v5;
  v58 = 0LL;
  v59 = 0LL;
  v60 = -1;
  if ( PcwDatapathEventMask || v5->PcwDatapathCycleMask )
  {
    HIDWORD(v59) = v5->PcwDatapathCycleMask;
    Buffer = v5->Reserved4.Buffer;
    LODWORD(v59) = PcwDatapathEventMask;
    v58 = Buffer;
    if ( !Buffer )
      v58 = v5->Reserved4.Buffer;
  }
  if ( (*((_DWORD *)NdisBindingHandle + 56) & 1) != 0 )
  {
    ndisNblVerifyRxCompletion((ULONG_PTR)NetBufferLists, ReturnFlags, (ULONG_PTR)NdisBindingHandle);
    ndisNblPoisonScratchFields(v8);
    v4 = 2;
    v3 = 0LL;
  }
  v10 = v59;
  if ( (v59 & 0x180028) != 0 || (v59 & 0x1000000000LL) != 0 )
  {
    if ( (v7 & 1) == 0 )
    {
      v4 = KfRaiseIrql(2u);
      v3 = 0LL;
    }
    if ( (v59 & 8) != 0 )
    {
      ndisPcwAddEvent((struct NDIS_PCW_CONTEXT *)&v58, 3uLL, 1uLL);
      v10 = v59;
    }
    if ( !v4 && (v10 & 0x80000) != 0 )
    {
      ndisPcwAddEvent((struct NDIS_PCW_CONTEXT *)&v58, 0x1BuLL, 1uLL);
      v10 = v59;
    }
    if ( (v10 & 0x100020) != 0 )
    {
      Alignment = (_SLIST_HEADER *)v8;
      v52 = (unsigned int)v3;
      if ( v8 )
      {
        do
        {
          Alignment = (_SLIST_HEADER *)Alignment->Alignment;
          ++v52;
        }
        while ( Alignment );
      }
      v53 = v52;
      if ( (v10 & 0x20) != 0 )
      {
        ndisPcwAddEvent((struct NDIS_PCW_CONTEXT *)&v58, 5uLL, v52);
        v10 = v59;
      }
      if ( !v4 && (v10 & 0x100000) != 0 )
        ndisPcwAddEvent((struct NDIS_PCW_CONTEXT *)&v58, 0x1CuLL, v53);
      v3 = 0LL;
    }
    if ( (v59 & 0x1000000000LL) != 0 )
    {
      ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&v58, 4u);
    }
    else if ( v4 != 2 )
    {
      KeLowerIrql(v4);
      v3 = 0LL;
    }
  }
  v11 = v5->PcwDatapathEventMask;
  v56 = 2;
  v63 = (wchar_t *)v3;
  v64 = 0LL;
  v65 = -1;
  if ( v11 || v5->PcwDatapathCycleMask )
  {
    LODWORD(v64) = v11;
    HIDWORD(v64) = v5->PcwDatapathCycleMask;
    v63 = v5->Reserved4.Buffer;
    if ( !v63 )
      v63 = v5->Reserved4.Buffer;
  }
  for ( i = v8; i; i = (PNET_BUFFER_LIST)i->Link.Alignment )
    i->Flags = i->Flags & 0xFFFFFFF4 | 8;
  if ( Microsoft_Windows_Networking_CorrelationEnabled || byte_1C00F5390 )
    ndisMarkNetBufferListCorrelationIdsAsUsed(v8);
  if ( v5->PeriodicReceiveQueue.NblsAllocated )
  {
    v8 = ndisReturnPeriodicReceives(v5, v8);
    v70 = v8;
    v3 = 0LL;
  }
  if ( !v8 )
    goto LABEL_21;
  v13 = *(unsigned int *)ndisNblTrackerMode;
  if ( !*(_DWORD *)ndisNblTrackerMode )
    goto LABEL_17;
  v32 = (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)NdisBindingHandle + 73);
  ReturnNetBufferListsTracker = v5->Next.ReturnNetBufferListsTracker;
  v34 = ndisNblTrackerEpoch;
  v35 = v7 & 1;
  v66 = v32;
  v36 = v3;
  v61 = (unsigned __int64)v3;
  v37 = v3;
  v57 = v3;
  v69 = 0;
  if ( *(int *)ndisNblTrackerMode >= 3 )
  {
    ndisNblTrackerRecordEventInternal(v8, v32, 0x87u, ReturnNetBufferListsTracker, v7 & 1);
    v37 = v36;
  }
  v38 = (unsigned __int64)ReturnNetBufferListsTracker & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v38 & 1) != 0 )
  {
    v39 = *(char **)((v38 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    v13 = 2LL * (v34 & 1);
    v38 |= v13;
  }
  else
  {
    v39 = (char *)v38;
  }
  v40 = v66;
  v41 = &WPP_RECORDER_INITIALIZED;
  v42 = (_SLIST_HEADER *)v8;
  v62 = v39;
  while ( 2 )
  {
    Region = v42[22].Region;
    while ( v42[22].Region == Region )
    {
      if ( Region )
      {
        if ( (Region & 4) != 0 )
          goto LABEL_106;
      }
      else if ( !v42[7].Region )
      {
        v42[7].Region = ndisSourceHandleFromOwner(
                          (unsigned __int64)v40 & 0xFFFFFFFFFFFFFFFDuLL,
                          NetBufferLists,
                          v39,
                          v37);
      }
      v44 = (char *)v42[7].Region;
      if ( v44 )
      {
        NetBufferLists = (PNET_BUFFER_LIST)(unsigned __int8)*v44;
        if ( (unsigned __int8)((_BYTE)NetBufferLists - 17) <= 1u || (_BYTE)NetBufferLists == 5 )
        {
          if ( v44 != v39 || v42[1].Region )
          {
            v36 = (struct _NET_BUFFER_LIST *)((char *)v36 + 1);
            v13 = v38;
          }
          else
          {
            v37 = (struct _NET_BUFFER_LIST *)((char *)v37 + 1);
            v13 = 24LL;
            v57 = v37;
            v36 = (struct _NET_BUFFER_LIST *)((char *)v36 + 1);
          }
          goto LABEL_55;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != v41 )
        {
          LOBYTE(NetBufferLists) = 3;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)NetBufferLists,
            27,
            12,
            (struct _GUID *)&WPP_1f4f9304c13d30d166c4c68f5fb6e586_Traceguids,
            (char)v42,
            *v44);
          goto LABEL_105;
        }
      }
      else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != v41 )
      {
        LOBYTE(NetBufferLists) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)NetBufferLists,
          27,
          11,
          (struct _GUID *)&WPP_1f4f9304c13d30d166c4c68f5fb6e586_Traceguids,
          (char)v42);
LABEL_105:
        v37 = v57;
        v41 = &WPP_RECORDER_INITIALIZED;
        v39 = v62;
      }
LABEL_106:
      v13 = v38 | 4;
LABEL_55:
      v42[22].Region = v13;
      v42 = (_SLIST_HEADER *)v42->Alignment;
      if ( !v42 )
        break;
    }
    v45 = v69;
    v46 = v61 - (_QWORD)v36;
    v61 -= (unsigned __int64)v36;
    if ( (Region & 1) != 0 && v46 )
    {
      if ( v35 || v69 )
      {
        v13 = 16 * ((Region >> 1) & 1);
        NetBufferLists = (PNET_BUFFER_LIST)(v13 + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40);
        if ( !v35 )
          goto LABEL_113;
LABEL_63:
        v45 = v69;
        v37 = v57;
        v13 = KeGetPcr()->Prcb.Number << 12;
        v47 = (_QWORD *)(NetBufferLists->Link.Alignment + (unsigned int)v13);
        NetBufferLists = (PNET_BUFFER_LIST)v61;
        *v47 += v61;
      }
      else
      {
        v69 = 1;
        v20 = KeGetCurrentIrql() == 2;
        v41 = &WPP_RECORDER_INITIALIZED;
        if ( v20 )
        {
          v35 = 1;
          NetBufferLists = (PNET_BUFFER_LIST)(16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40);
          goto LABEL_63;
        }
        v46 = v61;
        v45 = 1;
        v35 = 0;
        v37 = v57;
        v13 = 16 * ((Region >> 1) & 1);
        NetBufferLists = (PNET_BUFFER_LIST)(v13 + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40);
LABEL_113:
        _InterlockedExchangeAdd64((volatile signed __int64 *)&NetBufferLists->FirstNetBuffer, v46);
      }
    }
    v61 = (unsigned __int64)v36;
    if ( v42 )
    {
      v39 = v62;
      continue;
    }
    break;
  }
  v5 = v67;
  v48 = (char *)v36 - (char *)v37;
  v8 = v70;
  v7 = ReturnFlags;
  if ( (v38 & 1) == 0 || !v48 )
    goto LABEL_70;
  if ( v35 || v45 )
  {
    v13 = 16 * ((v38 >> 1) & 1);
    v49 = v13 + (v38 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
    if ( v35 )
      goto LABEL_69;
    goto LABEL_77;
  }
  if ( KeGetCurrentIrql() != 2 )
  {
    v13 = 16 * ((v38 >> 1) & 1);
    v49 = v13 + (v38 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_77:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v49 + 8), v48);
    goto LABEL_70;
  }
  v49 = 16 * ((v38 >> 1) & 1) + (v38 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_69:
  v13 = KeGetPcr()->Prcb.Number << 12;
  *(_QWORD *)(*(_QWORD *)v49 + (unsigned int)v13) += v48;
LABEL_70:
  v3 = 0LL;
LABEL_17:
  if ( (v64 & 0x2000000000LL) != 0 )
  {
    if ( (v7 & 1) == 0 )
      v56 = KfRaiseIrql(2u);
    ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&v63, 5u);
  }
  ReturnNetBufferListsObject = (struct _NDIS_FILTER_BLOCK *)v5->Next.ReturnNetBufferListsObject;
  ReturnNetBufferListsHandler = v5->Next.ReturnNetBufferListsHandler;
  ReturnNetBufferListsContext = (__int64)v5->Next.ReturnNetBufferListsContext;
  if ( ReturnNetBufferListsObject->Header.Type == 17 )
  {
LABEL_19:
    ReturnNetBufferListsHandler((void *)ReturnNetBufferListsContext, v8, v7);
    goto LABEL_20;
  }
  if ( (v7 & 1) != 0 )
  {
LABEL_26:
    LODWORD(v13) = KeGetPcr()->Prcb.Number;
    v19 = (PNET_BUFFER_LIST *)v68;
    v8->Scratch = v3;
    v8->ChildRefCount = v7;
    v20 = ReturnNetBufferListsObject->Header.Type == 5;
    v71 = v13;
    v68[2] = v3;
    v68[0] = v8;
    v68[1] = v8;
    if ( v20 )
    {
      while ( *v19 )
      {
        v21 = ReturnNetBufferListsObject;
        v22 = (__int64)ReturnNetBufferListsObject->IterativeDataPathTracker[v13];
        if ( *(_BYTE *)(v22 + 88) )
        {
          ndisIterativeDPInvokeHandlerOnTracker<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>(ReturnNetBufferListsObject);
          v8 = *v19;
          v3 = 0LL;
          goto LABEL_36;
        }
        *(_BYTE *)(v22 + 88) = 1;
        v23 = *v19;
        *v19 = v3;
        if ( v23 )
        {
          p_VerifierContext = &ReturnNetBufferListsObject->VerifierContext;
          do
          {
            v25 = ndisVerifierNdisDispatch;
            ChildRefCount = (unsigned int)v23->ChildRefCount;
            Scratch = (struct _NET_BUFFER_LIST *)v23->Scratch;
            v23->ChildRefCount = (int)v3;
            if ( v25 && ReturnNetBufferListsObject->Header.Type == 5 && *p_VerifierContext )
            {
              (*((void (__fastcall **)(__int64, PNET_BUFFER_LIST, __int64, void *, void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int)))v25
               + 17))(
                ReturnNetBufferListsContext,
                v23,
                ChildRefCount,
                *p_VerifierContext,
                ReturnNetBufferListsHandler);
            }
            else
            {
              ReturnNetBufferListsHandler((void *)ReturnNetBufferListsContext, v23, ChildRefCount);
              p_VerifierContext = &ReturnNetBufferListsObject->VerifierContext;
            }
            v23 = Scratch;
            v3 = 0LL;
          }
          while ( Scratch );
        }
        v13 = v71;
        v19 = (PNET_BUFFER_LIST *)(v22 + 72);
        *(_BYTE *)(v22 + 88) = 0;
        ReturnNetBufferListsObject = (struct _NDIS_FILTER_BLOCK *)ReturnNetBufferListsObject->NextReturnNetBufferListsObject;
        ReturnNetBufferListsHandler = v21->NextReturnNetBufferListsHandler;
        ReturnNetBufferListsContext = (__int64)v21->NextReturnNetBufferListsContext;
        if ( ReturnNetBufferListsObject->Header.Type != 5 )
        {
          v8 = *(PNET_BUFFER_LIST *)(v22 + 72);
          goto LABEL_36;
        }
      }
    }
    else
    {
LABEL_36:
      if ( v8 )
      {
        *v19 = v3;
        v28 = &ReturnNetBufferListsObject->VerifierContext;
        do
        {
          v29 = ndisVerifierNdisDispatch;
          v30 = (unsigned int)v8->ChildRefCount;
          v31 = (struct _NET_BUFFER_LIST *)v8->Scratch;
          v8->ChildRefCount = (int)v3;
          if ( v29 && ReturnNetBufferListsObject->Header.Type == 5 && *v28 )
          {
            (*((void (__fastcall **)(__int64, PNET_BUFFER_LIST, __int64, void *, void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int)))v29
             + 17))(
              ReturnNetBufferListsContext,
              v8,
              v30,
              *v28,
              ReturnNetBufferListsHandler);
          }
          else
          {
            ReturnNetBufferListsHandler((void *)ReturnNetBufferListsContext, v8, v30);
            v28 = &ReturnNetBufferListsObject->VerifierContext;
          }
          v8 = v31;
          LODWORD(v3) = 0;
        }
        while ( v31 );
      }
    }
  }
  else
  {
    if ( KeGetCurrentIrql() == 2 )
    {
      v3 = 0LL;
      goto LABEL_26;
    }
    if ( v5->Header.Type != 5 )
      goto LABEL_19;
    v54 = ndisExpandDataPathStack<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>(
            (int)v8,
            v17,
            v18,
            v7,
            ReturnNetBufferListsObject,
            ReturnNetBufferListsContext,
            (__int64)ReturnNetBufferListsHandler);
    if ( v54 < 0 )
      ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v5, v8, 0);
  }
LABEL_20:
  if ( (v64 & 0x2000000000LL) != 0 )
  {
    ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&v63, 5u, 0x12uLL);
    if ( v56 != 2 )
      KeLowerIrql(v56);
  }
LABEL_21:
  if ( (v59 & 0x1000000000LL) != 0 )
  {
    ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&v58, 4u, 0x11uLL);
    if ( v55 != 2 )
      KeLowerIrql(v55);
  }
}
