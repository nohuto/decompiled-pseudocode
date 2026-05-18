/*
 * XREFs of _Spectre::Engine::RenderDevice::CreateOutput_RenderOutputDwm_std::shared_ptr_Spectre::Engine::RenderDevice__const_&_std::shared_ptr_Spectre::Utils::PerformanceLogger__unsigned_long_const_&_unsigned_long_const_&_unsigned_long_const_&_float_const_&__::_1_::dtor$2 @ 0x1800E448E
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VDeviceVertexLayout@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010240 (--1-$shared_ptr@VDeviceVertexLayout@Engine@Spectre@@@std@@QEAA@XZ.c)
 */

void __fastcall Spectre::Engine::RenderDevice::CreateOutput_RenderOutputDwm_std::shared_ptr_Spectre::Engine::RenderDevice__const___std::shared_ptr_Spectre::Utils::PerformanceLogger__unsigned_long_const___unsigned_long_const___unsigned_long_const___float_const____::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 64) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 64) &= ~1u;
    std::shared_ptr<Spectre::Engine::DeviceVertexLayout>::~shared_ptr<Spectre::Engine::DeviceVertexLayout>(*(_QWORD **)(a2 + 184));
  }
}
