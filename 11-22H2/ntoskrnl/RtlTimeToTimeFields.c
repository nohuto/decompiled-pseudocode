/*
 * XREFs of RtlTimeToTimeFields @ 0x14033B4B0
 * Callers:
 *     ExpRefreshSystemTime @ 0x140840884 (ExpRefreshSystemTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x140840928 (ExpRefreshTimeZoneInformation.c)
 *     RtlCutoverTimeToSystemTime @ 0x140840DF8 (RtlCutoverTimeToSystemTime.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x14085DFE4 (CmpUpdateReorganizeRegistryValues.c)
 *     ExpKernelExpirationDateCacheProvider @ 0x140864140 (ExpKernelExpirationDateCacheProvider.c)
 *     IopCopyBootLogRegistryToFile @ 0x1408659D8 (IopCopyBootLogRegistryToFile.c)
 *     ExInitializeUtcTimeZoneBias @ 0x140865B90 (ExInitializeUtcTimeZoneBias.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14087A140 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x14087BF60 (PiDevCfgBuildDriverConfigurationId.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x14087C0D0 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     HalpUtcTimeToAcpiRealTime @ 0x1409330C8 (HalpUtcTimeToAcpiRealTime.c)
 *     NtSetSystemTime @ 0x1409F8340 (NtSetSystemTime.c)
 *     HaliSetWakeAlarm @ 0x140A965C0 (HaliSetWakeAlarm.c)
 *     ExpSetSystemTime @ 0x140AAAD24 (ExpSetSystemTime.c)
 *     HdlspProcessDumpCommand @ 0x140AEBCAC (HdlspProcessDumpCommand.c)
 *     Phase1InitializationDiscard @ 0x140B4FF9C (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlpTimeToTimeFields @ 0x14033B4C8 (RtlpTimeToTimeFields.c)
 */

void __stdcall RtlTimeToTimeFields(PLARGE_INTEGER Time, PTIME_FIELDS TimeFields)
{
  RtlpTimeToTimeFields(Time, TimeFields);
}
