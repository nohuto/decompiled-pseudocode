/*
 * XREFs of ??1?$map@HV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800640B0
 * Callers:
 *     _Spectre::Engine::ViewerEngine::ViewerSceneData::ViewerSceneData_::_1_::dtor$3 @ 0x1800E7F28 (_Spectre--Engine--ViewerEngine--ViewerSceneData--ViewerSceneData_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::map<int,std::shared_ptr<Spectre::Engine::LightProbe>>::~map<int,std::shared_ptr<Spectre::Engine::LightProbe>>(
        void **a1)
{
  std::_Tree<std::_Tmap_traits<int,std::shared_ptr<Spectre::Engine::LightProbe>,std::less<int>,std::allocator<std::pair<int const,std::shared_ptr<Spectre::Engine::LightProbe>>>,0>>::~_Tree<std::_Tmap_traits<int,std::shared_ptr<Spectre::Engine::LightProbe>,std::less<int>,std::allocator<std::pair<int const,std::shared_ptr<Spectre::Engine::LightProbe>>>,0>>(a1);
}
