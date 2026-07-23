/*
 * XREFs of ZwQueryBootOptions @ 0x14041CFC0
 * Callers:
 *     DifZwQueryBootOptionsWrapper @ 0x1405F3860 (DifZwQueryBootOptionsWrapper.c)
 *     BiQueryBootOptions @ 0x140804AD4 (BiQueryBootOptions.c)
 *     SiGetEspFromFirmware @ 0x140A5FEA4 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryBootOptions(PBOOT_OPTIONS BootOptions, PULONG BootOptionsLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootOptions);
}
