/*
 * XREFs of sub_1800F05C0 @ 0x1800F05C0
 * Callers:
 *     sub_1800D86DC @ 0x1800D86DC (sub_1800D86DC.c)
 * Callees:
 *     sub_1800FED2C @ 0x1800FED2C (sub_1800FED2C.c)
 */

__int64 __fastcall sub_1800F05C0(__int64 a1)
{
  __int64 result; // rax

  sub_1800FED2C();
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::GpuQueryD3D11::`vftable';
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_DWORD *)(a1 + 136) = 4;
  *(_DWORD *)(a1 + 140) = 4;
  result = a1;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_BYTE *)(a1 + 152) = 1;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 240) = 0LL;
  return result;
}
