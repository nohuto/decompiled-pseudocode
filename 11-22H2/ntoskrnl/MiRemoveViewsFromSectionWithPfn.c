/*
 * XREFs of MiRemoveViewsFromSectionWithPfn @ 0x14029C964
 * Callers:
 *     MiDereferenceDataSubsections @ 0x14066B178 (MiDereferenceDataSubsections.c)
 *     MiPfPrepareReadList @ 0x1406F6350 (MiPfPrepareReadList.c)
 *     MiMapViewOfDataSection @ 0x1407202F0 (MiMapViewOfDataSection.c)
 *     MiReleaseReadListResources @ 0x1407213C0 (MiReleaseReadListResources.c)
 *     MiPfPrepareSequentialReadList @ 0x140744BF0 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRemoveViewsFromSection @ 0x14029F7C8 (MiRemoveViewsFromSection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14066B424 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiRemoveViewsFromSectionWithPfn(__int64 *BugCheckParameter2)
{
  __int64 v1; // r15
  BOOL v3; // r12d
  unsigned __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v10; // zf

  v1 = *BugCheckParameter2;
  v3 = *(_QWORD *)(*BugCheckParameter2 + 64) != 0LL;
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*BugCheckParameter2 + 72));
  v5 = MiRemoveViewsFromSection((ULONG_PTR)BugCheckParameter2);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 72));
  result = (unsigned int)KiIrqlFlags;
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v4 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v10 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v10 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v4);
  if ( v5 )
    return MiReturnCrossPartitionSectionCharges(
             *(_QWORD *)(qword_140C674C8 + 8LL * (*(_WORD *)(v1 + 60) & 0x3FF)),
             v3,
             v5);
  return result;
}
