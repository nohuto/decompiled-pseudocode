/*
 * XREFs of KeQueryActiveGroupCount @ 0x140362470
 * Callers:
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 *     PspAllocateProcess @ 0x1406B442C (PspAllocateProcess.c)
 *     ExpQuerySystemInformation @ 0x140726850 (ExpQuerySystemInformation.c)
 *     PsCreateSystemThreadEx @ 0x140772600 (PsCreateSystemThreadEx.c)
 *     NtPowerInformation @ 0x140783F20 (NtPowerInformation.c)
 *     EtwpProcessorRundown @ 0x1409EF760 (EtwpProcessorRundown.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryActiveGroupCount(void)
{
  return KiActiveGroups;
}
