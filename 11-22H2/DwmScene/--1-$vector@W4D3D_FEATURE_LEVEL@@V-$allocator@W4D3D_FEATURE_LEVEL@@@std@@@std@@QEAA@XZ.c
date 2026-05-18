/*
 * XREFs of ??1?$vector@W4D3D_FEATURE_LEVEL@@V?$allocator@W4D3D_FEATURE_LEVEL@@@std@@@std@@QEAA@XZ @ 0x1800179F0
 * Callers:
 *     _Spectre::Engine::SceneNode::SceneNode_::_1_::dtor$9 @ 0x1800E62A7 (_Spectre--Engine--SceneNode--SceneNode_--_1_--dtor$9.c)
 *     _Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition_::_1_::dtor$2 @ 0x1800E692B (_Spectre--Engine--ShaderPropertyDefinition--ShaderPropertyDefinition_--_1_--dtor$2.c)
 *     _Spectre::Engine::ShaderManager::ShaderManager_::_1_::dtor$13 @ 0x1800E7279 (_Spectre--Engine--ShaderManager--ShaderManager_--_1_--dtor$13.c)
 *     _Spectre::Engine::ShaderPropertyLayout::SetPropertyDefaultFromDefinition_::_1_::dtor$0 @ 0x1800EA2F8 (_Spectre--Engine--ShaderPropertyLayout--SetPropertyDefaultFromDefinition_--_1_--dtor$0.c)
 *     _Spectre::Engine::ShaderPropertyLayout::SetPropertyDefaultFromDefinition_::_1_::dtor$1 @ 0x1800EA325 (_Spectre--Engine--ShaderPropertyLayout--SetPropertyDefaultFromDefinition_--_1_--dtor$1.c)
 *     _Spectre::Engine::ShaderPropertyLayout::SetPropertyDefaultFromDefinition_::_1_::dtor$2 @ 0x1800EA352 (_Spectre--Engine--ShaderPropertyLayout--SetPropertyDefaultFromDefinition_--_1_--dtor$2.c)
 *     _Spectre::Engine::ShaderPropertyBlock::ShaderPropertyBlock_::_1_::dtor$1 @ 0x1800EA39A (_Spectre--Engine--ShaderPropertyBlock--ShaderPropertyBlock_--_1_--dtor$1.c)
 *     _Spectre::Engine::ColorTransform::ColorTransform_::_1_::dtor$3 @ 0x1800EA874 (_Spectre--Engine--ColorTransform--ColorTransform_--_1_--dtor$3.c)
 *     _CDXDeviceFactory::CreateDeviceResources_::_1_::dtor$1 @ 0x1800F1C68 (_CDXDeviceFactory--CreateDeviceResources_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<enum D3D_FEATURE_LEVEL>::~vector<enum D3D_FEATURE_LEVEL>(void *a1)
{
  std::vector<Spectre::Engine::ShaderPropertyLayout::ValueElement>::_Tidy(a1);
}
