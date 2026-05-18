/*
 * XREFs of sub_18004E6AC @ 0x18004E6AC
 * Callers:
 *     sub_18004E718 @ 0x18004E718 (sub_18004E718.c)
 *     sub_180063D24 @ 0x180063D24 (sub_180063D24.c)
 * Callees:
 *     sub_18004D50C @ 0x18004D50C (sub_18004D50C.c)
 */

__int64 *__fastcall sub_18004E6AC(__int64 *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  *a1 = sub_18004D50C();
  return a1;
}
