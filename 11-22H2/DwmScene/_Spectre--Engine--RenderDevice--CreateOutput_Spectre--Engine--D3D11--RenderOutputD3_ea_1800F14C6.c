/*
 * XREFs of _Spectre::Engine::RenderDevice::CreateOutput_Spectre::Engine::D3D11::RenderOutputD3D11Xaml_std::shared_ptr_Spectre::Engine::RenderDevice__std::shared_ptr_Spectre::Utils::PerformanceLogger__&__::_1_::dtor$2 @ 0x1800F14C6
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VDeviceVertexLayout@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010240 (--1-$shared_ptr@VDeviceVertexLayout@Engine@Spectre@@@std@@QEAA@XZ.c)
 */

void __fastcall Spectre::Engine::RenderDevice::CreateOutput_Spectre::Engine::D3D11::RenderOutputD3D11Xaml_std::shared_ptr_Spectre::Engine::RenderDevice__std::shared_ptr_Spectre::Utils::PerformanceLogger_____::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    std::shared_ptr<Spectre::Engine::DeviceVertexLayout>::~shared_ptr<Spectre::Engine::DeviceVertexLayout>(*(_QWORD **)(a2 + 168));
  }
}
