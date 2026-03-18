/*
 * XREFs of PopFxAddLogEntry @ 0x140312AF4
 * Callers:
 *     PopDiagTraceFxDevicePowerState @ 0x14028DCC4 (PopDiagTraceFxDevicePowerState.c)
 *     PopDiagTraceIrpFinish @ 0x14028E514 (PopDiagTraceIrpFinish.c)
 *     PopDiagTraceIrpStart @ 0x14028EBA0 (PopDiagTraceIrpStart.c)
 *     PopFxAllocatePowerIrp @ 0x14028EE2C (PopFxAllocatePowerIrp.c)
 *     PopFxCompleteDevicePowerRequired @ 0x140310AE0 (PopFxCompleteDevicePowerRequired.c)
 *     PopDiagTraceFxDevicePowered @ 0x140310B70 (PopDiagTraceFxDevicePowered.c)
 *     PopFxProcessWork @ 0x140312634 (PopFxProcessWork.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x140312A50 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopFxIdleWorker @ 0x140312B9C (PopFxIdleWorker.c)
 *     PoFxCompleteIdleCondition @ 0x140357300 (PoFxCompleteIdleCondition.c)
 *     PoFxSetComponentLatency @ 0x14035B4C0 (PoFxSetComponentLatency.c)
 *     PoFxCompleteIdleState @ 0x14035C3C0 (PoFxCompleteIdleState.c)
 *     PopDiagTraceFxComponentIdleState @ 0x14035C6AC (PopDiagTraceFxComponentIdleState.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x14036B2D4 (PopFxUpdateDeviceIdleTimer.c)
 *     PopFxIdleTimeoutDpcRoutine @ 0x14036BF90 (PopFxIdleTimeoutDpcRoutine.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x14036E7A0 (PoFxCompleteDevicePowerNotRequired.c)
 *     PoFxSetComponentResidency @ 0x1403B3CB0 (PoFxSetComponentResidency.c)
 *     PopPluginNotifyIdleState @ 0x140462DCE (PopPluginNotifyIdleState.c)
 *     PopFxCompleteComponentPerfState @ 0x140589598 (PopFxCompleteComponentPerfState.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x14058969C (PopFxCompleteDirectedPowerTransition.c)
 *     PopFxHandleDirectedPowerTransition @ 0x14058A4A0 (PopFxHandleDirectedPowerTransition.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x14058ABB8 (PopFxIssueComponentPerfStateChanges.c)
 *     PopDiagTraceFxComponentWake @ 0x140593058 (PopDiagTraceFxComponentWake.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x1405934BC (PopDiagTraceFxDeviceDirectedCompletion.c)
 *     PopDiagTraceFxDeviceDirectedTransition @ 0x1405935C0 (PopDiagTraceFxDeviceDirectedTransition.c)
 *     PopFxTraceDeviceRegistration @ 0x140837188 (PopFxTraceDeviceRegistration.c)
 *     PopDiagTraceFxDeviceStartPowerManagement @ 0x140837234 (PopDiagTraceFxDeviceStartPowerManagement.c)
 *     PopDiagTraceFxDeviceUnregistration @ 0x14098F5AC (PopDiagTraceFxDeviceUnregistration.c)
 *     PopFxTracePerfRegistration @ 0x1409923C0 (PopFxTracePerfRegistration.c)
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
