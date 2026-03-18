/*
 * XREFs of MiSubsectionProtosCreated @ 0x1405A0FD8
 * Callers:
 *     MmPurgeSection @ 0x14027F360 (MmPurgeSection.c)
 *     MiPurgeFileOnlyPfn @ 0x1405A0774 (MiPurgeFileOnlyPfn.c)
 *     MiAllocateFileExtents @ 0x14096F8CC (MiAllocateFileExtents.c)
 * Callees:
 *     KeSignalGate @ 0x14024B0B4 (KeSignalGate.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiSubsectionProtosCreated(ULONG_PTR a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rdi
  unsigned __int64 v9; // rsi
  __int64 *v10; // rcx
  __int64 *v11; // rbx
  int v12; // eax
  int v13; // eax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v17; // zf

  v4 = *(_QWORD *)a1;
  KeAbPostRelease(a1);
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
  if ( (*(_DWORD *)(v4 + 56) & 0x20) != 0 )
  {
    v10 = *(__int64 **)(v4 + 80);
    *(_QWORD *)(v4 + 80) = 0LL;
  }
  else
  {
    if ( a4 )
    {
      *(_DWORD *)(a1 + 52) |= 0x40000000u;
    }
    else if ( a3 == *(_DWORD *)(a1 + 44) - (*(_DWORD *)(a1 + 52) & 0x3FFFFFFF) )
    {
      *(_DWORD *)(a1 + 52) &= ~0x40000000u;
    }
    v10 = *(__int64 **)(a1 + 24);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  if ( v10 )
  {
    do
    {
      v11 = (__int64 *)*v10;
      if ( v10 != (__int64 *)a2 )
      {
        v12 = *((_DWORD *)v10 + 2);
        *((_DWORD *)v10 + 3) = 1;
        if ( (v12 & 0x40) == 0 )
        {
          v13 = 1;
          if ( (*(_DWORD *)(a2 + 8) & 0x100) != 0 )
            v13 = 2;
          *((_DWORD *)v10 + 3) = v13;
          KeSignalGate((_DWORD *)v10 + 4, 1);
        }
      }
      v10 = v11;
    }
    while ( v11 );
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v9 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v17 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v17 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  return result;
}
