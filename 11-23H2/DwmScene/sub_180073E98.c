/*
 * XREFs of sub_180073E98 @ 0x180073E98
 * Callers:
 *     sub_18002B310 @ 0x18002B310 (sub_18002B310.c)
 * Callees:
 *     memset @ 0x18000C0BC (memset.c)
 *     sub_180073E30 @ 0x180073E30 (sub_180073E30.c)
 */

// Hidden C++ exception states: #wind=1
void *__fastcall sub_180073E98(void *a1)
{
  memset(a1, 0, 0xC8uLL);
  sub_180073E30((__int64)a1);
  sub_180073E30((__int64)a1 + 200);
  return a1;
}
