/*
 * XREFs of SshpSetCollectionActive @ 0x1403AFE18
 * Callers:
 *     PdcPoSleepStudyHelperSetPhaseActive @ 0x14085EC90 (PdcPoSleepStudyHelperSetPhaseActive.c)
 *     SshpPowerSettingCallback @ 0x1409A26B0 (SshpPowerSettingCallback.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     SshpStopBlockerAccounting @ 0x14032DAA8 (SshpStopBlockerAccounting.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     SSHSupportAcquirePushLockExclusive @ 0x14085ECBC (SSHSupportAcquirePushLockExclusive.c)
 */

signed __int32 __fastcall SshpSetCollectionActive(ULONG_PTR BugCheckParameter2, char a2)
{
  unsigned __int64 v4; // r13
  _QWORD *i; // r14
  __int64 v6; // rsi
  KIRQL v7; // al
  int v8; // ecx
  unsigned __int64 v9; // r12
  int v10; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf

  SSHSupportAcquirePushLockExclusive();
  if ( *(_BYTE *)(BugCheckParameter2 + 8) != a2 )
  {
    v4 = MEMORY[0xFFFFF78000000008];
    for ( i = *(_QWORD **)(BugCheckParameter2 + 16); i != (_QWORD *)(BugCheckParameter2 + 16); i = (_QWORD *)*i )
    {
      v6 = i[13];
      v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6);
      v8 = *(_DWORD *)(v6 + 8);
      v9 = v7;
      if ( a2 )
      {
        v10 = v8 | 2;
        *(_DWORD *)(v6 + 8) = v10;
        if ( (v10 & 1) == 0 )
          ++*(_DWORD *)(v6 + 120);
        *(_QWORD *)(v6 + 24) = v4;
      }
      else if ( (v8 & 2) != 0 )
      {
        SshpStopBlockerAccounting(v6, v4, 1);
        *(_DWORD *)(v6 + 8) &= ~2u;
      }
      KxReleaseSpinLock((volatile signed __int64 *)v6);
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
          && CurrentIrql <= 0xFu
          && (unsigned __int8)v9 <= 0xFu
          && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v16 = (v15 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v15;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v9);
    }
    *(_BYTE *)(BugCheckParameter2 + 8) = a2;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  return KeAbPostRelease(BugCheckParameter2);
}
