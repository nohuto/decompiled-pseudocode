/*
 * XREFs of sub_18002B3C0 @ 0x18002B3C0
 * Callers:
 *     sub_18002B7C0 @ 0x18002B7C0 (sub_18002B7C0.c)
 *     sub_1800A29C8 @ 0x1800A29C8 (sub_1800A29C8.c)
 *     sub_1800A305C @ 0x1800A305C (sub_1800A305C.c)
 * Callees:
 *     sub_18002A8E4 @ 0x18002A8E4 (sub_18002A8E4.c)
 */

__int64 *__fastcall sub_18002B3C0(__int64 *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  *a1 = sub_18002A8E4();
  return a1;
}
