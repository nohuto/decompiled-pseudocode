/*
 * XREFs of ?Present@GpuProfilerFrame@Engine@Spectre@@QEAAXXZ @ 0x1800A3834
 * Callers:
 *     ?PresentFrame@FramesData@GpuProfiler@Engine@Spectre@@QEAA_N_K@Z @ 0x1800A1430 (-PresentFrame@FramesData@GpuProfiler@Engine@Spectre@@QEAA_N_K@Z.c)
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetQuery@RenderDevice@Engine@Spectre@@QEAA?AVRenderDeviceQuery@23@W4QueryType@GpuQuery@23@@Z @ 0x1800267C4 (-GetQuery@RenderDevice@Engine@Spectre@@QEAA-AVRenderDeviceQuery@23@W4QueryType@GpuQuery@23@@Z.c)
 *     ??1RenderDeviceQuery@Engine@Spectre@@QEAA@XZ @ 0x1800A1BD8 (--1RenderDeviceQuery@Engine@Spectre@@QEAA@XZ.c)
 *     ??4RenderDeviceQuery@Engine@Spectre@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800A1C34 (--4RenderDeviceQuery@Engine@Spectre@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??BRenderDeviceQuery@Engine@Spectre@@QEBA_NXZ @ 0x1800A1D74 (--BRenderDeviceQuery@Engine@Spectre@@QEBA_NXZ.c)
 *     ?End@RenderDeviceQuery@Engine@Spectre@@QEAAXV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@0@Z @ 0x1800A1E04 (-End@RenderDeviceQuery@Engine@Spectre@@QEAAXV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@0@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::GpuProfilerFrame::Present(Spectre::Engine::GpuProfilerFrame *this)
{
  __int64 *Query; // rax
  _QWORD *v3; // rdx
  _QWORD *v4; // rax
  _QWORD *v5; // r8
  __int64 v6; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v7; // [rsp+30h] [rbp-C8h] BYREF
  std::_Ref_count_base *v8[23]; // [rsp+40h] [rbp-B8h] BYREF

  Query = (__int64 *)Spectre::Engine::RenderDevice::GetQuery(*((_QWORD *)this + 114), (__int64)v8, 1u);
  Spectre::Engine::RenderDeviceQuery::operator=((__int64)this + 352, Query);
  Spectre::Engine::RenderDeviceQuery::~RenderDeviceQuery(v8);
  if ( Spectre::Engine::RenderDeviceQuery::operator bool() )
  {
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
      &v6,
      (_QWORD *)this + 112);
    v4 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
           &v7,
           v3);
    Spectre::Engine::RenderDeviceQuery::End((__int64)this + 352, v4, v5);
  }
}
