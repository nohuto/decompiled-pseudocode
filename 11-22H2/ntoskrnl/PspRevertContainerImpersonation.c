/*
 * XREFs of PspRevertContainerImpersonation @ 0x140259D1C
 * Callers:
 *     PsImpersonateContainerOfThread @ 0x140259DC0 (PsImpersonateContainerOfThread.c)
 *     IopProcessWorkItem @ 0x14031E4D0 (IopProcessWorkItem.c)
 *     NtRevertContainerImpersonation @ 0x1405A4170 (NtRevertContainerImpersonation.c)
 *     NtSetInformationThread @ 0x140733AB0 (NtSetInformationThread.c)
 *     PspExitThread @ 0x14076DF3C (PspExitThread.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x140258390 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8BC0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KiClearSystemPriority @ 0x140345AF0 (KiClearSystemPriority.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x140349554 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
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
