/*
 * XREFs of ZwQueryDriverEntryOrder @ 0x14041E0C0
 * Callers:
 *     sub_140624280 @ 0x140624280 (sub_140624280.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryDriverEntryOrder(PULONG Ids, PULONG Count)
{
  _disable();
  __readeflags();
  return sub_140433F80(Ids, Count);
}
