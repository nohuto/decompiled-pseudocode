/*
 * XREFs of ZwModifyDriverEntry @ 0x14041D4B0
 * Callers:
 *     DifZwModifyDriverEntryWrapper @ 0x1405F17B0 (DifZwModifyDriverEntryWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwModifyDriverEntry(PEFI_DRIVER_ENTRY DriverEntry)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverEntry);
}
