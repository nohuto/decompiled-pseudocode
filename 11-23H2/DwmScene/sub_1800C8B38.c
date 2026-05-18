/*
 * XREFs of sub_1800C8B38 @ 0x1800C8B38
 * Callers:
 *     sub_1800C91A0 @ 0x1800C91A0 (sub_1800C91A0.c)
 *     sub_1800D0260 @ 0x1800D0260 (sub_1800D0260.c)
 *     sub_1800D7D00 @ 0x1800D7D00 (sub_1800D7D00.c)
 *     sub_1800D7EA0 @ 0x1800D7EA0 (sub_1800D7EA0.c)
 *     sub_1800D9000 @ 0x1800D9000 (sub_1800D9000.c)
 * Callees:
 *     sub_1800C2050 @ 0x1800C2050 (sub_1800C2050.c)
 *     __RTDynamicCast @ 0x1800E3960 (__RTDynamicCast.c)
 */

_QWORD *__fastcall sub_1800C8B38(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rax

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::CommandList `RTTI Type Descriptor',
         &Spectre::Engine::D3D11::CommandListD3D11 `RTTI Type Descriptor',
         0);
  if ( v4 )
  {
    sub_1800C2050(a1, (__int64)a2, v4);
  }
  else
  {
    *a1 = 0LL;
    a1[1] = 0LL;
  }
  return a1;
}
