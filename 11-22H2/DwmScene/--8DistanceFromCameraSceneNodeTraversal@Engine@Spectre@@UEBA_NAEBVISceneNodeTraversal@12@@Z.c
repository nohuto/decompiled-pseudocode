/*
 * XREFs of ??8DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@UEBA_NAEBVISceneNodeTraversal@12@@Z @ 0x1800956F0
 * Callers:
 *     <none>
 * Callees:
 *     ??9type_info@@QEBA_NAEBV0@@Z @ 0x180017E2C (--9type_info@@QEBA_NAEBV0@@Z.c)
 *     __RTDynamicCast_0 @ 0x1800E38E0 (__RTDynamicCast_0.c)
 */

bool __fastcall Spectre::Engine::DistanceFromCameraSceneNodeTraversal::operator==(__int64 a1, __int64 a2)
{
  __int64 v5; // rbx
  __int64 v6; // rax

  if ( a1 == a2 )
    return 1;
  v5 = __RTtypeid(a1);
  v6 = __RTtypeid(a2);
  return !type_info::operator!=(v5, v6)
      && *(_DWORD *)(a1 + 8) == *(_DWORD *)(_RTDynamicCast_0(
                                              a2,
                                              0LL,
                                              &Spectre::Engine::ISceneNodeTraversal `RTTI Type Descriptor',
                                              &Spectre::Engine::DistanceFromCameraSceneNodeTraversal `RTTI Type Descriptor',
                                              1)
                                          + 8);
}
