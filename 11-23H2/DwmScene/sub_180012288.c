/*
 * XREFs of sub_180012288 @ 0x180012288
 * Callers:
 *     sub_180011ED4 @ 0x180011ED4 (sub_180011ED4.c)
 *     sub_1800122F0 @ 0x1800122F0 (sub_1800122F0.c)
 *     sub_180043140 @ 0x180043140 (sub_180043140.c)
 * Callees:
 *     __RTDynamicCast @ 0x1800E3960 (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_180012288(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::Component `RTTI Type Descriptor',
         &Spectre::Engine::Light `RTTI Type Descriptor',
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
