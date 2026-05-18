/*
 * XREFs of sub_1800743F0 @ 0x1800743F0
 * Callers:
 *     sub_180031048 @ 0x180031048 (sub_180031048.c)
 * Callees:
 *     memset @ 0x18000C0BC (memset.c)
 *     sub_1800315AC @ 0x1800315AC (sub_1800315AC.c)
 */

_DWORD *__fastcall sub_1800743F0(_DWORD *a1)
{
  *a1 = 0;
  memset(a1 + 2, 0, 0x58uLL);
  sub_1800315AC((__int64)(a1 + 2));
  return a1;
}
