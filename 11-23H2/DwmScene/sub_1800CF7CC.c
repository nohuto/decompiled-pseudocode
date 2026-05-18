/*
 * XREFs of sub_1800CF7CC @ 0x1800CF7CC
 * Callers:
 *     sub_1800D0260 @ 0x1800D0260 (sub_1800D0260.c)
 *     sub_1800D06A4 @ 0x1800D06A4 (sub_1800D06A4.c)
 *     sub_1800D11F0 @ 0x1800D11F0 (sub_1800D11F0.c)
 *     sub_1800D2AA0 @ 0x1800D2AA0 (sub_1800D2AA0.c)
 *     sub_1800D2FD0 @ 0x1800D2FD0 (sub_1800D2FD0.c)
 *     sub_1800D35E0 @ 0x1800D35E0 (sub_1800D35E0.c)
 *     sub_1800D7F90 @ 0x1800D7F90 (sub_1800D7F90.c)
 *     sub_1800D81B0 @ 0x1800D81B0 (sub_1800D81B0.c)
 * Callees:
 *     __RTDynamicCast @ 0x1800E3960 (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_1800CF7CC(__int64 *a1, _QWORD *a2)
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
