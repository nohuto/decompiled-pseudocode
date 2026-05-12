/*
 * XREFs of GsDriverEntry @ 0x1C0097010
 * Callers:
 *     <none>
 * Callees:
 *     DriverEntry @ 0x1C003E760 (DriverEntry.c)
 *     __security_init_cookie @ 0x1C0097044 (__security_init_cookie.c)
 */

NTSTATUS __stdcall GsDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  _security_init_cookie();
  return DriverEntry(DriverObject, RegistryPath);
}
