/*
 * XREFs of MiFreeSlabEntries @ 0x14023A710
 * Callers:
 *     MiDeleteSlabAllocator @ 0x1405B0E10 (MiDeleteSlabAllocator.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetSlabCurrentTime @ 0x1404192EC (MiGetSlabCurrentTime.c)
 *     MiFreeSlabEntry @ 0x1405B0E30 (MiFreeSlabEntry.c)
 *     MiPurgeSlabEntries @ 0x1405B1568 (MiPurgeSlabEntries.c)
 *     MiRemoveSlabEntry @ 0x1405B1910 (MiRemoveSlabEntry.c)
 */

__int64 __fastcall MiFreeSlabEntries(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  _QWORD *v7; // rbx
  KIRQL v8; // al
  __int64 v9; // rcx
  unsigned __int64 v10; // r15
  _QWORD *v11; // rdi
  _QWORD *v12; // rax
  _QWORD *v13; // r14
  _QWORD *v14; // rcx
  int v15; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  _QWORD *v21; // rdx

  v3 = *(int *)(a2 + 48);
  if ( (unsigned int)v3 > 3 && *(_BYTE *)(v3 + a1 + 15976) && *(_QWORD *)(a2 + 64) + *(_QWORD *)(a2 + 32) )
    *(_BYTE *)(*(int *)(a2 + 48) + a1 + 15976) = 0;
  if ( (*(_DWORD *)(a2 + 56) & 1) != 0
    && (a3 || (unsigned __int64)(MiGetSlabCurrentTime() - *(_QWORD *)(a2 + 152)) >= 0x2FAF080) )
  {
    MiPurgeSlabEntries(a2);
    v7 = 0LL;
    v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 16));
    *(_DWORD *)(a2 + 56) &= ~1u;
    v9 = *(_QWORD *)(a2 + 8);
    v10 = v8;
    if ( (v9 & 1) != 0 )
    {
      if ( v9 == 1 )
      {
LABEL_25:
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 16));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
              v20 = (v19 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v19;
              if ( v20 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v10);
        while ( 1 )
        {
          v21 = v7;
          if ( !v7 )
            break;
          v7 = (_QWORD *)*v7;
          MiFreeSlabEntry(a2, v21);
        }
        return 0LL;
      }
      v11 = (_QWORD *)(v9 ^ (a2 | 1));
    }
    else
    {
      v11 = *(_QWORD **)(a2 + 8);
    }
    while ( v11 )
    {
      v12 = (_QWORD *)v11[1];
      v13 = v11;
      v14 = v11;
      if ( v12 )
      {
        do
        {
          v11 = v12;
          v12 = (_QWORD *)*v12;
        }
        while ( v12 );
      }
      else
      {
        while ( 1 )
        {
          v11 = (_QWORD *)(v11[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v11 || (_QWORD *)*v11 == v14 )
            break;
          v14 = v11;
        }
      }
      if ( (*((_DWORD *)v13 + 35) & 1) == 0 )
      {
        v15 = *((_DWORD *)v13 + 33);
        if ( v15 == 512 )
        {
          MiRemoveSlabEntry(a1, a2, v13);
          *v13 = v7;
          v7 = v13;
        }
        else if ( (unsigned int)(v15 + *((_DWORD *)v13 + 34)) >= 0x200 )
        {
          *(_DWORD *)(a2 + 56) |= 1u;
        }
      }
    }
    goto LABEL_25;
  }
  return 0LL;
}
