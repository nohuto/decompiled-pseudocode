/*
 * XREFs of ZwFlushInstructionCache @ 0x14041D520
 * Callers:
 *     DifZwFlushInstructionCacheWrapper @ 0x1406206D0 (DifZwFlushInstructionCacheWrapper.c)
 *     sub_1407E2434 @ 0x1407E2434 (sub_1407E2434.c)
 *     sub_140A0F4D4 @ 0x140A0F4D4 (sub_140A0F4D4.c)
 *     sub_140A0F68C @ 0x140A0F68C (sub_140A0F68C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwFlushInstructionCache(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
