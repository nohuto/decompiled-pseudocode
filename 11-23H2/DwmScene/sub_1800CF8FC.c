/*
 * XREFs of sub_1800CF8FC @ 0x1800CF8FC
 * Callers:
 *     sub_1800D0CE0 @ 0x1800D0CE0 (sub_1800D0CE0.c)
 *     sub_1800D2AA0 @ 0x1800D2AA0 (sub_1800D2AA0.c)
 *     sub_1800D2FD0 @ 0x1800D2FD0 (sub_1800D2FD0.c)
 * Callees:
 *     sub_180015430 @ 0x180015430 (sub_180015430.c)
 *     __RTDynamicCast @ 0x1800E3960 (__RTDynamicCast.c)
 */

_QWORD *__fastcall sub_1800CF8FC(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rax

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::DeviceTexture `RTTI Type Descriptor',
         &Spectre::Engine::D3D11::TextureD3D11 `RTTI Type Descriptor',
         0);
  if ( v4 )
  {
    sub_180015430(a1, (__int64)a2, v4);
  }
  else
  {
    *a1 = 0LL;
    a1[1] = 0LL;
  }
  return a1;
}
