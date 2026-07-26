/*
 * XREFs of ?ndisMWakeUpDpcX@@YAXPEAX000@Z @ 0x1C0006450
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00030D0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     NdisReferenceWithTag @ 0x1C000CBD0 (NdisReferenceWithTag.c)
 *     ?ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00251B0 (-ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z @ 0x1C00B1FB0 (-ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z.c)
 *     ?ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00B2098 (-ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisMWakeUpDpcX(
        PVOID SystemSpecific1,
        struct _NDIS_MINIPORT_BLOCK *FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  char v5; // bp
  char v6; // r15
  char v7; // r12
  unsigned int *p_PnPFlags; // rsi
  int v9; // edx
  KIRQL v10; // r13
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  unsigned int ReferenceCount; // ecx
  WORK_QUEUE_TYPE v13; // edx
  __int64 v14; // rax
  __int64 Clock; // [rsp+40h] [rbp-38h]

  v5 = 0;
  Clock = 0LL;
  v6 = 1;
  if ( HIBYTE(dword_1C00F76B0) )
  {
    v7 = 1;
    ndisTraceDpcStart(FunctionContext, 4u);
    Clock = WmiGetClock(0LL, 0LL);
  }
  else
  {
    v7 = 0;
  }
  KeAcquireSpinLockAtDpcLevel(&FunctionContext->Lock);
  p_PnPFlags = &FunctionContext->PnPFlags;
  if ( (FunctionContext->Flags & 0x80000000) != 0 || (*p_PnPFlags & 0x20080000) != 0 )
  {
    FunctionContext->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&FunctionContext->Lock);
LABEL_28:
    KeSetEvent(&FunctionContext->CFHCompletedEvent, 0, 0);
    if ( v5 )
    {
      KeAcquireSpinLockAtDpcLevel(&FunctionContext->Lock);
      FunctionContext->MiniportThread = KeGetCurrentThread();
      if ( (FunctionContext->Flags & 0x80000000) == 0 && (*p_PnPFlags & 0x20080000) == 0 )
        ndisSetWakeUpTimer(FunctionContext);
      FunctionContext->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&FunctionContext->Lock);
    }
    goto LABEL_19;
  }
  FunctionContext->MiniportThread = 0LL;
  KeReleaseSpinLockFromDpcLevel(&FunctionContext->Lock);
  v10 = KeAcquireSpinLockRaiseToDpc(&FunctionContext->Ref.SpinLock);
  if ( FunctionContext->Ref.Closing )
    goto LABEL_24;
  RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)FunctionContext->RefCountTracker;
  if ( RefCountTracker )
    NdisReferenceWithTag(RefCountTracker);
  ReferenceCount = FunctionContext->Ref.ReferenceCount;
  FunctionContext->Ref.ReferenceCount = ReferenceCount + 1;
  if ( ReferenceCount == -1 )
  {
    FunctionContext->Ref.ReferenceCount = -1;
LABEL_24:
    v6 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      20,
      12,
      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
      (char)FunctionContext,
      FunctionContext->Ref.ReferenceCount);
  }
  KeReleaseSpinLock(&FunctionContext->Ref.SpinLock, v10);
  if ( v6 )
  {
    if ( _InterlockedCompareExchange(&FunctionContext->CFHWorkItemQueued, 1, 0) )
    {
      ndisDereferenceMiniport(FunctionContext, 0x53u);
    }
    else
    {
      if ( FunctionContext->MajorNdisVersion > 6u
        || FunctionContext->MajorNdisVersion == 6 && FunctionContext->MinorNdisVersion >= 0x50u )
      {
        v13 = CustomPriorityWorkQueue|NormalWorkQueue;
      }
      else
      {
        v13 = CustomPriorityWorkQueue|RealTimeWorkQueue|0x8;
      }
      ExQueueWorkItem(&FunctionContext->CFHWorkItem, v13);
    }
  }
  else
  {
    v5 = 1;
  }
  if ( v5 )
    goto LABEL_28;
LABEL_19:
  if ( v7 )
  {
    v14 = WmiGetClock(0LL, 0LL);
    ndisTraceDpcEnd(FunctionContext, 4u, v14 - Clock);
  }
}
