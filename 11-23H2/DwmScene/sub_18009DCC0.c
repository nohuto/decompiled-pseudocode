/*
 * XREFs of sub_18009DCC0 @ 0x18009DCC0
 * Callers:
 *     sub_18009DDB0 @ 0x18009DDB0 (sub_18009DDB0.c)
 *     sub_18009F818 @ 0x18009F818 (sub_18009F818.c)
 *     sub_1800EB1BE @ 0x1800EB1BE (sub_1800EB1BE.c)
 * Callees:
 *     sub_18000B4B0 @ 0x18000B4B0 (sub_18000B4B0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18009DCC0(_QWORD *a1)
{
  *a1 = &Spectre::Engine::ConstantBufferState::`vftable';
  sub_18000B4B0((__int64)(a1 + 289), 192LL, 6LL);
  sub_18000B4B0((__int64)(a1 + 145), 192LL, 6LL);
  return sub_18000B4B0((__int64)(a1 + 1), 192LL, 6LL);
}
