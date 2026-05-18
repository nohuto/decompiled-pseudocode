/*
 * XREFs of sub_1800C9020 @ 0x1800C9020
 * Callers:
 *     sub_180010F94 @ 0x180010F94 (sub_180010F94.c)
 *     sub_1800C9078 @ 0x1800C9078 (sub_1800C9078.c)
 *     sub_1800C90C4 @ 0x1800C90C4 (sub_1800C90C4.c)
 *     sub_1800C90E0 @ 0x1800C90E0 (sub_1800C90E0.c)
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_18003191C @ 0x18003191C (sub_18003191C.c)
 *     sub_1800C8FE4 @ 0x1800C8FE4 (sub_1800C8FE4.c)
 */

__int64 __fastcall sub_1800C9020(__int64 a1)
{
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::RenderOutputD3D11::`vftable';
  sub_18003191C((void **)(a1 + 1680));
  sub_18003191C((void **)(a1 + 1664));
  sub_1800C8FE4((void **)(a1 + 1648));
  sub_18000E72C((__int64 *)(a1 + 504));
  return sub_18002B9A8(a1);
}
