/*
 * XREFs of sub_1800B0E00 @ 0x1800B0E00
 * Callers:
 *     sub_1800B0F40 @ 0x1800B0F40 (sub_1800B0F40.c)
 *     sub_1800B17E0 @ 0x1800B17E0 (sub_1800B17E0.c)
 *     sub_180107805 @ 0x180107805 (sub_180107805.c)
 * Callees:
 *     sub_18000B4C0 @ 0x18000B4C0 (sub_18000B4C0.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800B0E00(_QWORD *a1)
{
  *a1 = &Spectre::Engine::RenderTargetState::`vftable';
  sub_180010910((__int64)(a1 + 53));
  sub_180010910((__int64)(a1 + 51));
  sub_180010910((__int64)(a1 + 49));
  sub_18000B4C0((__int64)(a1 + 33), 16LL, 8LL);
  sub_18000B4C0((__int64)(a1 + 17), 16LL, 8LL);
  return sub_18000B4C0((__int64)(a1 + 1), 16LL, 8LL);
}
