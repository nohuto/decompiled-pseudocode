/*
 * XREFs of DriverEntry @ 0x1C00B5010
 * Callers:
 *     <none>
 * Callees:
 *     StorPortGetSrb @ 0x1C00415C0 (StorPortGetSrb.c)
 *     sub_1C00B5044 @ 0x1C00B5044 (sub_1C00B5044.c)
 */

NTSTATUS __stdcall DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  sub_1C00B5044();
  return StorPortGetSrb();
}
