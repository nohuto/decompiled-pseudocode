/*
 * XREFs of sub_18003188C @ 0x18003188C
 * Callers:
 *     sub_180031B48 @ 0x180031B48 (sub_180031B48.c)
 *     sub_180031D44 @ 0x180031D44 (sub_180031D44.c)
 * Callees:
 *     sub_18002E9DC @ 0x18002E9DC (sub_18002E9DC.c)
 */

__int64 __fastcall sub_18003188C(void **a1)
{
  sub_18002E9DC((__int64)a1, (__int64)a1, *((__int64 **)*a1 + 1));
  return sub_1800100E8(*a1, 0x48uLL);
}
