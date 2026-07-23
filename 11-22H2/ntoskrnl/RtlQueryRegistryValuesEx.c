/*
 * XREFs of RtlQueryRegistryValuesEx @ 0x1406C7B10
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x140368A40 (RtlCheckPortableOperatingSystem.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x140398B74 (EtwpQueryPartitionRegistryInformation.c)
 *     EtwpQuerySiloRegistrySettings @ 0x140398DDC (EtwpQuerySiloRegistrySettings.c)
 *     RtlpFindRegTziForCurrentYear @ 0x140399AAC (RtlpFindRegTziForCurrentYear.c)
 *     EtwpGetCurrentSiloMaxLoggers @ 0x1403B392C (EtwpGetCurrentSiloMaxLoggers.c)
 *     RtlpEtcGetDwordFromRegistry @ 0x1404111D4 (RtlpEtcGetDwordFromRegistry.c)
 *     CarReadRegistry @ 0x1405D57DC (CarReadRegistry.c)
 *     DifRtlQueryRegistryValuesExWrapper @ 0x1405EBAA0 (DifRtlQueryRegistryValuesExWrapper.c)
 *     DifRtlQueryRegistryValuesWrapper @ 0x1405EBBF0 (DifRtlQueryRegistryValuesWrapper.c)
 *     sub_140609258 @ 0x140609258 (sub_140609258.c)
 *     FsRtlOpenFileSystemRegistryKeyFromFsGuid @ 0x14067E670 (FsRtlOpenFileSystemRegistryKeyFromFsGuid.c)
 *     VhdAutoAttachVirtualDisks @ 0x140B35A9C (VhdAutoAttachVirtualDisks.c)
 *     SmGlobalsStart @ 0x140B54524 (SmGlobalsStart.c)
 *     CmIsLastKnownGoodBoot @ 0x140B6F668 (CmIsLastKnownGoodBoot.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140B726E0 (IopInitCrashDumpDuringSysInit.c)
 *     EtwpReadConfigParameters @ 0x140B73A8C (EtwpReadConfigParameters.c)
 * Callees:
 *     RtlpQueryRegistryValues @ 0x1406C5A80 (RtlpQueryRegistryValues.c)
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
