/*
 * XREFs of ZwEnumerateBootEntries @ 0x14041CD90
 * Callers:
 *     DifZwEnumerateBootEntriesWrapper @ 0x1405F0380 (DifZwEnumerateBootEntriesWrapper.c)
 *     BiEnumerateBootEntries @ 0x1408072B0 (BiEnumerateBootEntries.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1409F7468 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     SiGetEspFromFirmware @ 0x140A600E4 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwEnumerateBootEntries(PVOID Buffer, PULONG BufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Buffer);
}
