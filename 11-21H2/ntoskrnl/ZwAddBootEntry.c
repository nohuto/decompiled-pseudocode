/*
 * XREFs of ZwAddBootEntry @ 0x14041C4A0
 * Callers:
 *     sub_14061C7E0 @ 0x14061C7E0 (sub_14061C7E0.c)
 *     sub_140A1E0A0 @ 0x140A1E0A0 (sub_140A1E0A0.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAddBootEntry(PBOOT_ENTRY BootEntry, PULONG Id)
{
  _disable();
  __readeflags();
  return sub_140433F80(BootEntry, Id);
}
