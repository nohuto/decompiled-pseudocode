/*
 * XREFs of sub_18007C028 @ 0x18007C028
 * Callers:
 *     sub_1800F85B0 @ 0x1800F85B0 (sub_1800F85B0.c)
 * Callees:
 *     sub_18007BDC8 @ 0x18007BDC8 (sub_18007BDC8.c)
 */

__int64 __fastcall sub_18007C028(void **a1)
{
  sub_18007BDC8((__int64)a1, (__int64)a1, *((__int64 **)*a1 + 1));
  return sub_1800100E8(*a1, 0x38uLL);
}
