/*
 * XREFs of ZwModifyBootEntry @ 0x14041DAE0
 * Callers:
 *     sub_1406212A0 @ 0x1406212A0 (sub_1406212A0.c)
 *     sub_140A20758 @ 0x140A20758 (sub_140A20758.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return sub_140433F80(BootEntry, v1);
}
