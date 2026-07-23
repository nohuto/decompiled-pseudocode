/*
 * XREFs of MmGetSessionObjectById @ 0x1402C0DF0
 * Callers:
 *     NtSetInformationObject @ 0x140697640 (NtSetInformationObject.c)
 *     SepSetTokenSessionById @ 0x1406B7B10 (SepSetTokenSessionById.c)
 *     SepDuplicateToken @ 0x140729D80 (SepDuplicateToken.c)
 *     SeSetSessionIdToken @ 0x1407F1444 (SeSetSessionIdToken.c)
 *     SeExchangePrimaryToken @ 0x1408405F8 (SeExchangePrimaryToken.c)
 *     IoGetContainerInformation @ 0x140948350 (IoGetContainerInformation.c)
 *     IoRegisterContainerNotification @ 0x1409483D0 (IoRegisterContainerNotification.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6B50 (ObfReferenceObjectWithTag.c)
 *     MmGetSessionById @ 0x1402C20C0 (MmGetSessionById.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
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
    KeAcquireInStackQueuedSpinLock(&qword_140C697C0, &LockHandle);
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
