/*
 * XREFs of SepGetSingletonEntryFromIndexNumber @ 0x140226668
 * Callers:
 *     SepInitSingletonEntry @ 0x140226604 (SepInitSingletonEntry.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14022CA38 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x14036FBCC (SepCleanupMarkedForDeletionEntries.c)
 *     SepSetSingletonEntry @ 0x1403A2184 (SepSetSingletonEntry.c)
 *     SepValidateAndCopyGlobalEntry @ 0x1405B9A9C (SepValidateAndCopyGlobalEntry.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7E90 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1403148B0 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall SepGetSingletonEntryFromIndexNumber(unsigned int a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdi
  __int64 v3; // rbp
  unsigned __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // edx
  bool v10; // zf

  v1 = a1 & 0x3F;
  v2 = a1 >> 6;
  v3 = 0LL;
  v4 = ExAcquireSpinLockShared(SepSingletonGlobal);
  if ( (unsigned int)v2 < *((_DWORD *)SepSingletonGlobal + 1) )
    v3 = *(_QWORD *)(*((_QWORD *)SepSingletonGlobal + 1) + 8 * v2) + 24 * v1;
  ExReleaseSpinLockSharedFromDpcLevel(SepSingletonGlobal);
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
      v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v10 = (v9 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v9;
      if ( v10 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v4);
  return v3;
}
