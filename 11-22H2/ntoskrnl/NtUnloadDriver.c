/*
 * XREFs of NtUnloadDriver @ 0x140951B90
 * Callers:
 *     <none>
 * Callees:
 *     IopUnloadDriver @ 0x1408585F4 (IopUnloadDriver.c)
 */

NTSTATUS __cdecl NtUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  return IopUnloadDriver(DriverServiceName, 0);
}
