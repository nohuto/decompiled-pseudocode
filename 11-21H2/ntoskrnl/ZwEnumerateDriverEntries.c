/*
 * XREFs of ZwEnumerateDriverEntries @ 0x14041D400
 * Callers:
 *     sub_140620030 @ 0x140620030 (sub_140620030.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwEnumerateDriverEntries(PVOID Buffer, PULONG BufferLength)
{
  _disable();
  __readeflags();
  return sub_140433F80(Buffer, BufferLength);
}
