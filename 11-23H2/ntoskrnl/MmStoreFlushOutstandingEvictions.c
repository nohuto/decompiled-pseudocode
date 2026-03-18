/*
 * XREFs of MmStoreFlushOutstandingEvictions @ 0x14065D034
 * Callers:
 *     MiStoreDeletePartition @ 0x14065C038 (MiStoreDeletePartition.c)
 *     SmStoreCompressionStart @ 0x1409D7828 (SmStoreCompressionStart.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D360 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402894C0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeResetEvent @ 0x1402AF940 (KeResetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 */

NTSTATUS __fastcall MmStoreFlushOutstandingEvictions(_QWORD *a1)
{
  __int64 v1; // rdi
  volatile LONG *v2; // rbp
  unsigned __int64 v3; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  bool v8; // zf

  v1 = *a1;
  v2 = (volatile LONG *)(*a1 + 1224LL);
  v3 = ExAcquireSpinLockExclusive(v2);
  if ( !*(_DWORD *)(v1 + 1200) )
    KeResetEvent((PRKEVENT)(v1 + 1312));
  ++*(_DWORD *)(v1 + 1200);
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
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
  KeSetEvent((PRKEVENT)(v1 + 1240), 0, 0);
  return KeWaitForSingleObject((PVOID)(v1 + 1312), WrKernel, 0, 0, 0LL);
}
