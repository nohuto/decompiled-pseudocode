/*
 * XREFs of ZwEnumerateBootEntries @ 0x14041C340
 * Callers:
 *     DifZwEnumerateBootEntriesWrapper @ 0x1405EFEA0 (DifZwEnumerateBootEntriesWrapper.c)
 *     BiEnumerateBootEntries @ 0x140809560 (BiEnumerateBootEntries.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1409F7288 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     SiGetEspFromFirmware @ 0x140A5FEA4 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwEnumerateBootEntries(PVOID Buffer, PULONG BufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Buffer);
}
