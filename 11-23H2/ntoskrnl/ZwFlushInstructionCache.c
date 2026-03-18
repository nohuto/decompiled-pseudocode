/*
 * XREFs of ZwFlushInstructionCache @ 0x14041CB40
 * Callers:
 *     DifZwFlushInstructionCacheWrapper @ 0x1405F0590 (DifZwFlushInstructionCacheWrapper.c)
 *     sub_140762140 @ 0x140762140 (sub_140762140.c)
 *     sub_140764690 @ 0x140764690 (sub_140764690.c)
 *     sub_140A4DDC4 @ 0x140A4DDC4 (sub_140A4DDC4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwFlushInstructionCache(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
