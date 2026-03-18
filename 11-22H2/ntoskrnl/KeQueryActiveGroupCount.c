/*
 * XREFs of KeQueryActiveGroupCount @ 0x140361E20
 * Callers:
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 *     PspAllocateProcess @ 0x1406B442C (PspAllocateProcess.c)
 *     ExpQuerySystemInformation @ 0x1407268C0 (ExpQuerySystemInformation.c)
 *     PsCreateSystemThreadEx @ 0x140772B10 (PsCreateSystemThreadEx.c)
 *     NtPowerInformation @ 0x140784430 (NtPowerInformation.c)
 *     EtwpProcessorRundown @ 0x1409EF810 (EtwpProcessorRundown.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryActiveGroupCount(void)
{
  return KiActiveGroups;
}
