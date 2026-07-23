/*
 * XREFs of ZwAddDriverEntry @ 0x14041BE50
 * Callers:
 *     DifZwAddDriverEntryWrapper @ 0x1405ECEB0 (DifZwAddDriverEntryWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAddDriverEntry(PEFI_DRIVER_ENTRY DriverEntry, PULONG Id)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverEntry);
}
