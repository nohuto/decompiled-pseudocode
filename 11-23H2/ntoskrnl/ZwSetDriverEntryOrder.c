/*
 * XREFs of ZwSetDriverEntryOrder @ 0x14041E490
 * Callers:
 *     DifZwSetDriverEntryOrderWrapper @ 0x1405F6EC0 (DifZwSetDriverEntryOrderWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetDriverEntryOrder(PULONG Ids, ULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
