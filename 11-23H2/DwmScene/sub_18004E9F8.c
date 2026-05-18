/*
 * XREFs of sub_18004E9F8 @ 0x18004E9F8
 * Callers:
 *     sub_18004EB3C @ 0x18004EB3C (sub_18004EB3C.c)
 *     sub_18004EC24 @ 0x18004EC24 (sub_18004EC24.c)
 * Callees:
 *     sub_18004D9DC @ 0x18004D9DC (sub_18004D9DC.c)
 */

__int64 __fastcall sub_18004E9F8(void **a1)
{
  sub_18004D9DC((__int64)a1, (__int64)a1, *((__int64 **)*a1 + 1));
  return sub_1800100E8(*a1, 0x50uLL);
}
