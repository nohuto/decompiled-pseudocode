/*
 * XREFs of sub_18009903C @ 0x18009903C
 * Callers:
 *     sub_180098628 @ 0x180098628 (sub_180098628.c)
 * Callees:
 *     __RTDynamicCast @ 0x1800FEE97 (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_18009903C(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::RendererResource `RTTI Type Descriptor',
         &Spectre::Engine::DeviceHullShader `RTTI Type Descriptor',
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
