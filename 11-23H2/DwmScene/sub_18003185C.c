/*
 * XREFs of sub_18003185C @ 0x18003185C
 * Callers:
 *     sub_180031B3C @ 0x180031B3C (sub_180031B3C.c)
 *     sub_180031D44 @ 0x180031D44 (sub_180031D44.c)
 * Callees:
 *     sub_18002E984 @ 0x18002E984 (sub_18002E984.c)
 */

__int64 __fastcall sub_18003185C(void **a1)
{
  sub_18002E984((__int64)a1, (__int64)a1, *((__int64 **)*a1 + 1));
  return sub_1800100E8(*a1, 0x40uLL);
}
