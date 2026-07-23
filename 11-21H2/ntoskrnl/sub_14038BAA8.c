/*
 * XREFs of sub_14038BAA8 @ 0x14038BAA8
 * Callers:
 *     sub_1407FF888 @ 0x1407FF888 (sub_1407FF888.c)
 * Callees:
 *     sub_1407FE600 @ 0x1407FE600 (sub_1407FE600.c)
 *     sub_1407FE61C @ 0x1407FE61C (sub_1407FE61C.c)
 *     sub_1407FE82C @ 0x1407FE82C (sub_1407FE82C.c)
 *     sub_140A4B974 @ 0x140A4B974 (sub_140A4B974.c)
 */

__int64 __fastcall sub_14038BAA8(__int64 a1)
{
  sub_1407FE600();
  sub_140A4B974(54LL);
  *(_DWORD *)(a1 + 16) = 13;
  sub_1407FE82C(a1, 0LL);
  sub_1407FE61C();
  return sub_140A4B974(55LL);
}
