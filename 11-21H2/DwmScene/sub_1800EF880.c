/*
 * XREFs of sub_1800EF880 @ 0x1800EF880
 * Callers:
 *     sub_1800D86A0 @ 0x1800D86A0 (sub_1800D86A0.c)
 * Callees:
 *     sub_18002B240 @ 0x18002B240 (sub_18002B240.c)
 */

__int64 __fastcall sub_1800EF880(__int64 a1)
{
  __int64 result; // rax

  sub_18002B240((_QWORD *)a1);
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::ConstantBufferD3D11::`vftable';
  result = a1;
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  return result;
}
