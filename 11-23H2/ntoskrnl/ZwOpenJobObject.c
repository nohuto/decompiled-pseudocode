/*
 * XREFs of ZwOpenJobObject @ 0x14041D260
 * Callers:
 *     DifZwOpenJobObjectWrapper @ 0x1405F1A10 (DifZwOpenJobObjectWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenJobObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
