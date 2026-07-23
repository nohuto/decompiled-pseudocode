/*
 * XREFs of sub_140B50F00 @ 0x140B50F00
 * Callers:
 *     sub_140AD6354 @ 0x140AD6354 (sub_140AD6354.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 *     sub_140B12930 @ 0x140B12930 (sub_140B12930.c)
 * Callees:
 *     sub_140294CC0 @ 0x140294CC0 (sub_140294CC0.c)
 */

_BOOL8 sub_140B50F00()
{
  return (sub_140294CC0() & 0x500) != 0;
}
