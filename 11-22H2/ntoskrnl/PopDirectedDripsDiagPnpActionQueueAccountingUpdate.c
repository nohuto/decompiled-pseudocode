/*
 * XREFs of PopDirectedDripsDiagPnpActionQueueAccountingUpdate @ 0x1405A04D8
 * Callers:
 *     PopDirectedDripsHandleResiliencyNotification @ 0x1409835E0 (PopDirectedDripsHandleResiliencyNotification.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe @ 0x1405A057C (PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe.c)
 */

void __fastcall PopDirectedDripsDiagPnpActionQueueAccountingUpdate(__int64 a1, char a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf

  v5 = KeAcquireSpinLockRaiseToDpc(&qword_140C38EF0);
  if ( byte_140C38F70 != a2 )
  {
    LOBYTE(v3) = a2;
    PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe(v4, v3);
  }
  KxReleaseSpinLock((volatile signed __int64 *)&qword_140C38EF0);
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
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v5);
}
