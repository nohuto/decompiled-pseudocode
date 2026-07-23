/*
 * XREFs of PspRevertContainerImpersonation @ 0x14025A0CC
 * Callers:
 *     PsImpersonateContainerOfThread @ 0x14025A170 (PsImpersonateContainerOfThread.c)
 *     IopProcessWorkItem @ 0x14031E940 (IopProcessWorkItem.c)
 *     NtRevertContainerImpersonation @ 0x1405A4650 (NtRevertContainerImpersonation.c)
 *     NtSetInformationThread @ 0x1407337A0 (NtSetInformationThread.c)
 *     PspExitThread @ 0x14076DC1C (PspExitThread.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x140258570 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8F70 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KiClearSystemPriority @ 0x140346270 (KiClearSystemPriority.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x140349CFC (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PspRevertContainerImpersonation(ULONG_PTR BugCheckParameter1)
{
  void *v1; // rbx
  KIRQL v4; // al
  unsigned __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf

  v1 = *(void **)(BugCheckParameter1 + 1552);
  if ( !v1 )
    return 3221225473LL;
  KeSetThreadChargeOnlySchedulingGroup(BugCheckParameter1, 0LL);
  v4 = ExAcquireSpinLockExclusive(&PspThreadWorkOnBehalfLock);
  *(_QWORD *)(BugCheckParameter1 + 1552) = 0LL;
  v5 = v4;
  KiClearSystemPriority(BugCheckParameter1);
  ExReleaseSpinLockExclusiveFromDpcLevel(&PspThreadWorkOnBehalfLock);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v5 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v10 = (v9 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v9;
      if ( v10 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v5);
  EtwTraceThreadWorkOnBehalfUpdate((__int64)v1, 0LL);
  ObDereferenceObjectDeferDeleteWithTag(v1, 0x746E6F43u);
  return 0LL;
}
