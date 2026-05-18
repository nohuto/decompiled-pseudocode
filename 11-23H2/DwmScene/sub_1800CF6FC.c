/*
 * XREFs of sub_1800CF6FC @ 0x1800CF6FC
 * Callers:
 *     sub_1800D1BA0 @ 0x1800D1BA0 (sub_1800D1BA0.c)
 * Callees:
 *     __RTDynamicCast @ 0x1800E3960 (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_1800CF6FC(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::DeviceShader `RTTI Type Descriptor',
         &Spectre::Engine::D3D11::HullShaderD3D11 `RTTI Type Descriptor',
         0);
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( v4 )
  {
    v5 = a2[1];
    if ( v5 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    *a1 = v4;
    a1[1] = a2[1];
  }
  return a1;
}
