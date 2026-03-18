/*
 * XREFs of SleepstudyHelperBlockerActiveDereference @ 0x14036B0D0
 * Callers:
 *     SleepstudyHelperDestroyBlocker @ 0x14025B380 (SleepstudyHelperDestroyBlocker.c)
 *     PopPowerRequestStatsNotifyScenarioStateChange @ 0x1407EDF80 (PopPowerRequestStatsNotifyScenarioStateChange.c)
 *     PopPowerRequestStatsSetActive @ 0x1407EFF14 (PopPowerRequestStatsSetActive.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     SshpSetBlockerActive @ 0x14036B250 (SshpSetBlockerActive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall SleepstudyHelperBlockerActiveDereference(PKSPIN_LOCK SpinLock)
{
  unsigned int v1; // edi
  PKSPIN_LOCK v3; // rbx
  unsigned __int64 v4; // rsi
  bool v5; // zf
  KSPIN_LOCK *v6; // rcx
  PKSPIN_LOCK v8; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r9
  int v15; // eax
  _DWORD *v16; // r8

  v1 = 0;
  if ( SpinLock )
  {
    v3 = SpinLock;
    while ( 1 )
    {
      v4 = KeAcquireSpinLockRaiseToDpc(v3);
      if ( v3 != SpinLock )
      {
        v5 = (*((_DWORD *)v3 + 4))-- == 1;
        if ( !v5 )
          break;
      }
      v5 = (*((_DWORD *)v3 + 3))-- == 1;
      v6 = v3;
      if ( !v5 )
        goto LABEL_5;
      SshpSetBlockerActive(v3, 0LL);
      KxReleaseSpinLock(v8);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
            v5 = (v12 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v12;
            if ( v5 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v4);
      v3 = (PKSPIN_LOCK)v3[36];
      if ( !v3 )
        return v1;
    }
    v6 = v3;
LABEL_5:
    KxReleaseSpinLock(v6);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v13 = KeGetCurrentIrql();
        if ( v13 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v13 >= 2u )
        {
          v14 = KeGetCurrentPrcb();
          v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v16 = v14->SchedulerAssist;
          v5 = (v15 & v16[5]) == 0;
          v16[5] &= v15;
          if ( v5 )
            KiRemoveSystemWorkPriorityKick(v14);
        }
      }
    }
    __writecr8(v4);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
