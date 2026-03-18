/*
 * XREFs of ZwAddDriverEntry @ 0x14041BAC0
 * Callers:
 *     DifZwAddDriverEntryWrapper @ 0x1405EC940 (DifZwAddDriverEntryWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAddDriverEntry(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
