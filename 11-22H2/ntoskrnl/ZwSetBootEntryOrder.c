/*
 * XREFs of ZwSetBootEntryOrder @ 0x14041D920
 * Callers:
 *     DifZwSetBootEntryOrderWrapper @ 0x1405F67A0 (DifZwSetBootEntryOrderWrapper.c)
 *     BiSetBootEntryOrder @ 0x140A5ED5C (BiSetBootEntryOrder.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetBootEntryOrder(PULONG Ids, ULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
