/*
 * XREFs of ZwModifyDriverEntry @ 0x14041CA60
 * Callers:
 *     DifZwModifyDriverEntryWrapper @ 0x1405F12D0 (DifZwModifyDriverEntryWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwModifyDriverEntry(PEFI_DRIVER_ENTRY DriverEntry)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverEntry);
}
