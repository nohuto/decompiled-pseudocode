/*
 * XREFs of ZwQueryDriverEntryOrder @ 0x14041D040
 * Callers:
 *     DifZwQueryDriverEntryOrderWrapper @ 0x1405F4080 (DifZwQueryDriverEntryOrderWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryDriverEntryOrder(PULONG Ids, PULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
