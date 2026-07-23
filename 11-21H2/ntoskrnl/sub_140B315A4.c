/*
 * XREFs of sub_140B315A4 @ 0x140B315A4
 * Callers:
 *     sub_140A580F0 @ 0x140A580F0 (sub_140A580F0.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 * Callees:
 *     sub_140294CC0 @ 0x140294CC0 (sub_140294CC0.c)
 */

__int64 sub_140B315A4()
{
  return ((unsigned int)sub_140294CC0() >> 7) & 1;
}
