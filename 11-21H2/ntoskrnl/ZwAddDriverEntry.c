/*
 * XREFs of ZwAddDriverEntry @ 0x14041C4C0
 * Callers:
 *     sub_14061C910 @ 0x14061C910 (sub_14061C910.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAddDriverEntry(PEFI_DRIVER_ENTRY DriverEntry, PULONG Id)
{
  _disable();
  __readeflags();
  return sub_140433F80(DriverEntry, Id);
}
