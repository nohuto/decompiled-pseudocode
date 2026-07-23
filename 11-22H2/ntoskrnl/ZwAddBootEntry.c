/*
 * XREFs of ZwAddBootEntry @ 0x14041B3E0
 * Callers:
 *     DifZwAddBootEntryWrapper @ 0x1405EC8B0 (DifZwAddBootEntryWrapper.c)
 *     BiAddBootEntry @ 0x140A5D7BC (BiAddBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAddBootEntry(PBOOT_ENTRY BootEntry, PULONG Id)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootEntry);
}
