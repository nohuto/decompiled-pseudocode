/*
 * XREFs of sub_1800AFF7C @ 0x1800AFF7C
 * Callers:
 *     sub_1800B0010 @ 0x1800B0010 (sub_1800B0010.c)
 *     sub_1800B17E0 @ 0x1800B17E0 (sub_1800B17E0.c)
 * Callees:
 *     sub_18000B4C0 @ 0x18000B4C0 (sub_18000B4C0.c)
 */

__int64 __fastcall sub_1800AFF7C(_QWORD *a1)
{
  *a1 = &Spectre::Engine::SamplerState::`vftable';
  sub_18000B4C0((__int64)(a1 + 385), 256LL, 6LL);
  sub_18000B4C0((__int64)(a1 + 193), 256LL, 6LL);
  return sub_18000B4C0((__int64)(a1 + 1), 256LL, 6LL);
}
