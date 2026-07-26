/*
 * XREFs of NdisReturnNetBufferLists @ 0x1C0005660
 * Callers:
 *     <none>
 * Callees:
 *     ??$ndisIterativeDPInvokeHandlerOnTracker@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAXP6AX0PEAU_NET_BUFFER_LIST@@K@Z0PEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@@Z @ 0x1C00034C4 (--$ndisIterativeDPInvokeHandlerOnTracker@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAXP6AX0PEA.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0013B1C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C003AC7C (-ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ??$ndisExpandDataPathStack@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAJPEAU_NET_BUFFER_LIST@@KKKPEAX1P6AX10K@Z@Z @ 0x1C005F6E8 (--$ndisExpandDataPathStack@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAJPEAU_NET_BUFFER_LIST@@KKKP.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0061328 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C006C9A0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C006D368 (-ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C006D410 (-ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C008C874 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C008C8CC (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisReturnPeriodicReceives@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@@Z @ 0x1C00A52F0 (-ndisReturnPeriodicReceives@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@@Z.c)
 */

void __stdcall NdisReturnNetBufferLists(
        NDIS_HANDLE NdisBindingHandle,
        PNET_BUFFER_LIST NetBufferLists,
        ULONG ReturnFlags)
{
  struct _NDIS_MINIPORT_BLOCK *v3; // rsi
  KIRQL v4; // r11
  ULONG v5; // r13d
  PNET_BUFFER_LIST v6; // r14
  int PcwDatapathEventMask; // eax
  $B736E2A58696D72C4F1E471023AC4CFD *v8; // rbx
  int v10; // r15d
  int v11; // eax
  PNET_BUFFER_LIST i; // rax
  __int64 v13; // rax
  struct _NDIS_FILTER_BLOCK *ReturnNetBufferListsObject; // rdi
  void (__fastcall *ReturnNetBufferListsHandler)(__int64); // r15
  __int64 ReturnNetBufferListsContext; // r12
  struct NDIS_NBL_TRACKER_HANDLE__ *v17; // rcx
  unsigned __int64 v18; // rdx
  NDIS_NBL_TRACKER_HANDLE__ *ReturnNetBufferListsTracker; // rbx
  __int64 v20; // r9
  char v21; // di
  __int64 v22; // r15
  unsigned __int64 v23; // rbx
  char *v24; // r8
  struct NDIS_NBL_TRACKER_HANDLE__ *v25; // rsi
  unsigned int *v26; // r10
  _QWORD *v27; // r12
  unsigned __int64 v28; // rdi
  char *v29; // rcx
  char v30; // r8
  unsigned __int64 v31; // rcx
  int v32; // r12d
  bool v33; // zf
  _QWORD *v34; // rcx
  unsigned __int64 v35; // r15
  unsigned __int64 v36; // rdx
  int v37; // edx
  int v38; // r8d
  __int64 *v39; // rbx
  struct _NDIS_FILTER_BLOCK *v40; // rsi
  __int64 v41; // r14
  __int64 v42; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v43; // rax
  __int64 v44; // r8
  __int64 v45; // rbx
  struct _VF_NDIS_DISPATCH_TABLE *v46; // rax
  __int64 ChildRefCount; // r8
  struct _NET_BUFFER_LIST *Scratch; // rbx
  unsigned int Number; // r9d
  _SLIST_HEADER *Alignment; // rax
  unsigned int v51; // r8d
  KIRQL v52; // r11
  wchar_t *Buffer; // [rsp+40h] [rbp-69h] BYREF
  __int64 v54; // [rsp+48h] [rbp-61h]
  int v55; // [rsp+50h] [rbp-59h]
  int v56; // [rsp+58h] [rbp-51h]
  __int64 v57; // [rsp+60h] [rbp-49h]
  unsigned __int64 v58; // [rsp+68h] [rbp-41h]
  char *v59; // [rsp+70h] [rbp-39h]
  char v60[8]; // [rsp+78h] [rbp-31h]
  wchar_t *v61; // [rsp+80h] [rbp-29h] BYREF
  __int64 v62; // [rsp+88h] [rbp-21h]
  int v63; // [rsp+90h] [rbp-19h]
  struct NDIS_NBL_TRACKER_HANDLE__ *v64; // [rsp+98h] [rbp-11h]
  struct _NDIS_MINIPORT_BLOCK *v65; // [rsp+A0h] [rbp-9h]
  _QWORD v66[11]; // [rsp+A8h] [rbp-1h] BYREF
  char v67; // [rsp+110h] [rbp+67h]
  unsigned int v68; // [rsp+110h] [rbp+67h]
  KIRQL v70; // [rsp+128h] [rbp+7Fh]

  v3 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)NdisBindingHandle + 2);
  v4 = 2;
  v65 = v3;
  v5 = ReturnFlags;
  v6 = NetBufferLists;
  Buffer = 0LL;
  PcwDatapathEventMask = v3->PcwDatapathEventMask;
  v8 = &v3->80;
  v54 = 0LL;
  v55 = -1;
  if ( PcwDatapathEventMask || v8->PcwDatapathCycleMask )
  {
    LODWORD(v54) = PcwDatapathEventMask;
    HIDWORD(v54) = v8->PcwDatapathCycleMask;
    Buffer = v3->Reserved4.Buffer;
    if ( !Buffer )
      Buffer = v3->Reserved4.Buffer;
  }
  if ( (*((_DWORD *)NdisBindingHandle + 56) & 1) != 0 )
  {
    ndisNblVerifyRxCompletion((ULONG_PTR)NetBufferLists, ReturnFlags, (ULONG_PTR)NdisBindingHandle);
    ndisNblPoisonScratchFields(v6);
    v4 = 2;
  }
  v10 = v54;
  if ( (v54 & 0x180028) != 0 || (v54 & 0x1000000000LL) != 0 )
  {
    if ( (v5 & 1) == 0 )
      v4 = KfRaiseIrql(2u);
    if ( (v54 & 8) != 0 )
    {
      Number = KeGetPcr()->Prcb.Number;
      v10 = v54;
      v55 = Number;
      ++*(_QWORD *)((char *)Buffer + Number * ndisPcwPerCpuDataStride + ndisPcwOffsetToPerCpuData + 24);
    }
    else
    {
      Number = v55;
    }
    if ( !v4 && (v10 & 0x80000) != 0 )
    {
      if ( Number == -1 )
      {
        Number = KeGetPcr()->Prcb.Number;
        v10 = v54;
        v55 = Number;
      }
      ++*(_QWORD *)((char *)Buffer + Number * ndisPcwPerCpuDataStride + ndisPcwOffsetToPerCpuData + 216);
    }
    if ( (v10 & 0x100020) != 0 )
    {
      Alignment = (_SLIST_HEADER *)v6;
      v51 = 0;
      if ( v6 )
      {
        do
        {
          Alignment = (_SLIST_HEADER *)Alignment->Alignment;
          ++v51;
        }
        while ( Alignment );
      }
      if ( (v10 & 0x20) != 0 )
      {
        if ( Number == -1 )
        {
          Number = KeGetPcr()->Prcb.Number;
          v10 = v54;
          v55 = Number;
        }
        *(_QWORD *)((char *)Buffer + Number * ndisPcwPerCpuDataStride + ndisPcwOffsetToPerCpuData + 40) += v51;
      }
      if ( !v4 && (v10 & 0x100000) != 0 )
      {
        if ( Number == -1 )
        {
          Number = KeGetPcr()->Prcb.Number;
          v55 = Number;
        }
        *(_QWORD *)((char *)Buffer + Number * ndisPcwPerCpuDataStride + ndisPcwOffsetToPerCpuData + 224) += v51;
      }
    }
    if ( (v54 & 0x1000000000LL) != 0 )
    {
      ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&Buffer, 4u);
    }
    else if ( v4 != 2 )
    {
      KeLowerIrql(v4);
    }
  }
  v11 = v3->PcwDatapathEventMask;
  v70 = 2;
  v61 = 0LL;
  v62 = 0LL;
  v63 = -1;
  if ( v11 || v8->PcwDatapathCycleMask )
  {
    LODWORD(v62) = v11;
    HIDWORD(v62) = v8->PcwDatapathCycleMask;
    v61 = v3->Reserved4.Buffer;
    if ( !v61 )
      v61 = v3->Reserved4.Buffer;
  }
  for ( i = v6; i; i = (PNET_BUFFER_LIST)i->Link.Alignment )
    i->Flags = i->Flags & 0xFFFFFFF4 | 8;
  if ( Microsoft_Windows_Networking_CorrelationEnabled || byte_1C00EC210 )
    ndisMarkNetBufferListCorrelationIdsAsUsed(v6);
  if ( v3->PeriodicReceiveQueue.NblsAllocated )
    v6 = ndisReturnPeriodicReceives(v3, v6);
  if ( !v6 )
    goto LABEL_21;
  v13 = *(unsigned int *)ndisNblTrackerMode;
  if ( !*(_DWORD *)ndisNblTrackerMode )
    goto LABEL_17;
  v17 = (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)NdisBindingHandle + 73);
  v18 = 0LL;
  ReturnNetBufferListsTracker = v3->Next.ReturnNetBufferListsTracker;
  v20 = 0LL;
  v21 = ndisNblTrackerEpoch;
  v64 = v17;
  v58 = 0LL;
  v22 = 0LL;
  v56 = v5 & 1;
  v57 = 0LL;
  v67 = 0;
  if ( *(int *)ndisNblTrackerMode >= 3 )
  {
    ndisNblTrackerRecordEventInternal(v6, v17, 0x87u, ReturnNetBufferListsTracker, v5 & 1);
    v20 = 0LL;
  }
  v23 = (unsigned __int64)ReturnNetBufferListsTracker & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v23 & 1) != 0 )
  {
    v24 = *(char **)((v23 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    v13 = 2LL * (v21 & 1);
    v23 |= v13;
  }
  else
  {
    v24 = (char *)v23;
  }
  v25 = v64;
  v26 = &WPP_RECORDER_INITIALIZED;
  v59 = v24;
  *(_QWORD *)v60 = v6;
  while ( 2 )
  {
    v27 = *(_QWORD **)v60;
    v28 = *(_QWORD *)(*(_QWORD *)v60 + 360LL);
    while ( v27[45] == v28 )
    {
      if ( v28 )
      {
        if ( (v28 & 4) != 0 )
          goto LABEL_106;
      }
      else if ( !v27[15] )
      {
        v27[15] = ndisSourceHandleFromOwner((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFFDuLL, v18, v24, v20);
      }
      v29 = (char *)v27[15];
      if ( v29 )
      {
        v18 = (unsigned __int8)*v29;
        if ( (unsigned __int8)(v18 - 17) <= 1u || (_BYTE)v18 == 5 )
        {
          if ( v29 != v24 || v27[3] )
          {
            ++v22;
            v13 = v23;
          }
          else
          {
            ++v20;
            v13 = 24LL;
            v57 = v20;
            ++v22;
          }
          goto LABEL_36;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != v26 )
        {
          LOBYTE(v18) = 3;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v18,
            27,
            12,
            (struct _GUID *)&WPP_44b390fadec23ba9bcae0cc9320a34b9_Traceguids,
            (char)v27,
            *v29);
          goto LABEL_105;
        }
      }
      else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != v26 )
      {
        LOBYTE(v18) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v18,
          27,
          11,
          (struct _GUID *)&WPP_44b390fadec23ba9bcae0cc9320a34b9_Traceguids,
          (char)v27);
LABEL_105:
        v20 = v57;
        v26 = &WPP_RECORDER_INITIALIZED;
        v24 = v59;
      }
LABEL_106:
      v13 = v23 | 4;
LABEL_36:
      v27[45] = v13;
      v27 = (_QWORD *)*v27;
      if ( !v27 )
        break;
    }
    v30 = v67;
    v31 = v58 - v22;
    *(_QWORD *)v60 = v27;
    v32 = v56;
    v58 -= v22;
    if ( (v28 & 1) != 0 && v31 )
    {
      if ( (_BYTE)v56 || v67 )
      {
        v13 = 16 * ((v28 >> 1) & 1);
        v18 = v13 + (v28 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        if ( !(_BYTE)v56 )
          goto LABEL_113;
LABEL_44:
        v30 = v67;
        v20 = v57;
        v13 = KeGetPcr()->Prcb.Number << 12;
        v34 = (_QWORD *)(*(_QWORD *)v18 + (unsigned int)v13);
        v18 = v58;
        *v34 += v58;
      }
      else
      {
        v67 = 1;
        v33 = KeGetCurrentIrql() == 2;
        v26 = &WPP_RECORDER_INITIALIZED;
        if ( v33 )
        {
          LOBYTE(v32) = 1;
          v56 = v32;
          v18 = 16 * ((v28 >> 1) & 1) + (v28 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
          goto LABEL_44;
        }
        v31 = v58;
        v30 = 1;
        LOBYTE(v32) = 0;
        v20 = v57;
        v56 = v32;
        v13 = 16 * ((v28 >> 1) & 1);
        v18 = v13 + (v28 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_113:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 8), v31);
      }
    }
    v58 = v22;
    if ( *(_QWORD *)v60 )
    {
      v24 = v59;
      continue;
    }
    break;
  }
  v3 = v65;
  v35 = v22 - v20;
  v5 = ReturnFlags;
  if ( (v23 & 1) == 0 || !v35 )
    goto LABEL_17;
  if ( (_BYTE)v32 || v30 )
  {
    v13 = 16 * ((v23 >> 1) & 1);
    v36 = v13 + (v23 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
    if ( (_BYTE)v32 )
      goto LABEL_50;
    goto LABEL_118;
  }
  if ( KeGetCurrentIrql() != 2 )
  {
    v13 = 16 * ((v23 >> 1) & 1);
    v36 = v13 + (v23 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_118:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v36 + 8), v35);
    goto LABEL_17;
  }
  v36 = 16 * ((v23 >> 1) & 1) + (v23 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_50:
  v13 = KeGetPcr()->Prcb.Number << 12;
  *(_QWORD *)(*(_QWORD *)v36 + (unsigned int)v13) += v35;
LABEL_17:
  if ( (v62 & 0x2000000000LL) != 0 )
  {
    if ( (v5 & 1) == 0 )
      v70 = KfRaiseIrql(2u);
    ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&v61, 5u);
  }
  ReturnNetBufferListsObject = (struct _NDIS_FILTER_BLOCK *)v3->Next.ReturnNetBufferListsObject;
  ReturnNetBufferListsHandler = (void (__fastcall *)(__int64))v3->Next.ReturnNetBufferListsHandler;
  ReturnNetBufferListsContext = (__int64)v3->Next.ReturnNetBufferListsContext;
  if ( ReturnNetBufferListsObject->Header.Type == 17 )
  {
LABEL_19:
    ((void (__fastcall *)(__int64, PNET_BUFFER_LIST, _QWORD))ReturnNetBufferListsHandler)(
      ReturnNetBufferListsContext,
      v6,
      v5);
  }
  else if ( (v5 & 1) != 0 || KeGetCurrentIrql() == 2 )
  {
    LODWORD(v13) = KeGetPcr()->Prcb.Number;
    v39 = v66;
    v6->Scratch = 0LL;
    v6->ChildRefCount = v5;
    v33 = ReturnNetBufferListsObject->Header.Type == 5;
    v68 = v13;
    v66[2] = 0LL;
    v66[0] = v6;
    v66[1] = v6;
    if ( v33 )
    {
      while ( *v39 )
      {
        v40 = ReturnNetBufferListsObject;
        v41 = (__int64)ReturnNetBufferListsObject->IterativeDataPathTracker[v13];
        if ( *(_BYTE *)(v41 + 88) )
        {
          ndisIterativeDPInvokeHandlerOnTracker<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>(
            ReturnNetBufferListsObject,
            ReturnNetBufferListsHandler,
            ReturnNetBufferListsContext,
            v39);
          v6 = (PNET_BUFFER_LIST)*v39;
          goto LABEL_62;
        }
        *(_BYTE *)(v41 + 88) = 1;
        v42 = *v39;
        *v39 = 0LL;
        if ( v42 )
        {
          do
          {
            v43 = ndisVerifierNdisDispatch;
            v44 = *(unsigned int *)(v42 + 132);
            v45 = *(_QWORD *)(v42 + 112);
            *(_DWORD *)(v42 + 132) = 0;
            if ( v43 && ReturnNetBufferListsObject->Header.Type == 5 && ReturnNetBufferListsObject->VerifierContext )
              (*((void (__fastcall **)(__int64, __int64, __int64))v43 + 17))(ReturnNetBufferListsContext, v42, v44);
            else
              ((void (__fastcall *)(__int64, __int64, __int64))ReturnNetBufferListsHandler)(
                ReturnNetBufferListsContext,
                v42,
                v44);
            v42 = v45;
          }
          while ( v45 );
        }
        v13 = v68;
        v39 = (__int64 *)(v41 + 72);
        *(_BYTE *)(v41 + 88) = 0;
        ReturnNetBufferListsObject = (struct _NDIS_FILTER_BLOCK *)ReturnNetBufferListsObject->NextReturnNetBufferListsObject;
        ReturnNetBufferListsHandler = (void (__fastcall *)(__int64))v40->NextReturnNetBufferListsHandler;
        ReturnNetBufferListsContext = (__int64)v40->NextReturnNetBufferListsContext;
        if ( ReturnNetBufferListsObject->Header.Type != 5 )
        {
          v6 = *(PNET_BUFFER_LIST *)(v41 + 72);
          goto LABEL_62;
        }
      }
    }
    else
    {
LABEL_62:
      if ( v6 )
      {
        *v39 = 0LL;
        do
        {
          v46 = ndisVerifierNdisDispatch;
          ChildRefCount = (unsigned int)v6->ChildRefCount;
          Scratch = (struct _NET_BUFFER_LIST *)v6->Scratch;
          v6->ChildRefCount = 0;
          if ( v46 && ReturnNetBufferListsObject->Header.Type == 5 && ReturnNetBufferListsObject->VerifierContext )
            (*((void (__fastcall **)(__int64, PNET_BUFFER_LIST, __int64))v46 + 17))(
              ReturnNetBufferListsContext,
              v6,
              ChildRefCount);
          else
            ((void (__fastcall *)(__int64, PNET_BUFFER_LIST, __int64))ReturnNetBufferListsHandler)(
              ReturnNetBufferListsContext,
              v6,
              ChildRefCount);
          v6 = Scratch;
        }
        while ( Scratch );
      }
    }
  }
  else
  {
    if ( v3->Header.Type != 5 )
      goto LABEL_19;
    if ( (int)ndisExpandDataPathStack<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>(
                (int)v6,
                v37,
                v38,
                v5,
                ReturnNetBufferListsObject,
                ReturnNetBufferListsContext,
                (__int64)ReturnNetBufferListsHandler) < 0 )
      ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v3, v6, 0);
  }
  if ( (v62 & 0x2000000000LL) != 0 )
  {
    ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&v61, 5u, 0x12uLL);
    if ( v70 != 2 )
      KeLowerIrql(v70);
  }
LABEL_21:
  if ( (v54 & 0x1000000000LL) != 0 )
  {
    ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&Buffer, 4u, 0x11uLL);
    if ( v52 != 2 )
      KeLowerIrql(v52);
  }
}
