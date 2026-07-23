/*
 * XREFs of ZwEnumerateBootEntries @ 0x14041D3E0
 * Callers:
 *     sub_14061FF00 @ 0x14061FF00 (sub_14061FF00.c)
 *     sub_1409F7390 @ 0x1409F7390 (sub_1409F7390.c)
 *     sub_140A1F8F4 @ 0x140A1F8F4 (sub_140A1F8F4.c)
 *     sub_140A22034 @ 0x140A22034 (sub_140A22034.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwEnumerateBootEntries(PVOID Buffer, PULONG BufferLength)
{
  _disable();
  __readeflags();
  return sub_140433F80(Buffer, BufferLength);
}
