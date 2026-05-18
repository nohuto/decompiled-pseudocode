/*
 * XREFs of sub_1800E34B8 @ 0x1800E34B8
 * Callers:
 *     sub_1800D89A0 @ 0x1800D89A0 (sub_1800D89A0.c)
 * Callees:
 *     sub_18005C83C @ 0x18005C83C (sub_18005C83C.c)
 */

__int64 __fastcall sub_1800E34B8(__int64 a1)
{
  sub_18005C83C(a1);
  *(_BYTE *)(a1 + 192) = 1;
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::TextureD3D11::`vftable';
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_BYTE *)(a1 + 208) = 0;
  return a1;
}
