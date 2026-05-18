/*
 * XREFs of sub_18003191C @ 0x18003191C
 * Callers:
 *     sub_180031B60 @ 0x180031B60 (sub_180031B60.c)
 *     sub_180031F9C @ 0x180031F9C (sub_180031F9C.c)
 *     sub_180070144 @ 0x180070144 (sub_180070144.c)
 *     sub_1800C9020 @ 0x1800C9020 (sub_1800C9020.c)
 * Callees:
 *     sub_18002EB00 @ 0x18002EB00 (sub_18002EB00.c)
 */

__int64 __fastcall sub_18003191C(void **a1)
{
  sub_18002EB00((__int64)a1, (__int64)a1, *((_QWORD *)*a1 + 1));
  return sub_1800100E8(*a1, 0x30uLL);
}
