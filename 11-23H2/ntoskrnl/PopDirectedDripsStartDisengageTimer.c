/*
 * XREFs of PopDirectedDripsStartDisengageTimer @ 0x14058702C
 * Callers:
 *     PopRequestCompletion @ 0x14028E0C0 (PopRequestCompletion.c)
 *     PoFxNotifySurprisePowerOn @ 0x140587FB0 (PoFxNotifySurprisePowerOn.c)
 * Callees:
 *     KeSetTimer2 @ 0x140250150 (KeSetTimer2.c)
 *     KxReleaseSpinLock @ 0x140250500 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250E80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer2 @ 0x14031DEE0 (KeCancelTimer2.c)
 *     PopDirectedDripsSetDisengageReason @ 0x14035E5D4 (PopDirectedDripsSetDisengageReason.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopDirectedDripsStartDisengageTimer(int a1)
{
  KSPIN_LOCK *v1; // rbx
  unsigned __int64 v2; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  bool v6; // zf
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (KSPIN_LOCK *)((char *)&unk_140C3F1B0 + 160 * a1);
  v7[0] = 0LL;
  v2 = KeAcquireSpinLockRaiseToDpc(v1 + 1);
  v7[1] = -1LL;
  if ( !KeCancelTimer2((__int64)(v1 + 3)) && ++*((_DWORD *)v1 + 5) == 1 )
    PopDirectedDripsSetDisengageReason(*(_DWORD *)v1);
  KeSetTimer2((__int64)(v1 + 3), -10000000LL * *((unsigned int *)v1 + 1), 0LL, (__int64)v7);
  ++*((_DWORD *)v1 + 4);
  result = KxReleaseSpinLock((volatile signed __int64 *)v1 + 1);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v2 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v6 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v6 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v2);
  return result;
}
