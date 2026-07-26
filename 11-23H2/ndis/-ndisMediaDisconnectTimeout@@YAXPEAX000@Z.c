/*
 * XREFs of ?ndisMediaDisconnectTimeout@@YAXPEAX000@Z @ 0x1C00820C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00030D0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 */

void __fastcall ndisMediaDisconnectTimeout(
        PVOID SystemSpecific1,
        struct _NDIS_MINIPORT_BLOCK *FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  unsigned int PnPFlags; // ecx
  struct _WORK_QUEUE_ITEM *Pool2; // rax

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x17u,
      (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
      FunctionContext);
  KeAcquireSpinLockAtDpcLevel(&FunctionContext->Lock);
  PnPFlags = FunctionContext->PnPFlags;
  FunctionContext->MiniportThread = 0LL;
  if ( (PnPFlags & 8) != 0 )
  {
    FunctionContext->PnPFlags = PnPFlags & 0xFFFFFFF7;
    KeReleaseSpinLockFromDpcLevel(&FunctionContext->Lock);
    Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 40LL, 1769423950);
    if ( Pool2 )
    {
      FunctionContext->PnPFlags |= 0x400u;
      Pool2->List.Flink = 0LL;
      Pool2->WorkerRoutine = ndisMediaDisconnectWorker;
      Pool2->Parameter = Pool2;
      Pool2[1].List.Flink = (_LIST_ENTRY *)FunctionContext;
      ExQueueWorkItem(Pool2, (WORK_QUEUE_TYPE)40);
    }
    else
    {
      ndisDereferenceMiniport(FunctionContext, 0xBu);
    }
  }
  else
  {
    KeReleaseSpinLockFromDpcLevel(&FunctionContext->Lock);
    ndisDereferenceMiniport(FunctionContext, 0xBu);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x18u,
      (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
      FunctionContext);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x19u,
      (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
      FunctionContext);
}
