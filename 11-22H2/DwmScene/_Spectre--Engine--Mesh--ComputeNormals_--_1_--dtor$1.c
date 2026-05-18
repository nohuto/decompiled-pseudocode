/*
 * XREFs of _Spectre::Engine::Mesh::ComputeNormals_::_1_::dtor$1 @ 0x1800E6E43
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VDeviceVertexLayout@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010240 (--1-$shared_ptr@VDeviceVertexLayout@Engine@Spectre@@@std@@QEAA@XZ.c)
 */

void __fastcall Spectre::Engine::Mesh::ComputeNormals_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 280) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 280) &= ~2u;
    std::shared_ptr<Spectre::Engine::DeviceVertexLayout>::~shared_ptr<Spectre::Engine::DeviceVertexLayout>((_QWORD *)(a2 + 80));
  }
}
