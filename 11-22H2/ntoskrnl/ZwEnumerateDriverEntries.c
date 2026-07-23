/*
 * XREFs of ZwEnumerateDriverEntries @ 0x14041C360
 * Callers:
 *     DifZwEnumerateDriverEntriesWrapper @ 0x1405EFFC0 (DifZwEnumerateDriverEntriesWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwEnumerateDriverEntries(PVOID Buffer, PULONG BufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Buffer);
}
