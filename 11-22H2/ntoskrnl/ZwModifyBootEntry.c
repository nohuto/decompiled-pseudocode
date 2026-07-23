/*
 * XREFs of ZwModifyBootEntry @ 0x14041CA40
 * Callers:
 *     DifZwModifyBootEntryWrapper @ 0x1405F11C0 (DifZwModifyBootEntryWrapper.c)
 *     BiModifyBootEntry @ 0x140A5EC3C (BiModifyBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootEntry);
}
