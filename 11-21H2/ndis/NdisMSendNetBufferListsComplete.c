/*
 * XREFs of NdisMSendNetBufferListsComplete @ 0x1C0003540
 * Callers:
 *     ?CompleteTransmittedNbls@NdisPoll@@AEAAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z @ 0x1C00C0684 (-CompleteTransmittedNbls@NdisPoll@@AEAAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z.c)
 * Callees:
 *     ?ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00037D8 (-ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C00037F0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ??$ndisExpandDataPathStack@$00$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAJPEAU_NET_BUFFER_LIST@@KKKPEAX1P6AX10K@Z@Z @ 0x1C003933C (--$ndisExpandDataPathStack@$00$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAJPEAU_NET_BUFFER_LIST@@KKKP.c)
 *     ?ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C003AC7C (-ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ??$ndisIterativeDPInvokeHandlerOnTracker@$00$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAXP6AX0PEAU_NET_BUFFER_LIST@@K@Z0PEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@@Z @ 0x1C005F96C (--$ndisIterativeDPInvokeHandlerOnTracker@$00$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAXP6AX0PEA.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0061328 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C006D368 (-ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C006D720 (-ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C008C874 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C008C8CC (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x1C00A6768 (-ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z.c)
 */

void __stdcall NdisMSendNetBufferListsComplete(
        NDIS_HANDLE MiniportAdapterHandle,
        PNET_BUFFER_LIST NetBufferList,
        ULONG SendCompleteFlags)
{
  PNET_BUFFER_LIST v4; // r13
  __int64 v6; // rax
  KIRQL v7; // r12
  struct _NDIS_FILTER_BLOCK *v8; // rbp
  void (__fastcall *NextSendNetBufferListsCompleteHandler)(void *, _NET_BUFFER_LIST *, unsigned int); // r14
  __int64 NextSendNetBufferListsCompleteContext; // r15
  PNET_BUFFER_LIST *v11; // rbx
  bool v12; // zf
  struct _NDIS_FILTER_BLOCK *v13; // rdi
  __int64 v14; // r13
  PNET_BUFFER_LIST v15; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v16; // rax
  __int64 ChildRefCount; // r8
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v19; // rbx
  _SLIST_HEADER *Alignment; // rax
  __int64 v21; // rdx
  int v22; // edx
  int v23; // r8d
  __int64 v24; // [rsp+40h] [rbp-58h] BYREF
  __int64 v25; // [rsp+48h] [rbp-50h]
  int v26; // [rsp+50h] [rbp-48h]
  _QWORD v27[3]; // [rsp+58h] [rbp-40h] BYREF
  unsigned int v28; // [rsp+A0h] [rbp+8h]

  v4 = NetBufferList;
  if ( (*((_DWORD *)MiniportAdapterHandle + 922) & 0x800) != 0 )
  {
    ndisNblVerifyTxCompletion((ULONG_PTR)NetBufferList, SendCompleteFlags, (ULONG_PTR)MiniportAdapterHandle);
    ndisNblPoisonScratchFields(v4);
  }
  if ( *((_QWORD *)MiniportAdapterHandle + 556) )
  {
    Alignment = (_SLIST_HEADER *)v4;
    v21 = 0LL;
    if ( v4 )
    {
      do
      {
        Alignment = (_SLIST_HEADER *)Alignment->Alignment;
        v21 = (unsigned int)(v21 + 1);
      }
      while ( Alignment );
    }
    ndisClearBusy(MiniportAdapterHandle, v21, 52LL);
  }
  v6 = *((unsigned int *)MiniportAdapterHandle + 12);
  v24 = 0LL;
  v25 = 0LL;
  v26 = -1;
  if ( (_DWORD)v6 || *((_DWORD *)MiniportAdapterHandle + 20) )
  {
    LODWORD(v25) = v6;
    HIDWORD(v25) = *((_DWORD *)MiniportAdapterHandle + 20);
    v6 = *((_QWORD *)MiniportAdapterHandle + 5);
    v24 = v6;
    if ( !v6 )
    {
      v6 = *((_QWORD *)MiniportAdapterHandle + 5);
      v24 = v6;
    }
  }
  v7 = 2;
  if ( *(_DWORD *)ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(
      v4,
      *((struct NDIS_NBL_TRACKER_HANDLE__ **)MiniportAdapterHandle + 510),
      *((struct NDIS_NBL_TRACKER_HANDLE__ **)MiniportAdapterHandle + 323),
      NdisNblTrackerEvent_MiniportSendCompleted,
      (SendCompleteFlags & 1) != 0);
  if ( byte_1C00EC210 )
    ndisMarkNetBufferListCorrelationIdsAsUsed(v4);
  if ( (v25 & 0x10000000000LL) != 0 )
  {
    if ( (SendCompleteFlags & 1) == 0 )
      v7 = KfRaiseIrql(2u);
    ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&v24, 8u);
  }
  v8 = (struct _NDIS_FILTER_BLOCK *)*((_QWORD *)MiniportAdapterHandle + 324);
  NextSendNetBufferListsCompleteHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))*((_QWORD *)MiniportAdapterHandle + 327);
  NextSendNetBufferListsCompleteContext = *((_QWORD *)MiniportAdapterHandle + 322);
  if ( v8->Header.Type == 17 )
    goto LABEL_12;
  if ( (SendCompleteFlags & 1) != 0 || KeGetCurrentIrql() == 2 )
  {
    LODWORD(v6) = KeGetPcr()->Prcb.Number;
    v11 = (PNET_BUFFER_LIST *)v27;
    v4->Scratch = 0LL;
    v4->ChildRefCount = SendCompleteFlags;
    v12 = v8->Header.Type == 5;
    v28 = v6;
    v27[2] = 0LL;
    v27[0] = v4;
    v27[1] = v4;
    if ( v12 )
    {
      while ( *v11 )
      {
        v13 = v8;
        v14 = (__int64)v8->IterativeDataPathTracker[v6];
        if ( *(_BYTE *)(v14 + 40) )
        {
          ndisIterativeDPInvokeHandlerOnTracker<1,void (void *,_NET_BUFFER_LIST *,unsigned long)>(
            v8,
            NextSendNetBufferListsCompleteHandler,
            NextSendNetBufferListsCompleteContext,
            v11);
          v4 = *v11;
          goto LABEL_27;
        }
        *(_BYTE *)(v14 + 40) = 1;
        v15 = *v11;
        *v11 = 0LL;
        if ( v15 )
        {
          do
          {
            v16 = ndisVerifierNdisDispatch;
            ChildRefCount = (unsigned int)v15->ChildRefCount;
            Scratch = (struct _NET_BUFFER_LIST *)v15->Scratch;
            v15->ChildRefCount = 0;
            if ( v16 && v8->Header.Type == 5 && v8->VerifierContext )
              (*((void (__fastcall **)(__int64, PNET_BUFFER_LIST, _QWORD))v16 + 13))(
                NextSendNetBufferListsCompleteContext,
                v15,
                0LL);
            else
              NextSendNetBufferListsCompleteHandler((void *)NextSendNetBufferListsCompleteContext, v15, ChildRefCount);
            v15 = Scratch;
          }
          while ( Scratch );
        }
        v6 = v28;
        v11 = (PNET_BUFFER_LIST *)(v14 + 24);
        *(_BYTE *)(v14 + 40) = 0;
        v8 = (struct _NDIS_FILTER_BLOCK *)v8->NextSendNetBufferListsCompleteObject;
        NextSendNetBufferListsCompleteHandler = v13->NextSendNetBufferListsCompleteHandler;
        NextSendNetBufferListsCompleteContext = (__int64)v13->NextSendNetBufferListsCompleteContext;
        if ( v8->Header.Type != 5 )
        {
          v4 = *(PNET_BUFFER_LIST *)(v14 + 24);
          goto LABEL_27;
        }
      }
    }
    else
    {
LABEL_27:
      if ( v4 )
      {
        *v11 = 0LL;
        do
        {
          v19 = (struct _NET_BUFFER_LIST *)v4->Scratch;
          v4->ChildRefCount = 0;
          if ( ndisIsFilterVerified(v8) )
            (*((void (__fastcall **)(__int64, PNET_BUFFER_LIST, _QWORD, void *, void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int)))ndisVerifierNdisDispatch
             + 13))(
              NextSendNetBufferListsCompleteContext,
              v4,
              0LL,
              v8->VerifierContext,
              NextSendNetBufferListsCompleteHandler);
          else
            ((void (__fastcall *)(__int64, PNET_BUFFER_LIST))NextSendNetBufferListsCompleteHandler)(
              NextSendNetBufferListsCompleteContext,
              v4);
          v4 = v19;
        }
        while ( v19 );
      }
    }
  }
  else
  {
    if ( *(_BYTE *)MiniportAdapterHandle != 5 )
    {
LABEL_12:
      NextSendNetBufferListsCompleteHandler((void *)NextSendNetBufferListsCompleteContext, v4, SendCompleteFlags);
      goto LABEL_13;
    }
    if ( (int)ndisExpandDataPathStack<1,void (void *,_NET_BUFFER_LIST *,unsigned long)>(
                (_DWORD)v4,
                v22,
                v23,
                SendCompleteFlags,
                (__int64)v8,
                NextSendNetBufferListsCompleteContext,
                (__int64)NextSendNetBufferListsCompleteHandler) < 0 )
      ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)MiniportAdapterHandle, v4, 1u);
  }
LABEL_13:
  if ( (v25 & 0x10000000000LL) != 0 )
  {
    ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&v24, 8u, 0x15uLL);
    if ( v7 != 2 )
      KeLowerIrql(v7);
  }
}
