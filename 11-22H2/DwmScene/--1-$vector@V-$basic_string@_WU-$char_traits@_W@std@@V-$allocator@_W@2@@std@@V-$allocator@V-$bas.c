/*
 * XREFs of ??1?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAA@XZ @ 0x18001F11C
 * Callers:
 *     _Spectre::Engine::Camera::Camera_::_1_::dtor$10 @ 0x1800E78CB (_Spectre--Engine--Camera--Camera_--_1_--dtor$10.c)
 *     _Spectre::Engine::ViewerEngine::ApplySceneStandardContent_::_1_::dtor$40 @ 0x1800E808E (_Spectre--Engine--ViewerEngine--ApplySceneStandardContent_--_1_--dtor$40.c)
 *     _Spectre::Utils::JsonConfigurationManager::GetKeys_::_1_::dtor$0 @ 0x1800F1E88 (_Spectre--Utils--JsonConfigurationManager--GetKeys_--_1_--dtor$0.c)
 *     _Spectre::Utils::JsonConfigurationManager::GetKeys_::_1_::dtor$1 @ 0x1800F1EB5 (_Spectre--Utils--JsonConfigurationManager--GetKeys_--_1_--dtor$1.c)
 *     _Spectre::Utils::JsonConfigurationManager::SerializeConfiguration_::_1_::dtor$1_0 @ 0x1800F1F9E (_Spectre--Utils--JsonConfigurationManager--SerializeConfiguration_--_1_--dtor$1_0.c)
 *     _Spectre::Utils::ConfigurationValue::GetKeys_::_1_::dtor$0 @ 0x1800F2093 (_Spectre--Utils--ConfigurationValue--GetKeys_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 std::vector<std::wstring>::~vector<std::wstring>()
{
  return std::vector<std::wstring>::_Tidy();
}
