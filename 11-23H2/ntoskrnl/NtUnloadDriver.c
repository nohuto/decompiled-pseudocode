/*
 * XREFs of NtUnloadDriver @ 0x140951CE0
 * Callers:
 *     <none>
 * Callees:
 *     IopUnloadDriver @ 0x140857B78 (IopUnloadDriver.c)
 */

NTSTATUS __cdecl NtUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  return IopUnloadDriver(DriverServiceName, 0);
}
