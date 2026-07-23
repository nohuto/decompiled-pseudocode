/*
 * XREFs of NtLoadDriver @ 0x1407CEFA0
 * Callers:
 *     <none>
 * Callees:
 *     IopLoadDriverImage @ 0x14035A970 (IopLoadDriverImage.c)
 */

NTSTATUS __cdecl NtLoadDriver(PUNICODE_STRING DriverServiceName)
{
  return IopLoadDriverImage(DriverServiceName);
}
