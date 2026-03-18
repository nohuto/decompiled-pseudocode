/*
 * XREFs of ZwQuerySystemInformation @ 0x14041B420
 * Callers:
 *     HvlpProcessIommu @ 0x14036A5FC (HvlpProcessIommu.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1403B5A50 (RtlpInitializeNonVolatileFlush.c)
 *     IopLiveDumpIsUnderMemoryPressure @ 0x140559DB4 (IopLiveDumpIsUnderMemoryPressure.c)
 *     SmKmStoreTerminateWorker @ 0x1405CBB60 (SmKmStoreTerminateWorker.c)
 *     SmQuerySystemInformation @ 0x1405CDAA0 (SmQuerySystemInformation.c)
 *     DifZwQuerySystemInformationWrapper @ 0x1405F5930 (DifZwQuerySystemInformationWrapper.c)
 *     ExpInitExpCheckTestSigningInfo @ 0x14060C220 (ExpInitExpCheckTestSigningInfo.c)
 *     sub_1406EF570 @ 0x1406EF570 (sub_1406EF570.c)
 *     PfpPrivSourceEnum @ 0x1407417B0 (PfpPrivSourceEnum.c)
 *     RtlQueryModuleInformation @ 0x1407BF1C0 (RtlQueryModuleInformation.c)
 *     SiGetSystemDeviceName @ 0x1407D3358 (SiGetSystemDeviceName.c)
 *     RtlCreateHeap @ 0x1407D9080 (RtlCreateHeap.c)
 *     EtwpTiQueryCodeIntegrityOptions @ 0x1407DEB80 (EtwpTiQueryCodeIntegrityOptions.c)
 *     PopInitializeHibernateGlobals @ 0x1408014E4 (PopInitializeHibernateGlobals.c)
 *     SiQuerySystemInformationString @ 0x1408023F0 (SiQuerySystemInformationString.c)
 *     BiGetFirmwareType @ 0x140804030 (BiGetFirmwareType.c)
 *     BiGetCurrentBootEntryIdentifier @ 0x140806EC8 (BiGetCurrentBootEntryIdentifier.c)
 *     KsepGetLoadedModulesList @ 0x14080895C (KsepGetLoadedModulesList.c)
 *     RtlSystemTimeToLocalTime @ 0x140859870 (RtlSystemTimeToLocalTime.c)
 *     ExpCloudbookHardwareLockedProvider @ 0x14085D810 (ExpCloudbookHardwareLockedProvider.c)
 *     EtwpLogMemInfoWs @ 0x1408A6B64 (EtwpLogMemInfoWs.c)
 *     HalpCheckTestSigningEnabled @ 0x1409350D0 (HalpCheckTestSigningEnabled.c)
 *     PnpGetStableSystemBootTime @ 0x140958A34 (PnpGetStableSystemBootTime.c)
 *     PiIsHVCIEnabled @ 0x140959C8C (PiIsHVCIEnabled.c)
 *     PipKsrCallback @ 0x14096D270 (PipKsrCallback.c)
 *     PopCheckTestsigningEnabled @ 0x140980660 (PopCheckTestsigningEnabled.c)
 *     PopAllocateHiberContext @ 0x140987D38 (PopAllocateHiberContext.c)
 *     PspQueryComPlusRunUnderWoW @ 0x1409B12F8 (PspQueryComPlusRunUnderWoW.c)
 *     RtlLocalTimeToSystemTime @ 0x1409B8E60 (RtlLocalTimeToSystemTime.c)
 *     ExpCloudbookHardwareIDProvider @ 0x1409F98D0 (ExpCloudbookHardwareIDProvider.c)
 *     ExpFindDiskSignature @ 0x1409FC61C (ExpFindDiskSignature.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x140A4F91C (SdbpCheckMatchingRegistryEntry.c)
 *     AslEnvGetProcessWowInfo @ 0x140A570CC (AslEnvGetProcessWowInfo.c)
 *     IoShutdownSystem @ 0x140A99B34 (IoShutdownSystem.c)
 *     PopGetHwConfigurationSignature @ 0x140AA2BCC (PopGetHwConfigurationSignature.c)
 *     HdlspAddLogEntry @ 0x140AE9B20 (HdlspAddLogEntry.c)
 *     PopInitPlatformSettings @ 0x140B5234C (PopInitPlatformSettings.c)
 *     MiInitializeCacheFlushing @ 0x140B6A51C (MiInitializeCacheFlushing.c)
 *     PopCheckShutdownMarker @ 0x140B6E32C (PopCheckShutdownMarker.c)
 *     SepInitializeDebugOptions @ 0x140B75844 (SepInitializeDebugOptions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQuerySystemInformation(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
