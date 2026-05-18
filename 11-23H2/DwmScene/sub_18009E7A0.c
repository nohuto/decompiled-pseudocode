/*
 * XREFs of sub_18009E7A0 @ 0x18009E7A0
 * Callers:
 *     sub_18009E880 @ 0x18009E880 (sub_18009E880.c)
 *     sub_18009F818 @ 0x18009F818 (sub_18009F818.c)
 *     sub_1800EB1A8 @ 0x1800EB1A8 (sub_1800EB1A8.c)
 * Callees:
 *     sub_18000B4B0 @ 0x18000B4B0 (sub_18000B4B0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18009E7A0(_QWORD *a1)
{
  *a1 = &Spectre::Engine::VertexBufferState::`vftable';
  sub_18000B4B0((__int64)(a1 + 61), 16LL, 15LL);
  sub_18000B4B0((__int64)(a1 + 31), 16LL, 15LL);
  return sub_18000B4B0((__int64)(a1 + 1), 16LL, 15LL);
}
