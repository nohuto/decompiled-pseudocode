/*
 * XREFs of ExpAddResourceToSystemResourceList @ 0x1403C5024
 * Callers:
 *     ExInitializeFastResource @ 0x1403C4EF0 (ExInitializeFastResource.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D360 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402894C0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall ExpAddResourceToSystemResourceList(_QWORD *a1)
{
  unsigned __int64 v2; // rdi
  _QWORD *v3; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  bool v8; // zf

  v2 = ExAcquireSpinLockExclusive(&ExpResourceSpinLock);
  v3 = (_QWORD *)qword_140C2D6A8;
  if ( *(__int64 **)qword_140C2D6A8 != &ExpSystemResourcesList )
    __fastfail(3u);
  *a1 = &ExpSystemResourcesList;
  a1[1] = v3;
  *v3 = a1;
  qword_140C2D6A8 = (__int64)a1;
  ExReleaseSpinLockExclusiveFromDpcLevel(&ExpResourceSpinLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v8 = (v7 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v7;
      if ( v8 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v2);
}
