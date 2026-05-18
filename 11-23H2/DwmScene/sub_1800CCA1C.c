/*
 * XREFs of sub_1800CCA1C @ 0x1800CCA1C
 * Callers:
 *     sub_1800C7D10 @ 0x1800C7D10 (sub_1800C7D10.c)
 * Callees:
 *     sub_18005526C @ 0x18005526C (sub_18005526C.c)
 */

__int64 __fastcall sub_1800CCA1C(__int64 a1)
{
  __int64 result; // rax

  sub_18005526C(a1);
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::TextureD3D11::`vftable';
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_BYTE *)(a1 + 208) = 0;
  result = a1;
  *(_BYTE *)(a1 + 192) = 1;
  return result;
}
