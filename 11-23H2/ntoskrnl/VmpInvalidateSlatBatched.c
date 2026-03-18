/*
 * XREFs of VmpInvalidateSlatBatched @ 0x1405F9818
 * Callers:
 *     VmpRemoveMemoryRange @ 0x1405FACF4 (VmpRemoveMemoryRange.c)
 *     VmpUnpinMemoryRange @ 0x1405FB554 (VmpUnpinMemoryRange.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402894C0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     VmpProcessContextLockExclusive @ 0x140466D1E (VmpProcessContextLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 *     VmpInvalidateOutstandingFaults @ 0x1405F96A8 (VmpInvalidateOutstandingFaults.c)
 *     VmpProcessInvalidateSlat @ 0x1405FAA64 (VmpProcessInvalidateSlat.c)
 */

__int64 __fastcall VmpInvalidateSlatBatched(
        PEX_SPIN_LOCK SpinLock,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 *a5,
        char a6)
{
  __int64 v10; // rbx
  __int64 result; // rax
  __int64 v12; // r14
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf

  while ( 1 )
  {
    v10 = a4;
    if ( a4 > 0x40000 )
      v10 = 0x40000LL;
    if ( (a6 & 2) != 0 )
      VmpInvalidateOutstandingFaults((__int64)SpinLock, a3, v10);
    result = VmpProcessInvalidateSlat(SpinLock, a2, a3, v10);
    a4 -= v10;
    if ( !a4 )
      break;
    v12 = *a5;
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
        v17 = (v16 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8((unsigned __int8)v12);
    a3 += v10;
    a2 += v10;
    *a5 = VmpProcessContextLockExclusive(SpinLock);
  }
  return result;
}
