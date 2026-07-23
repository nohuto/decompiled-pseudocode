/*
 * XREFs of KeIsMultiCoreClassesEnabled @ 0x140256000
 * Callers:
 *     KiSearchForNewThreadOnProcessor @ 0x140240D60 (KiSearchForNewThreadOnProcessor.c)
 *     KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry @ 0x140243980 (KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry.c)
 *     KiTraceLogHeteroRundown @ 0x1403B07EC (KiTraceLogHeteroRundown.c)
 *     KiGenerateHeteroSets @ 0x140461AA0 (KiGenerateHeteroSets.c)
 *     KiSendHeteroRescheduleIntRequest @ 0x140462566 (KiSendHeteroRescheduleIntRequest.c)
 *     KiConfigureHeteroProcessorsTarget @ 0x14056BD10 (KiConfigureHeteroProcessorsTarget.c)
 *     PpmEventTraceHeteroSets @ 0x14082D774 (PpmEventTraceHeteroSets.c)
 *     KeConfigureHeteroProcessors @ 0x140972AE8 (KeConfigureHeteroProcessors.c)
 *     PpmUpdateArchitecturalEfficiencyClass @ 0x140B6B4B4 (PpmUpdateArchitecturalEfficiencyClass.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x140B70A64 (PopDetectSimulatedHeteroProcessors.c)
 * Callees:
 *     Feature_MultiCoreClasses__private_ReportDeviceUsage @ 0x1404103BC (Feature_MultiCoreClasses__private_ReportDeviceUsage.c)
 */

_BOOL8 __fastcall KeIsMultiCoreClassesEnabled(__int64 a1, __int64 a2)
{
  Feature_MultiCoreClasses__private_ReportDeviceUsage(a1, a2);
  return PpmHeteroMultiCoreClassesEnabled != 0;
}
