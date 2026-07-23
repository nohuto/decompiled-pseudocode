/*
 * XREFs of ZwPowerInformation @ 0x14041B280
 * Callers:
 *     HalpSetShutdownResetHandler @ 0x140506CF0 (HalpSetShutdownResetHandler.c)
 *     DifZwPowerInformationWrapper @ 0x1405F3010 (DifZwPowerInformationWrapper.c)
 *     RtlpSystemBootStatusRequest @ 0x1407A6A9C (RtlpSystemBootStatusRequest.c)
 *     PopDisarmIdlePhaseWatchdog @ 0x1407AA5CC (PopDisarmIdlePhaseWatchdog.c)
 *     PopInvokeWin32Callout @ 0x1407D3E3C (PopInvokeWin32Callout.c)
 *     RtlpRecordBootStatusData @ 0x1407ED100 (RtlpRecordBootStatusData.c)
 *     RtlCheckSystemBootStatusIntegrity @ 0x140803070 (RtlCheckSystemBootStatusIntegrity.c)
 *     PdcPortOpenCommon @ 0x140857028 (PdcPortOpenCommon.c)
 *     HaliAcpiMachineStateInit @ 0x14085E4B0 (HaliAcpiMachineStateInit.c)
 *     PopArmIdlePhaseWatchdog @ 0x140883D44 (PopArmIdlePhaseWatchdog.c)
 *     PoGetLightestSystemStateForEject @ 0x140980520 (PoGetLightestSystemStateForEject.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x1409AF894 (PspRecordCrashedProcessIntoBlackbox.c)
 *     RtlRestoreSystemBootStatusDefaults @ 0x1409BDD20 (RtlRestoreSystemBootStatusDefaults.c)
 *     PopCreateIdlePhaseWatchdog @ 0x140B762C4 (PopCreateIdlePhaseWatchdog.c)
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
