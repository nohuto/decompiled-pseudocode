/*
 * XREFs of ??1?$ComPtr@UID3D11Resource@@@WRL@Microsoft@@QEAA@XZ @ 0x18003B2D0
 * Callers:
 *     _Spectre::Engine::SceneNode::SceneNode_::_1_::dtor$21 @ 0x1800E63D3 (_Spectre--Engine--SceneNode--SceneNode_--_1_--dtor$21.c)
 *     _Spectre::Engine::Scene::Scene_::_1_::dtor$2 @ 0x1800E660E (_Spectre--Engine--Scene--Scene_--_1_--dtor$2.c)
 *     _Spectre::Engine::D3D11::TextureD3D11::GetDeviceBuffer_::_1_::dtor$8 @ 0x1800F1946 (_Spectre--Engine--D3D11--TextureD3D11--GetDeviceBuffer_--_1_--dtor$8.c)
 *     _Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic::UpdateLocalDisplayState_::_1_::dtor$2 @ 0x1800F1958 (_Spectre--Engine--D3D11--Holographic--RenderOutputD3D11Holographic--UpdateLocalDisp_ea_1800F1958.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Microsoft::WRL::ComPtr<ID3D11Resource>::~ComPtr<ID3D11Resource>(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
