/*
 * XREFs of ??$make_shared@VDefaultSceneNodeTraversal@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VDefaultSceneNodeTraversal@Engine@Spectre@@@0@XZ @ 0x1800252CC
 * Callers:
 *     ?ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180064E70 (-ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spec.c)
 *     ?Clone@DefaultSceneNodeTraversal@Engine@Spectre@@UEAA?AV?$shared_ptr@VISceneNodeTraversal@Engine@Spectre@@@std@@XZ @ 0x180070DC0 (-Clone@DefaultSceneNodeTraversal@Engine@Spectre@@UEAA-AV-$shared_ptr@VISceneNodeTraversal@Engine.c)
 *     ??0ShadowMapCamera@Engine@Spectre@@QEAA@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@I@Z @ 0x18008D604 (--0ShadowMapCamera@Engine@Spectre@@QEAA@AEBV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@I@Z.c)
 *     ??0ImageProcessingCamera@Engine@Spectre@@QEAA@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x1800978B4 (--0ImageProcessingCamera@Engine@Spectre@@QEAA@AEBV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??$_Construct_in_place@VDefaultSceneNodeTraversal@Engine@Spectre@@$$V@std@@YAXAEAVDefaultSceneNodeTraversal@Engine@Spectre@@@Z @ 0x180024B58 (--$_Construct_in_place@VDefaultSceneNodeTraversal@Engine@Spectre@@$$V@std@@YAXAEAVDefaultSceneNo.c)
 */

_QWORD *__fastcall std::make_shared<Spectre::Engine::DefaultSceneNodeTraversal,>(_QWORD *a1)
{
  _DWORD *v2; // rax
  __int64 v3; // rdx

  v2 = operator new(0x18uLL);
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::DefaultSceneNodeTraversal>::`vftable';
    std::_Construct_in_place<Spectre::Engine::DefaultSceneNodeTraversal,>((Spectre::Engine::DefaultSceneNodeTraversal *)(v2 + 4));
  }
  else
  {
    v3 = 0LL;
  }
  a1[1] = v3;
  *a1 = v3 + 16;
  return a1;
}
