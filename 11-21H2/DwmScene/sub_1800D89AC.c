/*
 * XREFs of sub_1800D89AC @ 0x1800D89AC
 * Callers:
 *     sub_1800DE300 @ 0x1800DE300 (sub_1800DE300.c)
 * Callees:
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_1800979FC @ 0x1800979FC (sub_1800979FC.c)
 */

void **__fastcall sub_1800D89AC(_QWORD *a1)
{
  void **result; // rax

  memset(a1, 0, 0x70uLL);
  sub_1800979FC(a1);
  result = &Spectre::Engine::D3D11::VertexBufferD3D11::`vftable';
  *a1 = &Spectre::Engine::D3D11::VertexBufferD3D11::`vftable';
  a1[13] = 0LL;
  return result;
}
