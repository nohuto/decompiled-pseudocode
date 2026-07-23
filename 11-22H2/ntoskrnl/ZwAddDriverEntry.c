/*
 * XREFs of ZwAddDriverEntry @ 0x14041B400
 * Callers:
 *     DifZwAddDriverEntryWrapper @ 0x1405EC9D0 (DifZwAddDriverEntryWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAddDriverEntry(PEFI_DRIVER_ENTRY DriverEntry, PULONG Id)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverEntry);
}
