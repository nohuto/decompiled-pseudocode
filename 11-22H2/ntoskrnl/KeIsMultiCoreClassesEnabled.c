/*
 * XREFs of KeIsMultiCoreClassesEnabled @ 0x140255E20
 * Callers:
 *     KiSearchForNewThreadOnProcessor @ 0x140240C70 (KiSearchForNewThreadOnProcessor.c)
 *     KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry @ 0x140243890 (KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry.c)
 *     KiTraceLogHeteroRundown @ 0x1403AFF7C (KiTraceLogHeteroRundown.c)
 *     KiGenerateHeteroSets @ 0x140461040 (KiGenerateHeteroSets.c)
 *     KiSendHeteroRescheduleIntRequest @ 0x140461B06 (KiSendHeteroRescheduleIntRequest.c)
 *     KiConfigureHeteroProcessorsTarget @ 0x14056B6F0 (KiConfigureHeteroProcessorsTarget.c)
 *     PpmEventTraceHeteroSets @ 0x14082EFC4 (PpmEventTraceHeteroSets.c)
 *     KeConfigureHeteroProcessors @ 0x140972998 (KeConfigureHeteroProcessors.c)
 *     PpmUpdateArchitecturalEfficiencyClass @ 0x140B6C5A0 (PpmUpdateArchitecturalEfficiencyClass.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x140B71AE0 (PopDetectSimulatedHeteroProcessors.c)
 * Callees:
 *     Feature_MultiCoreClasses__private_ReportDeviceUsage @ 0x14040FA6C (Feature_MultiCoreClasses__private_ReportDeviceUsage.c)
 */

_BOOL8 __fastcall KeIsMultiCoreClassesEnabled(__int64 a1, __int64 a2)
{
  Feature_MultiCoreClasses__private_ReportDeviceUsage(a1, a2);
  return PpmHeteroMultiCoreClassesEnabled != 0;
}
