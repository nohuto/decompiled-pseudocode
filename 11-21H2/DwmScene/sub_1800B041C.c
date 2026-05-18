/*
 * XREFs of sub_1800B041C @ 0x1800B041C
 * Callers:
 *     sub_1800B04B0 @ 0x1800B04B0 (sub_1800B04B0.c)
 *     sub_1800B17E0 @ 0x1800B17E0 (sub_1800B17E0.c)
 *     sub_1801077BD @ 0x1801077BD (sub_1801077BD.c)
 * Callees:
 *     sub_18000B4C0 @ 0x18000B4C0 (sub_18000B4C0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800B041C(_QWORD *a1)
{
  *a1 = &Spectre::Engine::VertexBufferState::`vftable';
  sub_18000B4C0((__int64)(a1 + 61), 16LL, 15LL);
  sub_18000B4C0((__int64)(a1 + 31), 16LL, 15LL);
  return sub_18000B4C0((__int64)(a1 + 1), 16LL, 15LL);
}
