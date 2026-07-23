/*
 * XREFs of ZwPowerInformation @ 0x14041BCD0
 * Callers:
 *     HalpSetShutdownResetHandler @ 0x140507134 (HalpSetShutdownResetHandler.c)
 *     DifZwPowerInformationWrapper @ 0x1405F34F0 (DifZwPowerInformationWrapper.c)
 *     RtlpSystemBootStatusRequest @ 0x1407A677C (RtlpSystemBootStatusRequest.c)
 *     PopDisarmIdlePhaseWatchdog @ 0x1407AA20C (PopDisarmIdlePhaseWatchdog.c)
 *     PopInvokeWin32Callout @ 0x1407D3B8C (PopInvokeWin32Callout.c)
 *     RtlpRecordBootStatusData @ 0x1407ECE50 (RtlpRecordBootStatusData.c)
 *     PdcPortOpenCommon @ 0x140856418 (PdcPortOpenCommon.c)
 *     RtlCheckSystemBootStatusIntegrity @ 0x14085C4E0 (RtlCheckSystemBootStatusIntegrity.c)
 *     HaliAcpiMachineStateInit @ 0x14085E290 (HaliAcpiMachineStateInit.c)
 *     PopArmIdlePhaseWatchdog @ 0x140883AB4 (PopArmIdlePhaseWatchdog.c)
 *     PoGetLightestSystemStateForEject @ 0x140980670 (PoGetLightestSystemStateForEject.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x1409AF9E4 (PspRecordCrashedProcessIntoBlackbox.c)
 *     RtlRestoreSystemBootStatusDefaults @ 0x1409BDE70 (RtlRestoreSystemBootStatusDefaults.c)
 *     PopCreateIdlePhaseWatchdog @ 0x140B75398 (PopCreateIdlePhaseWatchdog.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwPowerInformation(
        POWER_INFORMATION_LEVEL InformationLevel,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&InformationLevel);
}
