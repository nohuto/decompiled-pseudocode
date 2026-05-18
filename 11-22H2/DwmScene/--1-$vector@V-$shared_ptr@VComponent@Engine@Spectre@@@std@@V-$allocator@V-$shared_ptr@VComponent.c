/*
 * XREFs of ??1?$vector@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@2@@std@@QEAA@XZ @ 0x180031C08
 * Callers:
 *     _Spectre::Engine::SceneNode::SceneNode_::_1_::dtor$10 @ 0x1800E62C0 (_Spectre--Engine--SceneNode--SceneNode_--_1_--dtor$10.c)
 *     _Spectre::Engine::Display::Display_::_1_::dtor$1 @ 0x1800E75CA (_Spectre--Engine--Display--Display_--_1_--dtor$1.c)
 *     _Spectre::Engine::Display::_Display_::_1_::dtor$1 @ 0x1800E7698 (_Spectre--Engine--Display--_Display_--_1_--dtor$1.c)
 *     _Spectre::Engine::ShaderFamily::CreatePipelines_::_1_::dtor$3 @ 0x1800E7D09 (_Spectre--Engine--ShaderFamily--CreatePipelines_--_1_--dtor$3.c)
 *     _Spectre::Engine::Scene::GetComponents_Internal_Spectre::Engine::Camera__::_1_::dtor$0 @ 0x1800E7DCF (_Spectre--Engine--Scene--GetComponents_Internal_Spectre--Engine--Camera__--_1_--dtor$0.c)
 *     _Spectre::Engine::ViewerEngine::RenderScene_::_1_::dtor$0 @ 0x1800E81B8 (_Spectre--Engine--ViewerEngine--RenderScene_--_1_--dtor$0.c)
 *     _Spectre::Engine::ViewerEngine::RenderScene_::_1_::dtor$1 @ 0x1800E81CA (_Spectre--Engine--ViewerEngine--RenderScene_--_1_--dtor$1.c)
 *     _Spectre::Engine::ViewerEngine::RenderScene_::_1_::dtor$2 @ 0x1800E81DC (_Spectre--Engine--ViewerEngine--RenderScene_--_1_--dtor$2.c)
 *     _Spectre::Engine::ViewerEngine::RenderScene_::_1_::dtor$3 @ 0x1800E81EE (_Spectre--Engine--ViewerEngine--RenderScene_--_1_--dtor$3.c)
 *     _Spectre::Engine::ImageProcessingShaderExtension::OnCreate_::_1_::dtor$5 @ 0x1800E9F89 (_Spectre--Engine--ImageProcessingShaderExtension--OnCreate_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::vector<std::shared_ptr<Spectre::Engine::Component>>::~vector<std::shared_ptr<Spectre::Engine::Component>>(
        __int64 a1)
{
  return std::vector<std::shared_ptr<Spectre::Engine::Component>>::_Tidy(a1);
}
