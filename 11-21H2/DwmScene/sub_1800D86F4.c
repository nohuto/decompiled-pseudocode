/*
 * XREFs of sub_1800D86F4 @ 0x1800D86F4
 * Callers:
 *     sub_1800DE480 @ 0x1800DE480 (sub_1800DE480.c)
 * Callees:
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_1800981EC @ 0x1800981EC (sub_1800981EC.c)
 */

void **__fastcall sub_1800D86F4(_QWORD *a1)
{
  void **result; // rax

  memset(a1, 0, 0x70uLL);
  sub_1800981EC(a1);
  result = &Spectre::Engine::D3D11::IndexBufferD3D11::`vftable';
  *a1 = &Spectre::Engine::D3D11::IndexBufferD3D11::`vftable';
  a1[13] = 0LL;
  return result;
}
