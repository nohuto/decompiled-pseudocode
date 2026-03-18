/*
 * XREFs of ZwWaitForMultipleObjects @ 0x14041B200
 * Callers:
 *     DifZwWaitForMultipleObjectsWrapper @ 0x1405F8270 (DifZwWaitForMultipleObjectsWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwWaitForMultipleObjects(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
