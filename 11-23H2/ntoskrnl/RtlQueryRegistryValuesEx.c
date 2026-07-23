/*
 * XREFs of RtlQueryRegistryValuesEx @ 0x1406C7A90
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x140369230 (RtlCheckPortableOperatingSystem.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x140399044 (EtwpQueryPartitionRegistryInformation.c)
 *     EtwpQuerySiloRegistrySettings @ 0x1403992AC (EtwpQuerySiloRegistrySettings.c)
 *     RtlpFindRegTziForCurrentYear @ 0x140399F7C (RtlpFindRegTziForCurrentYear.c)
 *     EtwpGetCurrentSiloMaxLoggers @ 0x1403B419C (EtwpGetCurrentSiloMaxLoggers.c)
 *     RtlpEtcGetDwordFromRegistry @ 0x140411C24 (RtlpEtcGetDwordFromRegistry.c)
 *     CarReadRegistry @ 0x1405D5CBC (CarReadRegistry.c)
 *     DifRtlQueryRegistryValuesExWrapper @ 0x1405EBF80 (DifRtlQueryRegistryValuesExWrapper.c)
 *     DifRtlQueryRegistryValuesWrapper @ 0x1405EC0D0 (DifRtlQueryRegistryValuesWrapper.c)
 *     sub_140609738 @ 0x140609738 (sub_140609738.c)
 *     FsRtlOpenFileSystemRegistryKeyFromFsGuid @ 0x14067E670 (FsRtlOpenFileSystemRegistryKeyFromFsGuid.c)
 *     VhdAutoAttachVirtualDisks @ 0x140B34A9C (VhdAutoAttachVirtualDisks.c)
 *     SmGlobalsStart @ 0x140B4D7D4 (SmGlobalsStart.c)
 *     CmIsLastKnownGoodBoot @ 0x140B6E1FC (CmIsLastKnownGoodBoot.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140B71660 (IopInitCrashDumpDuringSysInit.c)
 *     EtwpReadConfigParameters @ 0x140B72A44 (EtwpReadConfigParameters.c)
 * Callees:
 *     RtlpQueryRegistryValues @ 0x1406C5A00 (RtlpQueryRegistryValues.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlQueryRegistryValuesEx(
        ULONG RelativeTo,
        PCWSTR Path,
        PRTL_QUERY_REGISTRY_TABLE QueryTable,
        PVOID Context,
        PVOID Environment)
{
  return RtlpQueryRegistryValues(*(__int64 *)&RelativeTo, Path, QueryTable, (__int64)Context);
}
