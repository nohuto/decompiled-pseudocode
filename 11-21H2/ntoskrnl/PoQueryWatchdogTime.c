/*
 * XREFs of PoQueryWatchdogTime @ 0x14022DFC0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402F5718 (KiQueryUnbiasedInterruptTime.c)
 *     KxWaitForLockOwnerShip @ 0x140311C70 (KxWaitForLockOwnerShip.c)
 *     PopComputeWatchdogTimeout @ 0x1403A44C8 (PopComputeWatchdogTimeout.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045A10C (KiAcquireQueuedSpinLockInstrumented.c)
 */

BOOLEAN __stdcall PoQueryWatchdogTime(PDEVICE_OBJECT Pdo, PULONG SecondsRemaining)
{
  unsigned __int64 v3; // rdi
  _QWORD *DeviceNode; // rbx
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 OldIrql; // rbx
  BOOLEAN result; // al
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 UnbiasedInterruptTime; // rax
  BOOLEAN v15; // cl
  unsigned __int64 v16; // rdi
  __int64 v17; // rax
  unsigned int v18; // eax
  __int64 v19; // r8
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  unsigned int v22; // eax
  __int64 v23; // r8
  __int64 v24; // rax
  int v25; // eax
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r9
  _DWORD *v28; // r8
  int v29; // eax
  bool v30; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = -1LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( Pdo )
    DeviceNode = Pdo->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = &PopIrpLock;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  LockHandle.OldIrql = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = CurrentPrcb->SchedulerAssist;
  if ( v7 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v25 = v7[6];
      v7[6] = v25 + 1;
      if ( v25 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, &PopIrpLock);
  }
  else if ( _InterlockedExchange64((volatile __int64 *)&PopIrpLock, (__int64)&LockHandle) )
  {
    KxWaitForLockOwnerShip(&LockHandle);
  }
  v8 = DeviceNode[33];
  if ( v8 )
  {
    v21 = *(char *)(v8 + 66);
    if ( *(_BYTE *)(*(_QWORD *)(v8 + 72 * v21 + 200) + 196LL) )
    {
      v22 = PopComputeWatchdogTimeout(*(_QWORD *)(v8 + 72 * v21 + 200));
      v24 = *(_QWORD *)(v23 + 48) + 10000000LL * v22;
      if ( v24 != -1 )
        v3 = v24;
    }
  }
  v9 = DeviceNode[35];
  if ( v9 )
  {
    v17 = *(char *)(v9 + 66);
    if ( *(_BYTE *)(*(_QWORD *)(v9 + 72 * v17 + 200) + 196LL) )
    {
      v18 = PopComputeWatchdogTimeout(*(_QWORD *)(v9 + 72 * v17 + 200));
      v20 = *(_QWORD *)(v19 + 48) + 10000000LL * v18;
      if ( v20 < v3 )
        v3 = v20;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v26 = KeGetCurrentIrql();
      if ( v26 <= 0xFu && LockHandle.OldIrql <= 0xFu && v26 >= 2u )
      {
        v27 = KeGetCurrentPrcb();
        v28 = v27->SchedulerAssist;
        v10 = (unsigned int)LockHandle.OldIrql + 1;
        v29 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v30 = (v29 & v28[5]) == 0;
        v28[5] &= v29;
        if ( v30 )
          KiRemoveSystemWorkPriorityKick(v27);
      }
    }
  }
  __writecr8(OldIrql);
  if ( v3 == -1LL )
    return 0;
  LOBYTE(v10) = 1;
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(v10);
  if ( UnbiasedInterruptTime > v3 )
  {
    *SecondsRemaining = 0;
    return v15;
  }
  else
  {
    v16 = v3 - UnbiasedInterruptTime;
    result = v15;
    *SecondsRemaining = v16 / 0x989680;
  }
  return result;
}
