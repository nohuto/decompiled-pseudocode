/*
 * XREFs of ?PresentFrame@RenderDevice@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@AEAV?$unique_lock@VMutex@Engine@Spectre@@@5@11@Z @ 0x180026FA0
 * Callers:
 *     ?PresentFrame@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@AEAV?$unique_lock@VMutex@Engine@Spectre@@@6@11@Z @ 0x1800C6AA0 (-PresentFrame@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VIRenderOutput@Engin.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall Spectre::Engine::RenderDevice::PresentFrame(__int64 a1, _QWORD *a2)
{
  Spectre::Engine::GpuProfiler **v2; // rax

  v2 = (Spectre::Engine::GpuProfiler **)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 184LL))(*a2);
  return Spectre::Engine::GpuProfiler::PresentFrame(*v2);
}
