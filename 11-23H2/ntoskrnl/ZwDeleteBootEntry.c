/*
 * XREFs of ZwDeleteBootEntry @ 0x14041C840
 * Callers:
 *     DifZwDeleteBootEntryWrapper @ 0x1405EF440 (DifZwDeleteBootEntryWrapper.c)
 *     BiDeleteBootEntry @ 0x140A5E310 (BiDeleteBootEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwDeleteBootEntry(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
