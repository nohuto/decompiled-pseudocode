/*
 * XREFs of NdisMSendNetBufferListsComplete @ 0x1C0013430
 * Callers:
 *     ?CompleteTransmittedNbls@NdisPoll@@AEAAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z @ 0x1C00C5284 (-CompleteTransmittedNbls@NdisPoll@@AEAAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C00084A8 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C001339C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C0013834 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ??$ndisExpandDataPathStack@$00$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAJPEAU_NET_BUFFER_LIST@@KKKPEAX1P6AX10K@Z@Z @ 0x1C003D82C (--$ndisExpandDataPathStack@$00$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAJPEAU_NET_BUFFER_LIST@@KKKP.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C003DCD4 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C003DD2A (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x1C003EFAE (-ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z.c)
 *     ?ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C0040458 (-ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ??$ndisIterativeDPInvokeHandlerOnTracker@$00$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAXP6AX0PEAU_NET_BUFFER_LIST@@K@Z0PEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@@Z @ 0x1C006490C (--$ndisIterativeDPInvokeHandlerOnTracker@$00$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAXP6AX0PEA.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00662BC (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0071D68 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C0072728 (-ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C0072AE0 (-ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     PktMonClientNblDropNdis @ 0x1C00D3238 (PktMonClientNblDropNdis.c)
 */

void __stdcall NdisMSendNetBufferListsComplete(
        NDIS_HANDLE MiniportAdapterHandle,
        PNET_BUFFER_LIST NetBufferList,
        ULONG SendCompleteFlags)
{
  PNET_BUFFER_LIST v4; // rbp
  struct _NET_BUFFER_LIST *v6; // r9
  int Status; // edx
  __int64 updated; // rax
  KIRQL v9; // r13
  struct _NDIS_FILTER_BLOCK *v10; // rbx
  void (__fastcall *NextSendNetBufferListsCompleteHandler)(void *, _NET_BUFFER_LIST *, unsigned int); // r15
  __int64 NextSendNetBufferListsCompleteContext; // r12
  int v13; // edx
  int v14; // r8d
  PNET_BUFFER_LIST *v15; // rdi
  bool v16; // zf
  struct _NDIS_FILTER_BLOCK *v17; // r14
  __int64 v18; // rbp
  PNET_BUFFER_LIST v19; // rdx
  void **p_VerifierContext; // rdi
  struct _VF_NDIS_DISPATCH_TABLE *v21; // rax
  __int64 ChildRefCount; // r8
  struct _NET_BUFFER_LIST *Scratch; // rsi
  void **v24; // rdi
  struct _VF_NDIS_DISPATCH_TABLE *v25; // rax
  __int64 v26; // r8
  struct _NET_BUFFER_LIST *v27; // rsi
  struct NDIS_NBL_TRACKER_HANDLE__ *v28; // r10
  __int64 v29; // r12
  unsigned __int64 v30; // rbx
  __int64 v31; // r8
  char v32; // di
  unsigned __int64 v33; // rbx
  _BYTE *v34; // r9
  unsigned int *v35; // r11
  _SLIST_HEADER *v36; // r15
  unsigned __int64 Region; // rdi
  _BYTE *v38; // rcx
  _SLIST_HEADER *Alignment; // rax
  __int64 v40; // rdx
  int v41; // eax
  char v42[8]; // [rsp+30h] [rbp-98h]
  _BYTE *v43; // [rsp+40h] [rbp-88h]
  struct NDIS_NBL_TRACKER_HANDLE__ *v44; // [rsp+48h] [rbp-80h]
  __int64 v45; // [rsp+50h] [rbp-78h]
  __int64 v46; // [rsp+58h] [rbp-70h] BYREF
  __int64 v47; // [rsp+60h] [rbp-68h]
  int v48; // [rsp+68h] [rbp-60h]
  _QWORD v49[11]; // [rsp+70h] [rbp-58h] BYREF
  unsigned int v50; // [rsp+D0h] [rbp+8h] BYREF
  bool v51; // [rsp+D8h] [rbp+10h] BYREF
  __int64 v52; // [rsp+E8h] [rbp+20h]

  v4 = NetBufferList;
  if ( (*((_DWORD *)MiniportAdapterHandle + 922) & 0x800) != 0 )
  {
    ndisNblVerifyTxCompletion((ULONG_PTR)NetBufferList, SendCompleteFlags, (ULONG_PTR)MiniportAdapterHandle);
    ndisNblPoisonScratchFields(v4);
  }
  v6 = 0LL;
  if ( *((_QWORD *)MiniportAdapterHandle + 556) )
  {
    Alignment = (_SLIST_HEADER *)v4;
    v40 = 0LL;
    if ( v4 )
    {
      do
      {
        Alignment = (_SLIST_HEADER *)Alignment->Alignment;
        v40 = (unsigned int)(v40 + 1);
      }
      while ( Alignment );
    }
    ndisClearBusy(MiniportAdapterHandle, v40, 52LL);
    v6 = 0LL;
  }
  Status = v4->Status;
  if ( Status && byte_1C00F5390 && (*((_DWORD *)MiniportAdapterHandle + 1466) & 2) != 0 )
  {
    PktMonClientNblDropNdis((_DWORD)MiniportAdapterHandle + 5808, (_DWORD)v4, SendCompleteFlags, 2, Status, -536866803);
    v6 = 0LL;
  }
  updated = *((unsigned int *)MiniportAdapterHandle + 12);
  v46 = 0LL;
  v47 = 0LL;
  v48 = -1;
  if ( (_DWORD)updated || *((_DWORD *)MiniportAdapterHandle + 20) )
  {
    LODWORD(v47) = updated;
    HIDWORD(v47) = *((_DWORD *)MiniportAdapterHandle + 20);
    updated = *((_QWORD *)MiniportAdapterHandle + 5);
    v46 = updated;
    if ( !updated )
    {
      updated = *((_QWORD *)MiniportAdapterHandle + 5);
      v46 = updated;
    }
  }
  v9 = 2;
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    updated = (SendCompleteFlags & 1) != 0;
    v28 = (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)MiniportAdapterHandle + 510);
    v29 = 0LL;
    v30 = *((_QWORD *)MiniportAdapterHandle + 323);
    v31 = 0LL;
    v32 = ndisNblTrackerEpoch;
    v44 = v28;
    v45 = 0LL;
    v52 = 0LL;
    v51 = (SendCompleteFlags & 1) != 0;
    LOBYTE(v50) = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal(v4, v28, 0x93u, (void *)v30, updated);
      v28 = v44;
      v31 = 0LL;
    }
    v33 = v30 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v33 & 1) != 0 )
    {
      v34 = *(_BYTE **)((v33 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      updated = 2LL * (v32 & 1);
      v33 |= updated;
    }
    else
    {
      v34 = (_BYTE *)v33;
    }
    v43 = v34;
    v35 = &WPP_RECORDER_INITIALIZED;
    v36 = (_SLIST_HEADER *)v4;
    while ( 1 )
    {
      Region = v36[22].Region;
      while ( v36[22].Region == Region )
      {
        if ( Region )
        {
          if ( (Region & 4) != 0 )
            goto LABEL_70;
        }
        else if ( !v36[7].Region )
        {
          v36[7].Region = ndisSourceHandleFromOwner((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFFDuLL);
        }
        v38 = (_BYTE *)v36[7].Region;
        if ( v38 )
        {
          if ( (unsigned __int8)(*v38 - 17) <= 1u || *v38 == 5 )
          {
            if ( v38 != v34 || v36[1].Region )
            {
              ++v29;
              updated = v33;
            }
            else
            {
              ++v31;
              updated = 24LL;
              v52 = v31;
              ++v29;
            }
            goto LABEL_51;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != v35 )
          {
            *(_DWORD *)v42 = (unsigned __int8)*v38;
            WPP_RECORDER_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              3u,
              0x1Bu,
              0xCu,
              (struct _GUID *)&WPP_1f4f9304c13d30d166c4c68f5fb6e586_Traceguids,
              (char)v36,
              *(_QWORD *)v42);
            goto LABEL_69;
          }
        }
        else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != v35 )
        {
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            0x1Bu,
            0xBu,
            (struct _GUID *)&WPP_1f4f9304c13d30d166c4c68f5fb6e586_Traceguids,
            v36);
LABEL_69:
          v31 = v52;
          v35 = &WPP_RECORDER_INITIALIZED;
          v34 = v43;
          v28 = v44;
        }
LABEL_70:
        updated = v33 | 4;
LABEL_51:
        v36[22].Region = updated;
        v36 = (_SLIST_HEADER *)v36->Alignment;
        if ( !v36 )
          break;
      }
      if ( (Region & 1) != 0 )
      {
        updated = ndisNblTrackerUpdateOwnershipCount(Region, v45 - v29, &v51, &v50);
        v31 = v52;
        v35 = &WPP_RECORDER_INITIALIZED;
        v34 = v43;
        v28 = v44;
      }
      v45 = v29;
      if ( !v36 )
      {
        if ( (v33 & 1) != 0 )
          updated = ndisNblTrackerUpdateOwnershipCount(v33, v29 - v31, &v51, &v50);
        v9 = 2;
        v6 = 0LL;
        break;
      }
    }
  }
  if ( byte_1C00F5390 )
    ndisMarkNetBufferListCorrelationIdsAsUsed(v4);
  if ( (v47 & 0x10000000000LL) != 0 )
  {
    if ( (SendCompleteFlags & 1) == 0 )
      v9 = KfRaiseIrql(2u);
    ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&v46, 8u);
    v6 = 0LL;
  }
  v10 = (struct _NDIS_FILTER_BLOCK *)*((_QWORD *)MiniportAdapterHandle + 324);
  NextSendNetBufferListsCompleteHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))*((_QWORD *)MiniportAdapterHandle + 327);
  NextSendNetBufferListsCompleteContext = *((_QWORD *)MiniportAdapterHandle + 322);
  if ( v10->Header.Type == 17 )
    goto LABEL_12;
  if ( (SendCompleteFlags & 1) != 0 )
    goto LABEL_18;
  if ( KeGetCurrentIrql() == 2 )
  {
    v6 = 0LL;
LABEL_18:
    LODWORD(updated) = KeGetPcr()->Prcb.Number;
    v15 = (PNET_BUFFER_LIST *)v49;
    v4->Scratch = v6;
    v4->ChildRefCount = SendCompleteFlags;
    v16 = v10->Header.Type == 5;
    v50 = updated;
    v49[2] = v6;
    v49[0] = v4;
    v49[1] = v4;
    if ( v16 )
    {
      while ( *v15 )
      {
        v17 = v10;
        v18 = (__int64)v10->IterativeDataPathTracker[updated];
        if ( *(_BYTE *)(v18 + 40) )
        {
          ndisIterativeDPInvokeHandlerOnTracker<1,void (void *,_NET_BUFFER_LIST *,unsigned long)>(v10);
          v4 = *v15;
          v6 = 0LL;
          goto LABEL_28;
        }
        *(_BYTE *)(v18 + 40) = 1;
        v19 = *v15;
        *v15 = v6;
        if ( v19 )
        {
          p_VerifierContext = &v10->VerifierContext;
          do
          {
            v21 = ndisVerifierNdisDispatch;
            ChildRefCount = (unsigned int)v19->ChildRefCount;
            Scratch = (struct _NET_BUFFER_LIST *)v19->Scratch;
            v19->ChildRefCount = (int)v6;
            if ( v21 && v10->Header.Type == 5 && *p_VerifierContext )
            {
              (*((void (__fastcall **)(__int64, PNET_BUFFER_LIST, _QWORD, void *, void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int)))v21
               + 13))(
                NextSendNetBufferListsCompleteContext,
                v19,
                0LL,
                *p_VerifierContext,
                NextSendNetBufferListsCompleteHandler);
            }
            else
            {
              NextSendNetBufferListsCompleteHandler((void *)NextSendNetBufferListsCompleteContext, v19, ChildRefCount);
              p_VerifierContext = &v10->VerifierContext;
            }
            v19 = Scratch;
            v6 = 0LL;
          }
          while ( Scratch );
        }
        updated = v50;
        v15 = (PNET_BUFFER_LIST *)(v18 + 24);
        *(_BYTE *)(v18 + 40) = 0;
        v10 = (struct _NDIS_FILTER_BLOCK *)v10->NextSendNetBufferListsCompleteObject;
        NextSendNetBufferListsCompleteHandler = v17->NextSendNetBufferListsCompleteHandler;
        NextSendNetBufferListsCompleteContext = (__int64)v17->NextSendNetBufferListsCompleteContext;
        if ( v10->Header.Type != 5 )
        {
          v4 = *(PNET_BUFFER_LIST *)(v18 + 24);
          goto LABEL_28;
        }
      }
    }
    else
    {
LABEL_28:
      if ( v4 )
      {
        *v15 = v6;
        v24 = &v10->VerifierContext;
        do
        {
          v25 = ndisVerifierNdisDispatch;
          v26 = (unsigned int)v4->ChildRefCount;
          v27 = (struct _NET_BUFFER_LIST *)v4->Scratch;
          v4->ChildRefCount = (int)v6;
          if ( v25 && v10->Header.Type == 5 && *v24 )
          {
            (*((void (__fastcall **)(__int64, PNET_BUFFER_LIST, _QWORD, void *, void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int)))v25
             + 13))(
              NextSendNetBufferListsCompleteContext,
              v4,
              0LL,
              *v24,
              NextSendNetBufferListsCompleteHandler);
          }
          else
          {
            NextSendNetBufferListsCompleteHandler((void *)NextSendNetBufferListsCompleteContext, v4, v26);
            v24 = &v10->VerifierContext;
          }
          v4 = v27;
          LODWORD(v6) = 0;
        }
        while ( v27 );
      }
    }
    goto LABEL_13;
  }
  if ( *(_BYTE *)MiniportAdapterHandle != 5 )
  {
LABEL_12:
    NextSendNetBufferListsCompleteHandler((void *)NextSendNetBufferListsCompleteContext, v4, SendCompleteFlags);
    goto LABEL_13;
  }
  v41 = ndisExpandDataPathStack<1,void (void *,_NET_BUFFER_LIST *,unsigned long)>(
          (int)v4,
          v13,
          v14,
          SendCompleteFlags,
          v10,
          NextSendNetBufferListsCompleteContext,
          (__int64)NextSendNetBufferListsCompleteHandler);
  if ( v41 < 0 )
    ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)MiniportAdapterHandle, v4, 1u);
LABEL_13:
  if ( (v47 & 0x10000000000LL) != 0 )
  {
    ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&v46, 8u, 0x15uLL);
    if ( v9 != 2 )
      KeLowerIrql(v9);
  }
}
