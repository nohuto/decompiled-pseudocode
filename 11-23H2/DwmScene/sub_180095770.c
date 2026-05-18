/*
 * XREFs of sub_180095770 @ 0x180095770
 * Callers:
 *     <none>
 * Callees:
 *     sub_180017DEC @ 0x180017DEC (sub_180017DEC.c)
 *     __RTDynamicCast @ 0x1800E3960 (__RTDynamicCast.c)
 */

bool __fastcall sub_180095770(__int64 a1, __int64 a2)
{
  __int64 v5; // rbx
  __int64 v6; // rax

  if ( a1 == a2 )
    return 1;
  v5 = _RTtypeid(a1);
  v6 = _RTtypeid(a2);
  return !sub_180017DEC(v5, v6)
      && *(_DWORD *)(a1 + 8) == *(_DWORD *)(_RTDynamicCast(
                                              a2,
                                              0LL,
                                              &Spectre::Engine::ISceneNodeTraversal `RTTI Type Descriptor',
                                              &Spectre::Engine::DistanceFromCameraSceneNodeTraversal `RTTI Type Descriptor',
                                              1)
                                          + 8);
}
