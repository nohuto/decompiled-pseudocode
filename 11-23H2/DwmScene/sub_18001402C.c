/*
 * XREFs of sub_18001402C @ 0x18001402C
 * Callers:
 *     sub_180013E78 @ 0x180013E78 (sub_180013E78.c)
 *     sub_180014094 @ 0x180014094 (sub_180014094.c)
 *     sub_18004B580 @ 0x18004B580 (sub_18004B580.c)
 * Callees:
 *     __RTDynamicCast @ 0x1800E3960 (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_18001402C(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::Component `RTTI Type Descriptor',
         &Spectre::Engine::MeshInstance `RTTI Type Descriptor',
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
