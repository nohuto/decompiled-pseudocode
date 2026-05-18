/*
 * XREFs of ??1?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@QEAA@XZ @ 0x180025AA0
 * Callers:
 *     _Spectre::Engine::Camera::SetShaderProperty_::_1_::dtor$1 @ 0x1800E7AB6 (_Spectre--Engine--Camera--SetShaderProperty_--_1_--dtor$1.c)
 *     _Spectre::Engine::D3D11::VertexLayoutD3D11::CreateInternal_::_1_::dtor$1 @ 0x1800F1A8A (_Spectre--Engine--D3D11--VertexLayoutD3D11--CreateInternal_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall std::pair<int,std::string>::~pair<int,std::string>(void *a1)
{
  std::string::_Tidy_deallocate((__int64)a1 + 8);
}
