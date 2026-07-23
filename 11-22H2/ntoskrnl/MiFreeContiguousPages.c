/*
 * XREFs of MiFreeContiguousPages @ 0x1403C337C
 * Callers:
 *     MiAllocateContiguousMemory @ 0x1403B9674 (MiAllocateContiguousMemory.c)
 *     MiFindContiguousPagesEx @ 0x1403BA9B8 (MiFindContiguousPagesEx.c)
 *     MmFreeContiguousMemory @ 0x1403C2FA0 (MmFreeContiguousMemory.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14062B620 (MmMarkPhysicalMemoryAsBad.c)
 *     MmRemovePhysicalMemory @ 0x140A2D280 (MmRemovePhysicalMemory.c)
 *     MiRemoveMdlPages @ 0x140A2E5AC (MiRemoveMdlPages.c)
 *     MiCreatePagefileMemoryExtents @ 0x140A46F68 (MiCreatePagefileMemoryExtents.c)
 *     MiDeletePageFileMemoryExtents @ 0x140A47284 (MiDeletePageFileMemoryExtents.c)
 *     MiMapSystemImageWithLargePage @ 0x140A49BD4 (MiMapSystemImageWithLargePage.c)
 *     MiUnmapLargeDriver @ 0x140A49F88 (MiUnmapLargeDriver.c)
 * Callees:
 *     MiDecrementShareCount @ 0x140280690 (MiDecrementShareCount.c)
 *     MiReturnCommit @ 0x1402DC250 (MiReturnCommit.c)
 *     MiFreeLargePageMemory @ 0x1402E7498 (MiFreeLargePageMemory.c)
 *     MiUpdateLargePageBitMap @ 0x1402E890C (MiUpdateLargePageBitMap.c)
 *     MiLockPageInline @ 0x1402EF680 (MiLockPageInline.c)
 *     MiResidentPageDangleFree @ 0x14038CE6C (MiResidentPageDangleFree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFreeContiguousPages(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // r14
  unsigned __int64 v4; // rbx
  __int64 v5; // rsi
  unsigned __int64 v6; // r12
  __int64 v7; // rdi
  unsigned __int8 v8; // al
  __int16 v9; // cx
  unsigned __int64 v10; // r15
  __int64 result; // rax
  struct _KPRCB *v12; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v14; // zf
  unsigned int v15; // edx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9

  v3 = a1;
  v4 = 0LL;
  v5 = 0LL;
  v6 = -1LL;
  v7 = 48 * a1 - 0x220000000000LL;
  do
  {
    if ( (v3 & 0x1FF) != 0 || a2 < 0x200 || !(unsigned int)MiResidentPageDangleFree(v3, 1) )
    {
      if ( !v5 )
        v5 = *(_QWORD *)(qword_140C674C8 + 8 * ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL));
      if ( v6 != (v3 & 0xFFFFFFFFFFFFFE00uLL) )
      {
        v6 = v3 & 0xFFFFFFFFFFFFFE00uLL;
        MiUpdateLargePageBitMap(v5, v3 & 0xFFFFFFFFFFFFFE00uLL, 0x200uLL, 0, 0);
      }
      v8 = MiLockPageInline(v7);
      v9 = *(_WORD *)(v7 + 32) - 1;
      v10 = v8;
      *(_WORD *)(v7 + 32) = v9;
      if ( v9 == 1 )
        ++v4;
      if ( (*(_QWORD *)(v7 + 24) & 0x4000000000000000LL) == 0 )
        *(_QWORD *)(v7 + 24) |= 0x4000000000000000uLL;
      MiDecrementShareCount(v7);
      result = 0x7FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (_DWORD)KiIrqlFlags )
      {
        result = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
          && (unsigned __int8)result <= 0xFu
          && (unsigned __int8)v10 <= 0xFu
          && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
          v14 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v14 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v10);
      v7 += 48LL;
      ++v3;
      --a2;
    }
    else
    {
      if ( !v5 )
        v5 = *(_QWORD *)(qword_140C674C8 + 8 * ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL));
      result = MiFreeLargePageMemory(v3, v15, 6u);
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
    if ( (_UNKNOWN *)v5 != &MiSystemPartition )
      goto LABEL_40;
    v12 = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)v12->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable == -1 )
      goto LABEL_40;
    for ( ; v4 + CachedResidentAvailable <= 0x100; result = v4 + (int)result )
    {
      if ( v4 >= 0x80000 )
        break;
      result = (unsigned int)_InterlockedCompareExchange(
                               (volatile signed __int32 *)&v12->CachedResidentAvailable,
                               CachedResidentAvailable + v4,
                               CachedResidentAvailable);
      v14 = (_DWORD)CachedResidentAvailable == (_DWORD)result;
      CachedResidentAvailable = (int)result;
      if ( v14 )
        return result;
      if ( (_DWORD)result == -1 )
        break;
    }
    if ( (int)CachedResidentAvailable > 192 )
    {
      result = (unsigned int)_InterlockedCompareExchange(
                               (volatile signed __int32 *)&v12->CachedResidentAvailable,
                               192,
                               CachedResidentAvailable);
      if ( (_DWORD)CachedResidentAvailable == (_DWORD)result )
      {
        result = (unsigned int)(CachedResidentAvailable - 192);
        v4 += (int)result;
      }
    }
    if ( v4 )
LABEL_40:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 17280), v4);
  }
  return result;
}
