/*
 * XREFs of sub_1800E6A0C @ 0x1800E6A0C
 * Callers:
 *     sub_1800E75E0 @ 0x1800E75E0 (sub_1800E75E0.c)
 *     sub_1800E7878 @ 0x1800E7878 (sub_1800E7878.c)
 *     sub_1800E8560 @ 0x1800E8560 (sub_1800E8560.c)
 *     sub_1800EA210 @ 0x1800EA210 (sub_1800EA210.c)
 *     sub_1800EA840 @ 0x1800EA840 (sub_1800EA840.c)
 *     sub_1800EAF60 @ 0x1800EAF60 (sub_1800EAF60.c)
 *     sub_1800F09B0 @ 0x1800F09B0 (sub_1800F09B0.c)
 *     sub_1800F0C10 @ 0x1800F0C10 (sub_1800F0C10.c)
 * Callees:
 *     __RTDynamicCast @ 0x1800FEE97 (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_1800E6A0C(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::RenderDevice `RTTI Type Descriptor',
         &Spectre::Engine::D3D11::RenderDeviceD3D11 `RTTI Type Descriptor',
         0);
  if ( v4 )
  {
    *a1 = v4;
    a1[1] = a2[1];
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    *a1 = 0LL;
    a1[1] = 0LL;
  }
  return a1;
}
