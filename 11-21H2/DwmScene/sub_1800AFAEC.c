/*
 * XREFs of sub_1800AFAEC @ 0x1800AFAEC
 * Callers:
 *     sub_1800AFB80 @ 0x1800AFB80 (sub_1800AFB80.c)
 *     sub_1800B17E0 @ 0x1800B17E0 (sub_1800B17E0.c)
 *     sub_1801077EC @ 0x1801077EC (sub_1801077EC.c)
 * Callees:
 *     sub_18000B4C0 @ 0x18000B4C0 (sub_18000B4C0.c)
 */

__int64 __fastcall sub_1800AFAEC(_QWORD *a1)
{
  *a1 = &Spectre::Engine::TextureState::`vftable';
  sub_18000B4C0((__int64)(a1 + 385), 256LL, 6LL);
  sub_18000B4C0((__int64)(a1 + 193), 256LL, 6LL);
  return sub_18000B4C0((__int64)(a1 + 1), 256LL, 6LL);
}
