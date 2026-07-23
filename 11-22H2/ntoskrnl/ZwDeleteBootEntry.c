/*
 * XREFs of ZwDeleteBootEntry @ 0x14041C180
 * Callers:
 *     DifZwDeleteBootEntryWrapper @ 0x1405EF4D0 (DifZwDeleteBootEntryWrapper.c)
 *     BiDeleteBootEntry @ 0x140A5E380 (BiDeleteBootEntry.c)
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
