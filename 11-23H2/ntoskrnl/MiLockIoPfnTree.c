/*
 * XREFs of MiLockIoPfnTree @ 0x140336EE0
 * Callers:
 *     MiDereferenceIoPages @ 0x140336384 (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x140336790 (MiReferenceIoPages.c)
 *     MiLookupIoPageNode @ 0x1403B0B18 (MiLookupIoPageNode.c)
 *     MiDeleteStaleCacheMaps @ 0x14062DF20 (MiDeleteStaleCacheMaps.c)
 *     MiFreezeIoPfnNode @ 0x14062E658 (MiFreezeIoPfnNode.c)
 *     MiIsProbeActive @ 0x14062E748 (MiIsProbeActive.c)
 *     MiMakeIoRangePermanent @ 0x14062E9AC (MiMakeIoRangePermanent.c)
 *     MiMarkHugeRangeIoPfnDeleted @ 0x14062ECAC (MiMarkHugeRangeIoPfnDeleted.c)
 *     MiMarkHugeRangeTransition @ 0x14062EE2C (MiMarkHugeRangeTransition.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14025AFA0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
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
    v4 = qword_140C65AA0;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(qword_140C65AA0 + 368) + 384LL));
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
