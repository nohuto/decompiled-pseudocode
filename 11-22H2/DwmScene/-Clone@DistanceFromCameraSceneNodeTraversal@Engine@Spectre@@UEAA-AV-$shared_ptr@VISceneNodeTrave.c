/*
 * XREFs of ?Clone@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@UEAA?AV?$shared_ptr@VISceneNodeTraversal@Engine@Spectre@@@std@@XZ @ 0x1800957D0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??$_Construct_in_place@VDistanceFromCameraSceneNodeTraversal@Engine@Spectre@@AEBW4SortingOrder@123@@std@@YAXAEAVDistanceFromCameraSceneNodeTraversal@Engine@Spectre@@AEBW4SortingOrder@123@@Z @ 0x180094A1C (--$_Construct_in_place@VDistanceFromCameraSceneNodeTraversal@Engine@Spectre@@AEBW4SortingOrder@1.c)
 */

_QWORD *__fastcall Spectre::Engine::DistanceFromCameraSceneNodeTraversal::Clone(__int64 a1, _QWORD *a2)
{
  _DWORD *v4; // rax
  __int64 v5; // r8

  v4 = operator new(0x20uLL);
  if ( v4 )
  {
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Engine::DistanceFromCameraSceneNodeTraversal>::`vftable';
    std::_Construct_in_place<Spectre::Engine::DistanceFromCameraSceneNodeTraversal,enum Spectre::Engine::DistanceFromCameraSceneNodeTraversal::SortingOrder const &>(
      (__int64)(v4 + 4),
      (unsigned int *)(a1 + 8));
  }
  else
  {
    v5 = 0LL;
  }
  a2[1] = v5;
  *a2 = v5 + 16;
  return a2;
}
