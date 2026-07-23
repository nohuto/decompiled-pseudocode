/*
 * XREFs of ZwQueryBootEntryOrder @ 0x14041CFA0
 * Callers:
 *     DifZwQueryBootEntryOrderWrapper @ 0x1405F3740 (DifZwQueryBootEntryOrderWrapper.c)
 *     BiQueryBootEntryOrder @ 0x1408094AC (BiQueryBootEntryOrder.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1409F7288 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     SiGetEspFromFirmware @ 0x140A5FEA4 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryBootEntryOrder(PULONG Ids, PULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
