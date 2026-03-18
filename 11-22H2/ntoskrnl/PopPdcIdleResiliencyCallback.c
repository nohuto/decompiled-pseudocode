/*
 * XREFs of PopPdcIdleResiliencyCallback @ 0x14099812C
 * Callers:
 *     PdcPoResiliencyClient @ 0x140997BA0 (PdcPoResiliencyClient.c)
 * Callees:
 *     PpmQueryTime @ 0x14038FD28 (PpmQueryTime.c)
 *     PpmIdleCsVetoAccountingResiliencyUpdate @ 0x140584F80 (PpmIdleCsVetoAccountingResiliencyUpdate.c)
 *     PopFxBeginDeviceIRPhaseAccounting @ 0x140588BAC (PopFxBeginDeviceIRPhaseAccounting.c)
 *     PopFxEndDeviceIRPhaseAccounting @ 0x14058A2F4 (PopFxEndDeviceIRPhaseAccounting.c)
 *     PopFxPauseDeviceAccounting @ 0x14058B0B4 (PopFxPauseDeviceAccounting.c)
 *     PopFxResumeDeviceAccounting @ 0x14058B898 (PopFxResumeDeviceAccounting.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x140597E20 (PpmDisableHighPerfRequestDeferredExpiration.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x140599910 (PopAccumulateNonActivatedCpuTime.c)
 *     PopUpdateNonAttributedCpuTimeReference @ 0x140599978 (PopUpdateNonAttributedCpuTimeReference.c)
 *     PopIdleWakeNotifyIdleResiliencyState @ 0x14059DA24 (PopIdleWakeNotifyIdleResiliencyState.c)
 *     PopCheckResiliencyScenarios @ 0x140700F30 (PopCheckResiliencyScenarios.c)
 *     PopSetPowerSettingValueAcDc @ 0x1407A7A80 (PopSetPowerSettingValueAcDc.c)
 *     PopDirectedDripsIdleResiliencyCallback @ 0x1409836E0 (PopDirectedDripsIdleResiliencyCallback.c)
 *     PopDripsWatchdogStartWatchdog @ 0x14099C7C8 (PopDripsWatchdogStartWatchdog.c)
 *     PopDripsWatchdogStopWatchdog @ 0x14099C938 (PopDripsWatchdogStopWatchdog.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

void __fastcall __noreturn PopPdcIdleResiliencyCallback(int a1, unsigned __int8 a2)
{
  int v2; // edi
  __int64 v3; // rcx
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  PopAcquirePolicyLock(a1);
  PopPdcIdleResiliency = v2;
  v4 = v2;
  PopSetPowerSettingValueAcDc(&GUID_PDC_IDLE_RESILIENCY_ENGAGED, 4u, &v4);
  PopCheckResiliencyScenarios();
  LOBYTE(v3) = v2;
  PopAccumulateNonActivatedCpuTime(v3, &qword_140CF7D28, &qword_140CF7D30);
  PpmQueryTime();
}
