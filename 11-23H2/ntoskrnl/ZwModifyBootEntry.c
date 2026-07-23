/*
 * XREFs of ZwModifyBootEntry @ 0x14041D490
 * Callers:
 *     DifZwModifyBootEntryWrapper @ 0x1405F16A0 (DifZwModifyBootEntryWrapper.c)
 *     BiModifyBootEntry @ 0x140A5EE7C (BiModifyBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootEntry);
}
