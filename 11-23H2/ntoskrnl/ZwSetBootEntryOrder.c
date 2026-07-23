/*
 * XREFs of ZwSetBootEntryOrder @ 0x14041E370
 * Callers:
 *     DifZwSetBootEntryOrderWrapper @ 0x1405F6C80 (DifZwSetBootEntryOrderWrapper.c)
 *     BiSetBootEntryOrder @ 0x140A5EF9C (BiSetBootEntryOrder.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetBootEntryOrder(PULONG Ids, ULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
