/*
 * XREFs of ??1?$lock_guard@Vmutex@std@@@std@@QEAA@XZ @ 0x180010F3C
 * Callers:
 *     _Spectre::Engine::ResourceFactory::CreateResource_Spectre::Engine::DeviceVertexLayout__::_1_::dtor$0 @ 0x1800E3B24 (_Spectre--Engine--ResourceFactory--CreateResource_Spectre--Engine--DeviceVertexLayout__--_1_--dt.c)
 *     _Spectre::Utils::Internal::SimpleCancellationToken::CheckCancelledAndThrow_::_1_::dtor$0 @ 0x1800E47BB (_Spectre--Utils--Internal--SimpleCancellationToken--CheckCancelledAndThrow_--_1_--dtor$0.c)
 *     _Spectre::Utils::JsonConfigurationManager::TryGetValue_bool__::_1_::dtor$0 @ 0x1800E4815 (_Spectre--Utils--JsonConfigurationManager--TryGetValue_bool__--_1_--dtor$0.c)
 *     _Spectre::Utils::JsonConfigurationManager::SetValue_bool__::_1_::dtor$0 @ 0x1800E74DE (_Spectre--Utils--JsonConfigurationManager--SetValue_bool__--_1_--dtor$0.c)
 *     _Spectre::Engine::ResourceData::Request_::_1_::dtor$1 @ 0x1800E77AF (_Spectre--Engine--ResourceData--Request_--_1_--dtor$1.c)
 *     _Spectre::Engine::Display::AttachOutput_::_1_::dtor$0 @ 0x1800E77C1 (_Spectre--Engine--Display--AttachOutput_--_1_--dtor$0.c)
 *     _Spectre::Engine::ResourceManager::Release_::_1_::dtor$0 @ 0x1800E77F7 (_Spectre--Engine--ResourceManager--Release_--_1_--dtor$0.c)
 *     _Spectre::Engine::Display::RenderThread_::_1_::dtor$0 @ 0x1800E781B (_Spectre--Engine--Display--RenderThread_--_1_--dtor$0.c)
 *     _Spectre::Utils::Tweening::TweenManager::CreateTween_float_Spectre::Utils::Tweening::TransformationDefault_float____::_1_::dtor$10 @ 0x1800EAA27 (_Spectre--Utils--Tweening--TweenManager--CreateTween_float_Spectre--Utils--Tweening_ea_1800EAA27.c)
 *     _Spectre::Engine::ResourceData::SetResource_::_1_::dtor$2 @ 0x1800EABE5 (_Spectre--Engine--ResourceData--SetResource_--_1_--dtor$2.c)
 *     _Spectre::Engine::D3D11::RenderDeviceD3D11::HandleOutOfMemory_::_1_::dtor$0 @ 0x1800F16DC (_Spectre--Engine--D3D11--RenderDeviceD3D11--HandleOutOfMemory_--_1_--dtor$0.c)
 *     _Spectre::Utils::JsonConfigurationManager::SetValue_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______::_1_::dtor$1 @ 0x1800F1CD8 (_Spectre--Utils--JsonConfigurationManager--SetValue_std--basic_string_wchar_t_std--_ea_1800F1CD8.c)
 *     _Spectre::Utils::Internal::SimpleCancellationToken::SetCancelledCallback_::_1_::dtor$1 @ 0x1800F1E64 (_Spectre--Utils--Internal--SimpleCancellationToken--SetCancelledCallback_--_1_--dtor$1.c)
 *     _Spectre::Utils::Tweening::TweenManager::Update_::_1_::dtor$1 @ 0x1800F20FA (_Spectre--Utils--Tweening--TweenManager--Update_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

int __fastcall std::lock_guard<std::mutex>::~lock_guard<std::mutex>(_Mtx_t *a1)
{
  return _Mtx_unlock(*a1);
}
