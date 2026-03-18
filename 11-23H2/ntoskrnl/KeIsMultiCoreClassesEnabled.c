/*
 * XREFs of KeIsMultiCoreClassesEnabled @ 0x140255F40
 * Callers:
 *     KiSearchForNewThreadOnProcessor @ 0x140240C90 (KiSearchForNewThreadOnProcessor.c)
 *     KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry @ 0x1402438B0 (KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry.c)
 *     KiTraceLogHeteroRundown @ 0x1403B060C (KiTraceLogHeteroRundown.c)
 *     KiGenerateHeteroSets @ 0x1404616A0 (KiGenerateHeteroSets.c)
 *     KiSendHeteroRescheduleIntRequest @ 0x140462166 (KiSendHeteroRescheduleIntRequest.c)
 *     KiConfigureHeteroProcessorsTarget @ 0x14056B650 (KiConfigureHeteroProcessorsTarget.c)
 *     PpmEventTraceHeteroSets @ 0x14082D474 (PpmEventTraceHeteroSets.c)
 *     KeConfigureHeteroProcessors @ 0x1409728E8 (KeConfigureHeteroProcessors.c)
 *     PpmUpdateArchitecturalEfficiencyClass @ 0x140B6B4B4 (PpmUpdateArchitecturalEfficiencyClass.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x140B70A64 (PopDetectSimulatedHeteroProcessors.c)
 * Callees:
 *     Feature_MultiCoreClasses__private_ReportDeviceUsage @ 0x1404102E0 (Feature_MultiCoreClasses__private_ReportDeviceUsage.c)
 */

_BOOL8 __fastcall KeIsMultiCoreClassesEnabled(__int64 a1, __int64 a2)
{
  Feature_MultiCoreClasses__private_ReportDeviceUsage(a1, a2);
  return PpmHeteroMultiCoreClassesEnabled != 0;
}
