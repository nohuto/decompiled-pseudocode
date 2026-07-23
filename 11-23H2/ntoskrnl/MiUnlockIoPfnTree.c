/*
 * XREFs of MiUnlockIoPfnTree @ 0x1403366E4
 * Callers:
 *     MiDereferenceIoPages @ 0x140336384 (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x140336790 (MiReferenceIoPages.c)
 *     MiLookupIoPageNode @ 0x1403B0B18 (MiLookupIoPageNode.c)
 *     MiDeleteStaleCacheMaps @ 0x14062DF20 (MiDeleteStaleCacheMaps.c)
 *     MiIsProbeActive @ 0x14062E748 (MiIsProbeActive.c)
 *     MiMakeIoRangePermanent @ 0x14062E9AC (MiMakeIoRangePermanent.c)
 *     MiMarkHugeRangeIoPfnDeleted @ 0x14062ECAC (MiMarkHugeRangeIoPfnDeleted.c)
 *     MiMarkHugeRangeTransition @ 0x14062EE2C (MiMarkHugeRangeTransition.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7E90 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiUnlockIoPfnTree(unsigned __int8 a1, char a2)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // rsi
  unsigned int v5; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v9; // eax
  bool v10; // zf

  v2 = a1;
  if ( (a2 & 1) != 0 )
  {
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(*((_QWORD *)KeGetCurrentPrcb()->MmInternal + 1577) + 384LL));
  }
  else
  {
    v4 = qword_140C65AA0;
    v5 = 0;
    if ( KeNumberNodes != 1 )
    {
      do
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(v4 + 368) + 384LL));
        v4 += 376LL;
        ++v5;
      }
      while ( v5 < (unsigned int)(unsigned __int16)KeNumberNodes - 1 );
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(v4 + 368) + 384LL));
  }
  if ( (a2 & 4) == 0 )
  {
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v2 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v10 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v2);
  }
}
