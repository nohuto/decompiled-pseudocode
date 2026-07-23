/*
 * XREFs of MiFreeSlabEntries @ 0x14021F060
 * Callers:
 *     MiDeleteSlabAllocator @ 0x1406567E0 (MiDeleteSlabAllocator.c)
 * Callees:
 *     MiSlabUpdateRecentFailure @ 0x14021F234 (MiSlabUpdateRecentFailure.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402E7464 (KiQueryUnbiasedInterruptTime.c)
 *     MiPurgeSlabEntries @ 0x14036B020 (MiPurgeSlabEntries.c)
 *     MiFreeSlabEntry @ 0x1403B8070 (MiFreeSlabEntry.c)
 *     MiRemoveSlabEntry @ 0x1403C1E2C (MiRemoveSlabEntry.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFreeSlabEntries(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 v7; // rcx
  __int64 UnbiasedInterruptTime; // rax
  _QWORD *v10; // rbx
  KIRQL v11; // al
  __int64 v12; // rcx
  unsigned __int64 v13; // r12
  _QWORD *j; // rdi
  _QWORD **v15; // rax
  _QWORD *v16; // rsi
  _QWORD *v17; // rcx
  _QWORD *i; // rax
  int v19; // ecx
  _QWORD *v20; // rdx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  bool v25; // zf

  v3 = *(int *)(a2 + 80);
  if ( (unsigned int)v3 > 3 && *(_BYTE *)(v3 + a1 + 16200) && *(_QWORD *)(a2 + 112) + *(_QWORD *)(a2 + 48) )
    *(_BYTE *)(*(int *)(a2 + 80) + a1 + 16200) = 0;
  MiSlabUpdateRecentFailure(a2 + 208);
  if ( (*(_DWORD *)(a2 + 88) & 1) != 0 )
  {
    if ( a3 )
      goto LABEL_13;
    LOBYTE(v7) = 1;
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(v7);
    if ( !UnbiasedInterruptTime )
      UnbiasedInterruptTime = 1LL;
    if ( (unsigned __int64)(UnbiasedInterruptTime - *(_QWORD *)(a2 + 200)) >= 0x2FAF080
      && (!*(_QWORD *)(a2 + 56)
       || *(_QWORD *)(a2 + 48) + *(_QWORD *)(a2 + 112) >= (unsigned __int64)(*(_QWORD *)(a2 + 56) + 512LL)) )
    {
LABEL_13:
      MiPurgeSlabEntries(a2);
      v10 = 0LL;
      v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 16));
      *(_DWORD *)(a2 + 88) &= ~1u;
      v12 = *(_QWORD *)(a2 + 8);
      v13 = v11;
      if ( (v12 & 1) != 0 )
      {
        if ( v12 == 1 )
        {
LABEL_24:
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 16));
          while ( 1 )
          {
            v20 = v10;
            if ( !v10 )
              break;
            v10 = (_QWORD *)*v10;
            MiFreeSlabEntry(a2, v20);
          }
          if ( (_DWORD)KiIrqlFlags )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
              && CurrentIrql <= 0xFu
              && (unsigned __int8)v13 <= 0xFu
              && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
              v25 = (v24 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v24;
              if ( v25 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          __writecr8(v13);
          return 0LL;
        }
        j = (_QWORD *)(v12 ^ (a2 | 1));
      }
      else
      {
        j = *(_QWORD **)(a2 + 8);
      }
      while ( j )
      {
        v15 = (_QWORD **)j[1];
        v16 = j;
        v17 = j;
        if ( v15 )
        {
          j = (_QWORD *)j[1];
          for ( i = *v15; i; i = (_QWORD *)*i )
            j = i;
        }
        else
        {
          for ( j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL); j; j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL) )
          {
            if ( (_QWORD *)*j == v17 )
              break;
            v17 = j;
          }
        }
        if ( (*((_DWORD *)v16 + 35) & 1) == 0 )
        {
          v19 = *((_DWORD *)v16 + 33);
          if ( v19 == 512 )
          {
            MiRemoveSlabEntry(a1, a2, v16);
            *v16 = v10;
            v10 = v16;
          }
          else if ( (unsigned int)(v19 + *((_DWORD *)v16 + 34)) >= 0x200 )
          {
            *(_DWORD *)(a2 + 88) |= 1u;
          }
        }
      }
      goto LABEL_24;
    }
  }
  return 0LL;
}
