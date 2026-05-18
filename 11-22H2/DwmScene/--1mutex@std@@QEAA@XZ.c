/*
 * XREFs of ??1mutex@std@@QEAA@XZ @ 0x18001D334
 * Callers:
 *     _Spectre::Engine::RenderOutput::RenderOutput_::_1_::dtor$9 @ 0x1800E509E (_Spectre--Engine--RenderOutput--RenderOutput_--_1_--dtor$9.c)
 *     _Spectre::dtor$30::Engine::Engine_::_1_::dtor$30 @ 0x1800E5707 (_Spectre--dtor$30--Engine--Engine_--_1_--dtor$30.c)
 *     _Spectre::dtor$27::Engine::_Engine_::_1_::dtor$27 @ 0x1800E5A0A (_Spectre--dtor$27--Engine--_Engine_--_1_--dtor$27.c)
 *     _Spectre::Engine::Display::Display_::_1_::dtor$5 @ 0x1800E7622 (_Spectre--Engine--Display--Display_--_1_--dtor$5.c)
 *     _Spectre::Engine::Display::_Display_::_1_::dtor$5 @ 0x1800E76F0 (_Spectre--Engine--Display--_Display_--_1_--dtor$5.c)
 *     _Spectre::Engine::ResourceManager::ResourceManager_::_1_::dtor$1 @ 0x1800E841D (_Spectre--Engine--ResourceManager--ResourceManager_--_1_--dtor$1.c)
 *     _Spectre::Engine::ResourceManager::ResourceManager_::_1_::dtor$2 @ 0x1800E8433 (_Spectre--Engine--ResourceManager--ResourceManager_--_1_--dtor$2.c)
 *     _Spectre::Engine::ResourceData::ResourceData_::_1_::dtor$3 @ 0x1800EAB7F (_Spectre--Engine--ResourceData--ResourceData_--_1_--dtor$3.c)
 *     _Spectre::Engine::ResourceData::ResourceData_::_1_::dtor$3_0 @ 0x1800EABBD (_Spectre--Engine--ResourceData--ResourceData_--_1_--dtor$3_0.c)
 *     _Spectre::Engine::D3D11::RenderDeviceD3D11::RenderDeviceD3D11_::_1_::dtor$5 @ 0x1800F15C1 (_Spectre--Engine--D3D11--RenderDeviceD3D11--RenderDeviceD3D11_--_1_--dtor$5.c)
 *     _Spectre::Utils::JsonConfigurationManager::JsonConfigurationManager_::_1_::dtor$2 @ 0x1800F1DD8 (_Spectre--Utils--JsonConfigurationManager--JsonConfigurationManager_--_1_--dtor$2.c)
 *     _Spectre::Utils::JsonConfigurationManager::JsonConfigurationManager_::_1_::dtor$4 @ 0x1800F1E07 (_Spectre--Utils--JsonConfigurationManager--JsonConfigurationManager_--_1_--dtor$4.c)
 *     _Spectre::Utils::ThreadPool::TaskHandler::TaskHandler_::_1_::dtor$2 @ 0x1800F2029 (_Spectre--Utils--ThreadPool--TaskHandler--TaskHandler_--_1_--dtor$2.c)
 *     _Spectre::Utils::Internal::SimpleCancellationToken::SimpleCancellationToken_::_1_::dtor$1 @ 0x1800F20D2 (_Spectre--Utils--Internal--SimpleCancellationToken--SimpleCancellationToken_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl std::mutex::~mutex(_Mtx_t a1)
{
  _Mtx_destroy_in_situ(a1);
}
