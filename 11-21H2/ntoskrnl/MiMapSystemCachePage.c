/*
 * XREFs of MiMapSystemCachePage @ 0x140591F50
 * Callers:
 *     MmCopyToCachedPage @ 0x1402BE8E0 (MmCopyToCachedPage.c)
 * Callees:
 *     MiAddLockedPageCharge @ 0x140274508 (MiAddLockedPageCharge.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiMapFrame @ 0x140591EB4 (MiMapFrame.c)
 */

__int64 __fastcall MiMapSystemCachePage(unsigned __int64 a1, unsigned __int64 *a2, char a3)
{
  unsigned __int64 i; // rsi
  unsigned __int64 v7; // rsi
  __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  __int64 v10; // r8
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r10
  _DWORD *v13; // r9
  int v14; // eax
  bool v15; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rdx
  int v18; // eax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r9
  int v23; // eax
  _DWORD *v24; // r8

  for ( i = *a2; (*a2 & 1) != 0; i = *a2 )
  {
    v7 = (i >> 12) & 0xFFFFFFFFFFLL;
    if ( v7 > qword_140C50840 || (*(_QWORD *)(48 * v7 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
      break;
    v8 = 48 * v7 - 0x220000000000LL;
    v9 = (unsigned __int8)MiLockPageInline(v8);
    if ( (*a2 & 1) == 0 )
      goto LABEL_27;
    if ( ((*a2 >> 12) & 0xFFFFFFFFFFLL) == v7 )
    {
      if ( (unsigned int)MiAddLockedPageCharge(48 * v7 - 0x220000000000LL, 0LL, v10) )
      {
        if ( (a3 & 4) == 0 || !_bittest64((const signed __int64 *)(v8 + 40), 0x35u) )
          *(_BYTE *)(v8 + 34) |= 0x10u;
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v15 = (v18 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v18;
              if ( v15 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v9);
        return MiMapFrame(a1, v7);
      }
LABEL_27:
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v21 = KeGetCurrentIrql();
          if ( v21 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v21 >= 2u )
          {
            v22 = KeGetCurrentPrcb();
            v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
            v24 = v22->SchedulerAssist;
            v15 = (v23 & v24[5]) == 0;
            v24[5] &= v23;
            if ( v15 )
              KiRemoveSystemWorkPriorityKick((__int64)v22);
          }
        }
      }
      __writecr8(v9);
      return 0LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v11 = KeGetCurrentIrql();
        if ( v11 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v11 >= 2u )
        {
          v12 = KeGetCurrentPrcb();
          v13 = v12->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v15 = (v14 & v13[5]) == 0;
          v13[5] &= v14;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick((__int64)v12);
        }
      }
    }
    __writecr8(v9);
  }
  return 0LL;
}
