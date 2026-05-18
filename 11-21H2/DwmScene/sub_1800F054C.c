/*
 * XREFs of sub_1800F054C @ 0x1800F054C
 * Callers:
 *     sub_1800F0870 @ 0x1800F0870 (sub_1800F0870.c)
 * Callees:
 *     __RTDynamicCast @ 0x1800FEE97 (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_1800F054C(__int64 *a1, _QWORD *a2)
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
