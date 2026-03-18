/*
 * XREFs of ZwAddBootEntry @ 0x14041B3E0
 * Callers:
 *     DifZwAddBootEntryWrapper @ 0x1405EC8B0 (DifZwAddBootEntryWrapper.c)
 *     BiAddBootEntry @ 0x140A5D7BC (BiAddBootEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAddBootEntry(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
