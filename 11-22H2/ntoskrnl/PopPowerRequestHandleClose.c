/*
 * XREFs of PopPowerRequestHandleClose @ 0x14032B5A4
 * Callers:
 *     PspExitThread @ 0x14076DF3C (PspExitThread.c)
 *     PopPowerRequestClose @ 0x1407EB3B0 (PopPowerRequestClose.c)
 *     PoDeletePowerRequest @ 0x140875B20 (PoDeletePowerRequest.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     PopPowerRequestCallbackWorker @ 0x14032B9D0 (PopPowerRequestCallbackWorker.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x14032CB34 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopPowerRequestHandleClose(_BYTE *Object)
{
  bool v2; // di
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v7; // zf
  _QWORD v8[2]; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF

  v8[1] = v8;
  v8[0] = v8;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
  Object[32] = 1;
  PopPowerRequestEvaluatePendingRequestStatus(Object);
  v2 = v8[0] != (_QWORD)v8;
  result = KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && LockHandle.OldIrql <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v7 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v7 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  if ( v2 )
    return PopPowerRequestCallbackWorker(v8);
  return result;
}
