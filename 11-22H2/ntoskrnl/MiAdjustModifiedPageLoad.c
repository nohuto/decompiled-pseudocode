/*
 * XREFs of MiAdjustModifiedPageLoad @ 0x14021F254
 * Callers:
 *     MiWorkingSetManager @ 0x14021D610 (MiWorkingSetManager.c)
 * Callees:
 *     MiUseLowIoPriorityForModifiedPages @ 0x140222EF8 (MiUseLowIoPriorityForModifiedPages.c)
 *     MiStoreUpdateMemoryConditions @ 0x140222F90 (MiStoreUpdateMemoryConditions.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUpdateReserveClusterInfo @ 0x140295308 (MiUpdateReserveClusterInfo.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402E7464 (KiQueryUnbiasedInterruptTime.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiWakeModifiedPageWriter @ 0x14063BCA8 (MiWakeModifiedPageWriter.c)
 */

void __fastcall MiAdjustModifiedPageLoad(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v3; // r10
  unsigned __int64 v5; // r9
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // rdx
  __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  int v13; // ebp
  unsigned int v14; // eax
  __int64 *v15; // rsi
  __int64 v16; // r15
  __int64 v17; // rdi
  unsigned __int64 v18; // r14
  unsigned __int64 *v19; // rdi
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  signed __int64 v22; // rax
  unsigned __int64 v23; // r11
  __int64 v24; // rax
  char v25; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v29; // eax
  bool v30; // zf
  signed __int32 v31[14]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 17824);
  v5 = 0x4000LL;
  if ( *(_QWORD *)(a1 + 17216) >> 5 > 0x4000uLL )
    v5 = *(_QWORD *)(a1 + 17216) >> 5;
  v8 = *(_QWORD *)(a1 + 17216) >> 4;
  if ( v8 >= v5 )
    v8 = v5;
  v9 = *(_QWORD *)(a1 + 2560) + *(_QWORD *)(a1 + 2688);
  v10 = 0LL;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16920) + 2384LL);
  v12 = 20000LL;
  if ( v11 > 0x4E20 )
    v12 = v11;
  if ( v9 > v12 && v3 < v9 / 0xA )
    goto LABEL_9;
  v19 = (unsigned __int64 *)(a1 + 864);
  if ( v3 >= v8 )
  {
    v10 = v8 >> 1;
LABEL_37:
    if ( !(unsigned int)MiUseLowIoPriorityForModifiedPages(a1) )
      v10 = -1LL;
    MiWakeModifiedPageWriter(a1, v10);
    *(_QWORD *)(a1 + 856) = 0LL;
    *v19 = 0LL;
    goto LABEL_9;
  }
  v11 = 15 * (*v19 >> 4);
  v20 = v11 + (v3 >> 4);
  *v19 = v20;
  if ( v11 > v20 )
    goto LABEL_37;
  if ( v3 < 0x320 )
  {
    *(_QWORD *)(a1 + 856) = 0LL;
    goto LABEL_9;
  }
  v21 = *(_QWORD *)(a1 + 856);
  v22 = v20 <= v3 ? v20 - v3 + v21 : v3 + v21 - v20;
  v11 = v22 + v3;
  *(_QWORD *)(a1 + 856) = v22 + v3;
  if ( v22 > (__int64)(v22 + v3) )
    goto LABEL_37;
  v23 = v8 >> 1;
  v24 = 0x7FFFFFFFFFFFFFFFLL;
  if ( v23 < 0x369D0369D0369DLL )
    v24 = 600 * v23;
  if ( (__int64)v11 >= v24 )
    goto LABEL_37;
LABEL_9:
  *(_QWORD *)(a1 + 872) = a2;
  if ( (a3 & 7) == 0 )
  {
    v13 = 0;
    if ( (*(_BYTE *)(a1 + 916) & 1) != 0 )
    {
      _InterlockedOr(v31, 0);
      if ( a2 > 0x4000
        || (LOBYTE(v11) = 1, (unsigned __int64)(KiQueryUnbiasedInterruptTime(v11) - *(_QWORD *)(a1 + 904)) >= 0x47868C00) )
      {
        v13 = 1;
        *(_WORD *)(a1 + 916) &= ~1u;
      }
    }
    v14 = *(_DWORD *)(a1 + 17048);
    if ( v14 )
    {
      v15 = (__int64 *)(a1 + 17056);
      v16 = v14;
      do
      {
        v17 = *v15;
        if ( (*(_BYTE *)(*v15 + 204) & 0x40) == 0 )
        {
          v18 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v17 + 232));
          if ( *(_DWORD *)(v17 + 132) != *(_DWORD *)(v17 + 128) )
            *(_DWORD *)(v17 + 124) = dword_140D1D1DC;
          *(_DWORD *)(v17 + 136) = 4 * dword_140D1D1DC;
          if ( v13 )
          {
            v25 = *(_BYTE *)(v17 + 207);
            if ( (v25 & 1) != 0 )
              *(_BYTE *)(v17 + 207) = v25 & 0xFE;
          }
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v17 + 232));
          if ( (_DWORD)KiIrqlFlags )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
              && CurrentIrql <= 0xFu
              && (unsigned __int8)v18 <= 0xFu
              && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
              v30 = (v29 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v29;
              if ( v30 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          __writecr8(v18);
        }
        ++v15;
        --v16;
      }
      while ( v16 );
    }
    if ( v13 )
      MiUpdateReserveClusterInfo(a1, 0LL, 0LL);
  }
  if ( *(_DWORD *)(a1 + 1192) )
    MiStoreUpdateMemoryConditions(a1);
}
