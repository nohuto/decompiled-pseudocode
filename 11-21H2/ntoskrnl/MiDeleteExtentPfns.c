/*
 * XREFs of MiDeleteExtentPfns @ 0x14059E2C0
 * Callers:
 *     MiAddPhysicalMemory @ 0x140968388 (MiAddPhysicalMemory.c)
 * Callees:
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiPurgeBadFileOnlyPages @ 0x1405A032C (MiPurgeBadFileOnlyPages.c)
 *     MiWaitForExtentDeletions @ 0x1405A1AE8 (MiWaitForExtentDeletions.c)
 *     MiWakeExtentDeletionWaiters @ 0x1405A1C08 (MiWakeExtentDeletionWaiters.c)
 *     MiRemovePhysicalMemory @ 0x140969850 (MiRemovePhysicalMemory.c)
 */

__int64 __fastcall MiDeleteExtentPfns(__int64 a1)
{
  __int64 v2; // rax
  KIRQL v3; // al
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf

  if ( a1 )
  {
    v2 = KeAbPreAcquire((__int64)&qword_140C4F2C8, 0LL);
    if ( v2 )
      *(_BYTE *)(v2 + 18) = 1;
  }
  do
  {
    while ( qword_140C4F2A0 )
      MiRemovePhysicalMemory(0LL);
    v3 = ExAcquireSpinLockExclusive(&dword_140C56920);
    v6 = qword_140C4F2A0;
    v7 = v3;
    if ( a1 )
    {
      if ( !qword_140C4F2A0 )
      {
        LOBYTE(v4) = v3;
        MiWakeExtentDeletionWaiters(v5, v4);
        MiPurgeBadFileOnlyPages();
        return KeAbPostRelease((ULONG_PTR)&qword_140C4F2C8);
      }
    }
    else if ( qword_140C4F2A0 || byte_140C4F2E9 )
    {
      LOBYTE(v4) = v3;
      return MiWaitForExtentDeletions(v5, v4);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C56920);
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v11 )
            result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
  }
  while ( v6 );
  if ( !a1 )
    return result;
  return KeAbPostRelease((ULONG_PTR)&qword_140C4F2C8);
}
