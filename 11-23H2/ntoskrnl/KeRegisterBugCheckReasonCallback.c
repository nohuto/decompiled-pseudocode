/*
 * XREFs of KeRegisterBugCheckReasonCallback @ 0x140354C10
 * Callers:
 *     HvlPhase1Initialize @ 0x140388284 (HvlPhase1Initialize.c)
 *     HvlpInitializeHvCrashdump @ 0x1405486B4 (HvlpInitializeHvCrashdump.c)
 *     SmPrepareForFatalHeapCorruption @ 0x1405CDC7C (SmPrepareForFatalHeapCorruption.c)
 *     SmPrepareForFatalPageError @ 0x1405CDD74 (SmPrepareForFatalPageError.c)
 *     CarpBugcheckInit @ 0x1405D5E44 (CarpBugcheckInit.c)
 *     IopInitializeTriageDumpData @ 0x14084EB90 (IopInitializeTriageDumpData.c)
 *     IopInitializeBugCheckDriverData @ 0x140865EE0 (IopInitializeBugCheckDriverData.c)
 *     EtwpInitialize @ 0x140B47A50 (EtwpInitialize.c)
 *     PspInitPhase0 @ 0x140B4A894 (PspInitPhase0.c)
 *     HalpMiscInitDiscard @ 0x140B6A188 (HalpMiscInitDiscard.c)
 *     PopRecorderInit @ 0x140B6BA48 (PopRecorderInit.c)
 *     HalpEfiInitialization @ 0x140B6BB00 (HalpEfiInitialization.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140251670 (KxAcquireSpinLock.c)
 *     KiInsertQueueDpc @ 0x140254850 (KiInsertQueueDpc.c)
 *     KiCheckForDuplicateBugCheckCallback @ 0x140354D60 (KiCheckForDuplicateBugCheckCallback.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN __stdcall KeRegisterBugCheckReasonCallback(
        PKBUGCHECK_REASON_CALLBACK_RECORD CallbackRecord,
        PKBUGCHECK_REASON_CALLBACK_ROUTINE CallbackRoutine,
        KBUGCHECK_CALLBACK_REASON Reason,
        PUCHAR Component)
{
  __int64 v5; // rsi
  BOOLEAN v8; // r14
  unsigned __int8 CurrentIrql; // bp
  struct _LIST_ENTRY *v10; // rdi
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *Blink; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v15; // rdx
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v18; // r9
  int v19; // edx
  bool v20; // zf

  v5 = Reason;
  v8 = 1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v15) = 0x8000;
    else
      v15 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v15;
  }
  KxAcquireSpinLock(&KeBugCheckCallbackLock);
  if ( CallbackRecord->State )
    goto LABEL_15;
  if ( (_DWORD)v5 == 4 || (v10 = (struct _LIST_ENTRY *)&KeBugCheckReasonCallbackListHead, (_DWORD)v5 == 6) )
    v10 = (struct _LIST_ENTRY *)&KeBugCheckAddRemovePagesCallbackListHead;
  if ( (unsigned __int8)KiCheckForDuplicateBugCheckCallback(v10, CallbackRecord) )
  {
LABEL_15:
    v8 = 0;
    goto LABEL_10;
  }
  CallbackRecord->CallbackRoutine = CallbackRoutine;
  CallbackRecord->Reason = v5;
  CallbackRecord->Component = Component;
  CallbackRecord->Checksum = (ULONG_PTR)CallbackRoutine + v5 + (_QWORD)Component;
  CallbackRecord->State = 1;
  if ( (_DWORD)v5 == 1023 )
  {
    if ( _InterlockedIncrement(&KiRecoveryCallbackCount) == 1 && !KiPristineTriageDump )
      KiInsertQueueDpc((ULONG_PTR)&KiPristineTriageDumpAllocationDpc, 0LL, 0LL, 0LL, 0);
  }
  else if ( (_DWORD)v5 == 7 )
  {
    Blink = v10->Blink;
    if ( Blink->Flink == v10 )
    {
      CallbackRecord->Entry.Flink = v10;
      CallbackRecord->Entry.Blink = Blink;
      Blink->Flink = &CallbackRecord->Entry;
      v10->Blink = &CallbackRecord->Entry;
      goto LABEL_10;
    }
LABEL_25:
    __fastfail(3u);
  }
  Flink = v10->Flink;
  if ( v10->Flink->Blink != v10 )
    goto LABEL_25;
  CallbackRecord->Entry.Flink = Flink;
  CallbackRecord->Entry.Blink = v10;
  Flink->Blink = &CallbackRecord->Entry;
  v10->Flink = &CallbackRecord->Entry;
LABEL_10:
  KxReleaseSpinLock((volatile signed __int64 *)&KeBugCheckCallbackLock);
  if ( (_DWORD)KiIrqlFlags )
  {
    v16 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v18 = CurrentPrcb->SchedulerAssist;
      v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v20 = (v19 & v18[5]) == 0;
      v18[5] &= v19;
      if ( v20 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return v8;
}
