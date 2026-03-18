/*
 * XREFs of ZwEnumerateDriverEntries @ 0x14041CA20
 * Callers:
 *     DifZwEnumerateDriverEntriesWrapper @ 0x1405EFF30 (DifZwEnumerateDriverEntriesWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwEnumerateDriverEntries(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
