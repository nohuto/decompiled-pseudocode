/*
 * XREFs of ZwSetBootOptions @ 0x14041E390
 * Callers:
 *     DifZwSetBootOptionsWrapper @ 0x1405F6DA0 (DifZwSetBootOptionsWrapper.c)
 *     BiSetBootOptions @ 0x140A5F014 (BiSetBootOptions.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetBootOptions(PBOOT_OPTIONS BootOptions, ULONG FieldsToChange)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootOptions);
}
