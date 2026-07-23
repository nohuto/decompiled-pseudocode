/*
 * XREFs of PopPdcIdleResiliencyCallback @ 0x14099827C
 * Callers:
 *     PdcPoResiliencyClient @ 0x140997CF0 (PdcPoResiliencyClient.c)
 * Callees:
 *     PpmQueryTime @ 0x140391A88 (PpmQueryTime.c)
 *     PpmIdleCsVetoAccountingResiliencyUpdate @ 0x1405853E0 (PpmIdleCsVetoAccountingResiliencyUpdate.c)
 *     PopFxBeginDeviceIRPhaseAccounting @ 0x14058900C (PopFxBeginDeviceIRPhaseAccounting.c)
 *     PopFxEndDeviceIRPhaseAccounting @ 0x14058A754 (PopFxEndDeviceIRPhaseAccounting.c)
 *     PopFxPauseDeviceAccounting @ 0x14058B514 (PopFxPauseDeviceAccounting.c)
 *     PopFxResumeDeviceAccounting @ 0x14058BCF8 (PopFxResumeDeviceAccounting.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x140598280 (PpmDisableHighPerfRequestDeferredExpiration.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x140599D70 (PopAccumulateNonActivatedCpuTime.c)
 *     PopUpdateNonAttributedCpuTimeReference @ 0x140599DD8 (PopUpdateNonAttributedCpuTimeReference.c)
 *     PopIdleWakeNotifyIdleResiliencyState @ 0x14059DE84 (PopIdleWakeNotifyIdleResiliencyState.c)
 *     PopCheckResiliencyScenarios @ 0x140701090 (PopCheckResiliencyScenarios.c)
 *     PopSetPowerSettingValueAcDc @ 0x1407A7760 (PopSetPowerSettingValueAcDc.c)
 *     PopDirectedDripsIdleResiliencyCallback @ 0x140983830 (PopDirectedDripsIdleResiliencyCallback.c)
 *     PopDripsWatchdogStartWatchdog @ 0x14099C918 (PopDripsWatchdogStartWatchdog.c)
 *     PopDripsWatchdogStopWatchdog @ 0x14099CA88 (PopDripsWatchdogStopWatchdog.c)
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
  PopAccumulateNonActivatedCpuTime(v3, &qword_140CF7C68, &qword_140CF7C70);
  PpmQueryTime();
}
