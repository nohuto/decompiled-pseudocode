/*
 * XREFs of ZwQueryBootOptions @ 0x14041DA10
 * Callers:
 *     DifZwQueryBootOptionsWrapper @ 0x1405F3D40 (DifZwQueryBootOptionsWrapper.c)
 *     BiQueryBootOptions @ 0x140802820 (BiQueryBootOptions.c)
 *     SiGetEspFromFirmware @ 0x140A600E4 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryBootOptions(PBOOT_OPTIONS BootOptions, PULONG BootOptionsLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootOptions);
}
