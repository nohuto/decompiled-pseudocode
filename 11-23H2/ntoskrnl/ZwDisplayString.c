/*
 * XREFs of ZwDisplayString @ 0x14041CD30
 * Callers:
 *     DifZwDisplayStringWrapper @ 0x1405EFFA0 (DifZwDisplayStringWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDisplayString(PUNICODE_STRING String)
{
  _disable();
  __readeflags();
  return KiServiceInternal(String);
}
