/*
 * XREFs of sub_1800631C0 @ 0x1800631C0
 * Callers:
 *     sub_180064E40 @ 0x180064E40 (sub_180064E40.c)
 *     sub_180068E68 @ 0x180068E68 (sub_180068E68.c)
 *     sub_180069750 @ 0x180069750 (sub_180069750.c)
 *     sub_18006AFE4 @ 0x18006AFE4 (sub_18006AFE4.c)
 * Callees:
 *     __RTDynamicCast @ 0x1800E3960 (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_1800631C0(__int64 *a1, _QWORD *a2)
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
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    *a1 = v4;
    a1[1] = a2[1];
  }
  return a1;
}
