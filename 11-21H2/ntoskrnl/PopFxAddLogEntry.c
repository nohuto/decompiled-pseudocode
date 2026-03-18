/*
 * XREFs of PopFxAddLogEntry @ 0x140355058
 * Callers:
 *     PoFxCompleteIdleCondition @ 0x14024E680 (PoFxCompleteIdleCondition.c)
 *     PopFxCompleteDevicePowerRequired @ 0x140354990 (PopFxCompleteDevicePowerRequired.c)
 *     PopDiagTraceFxDevicePowered @ 0x140354C50 (PopDiagTraceFxDevicePowered.c)
 *     PopFxProcessWork @ 0x140354CBC (PopFxProcessWork.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x140354FB4 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopFxIdleWorker @ 0x140355424 (PopFxIdleWorker.c)
 *     PopDiagTraceIrpStart @ 0x1403A4500 (PopDiagTraceIrpStart.c)
 *     PopFxAllocatePowerIrp @ 0x1403A46E4 (PopFxAllocatePowerIrp.c)
 *     PopDiagTraceIrpFinish @ 0x1403A5020 (PopDiagTraceIrpFinish.c)
 *     PopDiagTraceFxDevicePowerState @ 0x1403B11B0 (PopDiagTraceFxDevicePowerState.c)
 *     PopFxIdleTimeoutDpcRoutine @ 0x1403B5F40 (PopFxIdleTimeoutDpcRoutine.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x1403B6A70 (PoFxCompleteDevicePowerNotRequired.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x1403D93F4 (PopFxUpdateDeviceIdleTimer.c)
 *     PoFxCompleteIdleState @ 0x14045DD10 (PoFxCompleteIdleState.c)
 *     PopPluginNotifyIdleState @ 0x14045DFDC (PopPluginNotifyIdleState.c)
 *     PopDiagTraceFxComponentIdleState @ 0x14045E1D6 (PopDiagTraceFxComponentIdleState.c)
 *     PopDiagTraceFxComponentLatency @ 0x14045E2C4 (PopDiagTraceFxComponentLatency.c)
 *     PopFxCompleteComponentPerfState @ 0x1405CBC30 (PopFxCompleteComponentPerfState.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x1405CBD34 (PopFxCompleteDirectedPowerTransition.c)
 *     PopFxHandleDirectedPowerTransition @ 0x1405CC460 (PopFxHandleDirectedPowerTransition.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1405CCAC0 (PopFxIssueComponentPerfStateChanges.c)
 *     PopDiagTraceFxComponentResidency @ 0x1405D209C (PopDiagTraceFxComponentResidency.c)
 *     PopDiagTraceFxComponentWake @ 0x1405D218C (PopDiagTraceFxComponentWake.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x1405D25F0 (PopDiagTraceFxDeviceDirectedCompletion.c)
 *     PopDiagTraceFxDeviceDirectedTransition @ 0x1405D26F4 (PopDiagTraceFxDeviceDirectedTransition.c)
 *     PopFxUnregisterDevice @ 0x14082310C (PopFxUnregisterDevice.c)
 *     PopDiagTraceFxDeviceStartPowerManagement @ 0x1408233FC (PopDiagTraceFxDeviceStartPowerManagement.c)
 *     PopFxTraceDeviceRegistration @ 0x14082473C (PopFxTraceDeviceRegistration.c)
 *     PopFxTracePerfRegistration @ 0x1409939F8 (PopFxTracePerfRegistration.c)
 * Callees:
 *     KeGetCurrentProcessorNumberEx @ 0x140355110 (KeGetCurrentProcessorNumberEx.c)
 */

void __fastcall PopFxAddLogEntry(__int64 a1, char a2, char a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rdi

  if ( a1 )
  {
    v4 = *(_QWORD *)(a1 + 80);
    if ( v4 )
    {
      v7 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 856), 1u) % *(_DWORD *)(v4 + 840);
      v8 = *(_QWORD *)(v4 + 848);
      v9 = 3 * v7;
      *(_QWORD *)(v8 + 8 * v9) = MEMORY[0xFFFFF78000000008];
      *(_BYTE *)(v8 + 8 * v9 + 8) = a3;
      *(_BYTE *)(v8 + 8 * v9 + 9) = a2;
      *(_WORD *)(v8 + 8 * v9 + 10) = KeGetCurrentProcessorNumberEx(0LL);
      *(_WORD *)(v8 + 8 * v9 + 12) = KeGetCurrentThread()[1].CycleTime;
      *(_WORD *)(v8 + 8 * v9 + 14) = KeGetCurrentThread()[1].CurrentRunTime;
      *(_QWORD *)(v8 + 8 * v9 + 16) = a4;
    }
  }
}
