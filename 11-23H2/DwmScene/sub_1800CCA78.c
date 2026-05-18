/*
 * XREFs of sub_1800CCA78 @ 0x1800CCA78
 * Callers:
 *     sub_1800CCEC0 @ 0x1800CCEC0 (sub_1800CCEC0.c)
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 */

__int64 __fastcall sub_1800CCA78(__int64 *a1)
{
  __int64 *v2; // rbx

  v2 = a1 + 21;
  *a1 = (__int64)&Spectre::Engine::D3D11::TextureD3D11::`vftable';
  sub_18000E72C(a1 + 21);
  sub_18000E72C(a1 + 23);
  sub_18000E72C(a1 + 22);
  sub_18000E72C(v2);
  sub_18000E72C(a1 + 20);
  return sub_180055798(a1);
}
