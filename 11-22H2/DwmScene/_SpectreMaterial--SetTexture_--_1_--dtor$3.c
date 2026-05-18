/*
 * XREFs of _SpectreMaterial::SetTexture_::_1_::dtor$3 @ 0x1800E4034
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VDeviceVertexLayout@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010240 (--1-$shared_ptr@VDeviceVertexLayout@Engine@Spectre@@@std@@QEAA@XZ.c)
 */

void __fastcall SpectreMaterial::SetTexture_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~4u;
    std::shared_ptr<Spectre::Engine::DeviceVertexLayout>::~shared_ptr<Spectre::Engine::DeviceVertexLayout>((_QWORD *)(a2 + 64));
  }
}
