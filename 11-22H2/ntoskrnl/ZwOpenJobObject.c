/*
 * XREFs of ZwOpenJobObject @ 0x14041CBA0
 * Callers:
 *     DifZwOpenJobObjectWrapper @ 0x1405F1AA0 (DifZwOpenJobObjectWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenJobObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
