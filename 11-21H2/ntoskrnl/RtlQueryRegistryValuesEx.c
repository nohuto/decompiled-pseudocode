/*
 * XREFs of RtlQueryRegistryValuesEx @ 0x1406DEF50
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x140255FD0 (RtlCheckPortableOperatingSystem.c)
 *     RtlpFindRegTziForCurrentYear @ 0x1403C7B58 (RtlpFindRegTziForCurrentYear.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x1403D35C8 (EtwpQueryPartitionRegistryInformation.c)
 *     EtwpQuerySiloRegistrySettings @ 0x1403D3830 (EtwpQuerySiloRegistrySettings.c)
 *     EtwpGetCurrentSiloMaxLoggers @ 0x1403DD97C (EtwpGetCurrentSiloMaxLoggers.c)
 *     CarReadRegistry @ 0x140604E78 (CarReadRegistry.c)
 *     DifRtlQueryRegistryValuesExWrapper @ 0x14061B950 (DifRtlQueryRegistryValuesExWrapper.c)
 *     DifRtlQueryRegistryValuesWrapper @ 0x14061BAA0 (DifRtlQueryRegistryValuesWrapper.c)
 *     sub_140639DA4 @ 0x140639DA4 (sub_140639DA4.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140AF71F0 (IopInitCrashDumpDuringSysInit.c)
 *     SmQueryRegistry @ 0x140B2564C (SmQueryRegistry.c)
 *     CmIsLastKnownGoodBoot @ 0x140B2B090 (CmIsLastKnownGoodBoot.c)
 *     EtwpReadConfigParameters @ 0x140B2E06C (EtwpReadConfigParameters.c)
 * Callees:
 *     RtlpQueryRegistryValues @ 0x140781F40 (RtlpQueryRegistryValues.c)
 */

__int64 __fastcall RtlQueryRegistryValuesEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return RtlpQueryRegistryValues(a1, a2, a3, a4);
}
