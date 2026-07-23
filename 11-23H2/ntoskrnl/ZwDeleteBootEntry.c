/*
 * XREFs of ZwDeleteBootEntry @ 0x14041CBD0
 * Callers:
 *     DifZwDeleteBootEntryWrapper @ 0x1405EF9B0 (DifZwDeleteBootEntryWrapper.c)
 *     BiDeleteBootEntry @ 0x140A5E5C0 (BiDeleteBootEntry.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwDeleteBootEntry(ULONG Id)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&Id);
}
