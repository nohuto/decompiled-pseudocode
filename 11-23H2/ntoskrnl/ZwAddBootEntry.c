/*
 * XREFs of ZwAddBootEntry @ 0x14041BE30
 * Callers:
 *     DifZwAddBootEntryWrapper @ 0x1405ECD90 (DifZwAddBootEntryWrapper.c)
 *     BiAddBootEntry @ 0x140A5D9FC (BiAddBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAddBootEntry(PBOOT_ENTRY BootEntry, PULONG Id)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootEntry);
}
