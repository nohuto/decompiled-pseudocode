/*
 * XREFs of MiLockIoPfnTree @ 0x140336AB0
 * Callers:
 *     MiDereferenceIoPages @ 0x140335F54 (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x140336360 (MiReferenceIoPages.c)
 *     MiLookupIoPageNode @ 0x1403B02A8 (MiLookupIoPageNode.c)
 *     MiDeleteStaleCacheMaps @ 0x14062DA40 (MiDeleteStaleCacheMaps.c)
 *     MiFreezeIoPfnNode @ 0x14062E178 (MiFreezeIoPfnNode.c)
 *     MiIsProbeActive @ 0x14062E268 (MiIsProbeActive.c)
 *     MiMakeIoRangePermanent @ 0x14062E4CC (MiMakeIoRangePermanent.c)
 *     MiMarkHugeRangeIoPfnDeleted @ 0x14062E7CC (MiMarkHugeRangeIoPfnDeleted.c)
 *     MiMarkHugeRangeTransition @ 0x14062E94C (MiMarkHugeRangeTransition.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14025ABF0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

unsigned __int8 __fastcall MiLockIoPfnTree(char a1)
{
  __int64 v1; // r8
  unsigned __int8 CurrentIrql; // di
  __int64 v4; // r14
  unsigned int v5; // ebx
  _DWORD *SchedulerAssist; // r11
  __int64 v7; // r14

  LODWORD(v1) = 4;
  if ( (a1 & 4) != 0 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql != 2 )
        v1 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v1;
    }
  }
  if ( (a1 & 1) != 0 )
  {
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(*((_QWORD *)KeGetCurrentPrcb()->MmInternal + 1577) + 384LL));
  }
  else
  {
    v4 = qword_140C65BA0;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(qword_140C65BA0 + 368) + 384LL));
    v5 = 1;
    if ( (unsigned __int16)KeNumberNodes > 1u )
    {
      v7 = v4 + 744;
      do
      {
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)v7 + 384LL));
        v7 += 376LL;
        ++v5;
      }
      while ( v5 < (unsigned __int16)KeNumberNodes );
    }
  }
  return CurrentIrql;
}
