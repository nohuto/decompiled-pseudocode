/*
 * XREFs of sub_1800A59D0 @ 0x1800A59D0
 * Callers:
 *     <none>
 * Callees:
 *     __RTDynamicCast @ 0x1800FEE97 (__RTDynamicCast.c)
 */

bool __fastcall sub_1800A59D0(__int64 a1, __int64 a2)
{
  __int64 v5; // rbx
  __int64 v6; // rax

  if ( a1 == a2 )
    return 1;
  v5 = _RTtypeid(a1);
  v6 = _RTtypeid(a2);
  return !(unsigned int)_std_type_info_compare(v5 + 8, v6 + 8)
      && *(_DWORD *)(a1 + 8) == *(_DWORD *)(_RTDynamicCast(
                                              a2,
                                              0LL,
                                              &Spectre::Engine::ISceneNodeTraversal `RTTI Type Descriptor',
                                              &Spectre::Engine::DistanceFromCameraSceneNodeTraversal `RTTI Type Descriptor',
                                              1)
                                          + 8);
}
