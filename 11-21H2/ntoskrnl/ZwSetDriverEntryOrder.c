/*
 * XREFs of ZwSetDriverEntryOrder @ 0x14041EAA0
 * Callers:
 *     sub_140626CA0 @ 0x140626CA0 (sub_140626CA0.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwSetDriverEntryOrder(PULONG Ids, ULONG Count)
{
  _disable();
  __readeflags();
  return sub_140433F80(Ids, *(_QWORD *)&Count);
}
