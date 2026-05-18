/*
 * XREFs of ??1?$vector@PEAVSceneNode@Engine@Spectre@@V?$allocator@PEAVSceneNode@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x18003FFB0
 * Callers:
 *     _Spectre::Engine::StandardShaderExtension::AddShaderPipelines_::_1_::dtor$4 @ 0x1800E67F5 (_Spectre--Engine--StandardShaderExtension--AddShaderPipelines_--_1_--dtor$4.c)
 *     _Spectre::Engine::DefaultSceneNodeTraversal::GetSceneNodes_::_1_::dtor$0 @ 0x1800E8486 (_Spectre--Engine--DefaultSceneNodeTraversal--GetSceneNodes_--_1_--dtor$0.c)
 *     _Spectre::Engine::UnlitShaderExtension::AddShaderPipelines_::_1_::dtor$0 @ 0x1800EA05B (_Spectre--Engine--UnlitShaderExtension--AddShaderPipelines_--_1_--dtor$0.c)
 *     _Spectre::Engine::MeshHelper::CreatePlaneTriangleStrip_::_1_::dtor$2 @ 0x1800EA670 (_Spectre--Engine--MeshHelper--CreatePlaneTriangleStrip_--_1_--dtor$2.c)
 *     _Spectre::Engine::DistanceFromCameraSceneNodeTraversal::GetSceneNodes_::_1_::dtor$4 @ 0x1800EAB15 (_Spectre--Engine--DistanceFromCameraSceneNodeTraversal--GetSceneNodes_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<Spectre::Engine::SceneNode *>::~vector<Spectre::Engine::SceneNode *>(__int64 a1)
{
  std::vector<std::pair<unsigned int,unsigned int>>::_Tidy(a1);
}
