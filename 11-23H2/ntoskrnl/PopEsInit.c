/*
 * XREFs of PopEsInit @ 0x140B51F88
 * Callers:
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     PoRegisterPowerSettingCallback @ 0x1407A7250 (PoRegisterPowerSettingCallback.c)
 *     ExSubscribeWnfStateChange @ 0x1407DB000 (ExSubscribeWnfStateChange.c)
 *     PopEsWorkItemSchedule @ 0x140870A80 (PopEsWorkItemSchedule.c)
 */

void __fastcall PopEsInit(int a1)
{
  if ( a1 == 1 )
  {
    qword_140C39EC8 = 0LL;
    PopEsLock = 0LL;
    PopEsWorkItem.Parameter = 0LL;
    PopEsWorkItem.List.Flink = 0LL;
    PopEsWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopEsWorker;
    PopEsWorkItemSchedule(1);
  }
  else if ( PopPlatformAoAc )
  {
    if ( a1 == 3 )
    {
      PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
      PoRegisterPowerSettingCallback(
        0LL,
        &GUID_ACDC_POWER_SOURCE,
        (PPOWER_SETTING_CALLBACK)PopEsInStandbyLowPowerEpochCallback,
        0LL,
        0LL);
      PoRegisterPowerSettingCallback(
        0LL,
        &GUID_LOW_POWER_EPOCH,
        (PPOWER_SETTING_CALLBACK)PopEsInStandbyLowPowerEpochCallback,
        0LL,
        0LL);
      ExSubscribeWnfStateChange(
        (__int64)&PopEsWnfSubscriptionOpportunisticCs,
        (__int64)&WNF_PO_OPPORTUNISTIC_CS,
        1,
        0,
        (__int64)PopEsInStandbyLowPowerEpochCallback,
        0LL);
      PopReleaseRwLock(&PopEsLock);
    }
  }
}
