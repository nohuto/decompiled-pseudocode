/*
 * XREFs of MiFreeLargeInitializationCodePages @ 0x1403955CC
 * Callers:
 *     MiFreeInitializationCode @ 0x140703D0C (MiFreeInitializationCode.c)
 * Callees:
 *     MiSetPfnIdentity @ 0x140219488 (MiSetPfnIdentity.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140285C64 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiReturnFreeZeroPage @ 0x1402E8204 (MiReturnFreeZeroPage.c)
 *     MiLockPageInline @ 0x1402EF910 (MiLockPageInline.c)
 *     MiCheckSlabPfnBitmap @ 0x1403249C0 (MiCheckSlabPfnBitmap.c)
 *     MiAddExpansionNonPagedPool @ 0x140398AA4 (MiAddExpansionNonPagedPool.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFreeLargeInitializationCodePages(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 i; // rbx
  unsigned __int64 v8; // rsi
  char v9; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v12; // zf

  if ( !(unsigned int)MiCheckSlabPfnBitmap(a1, 1LL, 0) )
    return MiAddExpansionNonPagedPool(a2, a3);
  result = 48 * a3;
  for ( i = 48 * a3 + a1; a3; --a3 )
  {
    i -= 48LL;
    v8 = (unsigned __int8)MiLockPageInline(i);
    if ( (MiFlags & 0xC000) == 0xC000 && ((*(_QWORD *)(i + 40) >> 60) & 7) == 3 )
      MiSetPfnIdentity(i, 0);
    v9 = *(_BYTE *)(i + 34);
    *(_QWORD *)(i + 16) = 0LL;
    *(_BYTE *)(i + 34) = v9 & 0xF8 | 5;
    MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(i + 16));
    MiReturnFreeZeroPage(i);
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (_DWORD)KiIrqlFlags )
    {
      result = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && (unsigned __int8)result <= 0xFu
        && (unsigned __int8)v8 <= 0xFu
        && (unsigned __int8)result >= 2u )
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
    __writecr8(v8);
  }
  return result;
}
