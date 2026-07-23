/*
 * XREFs of ZwSetDriverEntryOrder @ 0x14041DA40
 * Callers:
 *     DifZwSetDriverEntryOrderWrapper @ 0x1405F69E0 (DifZwSetDriverEntryOrderWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetDriverEntryOrder(PULONG Ids, ULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
