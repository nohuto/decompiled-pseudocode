/*
 * XREFs of sub_18009E068 @ 0x18009E068
 * Callers:
 *     sub_18009E150 @ 0x18009E150 (sub_18009E150.c)
 *     sub_18009F818 @ 0x18009F818 (sub_18009F818.c)
 *     sub_1800EB1D7 @ 0x1800EB1D7 (sub_1800EB1D7.c)
 * Callees:
 *     sub_18000B4B0 @ 0x18000B4B0 (sub_18000B4B0.c)
 */

__int64 __fastcall sub_18009E068(_QWORD *a1)
{
  *a1 = &Spectre::Engine::TextureState::`vftable';
  sub_18000B4B0((__int64)(a1 + 385), 256LL, 6LL);
  sub_18000B4B0((__int64)(a1 + 193), 256LL, 6LL);
  return sub_18000B4B0((__int64)(a1 + 1), 256LL, 6LL);
}
