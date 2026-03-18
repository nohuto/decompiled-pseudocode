/*
 * XREFs of RtlQueryRegistryValuesEx @ 0x1406C7A60
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x140369090 (RtlCheckPortableOperatingSystem.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x140398E64 (EtwpQueryPartitionRegistryInformation.c)
 *     EtwpQuerySiloRegistrySettings @ 0x1403990CC (EtwpQuerySiloRegistrySettings.c)
 *     RtlpFindRegTziForCurrentYear @ 0x140399D9C (RtlpFindRegTziForCurrentYear.c)
 *     EtwpGetCurrentSiloMaxLoggers @ 0x1403B3FBC (EtwpGetCurrentSiloMaxLoggers.c)
 *     RtlpEtcGetDwordFromRegistry @ 0x1404119E4 (RtlpEtcGetDwordFromRegistry.c)
 *     CarReadRegistry @ 0x1405D574C (CarReadRegistry.c)
 *     DifRtlQueryRegistryValuesExWrapper @ 0x1405EBA10 (DifRtlQueryRegistryValuesExWrapper.c)
 *     DifRtlQueryRegistryValuesWrapper @ 0x1405EBB60 (DifRtlQueryRegistryValuesWrapper.c)
 *     sub_1406091E8 @ 0x1406091E8 (sub_1406091E8.c)
 *     FsRtlOpenFileSystemRegistryKeyFromFsGuid @ 0x14067E670 (FsRtlOpenFileSystemRegistryKeyFromFsGuid.c)
 *     VhdAutoAttachVirtualDisks @ 0x140B34A9C (VhdAutoAttachVirtualDisks.c)
 *     SmGlobalsStart @ 0x140B4D7D4 (SmGlobalsStart.c)
 *     CmIsLastKnownGoodBoot @ 0x140B6E1FC (CmIsLastKnownGoodBoot.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140B71660 (IopInitCrashDumpDuringSysInit.c)
 *     EtwpReadConfigParameters @ 0x140B72A44 (EtwpReadConfigParameters.c)
 * Callees:
 *     RtlpQueryRegistryValues @ 0x1406C59D0 (RtlpQueryRegistryValues.c)
 */

__int64 __fastcall RtlQueryRegistryValuesEx(__int64 a1, const WCHAR *a2, _QWORD *a3, __int64 a4)
{
  return RtlpQueryRegistryValues(a1, a2, a3, a4);
}
