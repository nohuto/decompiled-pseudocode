/*
 * XREFs of SmpGetProcessPartition @ 0x140344A80
 * Callers:
 *     SmProcessCreateNotification @ 0x1406B639C (SmProcessCreateNotification.c)
 *     PspProcessDelete @ 0x1407610B0 (PspProcessDelete.c)
 *     SmStoreSetProcessVaRanges @ 0x1407B722C (SmStoreSetProcessVaRanges.c)
 *     SmSetStoreInformation @ 0x1407E7D74 (SmSetStoreInformation.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1407E7E24 (SmProcessStoreMemoryPriorityRequest.c)
 *     SmcProcessListRequest @ 0x140841144 (SmcProcessListRequest.c)
 *     SmProcessRegistrationRequest @ 0x1408412C0 (SmProcessRegistrationRequest.c)
 *     SmProcessCompressionInfoRequest @ 0x1408414C4 (SmProcessCompressionInfoRequest.c)
 *     SmProcessConfigRequest @ 0x14085BB0C (SmProcessConfigRequest.c)
 *     SmProcessDeleteRequest @ 0x1409D6D2C (SmProcessDeleteRequest.c)
 *     SmProcessListRequest @ 0x1409D6DAC (SmProcessListRequest.c)
 *     SmProcessResizeRequest @ 0x1409D7260 (SmProcessResizeRequest.c)
 *     SmProcessStatsRequest @ 0x1409D7378 (SmProcessStatsRequest.c)
 *     SmProcessSystemStoreTrimRequest @ 0x1409D768C (SmProcessSystemStoreTrimRequest.c)
 *     SmStoreCompressionStart @ 0x1409D7828 (SmStoreCompressionStart.c)
 *     SmStoreCompressionStop @ 0x1409D78C8 (SmStoreCompressionStop.c)
 *     SmcProcessCreateRequest @ 0x1409D7E9C (SmcProcessCreateRequest.c)
 *     SmcProcessDeleteRequest @ 0x1409D811C (SmcProcessDeleteRequest.c)
 *     SmcProcessResizeRequest @ 0x1409D81A4 (SmcProcessResizeRequest.c)
 *     SmcProcessStatsRequest @ 0x1409D8284 (SmcProcessStatsRequest.c)
 *     SmcProcessStoreCreateRequest @ 0x1409D849C (SmcProcessStoreCreateRequest.c)
 *     SmcProcessStoreDeleteRequest @ 0x1409D8608 (SmcProcessStoreDeleteRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpGetProcessPartition(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(a1 + 2520) + 24LL);
}
