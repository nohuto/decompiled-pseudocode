/*
 * XREFs of sub_1800CF5CC @ 0x1800CF5CC
 * Callers:
 *     sub_1800D1660 @ 0x1800D1660 (sub_1800D1660.c)
 * Callees:
 *     sub_1800CF574 @ 0x1800CF574 (sub_1800CF574.c)
 *     __RTDynamicCast @ 0x1800E3960 (__RTDynamicCast.c)
 */

_QWORD *__fastcall sub_1800CF5CC(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rax

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::DeviceDepthBuffer `RTTI Type Descriptor',
         &Spectre::Engine::D3D11::DepthBufferD3D11 `RTTI Type Descriptor',
         0);
  if ( v4 )
  {
    sub_1800CF574(a1, (__int64)a2, v4);
  }
  else
  {
    *a1 = 0LL;
    a1[1] = 0LL;
  }
  return a1;
}
