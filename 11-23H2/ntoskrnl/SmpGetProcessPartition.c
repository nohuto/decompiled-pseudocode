/*
 * XREFs of SmpGetProcessPartition @ 0x140344D10
 * Callers:
 *     SmProcessCreateNotification @ 0x1406B654C (SmProcessCreateNotification.c)
 *     PspProcessDelete @ 0x1407612A0 (PspProcessDelete.c)
 *     SmStoreSetProcessVaRanges @ 0x1407B750C (SmStoreSetProcessVaRanges.c)
 *     SmSetStoreInformation @ 0x1407E8044 (SmSetStoreInformation.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1407E80F4 (SmProcessStoreMemoryPriorityRequest.c)
 *     SmcProcessListRequest @ 0x140841444 (SmcProcessListRequest.c)
 *     SmProcessRegistrationRequest @ 0x1408415C0 (SmProcessRegistrationRequest.c)
 *     SmProcessCompressionInfoRequest @ 0x1408417C4 (SmProcessCompressionInfoRequest.c)
 *     SmProcessConfigRequest @ 0x14085BD4C (SmProcessConfigRequest.c)
 *     SmProcessDeleteRequest @ 0x1409D6F2C (SmProcessDeleteRequest.c)
 *     SmProcessListRequest @ 0x1409D6FAC (SmProcessListRequest.c)
 *     SmProcessResizeRequest @ 0x1409D7460 (SmProcessResizeRequest.c)
 *     SmProcessStatsRequest @ 0x1409D7578 (SmProcessStatsRequest.c)
 *     SmProcessSystemStoreTrimRequest @ 0x1409D788C (SmProcessSystemStoreTrimRequest.c)
 *     SmStoreCompressionStart @ 0x1409D7A28 (SmStoreCompressionStart.c)
 *     SmStoreCompressionStop @ 0x1409D7AC8 (SmStoreCompressionStop.c)
 *     SmcProcessCreateRequest @ 0x1409D809C (SmcProcessCreateRequest.c)
 *     SmcProcessDeleteRequest @ 0x1409D831C (SmcProcessDeleteRequest.c)
 *     SmcProcessResizeRequest @ 0x1409D83A4 (SmcProcessResizeRequest.c)
 *     SmcProcessStatsRequest @ 0x1409D8484 (SmcProcessStatsRequest.c)
 *     SmcProcessStoreCreateRequest @ 0x1409D869C (SmcProcessStoreCreateRequest.c)
 *     SmcProcessStoreDeleteRequest @ 0x1409D8808 (SmcProcessStoreDeleteRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpGetProcessPartition(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(a1 + 2520) + 24LL);
}
