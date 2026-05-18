/*
 * XREFs of sub_1800D4CA8 @ 0x1800D4CA8
 * Callers:
 *     sub_1800D4CF0 @ 0x1800D4CF0 (sub_1800D4CF0.c)
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 */

__int64 __fastcall sub_1800D4CA8(__int64 *a1)
{
  *a1 = (__int64)&Spectre::Engine::D3D11::RenderStateD3D11::`vftable';
  sub_18000E72C(a1 + 16);
  sub_18000E72C(a1 + 15);
  sub_18000E72C(a1 + 14);
  return sub_18008B880(a1);
}
