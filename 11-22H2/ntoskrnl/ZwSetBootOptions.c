/*
 * XREFs of ZwSetBootOptions @ 0x14041D940
 * Callers:
 *     DifZwSetBootOptionsWrapper @ 0x1405F68C0 (DifZwSetBootOptionsWrapper.c)
 *     BiSetBootOptions @ 0x140A5EDD4 (BiSetBootOptions.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetBootOptions(PBOOT_OPTIONS BootOptions, ULONG FieldsToChange)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootOptions);
}
