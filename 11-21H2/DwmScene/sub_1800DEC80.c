/*
 * XREFs of sub_1800DEC80 @ 0x1800DEC80
 * Callers:
 *     sub_1800D8738 @ 0x1800D8738 (sub_1800D8738.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800DEA94 @ 0x1800DEA94 (sub_1800DEA94.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_1800DEC80(_QWORD *a1, _OWORD *a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD v8[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v9[2]; // [rsp+30h] [rbp-30h] BYREF
  _OWORD v10[2]; // [rsp+40h] [rbp-20h] BYREF

  v8[0] = *a4;
  v8[1] = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  v9[0] = *a3;
  v9[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v10[0] = *a2;
  v10[1] = a2[1];
  sub_1800DEA94((__int64)a1, v10, v9, v8);
  *a1 = &Spectre::Engine::D3D11::RenderOutputD3D11CoreWindow::`vftable';
  sub_180010910((__int64)a3);
  sub_180010910((__int64)a4);
  return a1;
}
