/*
 * XREFs of sub_18009E414 @ 0x18009E414
 * Callers:
 *     sub_18009E4A0 @ 0x18009E4A0 (sub_18009E4A0.c)
 *     sub_18009F818 @ 0x18009F818 (sub_18009F818.c)
 * Callees:
 *     sub_18000B4B0 @ 0x18000B4B0 (sub_18000B4B0.c)
 */

__int64 __fastcall sub_18009E414(_QWORD *a1)
{
  *a1 = &Spectre::Engine::SamplerState::`vftable';
  sub_18000B4B0((__int64)(a1 + 385), 256LL, 6LL);
  sub_18000B4B0((__int64)(a1 + 193), 256LL, 6LL);
  return sub_18000B4B0((__int64)(a1 + 1), 256LL, 6LL);
}
