/*
 * XREFs of PopPowerAggregatorDisengageModernStandby @ 0x14099357C
 * Callers:
 *     PopPowerAggregatorModernStandbyEnterStateHandler @ 0x140993A90 (PopPowerAggregatorModernStandbyEnterStateHandler.c)
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x140993AE0 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 *     PopGetMonitorReasonFromPowerEventId @ 0x1403C799C (PopGetMonitorReasonFromPowerEventId.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     PopDirectedDripsNotify @ 0x1408754E4 (PopDirectedDripsNotify.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x140877CD4 (PopPowerAggregatorEnterScreenOff.c)
 *     PopSleepstudyStartNextSession @ 0x140878644 (PopSleepstudyStartNextSession.c)
 *     PopSleepstudySnapModernStandbySessionData @ 0x140993418 (PopSleepstudySnapModernStandbySessionData.c)
 *     PopNetClearConnectivityConstraint @ 0x140996680 (PopNetClearConnectivityConstraint.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

struct _KTHREAD *__fastcall PopPowerAggregatorDisengageModernStandby(__int64 a1)
{
  unsigned int v2; // esi
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 76);
  if ( *(_QWORD *)(a1 + 32) == *(_QWORD *)(a1 + 64) )
  {
    if ( *(_BYTE *)(a1 + 83) != 1 || (v3 = *(_DWORD *)(a1 + 80), (v3 & 0xFFFFFF) == 0) )
      v3 = 50;
  }
  else
  {
    v3 = PopGetMonitorReasonFromPowerEventId(*(_DWORD *)(a1 + 24)) & 0xFFFFFF;
  }
  PopPowerAggregatorEnterScreenOff(a1);
  PopReleaseRwLock(&PopPowerAggregatorLock);
  PopSleepstudySnapModernStandbySessionData();
  v4 = *(_DWORD *)(a1 + 16);
  if ( (v4 & 0xFFFFFFFC) != 0 || v4 == 1 )
    PopSleepstudyStartNextSession(1, v3);
  v10 = 0LL;
  PopDirectedDripsNotify(7, (char *)&v10);
  PopAcquirePolicyLock(v5);
  PopNetClearConnectivityConstraint(1LL);
  PopNetClearConnectivityConstraint(7LL);
  PopAggressiveStandbyAppliedActions = 0;
  PopReleasePolicyLock(v7, v6, v8);
  ((void (__fastcall *)(_QWORD))qword_140C6AFA8)(v2);
  return PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
}
