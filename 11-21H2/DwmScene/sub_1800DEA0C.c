/*
 * XREFs of sub_1800DEA0C @ 0x1800DEA0C
 * Callers:
 *     sub_1800DF530 @ 0x1800DF530 (sub_1800DF530.c)
 *     sub_1800E75E0 @ 0x1800E75E0 (sub_1800E75E0.c)
 *     sub_1800F0670 @ 0x1800F0670 (sub_1800F0670.c)
 *     sub_1800F0870 @ 0x1800F0870 (sub_1800F0870.c)
 *     sub_1800F1C20 @ 0x1800F1C20 (sub_1800F1C20.c)
 * Callees:
 *     __RTDynamicCast @ 0x1800FEE97 (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_1800DEA0C(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::CommandList `RTTI Type Descriptor',
         &Spectre::Engine::D3D11::CommandListD3D11 `RTTI Type Descriptor',
         0);
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( v4 )
  {
    v5 = a2[1];
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v5 = a2[1];
    }
    *a1 = v4;
    a1[1] = v5;
  }
  return a1;
}
