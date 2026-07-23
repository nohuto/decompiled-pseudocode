/*
 * XREFs of ZwQueryDriverEntryOrder @ 0x14041DA90
 * Callers:
 *     DifZwQueryDriverEntryOrderWrapper @ 0x1405F4560 (DifZwQueryDriverEntryOrderWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryDriverEntryOrder(PULONG Ids, PULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
