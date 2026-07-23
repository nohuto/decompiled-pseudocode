/*
 * XREFs of ZwQuerySystemInformation @ 0x14041AD60
 * Callers:
 *     HvlpProcessIommu @ 0x140369FAC (HvlpProcessIommu.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1403B53C0 (RtlpInitializeNonVolatileFlush.c)
 *     IopLiveDumpIsUnderMemoryPressure @ 0x140559E54 (IopLiveDumpIsUnderMemoryPressure.c)
 *     SmKmStoreTerminateWorker @ 0x1405CBBF0 (SmKmStoreTerminateWorker.c)
 *     SmQuerySystemInformation @ 0x1405CDB30 (SmQuerySystemInformation.c)
 *     DifZwQuerySystemInformationWrapper @ 0x1405F59C0 (DifZwQuerySystemInformationWrapper.c)
 *     ExpInitExpCheckTestSigningInfo @ 0x14060C290 (ExpInitExpCheckTestSigningInfo.c)
 *     sub_1406EF620 @ 0x1406EF620 (sub_1406EF620.c)
 *     PfpPrivSourceEnum @ 0x140741CC0 (PfpPrivSourceEnum.c)
 *     RtlQueryModuleInformation @ 0x1407BF750 (RtlQueryModuleInformation.c)
 *     SiGetSystemDeviceName @ 0x1407D38D8 (SiGetSystemDeviceName.c)
 *     RtlCreateHeap @ 0x1407D9600 (RtlCreateHeap.c)
 *     EtwpTiQueryCodeIntegrityOptions @ 0x1407DF100 (EtwpTiQueryCodeIntegrityOptions.c)
 *     SiQuerySystemInformationString @ 0x140804974 (SiQuerySystemInformationString.c)
 *     BiGetFirmwareType @ 0x1408065B4 (BiGetFirmwareType.c)
 *     BiGetCurrentBootEntryIdentifier @ 0x140809448 (BiGetCurrentBootEntryIdentifier.c)
 *     KsepGetLoadedModulesList @ 0x14080AEDC (KsepGetLoadedModulesList.c)
 *     RtlSystemTimeToLocalTime @ 0x14085A3F0 (RtlSystemTimeToLocalTime.c)
 *     ExpCloudbookHardwareLockedProvider @ 0x14085DC70 (ExpCloudbookHardwareLockedProvider.c)
 *     PopInitializeHibernateGlobals @ 0x1408627D8 (PopInitializeHibernateGlobals.c)
 *     EtwpLogMemInfoWs @ 0x1408A7044 (EtwpLogMemInfoWs.c)
 *     HalpCheckTestSigningEnabled @ 0x140935180 (HalpCheckTestSigningEnabled.c)
 *     PnpGetStableSystemBootTime @ 0x140958AE4 (PnpGetStableSystemBootTime.c)
 *     PiIsHVCIEnabled @ 0x140959D3C (PiIsHVCIEnabled.c)
 *     PipKsrCallback @ 0x14096D320 (PipKsrCallback.c)
 *     PopCheckTestsigningEnabled @ 0x140980710 (PopCheckTestsigningEnabled.c)
 *     PopAllocateHiberContext @ 0x140987DE8 (PopAllocateHiberContext.c)
 *     PspQueryComPlusRunUnderWoW @ 0x1409B13A8 (PspQueryComPlusRunUnderWoW.c)
 *     RtlLocalTimeToSystemTime @ 0x1409B8F10 (RtlLocalTimeToSystemTime.c)
 *     ExpCloudbookHardwareIDProvider @ 0x1409F9980 (ExpCloudbookHardwareIDProvider.c)
 *     ExpFindDiskSignature @ 0x1409FC6CC (ExpFindDiskSignature.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x140A4F98C (SdbpCheckMatchingRegistryEntry.c)
 *     AslEnvGetProcessWowInfo @ 0x140A5713C (AslEnvGetProcessWowInfo.c)
 *     IoShutdownSystem @ 0x140A99BF4 (IoShutdownSystem.c)
 *     PopGetHwConfigurationSignature @ 0x140AA2C8C (PopGetHwConfigurationSignature.c)
 *     HdlspAddLogEntry @ 0x140AEAB20 (HdlspAddLogEntry.c)
 *     PopCheckShutdownMarker @ 0x140B37D6C (PopCheckShutdownMarker.c)
 *     PopInitPlatformSettings @ 0x140B522C0 (PopInitPlatformSettings.c)
 *     MiInitializeCacheFlushing @ 0x140B6B46C (MiInitializeCacheFlushing.c)
 *     SepInitializeDebugOptions @ 0x140B6DCF4 (SepInitializeDebugOptions.c)
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
