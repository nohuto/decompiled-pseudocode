/*
 * XREFs of PpmParkSnapNodeIdleTime @ 0x14059D488
 * Callers:
 *     PopAccumulateNonActivatedCpuTime @ 0x140599910 (PopAccumulateNonActivatedCpuTime.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmParkGetParkNode @ 0x140410C1C (PpmParkGetParkNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x1405855EC (PpmIdleSnapConcurrencyIdleTime.c)
 */

void __fastcall PpmParkSnapNodeIdleTime(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  unsigned __int64 v6; // rbx
  _WORD *ParkNode; // rax
  KSPIN_LOCK *v8; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf

  *a3 = 0LL;
  *a4 = 0LL;
  v6 = KeAcquireSpinLockRaiseToDpc(&PpmParkStateLock);
  ParkNode = PpmParkGetParkNode(0);
  if ( ParkNode )
  {
    v8 = (KSPIN_LOCK *)*((_QWORD *)ParkNode + 6);
    if ( v8 )
      PpmIdleSnapConcurrencyIdleTime(v8, a3, a4);
  }
  KxReleaseSpinLock((volatile signed __int64 *)&PpmParkStateLock);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v6 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
      v13 = (v12 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v6);
}
