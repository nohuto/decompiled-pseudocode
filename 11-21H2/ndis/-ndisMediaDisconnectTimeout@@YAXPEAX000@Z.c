/*
 * XREFs of ?ndisMediaDisconnectTimeout@@YAXPEAX000@Z @ 0x1C007CBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0005F20 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 */

void __fastcall ndisMediaDisconnectTimeout(
        PVOID SystemSpecific1,
        struct _NDIS_MINIPORT_BLOCK *FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  KSPIN_LOCK *p_Lock; // rcx
  unsigned int PnPFlags; // eax
  struct _WORK_QUEUE_ITEM *Pool2; // rax

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x17u,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      FunctionContext);
  KeAcquireSpinLockAtDpcLevel(&FunctionContext->Lock);
  FunctionContext->MiniportThread = 0LL;
  p_Lock = &FunctionContext->Lock;
  PnPFlags = FunctionContext->PnPFlags;
  if ( (PnPFlags & 8) != 0 )
  {
    FunctionContext->PnPFlags = PnPFlags & 0xFFFFFFF7;
    KeReleaseSpinLockFromDpcLevel(p_Lock);
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
    KeReleaseSpinLockFromDpcLevel(p_Lock);
    ndisDereferenceMiniport(FunctionContext, 0xBu);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x18u,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      FunctionContext);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x19u,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      FunctionContext);
}
