/*
 * XREFs of ZwOpenThread @ 0x14041DE00
 * Callers:
 *     DifZwOpenThreadWrapper @ 0x140622C50 (DifZwOpenThreadWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenThread(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
