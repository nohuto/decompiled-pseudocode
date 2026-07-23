/*
 * XREFs of ZwModifyDriverEntry @ 0x14041DB00
 * Callers:
 *     sub_1406213B0 @ 0x1406213B0 (sub_1406213B0.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwModifyDriverEntry(PEFI_DRIVER_ENTRY DriverEntry)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return sub_140433F80(DriverEntry, v1);
}
