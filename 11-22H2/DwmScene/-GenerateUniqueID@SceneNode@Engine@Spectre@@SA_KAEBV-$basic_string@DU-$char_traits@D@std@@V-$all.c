/*
 * XREFs of ?GenerateUniqueID@SceneNode@Engine@Spectre@@SA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18003BF14
 * Callers:
 *     _dynamic_initializer_for__Spectre::Engine::Scene::GroundBackNodeID__ @ 0x1800037C0 (_dynamic_initializer_for__Spectre--Engine--Scene--GroundBackNodeID__.c)
 *     _dynamic_initializer_for__Spectre::Engine::Scene::GroundNodeID__ @ 0x180003820 (_dynamic_initializer_for__Spectre--Engine--Scene--GroundNodeID__.c)
 *     ?ApplySceneStandardContent@Engine@1Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180032880 (-ApplySceneStandardContent@Engine@1Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@@.c)
 *     ?ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180064E70 (-ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spec.c)
 *     ?CreateStandardLights@ViewerEngine@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180065C40 (-CreateStandardLights@ViewerEngine@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@.c)
 *     ?Create@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@@Z @ 0x180072750 (-Create@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::SceneNode::GenerateUniqueID(_QWORD *a1)
{
  unsigned int v1; // edx
  unsigned int v2; // r8d

  if ( a1[3] >= 0x10uLL )
    a1 = (_QWORD *)*a1;
  v1 = 0;
  if ( a1 )
  {
    v2 = 5381;
    while ( *(_BYTE *)a1 )
    {
      v2 = *(char *)a1 + 33 * v2;
      a1 = (_QWORD *)((char *)a1 + 1);
    }
    return v2;
  }
  return v1;
}
