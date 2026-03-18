/*
 * XREFs of ZwPowerInformation @ 0x14041B940
 * Callers:
 *     HalpSetShutdownResetHandler @ 0x140506BE4 (HalpSetShutdownResetHandler.c)
 *     DifZwPowerInformationWrapper @ 0x1405F2F80 (DifZwPowerInformationWrapper.c)
 *     RtlpSystemBootStatusRequest @ 0x1407A658C (RtlpSystemBootStatusRequest.c)
 *     PopDisarmIdlePhaseWatchdog @ 0x1407AA01C (PopDisarmIdlePhaseWatchdog.c)
 *     PopInvokeWin32Callout @ 0x1407D38BC (PopInvokeWin32Callout.c)
 *     RtlpRecordBootStatusData @ 0x1407ECB80 (RtlpRecordBootStatusData.c)
 *     PdcPortOpenCommon @ 0x140856118 (PdcPortOpenCommon.c)
 *     RtlCheckSystemBootStatusIntegrity @ 0x14085C2A0 (RtlCheckSystemBootStatusIntegrity.c)
 *     HaliAcpiMachineStateInit @ 0x14085E050 (HaliAcpiMachineStateInit.c)
 *     PopArmIdlePhaseWatchdog @ 0x140883874 (PopArmIdlePhaseWatchdog.c)
 *     PoGetLightestSystemStateForEject @ 0x140980470 (PoGetLightestSystemStateForEject.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x1409AF7E4 (PspRecordCrashedProcessIntoBlackbox.c)
 *     RtlRestoreSystemBootStatusDefaults @ 0x1409BDC70 (RtlRestoreSystemBootStatusDefaults.c)
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
  return KiServiceInternal(*(_QWORD *)&InformationLevel, InputBuffer);
}
