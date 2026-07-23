/*
 * XREFs of PopFxAddLogEntry @ 0x140312D84
 * Callers:
 *     PopDiagTraceFxDevicePowerState @ 0x14028DF54 (PopDiagTraceFxDevicePowerState.c)
 *     PopDiagTraceIrpFinish @ 0x14028E7A4 (PopDiagTraceIrpFinish.c)
 *     PopDiagTraceIrpStart @ 0x14028EE30 (PopDiagTraceIrpStart.c)
 *     PopFxAllocatePowerIrp @ 0x14028F0BC (PopFxAllocatePowerIrp.c)
 *     PopFxCompleteDevicePowerRequired @ 0x140310D70 (PopFxCompleteDevicePowerRequired.c)
 *     PopDiagTraceFxDevicePowered @ 0x140310E00 (PopDiagTraceFxDevicePowered.c)
 *     PopFxProcessWork @ 0x1403128C4 (PopFxProcessWork.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x140312CE0 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopFxIdleWorker @ 0x140312E2C (PopFxIdleWorker.c)
 *     PoFxCompleteIdleCondition @ 0x1403574A0 (PoFxCompleteIdleCondition.c)
 *     PoFxSetComponentLatency @ 0x14035B660 (PoFxSetComponentLatency.c)
 *     PoFxCompleteIdleState @ 0x14035C560 (PoFxCompleteIdleState.c)
 *     PopDiagTraceFxComponentIdleState @ 0x14035C84C (PopDiagTraceFxComponentIdleState.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x14036B474 (PopFxUpdateDeviceIdleTimer.c)
 *     PopFxIdleTimeoutDpcRoutine @ 0x14036C130 (PopFxIdleTimeoutDpcRoutine.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x14036E940 (PoFxCompleteDevicePowerNotRequired.c)
 *     PoFxSetComponentResidency @ 0x1403B3E90 (PoFxSetComponentResidency.c)
 *     PopPluginNotifyIdleState @ 0x1404631CE (PopPluginNotifyIdleState.c)
 *     PopFxCompleteComponentPerfState @ 0x140589A88 (PopFxCompleteComponentPerfState.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x140589B8C (PopFxCompleteDirectedPowerTransition.c)
 *     PopFxHandleDirectedPowerTransition @ 0x14058A990 (PopFxHandleDirectedPowerTransition.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x14058B0A8 (PopFxIssueComponentPerfStateChanges.c)
 *     PopDiagTraceFxComponentWake @ 0x140593548 (PopDiagTraceFxComponentWake.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x1405939AC (PopDiagTraceFxDeviceDirectedCompletion.c)
 *     PopDiagTraceFxDeviceDirectedTransition @ 0x140593AB0 (PopDiagTraceFxDeviceDirectedTransition.c)
 *     PopFxTraceDeviceRegistration @ 0x140837488 (PopFxTraceDeviceRegistration.c)
 *     PopDiagTraceFxDeviceStartPowerManagement @ 0x140837534 (PopDiagTraceFxDeviceStartPowerManagement.c)
 *     PopDiagTraceFxDeviceUnregistration @ 0x14098F7AC (PopDiagTraceFxDeviceUnregistration.c)
 *     PopFxTracePerfRegistration @ 0x1409925C0 (PopFxTracePerfRegistration.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall PopFxAddLogEntry(__int64 a1, char a2, char a3, __int64 a4)
{
  __int64 v6; // r10
  __int64 v7; // r8
  __int64 v8; // rdx
  struct _KTHREAD *result; // rax

  if ( a1 )
  {
    v6 = *(_QWORD *)(a1 + 80);
    if ( v6 )
    {
      v7 = 3LL
         * ((unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 856), 1u) % *(_DWORD *)(v6 + 840));
      v8 = *(_QWORD *)(v6 + 848);
      *(_QWORD *)(v8 + 8 * v7) = MEMORY[0xFFFFF78000000008];
      *(_BYTE *)(v8 + 8 * v7 + 8) = a3;
      *(_BYTE *)(v8 + 8 * v7 + 9) = a2;
      *(_WORD *)(v8 + 8 * v7 + 10) = KeGetCurrentPrcb()->Number;
      *(_WORD *)(v8 + 8 * v7 + 12) = KeGetCurrentThread()[1].CycleTime;
      result = KeGetCurrentThread();
      *(_WORD *)(v8 + 8 * v7 + 14) = result[1].CurrentRunTime;
      *(_QWORD *)(v8 + 8 * v7 + 16) = a4;
    }
  }
  return result;
}
