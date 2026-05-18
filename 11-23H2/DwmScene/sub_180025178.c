/*
 * XREFs of sub_180025178 @ 0x180025178
 * Callers:
 *     sub_180024B5C @ 0x180024B5C (sub_180024B5C.c)
 *     sub_1800252A8 @ 0x1800252A8 (sub_1800252A8.c)
 *     sub_18005AF50 @ 0x18005AF50 (sub_18005AF50.c)
 * Callees:
 *     sub_180024724 @ 0x180024724 (sub_180024724.c)
 *     __RTDynamicCast @ 0x1800E3960 (__RTDynamicCast.c)
 */

_QWORD *__fastcall sub_180025178(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rax

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::Component `RTTI Type Descriptor',
         &Spectre::Engine::Camera `RTTI Type Descriptor',
         0);
  if ( v4 )
  {
    sub_180024724(a1, (__int64)a2, v4);
  }
  else
  {
    *a1 = 0LL;
    a1[1] = 0LL;
  }
  return a1;
}
