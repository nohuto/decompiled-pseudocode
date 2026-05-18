/*
 * XREFs of _Spectre::Engine::ShaderFamily::CreateMaterial_::_1_::dtor$5 @ 0x1800E7CB8
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VDeviceVertexLayout@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010240 (--1-$shared_ptr@VDeviceVertexLayout@Engine@Spectre@@@std@@QEAA@XZ.c)
 */

void __fastcall Spectre::Engine::ShaderFamily::CreateMaterial_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    std::shared_ptr<Spectre::Engine::DeviceVertexLayout>::~shared_ptr<Spectre::Engine::DeviceVertexLayout>(*(_QWORD **)(a2 + 120));
  }
}
