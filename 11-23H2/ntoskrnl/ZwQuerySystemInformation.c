/*
 * XREFs of ZwQuerySystemInformation @ 0x14041B7B0
 * Callers:
 *     HvlpProcessIommu @ 0x14036A79C (HvlpProcessIommu.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1403B5C30 (RtlpInitializeNonVolatileFlush.c)
 *     IopLiveDumpIsUnderMemoryPressure @ 0x14055A474 (IopLiveDumpIsUnderMemoryPressure.c)
 *     SmKmStoreTerminateWorker @ 0x1405CC0D0 (SmKmStoreTerminateWorker.c)
 *     SmQuerySystemInformation @ 0x1405CE010 (SmQuerySystemInformation.c)
 *     DifZwQuerySystemInformationWrapper @ 0x1405F5EA0 (DifZwQuerySystemInformationWrapper.c)
 *     ExpInitExpCheckTestSigningInfo @ 0x14060C770 (ExpInitExpCheckTestSigningInfo.c)
 *     sub_1406EF5A0 @ 0x1406EF5A0 (sub_1406EF5A0.c)
 *     PfpPrivSourceEnum @ 0x1407419A0 (PfpPrivSourceEnum.c)
 *     RtlQueryModuleInformation @ 0x1407BF490 (RtlQueryModuleInformation.c)
 *     SiGetSystemDeviceName @ 0x1407D3628 (SiGetSystemDeviceName.c)
 *     RtlCreateHeap @ 0x1407D9350 (RtlCreateHeap.c)
 *     EtwpTiQueryCodeIntegrityOptions @ 0x1407DEE50 (EtwpTiQueryCodeIntegrityOptions.c)
 *     PopInitializeHibernateGlobals @ 0x1408017B4 (PopInitializeHibernateGlobals.c)
 *     SiQuerySystemInformationString @ 0x1408026C0 (SiQuerySystemInformationString.c)
 *     BiGetFirmwareType @ 0x140804300 (BiGetFirmwareType.c)
 *     BiGetCurrentBootEntryIdentifier @ 0x140807198 (BiGetCurrentBootEntryIdentifier.c)
 *     KsepGetLoadedModulesList @ 0x140808C2C (KsepGetLoadedModulesList.c)
 *     RtlSystemTimeToLocalTime @ 0x140859AB0 (RtlSystemTimeToLocalTime.c)
 *     ExpCloudbookHardwareLockedProvider @ 0x14085DA50 (ExpCloudbookHardwareLockedProvider.c)
 *     EtwpLogMemInfoWs @ 0x1408A6DB4 (EtwpLogMemInfoWs.c)
 *     HalpCheckTestSigningEnabled @ 0x1409352D0 (HalpCheckTestSigningEnabled.c)
 *     PnpGetStableSystemBootTime @ 0x140958C34 (PnpGetStableSystemBootTime.c)
 *     PiIsHVCIEnabled @ 0x140959E8C (PiIsHVCIEnabled.c)
 *     PipKsrCallback @ 0x14096D470 (PipKsrCallback.c)
 *     PopCheckTestsigningEnabled @ 0x140980860 (PopCheckTestsigningEnabled.c)
 *     PopAllocateHiberContext @ 0x140987F38 (PopAllocateHiberContext.c)
 *     PspQueryComPlusRunUnderWoW @ 0x1409B14F8 (PspQueryComPlusRunUnderWoW.c)
 *     RtlLocalTimeToSystemTime @ 0x1409B9060 (RtlLocalTimeToSystemTime.c)
 *     ExpCloudbookHardwareIDProvider @ 0x1409F9B60 (ExpCloudbookHardwareIDProvider.c)
 *     ExpFindDiskSignature @ 0x1409FC8AC (ExpFindDiskSignature.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x140A4FBCC (SdbpCheckMatchingRegistryEntry.c)
 *     AslEnvGetProcessWowInfo @ 0x140A5737C (AslEnvGetProcessWowInfo.c)
 *     IoShutdownSystem @ 0x140A999A4 (IoShutdownSystem.c)
 *     PopGetHwConfigurationSignature @ 0x140AA2A3C (PopGetHwConfigurationSignature.c)
 *     HdlspAddLogEntry @ 0x140AE9B20 (HdlspAddLogEntry.c)
 *     PopInitPlatformSettings @ 0x140B5234C (PopInitPlatformSettings.c)
 *     MiInitializeCacheFlushing @ 0x140B6A51C (MiInitializeCacheFlushing.c)
 *     PopCheckShutdownMarker @ 0x140B6E32C (PopCheckShutdownMarker.c)
 *     SepInitializeDebugOptions @ 0x140B75844 (SepInitializeDebugOptions.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwQuerySystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&SystemInformationClass);
}
