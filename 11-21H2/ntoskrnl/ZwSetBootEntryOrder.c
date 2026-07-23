/*
 * XREFs of ZwSetBootEntryOrder @ 0x14041E980
 * Callers:
 *     sub_140626A40 @ 0x140626A40 (sub_140626A40.c)
 *     sub_140A20A2C @ 0x140A20A2C (sub_140A20A2C.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwSetBootEntryOrder(PULONG Ids, ULONG Count)
{
  _disable();
  __readeflags();
  return sub_140433F80(Ids, *(_QWORD *)&Count);
}
