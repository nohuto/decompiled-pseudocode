/*
 * XREFs of MiWakeExtentDeletionWaiters @ 0x140640394
 * Callers:
 *     MiDeleteExtentPfns @ 0x14063CA60 (MiDeleteExtentPfns.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402894C0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSignalGate @ 0x14035D33C (KeSignalGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiWakeExtentDeletionWaiters(__int64 a1, unsigned __int8 a2)
{
  _QWORD *v2; // rdi
  unsigned __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  bool v8; // zf
  _QWORD *v9; // rbx

  v2 = (_QWORD *)qword_140C65708;
  qword_140C65708 = 0LL;
  v3 = a2;
  byte_140C65729 = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C6CEA0);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v8 = (v7 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v7;
      if ( v8 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v3);
  if ( v2 )
  {
    do
    {
      v9 = (_QWORD *)*v2;
      KeSignalGate((__int64)(v2 + 1), 1u);
      v2 = v9;
    }
    while ( v9 );
  }
}
