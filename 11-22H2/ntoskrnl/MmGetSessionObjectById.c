/*
 * XREFs of MmGetSessionObjectById @ 0x1402C0B30
 * Callers:
 *     NtSetInformationObject @ 0x140697640 (NtSetInformationObject.c)
 *     SepSetTokenSessionById @ 0x1406B7AE0 (SepSetTokenSessionById.c)
 *     SepDuplicateToken @ 0x140729BF0 (SepDuplicateToken.c)
 *     SeSetSessionIdToken @ 0x1407F16F4 (SeSetSessionIdToken.c)
 *     SeExchangePrimaryToken @ 0x140842088 (SeExchangePrimaryToken.c)
 *     IoGetContainerInformation @ 0x140948200 (IoGetContainerInformation.c)
 *     IoRegisterContainerNotification @ 0x140948280 (IoRegisterContainerNotification.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6890 (ObfReferenceObjectWithTag.c)
 *     MmGetSessionById @ 0x1402C1E00 (MmGetSessionById.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

void *__fastcall MmGetSessionObjectById(__int64 a1, __int64 a2)
{
  void *v2; // rdi
  __int64 SessionById; // rax
  void *v4; // rsi
  __int64 v5; // rbx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // edx
  bool v12; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0LL;
  SessionById = MmGetSessionById(a1, a2);
  v4 = (void *)SessionById;
  if ( SessionById )
  {
    v5 = *(_QWORD *)(SessionById + 1368);
    v2 = *(void **)(v5 + 48);
    KeAcquireInStackQueuedSpinLock(&qword_140C698C0, &LockHandle);
    if ( (*(_DWORD *)(v5 + 4) & 2) != 0 )
      v2 = 0LL;
    else
      ObfReferenceObjectWithTag(v2, 0x746C6644u);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && LockHandle.OldIrql <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v12 = (v11 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    ObfDereferenceObject(v4);
  }
  return v2;
}
