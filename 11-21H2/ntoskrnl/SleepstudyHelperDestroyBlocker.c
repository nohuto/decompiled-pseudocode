/*
 * XREFs of SleepstudyHelperDestroyBlocker @ 0x14025B380
 * Callers:
 *     SleepstudyHelper_UnregisterComponent @ 0x1405DFE00 (SleepstudyHelper_UnregisterComponent.c)
 *     PopPowerRequestStatsCleanup @ 0x1407F015C (PopPowerRequestStatsCleanup.c)
 *     SleepstudyHelper_RegisterPdoWithParentPdo @ 0x140853D00 (SleepstudyHelper_RegisterPdoWithParentPdo.c)
 *     SleepstudyHelper_RegisterComponentEx @ 0x14085DA10 (SleepstudyHelper_RegisterComponentEx.c)
 *     SleepstudyHelper_RegisterPdoWithParentGuid @ 0x1409A13E0 (SleepstudyHelper_RegisterPdoWithParentGuid.c)
 *     SleepstudyHelper_RegisterPdoWithParentHandle @ 0x1409A14A0 (SleepstudyHelper_RegisterPdoWithParentHandle.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     SleepstudyHelperBlockerActiveDereference @ 0x14036B0D0 (SleepstudyHelperBlockerActiveDereference.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall SleepstudyHelperDestroyBlocker(PKSPIN_LOCK SpinLock)
{
  unsigned __int64 v2; // rbp
  int v3; // eax
  int v4; // ebx
  int v5; // esi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf

  if ( SpinLock )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(SpinLock);
    v3 = *((_DWORD *)SpinLock + 2);
    if ( (v3 & 8) != 0 )
    {
      v4 = -1073741811;
    }
    else
    {
      *((_DWORD *)SpinLock + 2) = v3 | 8;
      v4 = 0;
    }
    v5 = *((_DWORD *)SpinLock + 3) - 1;
    if ( !*((_DWORD *)SpinLock + 4) )
      v5 = *((_DWORD *)SpinLock + 3);
    KxReleaseSpinLock(SpinLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v11 = (v10 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v10;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v2);
    if ( v4 >= 0 && v5 )
    {
      do
      {
        SleepstudyHelperBlockerActiveDereference(SpinLock);
        --v5;
      }
      while ( v5 );
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
