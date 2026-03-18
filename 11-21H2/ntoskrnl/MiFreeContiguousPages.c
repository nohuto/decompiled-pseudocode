/*
 * XREFs of MiFreeContiguousPages @ 0x140213FA8
 * Callers:
 *     MmFreeContiguousMemory @ 0x140213DA0 (MmFreeContiguousMemory.c)
 *     MiAllocateContiguousMemory @ 0x140214244 (MiAllocateContiguousMemory.c)
 *     MiFindContiguousPagesEx @ 0x140277D10 (MiFindContiguousPagesEx.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14058F250 (MmMarkPhysicalMemoryAsBad.c)
 *     MmRemovePhysicalMemory @ 0x140969D90 (MmRemovePhysicalMemory.c)
 *     MiRemoveMdlPages @ 0x14096AF9C (MiRemoveMdlPages.c)
 *     MiCreatePagefileMemoryExtents @ 0x14096E06C (MiCreatePagefileMemoryExtents.c)
 *     MiDeletePageFileMemoryExtents @ 0x14096E3A4 (MiDeletePageFileMemoryExtents.c)
 *     MiMapSystemImageWithLargePage @ 0x14098325C (MiMapSystemImageWithLargePage.c)
 *     MiUnmapLargeDriver @ 0x1409835EC (MiUnmapLargeDriver.c)
 * Callees:
 *     MiResidentPageDangleFree @ 0x140232AD0 (MiResidentPageDangleFree.c)
 *     MiDecrementShareCount @ 0x140273FD0 (MiDecrementShareCount.c)
 *     MiFreeLargePageMemory @ 0x14028CA70 (MiFreeLargePageMemory.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MiUpdateLargePageBitMap @ 0x1402C38D0 (MiUpdateLargePageBitMap.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFreeContiguousPages(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // r14
  unsigned __int64 v4; // rbx
  __int64 v5; // rsi
  unsigned __int64 v6; // r12
  __int64 v7; // rdi
  unsigned __int64 v8; // r15
  __int64 result; // rax
  struct _KPRCB *v10; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v12; // zf
  __int64 v13; // rdx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9

  v3 = a1;
  v4 = 0LL;
  v5 = 0LL;
  v6 = -1LL;
  v7 = 48 * a1 - 0x220000000000LL;
  do
  {
    if ( (v3 & 0x1FF) != 0 || a2 < 0x200 || !(unsigned int)MiResidentPageDangleFree(v3, 1LL) )
    {
      if ( !v5 )
        v5 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL));
      if ( v6 != (v3 & 0xFFFFFFFFFFFFFE00uLL) )
      {
        v6 = v3 & 0xFFFFFFFFFFFFFE00uLL;
        MiUpdateLargePageBitMap(v5, v3 & 0xFFFFFE00, 512, 0, 0);
      }
      v8 = (unsigned __int8)MiLockPageInline(v7);
      if ( --*(_WORD *)(v7 + 32) == 1 )
        ++v4;
      if ( (*(_QWORD *)(v7 + 24) & 0x4000000000000000LL) == 0 )
        *(_QWORD *)(v7 + 24) |= 0x4000000000000000uLL;
      MiDecrementShareCount(v7);
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      result = (unsigned int)KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v8 <= 0xFu && (unsigned __int8)result >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
            v12 = ((unsigned int)result & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= result;
            if ( v12 )
              result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v8);
      v7 += 48LL;
      ++v3;
      --a2;
    }
    else
    {
      if ( !v5 )
        v5 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL));
      result = MiFreeLargePageMemory(v3, v13, 6LL);
      v3 += 512LL;
      v7 += 24576LL;
      a2 -= 512LL;
    }
  }
  while ( a2 );
  if ( v4 )
  {
    MiReturnCommit(v5, v4);
    result = (__int64)&MiSystemPartition;
    if ( (ULONG_PTR *)v5 != &MiSystemPartition )
      goto LABEL_25;
    v10 = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)v10->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable == -1 )
      goto LABEL_25;
    for ( ; v4 + CachedResidentAvailable <= 0x100; result = v4 + (int)result )
    {
      if ( v4 >= 0x80000 )
        break;
      result = (unsigned int)_InterlockedCompareExchange(
                               (volatile signed __int32 *)&v10->CachedResidentAvailable,
                               CachedResidentAvailable + v4,
                               CachedResidentAvailable);
      v12 = (_DWORD)CachedResidentAvailable == (_DWORD)result;
      CachedResidentAvailable = (int)result;
      if ( v12 )
        return result;
      if ( (_DWORD)result == -1 )
        break;
    }
    if ( (int)CachedResidentAvailable > 192 )
    {
      result = (unsigned int)_InterlockedCompareExchange(
                               (volatile signed __int32 *)&v10->CachedResidentAvailable,
                               192,
                               CachedResidentAvailable);
      if ( (_DWORD)CachedResidentAvailable == (_DWORD)result )
      {
        result = (unsigned int)(CachedResidentAvailable - 192);
        v4 += (int)result;
      }
    }
    if ( v4 )
LABEL_25:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 16960), v4);
  }
  return result;
}
