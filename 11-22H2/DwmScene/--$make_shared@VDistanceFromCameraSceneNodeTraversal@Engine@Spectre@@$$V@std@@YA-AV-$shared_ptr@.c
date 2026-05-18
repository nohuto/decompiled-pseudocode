/*
 * XREFs of ??$make_shared@VDistanceFromCameraSceneNodeTraversal@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VDistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@0@XZ @ 0x1800638BC
 * Callers:
 *     ?ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180064E70 (-ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spec.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??$_Construct_in_place@VDistanceFromCameraSceneNodeTraversal@Engine@Spectre@@$$V@std@@YAXAEAVDistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@Z @ 0x180062B24 (--$_Construct_in_place@VDistanceFromCameraSceneNodeTraversal@Engine@Spectre@@$$V@std@@YAXAEAVDis.c)
 */

_QWORD *__fastcall std::make_shared<Spectre::Engine::DistanceFromCameraSceneNodeTraversal,>(_QWORD *a1)
{
  _DWORD *v2; // rax
  __int64 v3; // r8

  v2 = operator new(0x20uLL);
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::DistanceFromCameraSceneNodeTraversal>::`vftable';
    std::_Construct_in_place<Spectre::Engine::DistanceFromCameraSceneNodeTraversal,>((__int64)(v2 + 4));
  }
  else
  {
    v3 = 0LL;
  }
  a1[1] = v3;
  *a1 = v3 + 16;
  return a1;
}
