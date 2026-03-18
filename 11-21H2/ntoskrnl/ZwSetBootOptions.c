/*
 * XREFs of ZwSetBootOptions @ 0x14041E9A0
 * Callers:
 *     DifZwSetBootOptionsWrapper @ 0x140626B70 (DifZwSetBootOptionsWrapper.c)
 *     BiSetBootOptions @ 0x140A20AA4 (BiSetBootOptions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetBootOptions(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
