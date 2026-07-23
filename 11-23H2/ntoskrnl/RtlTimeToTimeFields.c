/*
 * XREFs of RtlTimeToTimeFields @ 0x14033B940
 * Callers:
 *     ExInitializeUtcTimeZoneBias @ 0x140821EA8 (ExInitializeUtcTimeZoneBias.c)
 *     ExpRefreshSystemTime @ 0x14083EDF4 (ExpRefreshSystemTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x14083EE98 (ExpRefreshTimeZoneInformation.c)
 *     RtlCutoverTimeToSystemTime @ 0x14083F368 (RtlCutoverTimeToSystemTime.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x14085DDC4 (CmpUpdateReorganizeRegistryValues.c)
 *     ExpKernelExpirationDateCacheProvider @ 0x140863FC0 (ExpKernelExpirationDateCacheProvider.c)
 *     IopCopyBootLogRegistryToFile @ 0x1408657F8 (IopCopyBootLogRegistryToFile.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140879EB0 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x14087BCD0 (PiDevCfgBuildDriverConfigurationId.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x14087BE40 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     HalpUtcTimeToAcpiRealTime @ 0x140933218 (HalpUtcTimeToAcpiRealTime.c)
 *     NtSetSystemTime @ 0x1409F8520 (NtSetSystemTime.c)
 *     HaliSetWakeAlarm @ 0x140A96370 (HaliSetWakeAlarm.c)
 *     ExpSetSystemTime @ 0x140AAAAD4 (ExpSetSystemTime.c)
 *     HdlspProcessDumpCommand @ 0x140AEACAC (HdlspProcessDumpCommand.c)
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlpTimeToTimeFields @ 0x14033B958 (RtlpTimeToTimeFields.c)
 */

void __stdcall RtlTimeToTimeFields(PLARGE_INTEGER Time, PTIME_FIELDS TimeFields)
{
  RtlpTimeToTimeFields(Time, TimeFields);
}
