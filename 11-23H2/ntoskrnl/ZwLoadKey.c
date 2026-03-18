/*
 * XREFs of ZwLoadKey @ 0x14041CF20
 * Callers:
 *     DifZwLoadKeyWrapper @ 0x1405F0E70 (DifZwLoadKeyWrapper.c)
 *     BiLoadHive @ 0x140807084 (BiLoadHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLoadKey(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
