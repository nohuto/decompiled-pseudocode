/*
 * XREFs of sub_18003182C @ 0x18003182C
 * Callers:
 *     sub_180031B30 @ 0x180031B30 (sub_180031B30.c)
 *     sub_18003678C @ 0x18003678C (sub_18003678C.c)
 *     sub_180036AD4 @ 0x180036AD4 (sub_180036AD4.c)
 *     sub_18003B3E4 @ 0x18003B3E4 (sub_18003B3E4.c)
 *     sub_1800E54AB @ 0x1800E54AB (sub_1800E54AB.c)
 * Callees:
 *     sub_18002E92C @ 0x18002E92C (sub_18002E92C.c)
 */

__int64 __fastcall sub_18003182C(void **a1)
{
  sub_18002E92C((__int64)a1, (__int64)a1, *((__int64 **)*a1 + 1));
  return sub_1800100E8(*a1, 0x60uLL);
}
