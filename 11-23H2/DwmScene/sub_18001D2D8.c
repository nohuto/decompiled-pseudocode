/*
 * XREFs of sub_18001D2D8 @ 0x18001D2D8
 * Callers:
 *     sub_18002B8D4 @ 0x18002B8D4 (sub_18002B8D4.c)
 *     sub_18002C5EC @ 0x18002C5EC (sub_18002C5EC.c)
 *     sub_18003678C @ 0x18003678C (sub_18003678C.c)
 *     sub_180036AD4 @ 0x180036AD4 (sub_180036AD4.c)
 *     sub_18004EC24 @ 0x18004EC24 (sub_18004EC24.c)
 *     sub_18005FCC0 @ 0x18005FCC0 (sub_18005FCC0.c)
 *     sub_1800E5499 @ 0x1800E5499 (sub_1800E5499.c)
 *     sub_1800F2540 @ 0x1800F2540 (sub_1800F2540.c)
 * Callees:
 *     sub_18001CA2C @ 0x18001CA2C (sub_18001CA2C.c)
 */

__int64 __fastcall sub_18001D2D8(void **a1)
{
  sub_18001CA2C((__int64)a1, (__int64)a1, *((_QWORD *)*a1 + 1));
  return sub_1800100E8(*a1, 0x48uLL);
}
