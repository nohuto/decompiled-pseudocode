/*
 * XREFs of ZwQueryBootEntryOrder @ 0x14041E020
 * Callers:
 *     sub_140623900 @ 0x140623900 (sub_140623900.c)
 *     sub_1409F7390 @ 0x1409F7390 (sub_1409F7390.c)
 *     sub_140A207C4 @ 0x140A207C4 (sub_140A207C4.c)
 *     sub_140A22034 @ 0x140A22034 (sub_140A22034.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryBootEntryOrder(PULONG Ids, PULONG Count)
{
  _disable();
  __readeflags();
  return sub_140433F80(Ids, Count);
}
