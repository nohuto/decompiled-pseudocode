/*
 * XREFs of RtlTimeToTimeFields @ 0x14033B6B0
 * Callers:
 *     ExInitializeUtcTimeZoneBias @ 0x140821BA8 (ExInitializeUtcTimeZoneBias.c)
 *     ExpRefreshSystemTime @ 0x14083EAF4 (ExpRefreshSystemTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x14083EB98 (ExpRefreshTimeZoneInformation.c)
 *     RtlCutoverTimeToSystemTime @ 0x14083F068 (RtlCutoverTimeToSystemTime.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x14085DB84 (CmpUpdateReorganizeRegistryValues.c)
 *     ExpKernelExpirationDateCacheProvider @ 0x140863D80 (ExpKernelExpirationDateCacheProvider.c)
 *     IopCopyBootLogRegistryToFile @ 0x1408655B8 (IopCopyBootLogRegistryToFile.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140879C70 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x14087BA90 (PiDevCfgBuildDriverConfigurationId.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x14087BC00 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     HalpUtcTimeToAcpiRealTime @ 0x140933018 (HalpUtcTimeToAcpiRealTime.c)
 *     NtSetSystemTime @ 0x1409F8290 (NtSetSystemTime.c)
 *     HaliSetWakeAlarm @ 0x140A96500 (HaliSetWakeAlarm.c)
 *     ExpSetSystemTime @ 0x140AAAC64 (ExpSetSystemTime.c)
 *     HdlspProcessDumpCommand @ 0x140AEACAC (HdlspProcessDumpCommand.c)
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlpTimeToTimeFields @ 0x14033B6C8 (RtlpTimeToTimeFields.c)
 */

void __stdcall RtlTimeToTimeFields(PLARGE_INTEGER Time, PTIME_FIELDS TimeFields)
{
  RtlpTimeToTimeFields(Time, TimeFields);
}
