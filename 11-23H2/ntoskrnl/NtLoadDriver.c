/*
 * XREFs of NtLoadDriver @ 0x1407CECE0
 * Callers:
 *     <none>
 * Callees:
 *     IopLoadDriverImage @ 0x14035B110 (IopLoadDriverImage.c)
 */

NTSTATUS __cdecl NtLoadDriver(PUNICODE_STRING DriverServiceName)
{
  return IopLoadDriverImage(DriverServiceName);
}
