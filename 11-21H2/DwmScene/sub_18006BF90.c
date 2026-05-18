/*
 * XREFs of sub_18006BF90 @ 0x18006BF90
 * Callers:
 *     sub_18006D0B0 @ 0x18006D0B0 (sub_18006D0B0.c)
 *     sub_1800729F8 @ 0x1800729F8 (sub_1800729F8.c)
 *     sub_1800737B0 @ 0x1800737B0 (sub_1800737B0.c)
 *     sub_1800751B0 @ 0x1800751B0 (sub_1800751B0.c)
 * Callees:
 *     __RTDynamicCast @ 0x1800FEE97 (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_18006BF90(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::Camera `RTTI Type Descriptor',
         &Spectre::Engine::ViewerCamera `RTTI Type Descriptor',
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
