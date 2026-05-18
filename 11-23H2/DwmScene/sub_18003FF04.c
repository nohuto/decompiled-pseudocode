/*
 * XREFs of sub_18003FF04 @ 0x18003FF04
 * Callers:
 *     sub_18003FFCC @ 0x18003FFCC (sub_18003FFCC.c)
 *     sub_18004003C @ 0x18004003C (sub_18004003C.c)
 * Callees:
 *     sub_18003F37C @ 0x18003F37C (sub_18003F37C.c)
 */

__int64 __fastcall sub_18003FF04(void **a1)
{
  sub_18003F37C((__int64)a1, (__int64)a1, *((__int64 **)*a1 + 1));
  return sub_1800100E8(*a1, 0x50uLL);
}
