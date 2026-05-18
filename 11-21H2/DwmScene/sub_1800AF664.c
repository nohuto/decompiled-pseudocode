/*
 * XREFs of sub_1800AF664 @ 0x1800AF664
 * Callers:
 *     sub_1800AF6F0 @ 0x1800AF6F0 (sub_1800AF6F0.c)
 *     sub_1800B17E0 @ 0x1800B17E0 (sub_1800B17E0.c)
 *     sub_1801077D3 @ 0x1801077D3 (sub_1801077D3.c)
 * Callees:
 *     sub_18000B4C0 @ 0x18000B4C0 (sub_18000B4C0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800AF664(_QWORD *a1)
{
  *a1 = &Spectre::Engine::ConstantBufferState::`vftable';
  sub_18000B4C0((__int64)(a1 + 289), 192LL, 6LL);
  sub_18000B4C0((__int64)(a1 + 145), 192LL, 6LL);
  return sub_18000B4C0((__int64)(a1 + 1), 192LL, 6LL);
}
