/*
 * XREFs of ZwEnumerateDriverEntries @ 0x14041CDB0
 * Callers:
 *     DifZwEnumerateDriverEntriesWrapper @ 0x1405F04A0 (DifZwEnumerateDriverEntriesWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwEnumerateDriverEntries(PVOID Buffer, PULONG BufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Buffer);
}
