/*
 * XREFs of MmGetSessionObjectById @ 0x1402DF7D8
 * Callers:
 *     SepSetTokenSessionById @ 0x140672524 (SepSetTokenSessionById.c)
 *     NtSetInformationObject @ 0x1406B9250 (NtSetInformationObject.c)
 *     SeSetSessionIdToken @ 0x1407530D0 (SeSetSessionIdToken.c)
 *     SepDuplicateToken @ 0x1407CDED0 (SepDuplicateToken.c)
 *     SeExchangePrimaryToken @ 0x140847260 (SeExchangePrimaryToken.c)
 *     IoGetContainerInformation @ 0x1409371A0 (IoGetContainerInformation.c)
 *     IoRegisterContainerNotification @ 0x140937220 (IoRegisterContainerNotification.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     MmGetSessionById @ 0x1402DF880 (MmGetSessionById.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

void *__fastcall MmGetSessionObjectById(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v4; // rdi
  __int64 SessionById; // rax
  void *v6; // rsi
  __int64 v7; // rbx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // edx
  bool v14; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0LL;
  SessionById = MmGetSessionById(a1, a2, a3, a4);
  v6 = (void *)SessionById;
  if ( SessionById )
  {
    v7 = *(_QWORD *)(SessionById + 1368);
    v4 = *(void **)(v7 + 64);
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    if ( (*(_DWORD *)(v7 + 4) & 2) != 0 )
      v4 = 0LL;
    else
      ObfReferenceObjectWithTag(v4, 0x746C6644u);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v13 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v14 = (v13 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v13;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    ObfDereferenceObject(v6);
  }
  return v4;
}
