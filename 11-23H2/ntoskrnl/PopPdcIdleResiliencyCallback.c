/*
 * XREFs of PopPdcIdleResiliencyCallback @ 0x14099807C
 * Callers:
 *     PdcPoResiliencyClient @ 0x140997AF0 (PdcPoResiliencyClient.c)
 * Callees:
 *     PpmQueryTime @ 0x1403918A8 (PpmQueryTime.c)
 *     PpmIdleCsVetoAccountingResiliencyUpdate @ 0x140584EF0 (PpmIdleCsVetoAccountingResiliencyUpdate.c)
 *     PopFxBeginDeviceIRPhaseAccounting @ 0x140588B1C (PopFxBeginDeviceIRPhaseAccounting.c)
 *     PopFxEndDeviceIRPhaseAccounting @ 0x14058A264 (PopFxEndDeviceIRPhaseAccounting.c)
 *     PopFxPauseDeviceAccounting @ 0x14058B024 (PopFxPauseDeviceAccounting.c)
 *     PopFxResumeDeviceAccounting @ 0x14058B808 (PopFxResumeDeviceAccounting.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x140597D90 (PpmDisableHighPerfRequestDeferredExpiration.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x140599880 (PopAccumulateNonActivatedCpuTime.c)
 *     PopUpdateNonAttributedCpuTimeReference @ 0x1405998E8 (PopUpdateNonAttributedCpuTimeReference.c)
 *     PopIdleWakeNotifyIdleResiliencyState @ 0x14059D994 (PopIdleWakeNotifyIdleResiliencyState.c)
 *     PopCheckResiliencyScenarios @ 0x140700E80 (PopCheckResiliencyScenarios.c)
 *     PopSetPowerSettingValueAcDc @ 0x1407A7570 (PopSetPowerSettingValueAcDc.c)
 *     PopDirectedDripsIdleResiliencyCallback @ 0x140983630 (PopDirectedDripsIdleResiliencyCallback.c)
 *     PopDripsWatchdogStartWatchdog @ 0x14099C718 (PopDripsWatchdogStartWatchdog.c)
 *     PopDripsWatchdogStopWatchdog @ 0x14099C888 (PopDripsWatchdogStopWatchdog.c)
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
