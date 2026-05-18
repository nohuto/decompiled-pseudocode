/*
 * XREFs of ?End@GpuProfilerFrame@Engine@Spectre@@QEAAXXZ @ 0x1800A2D20
 * Callers:
 *     ?EndFrame@FramesData@GpuProfiler@Engine@Spectre@@QEAA_N_K@Z @ 0x1800A11C8 (-EndFrame@FramesData@GpuProfiler@Engine@Spectre@@QEAA_N_K@Z.c)
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetQuery@RenderDevice@Engine@Spectre@@QEAA?AVRenderDeviceQuery@23@W4QueryType@GpuQuery@23@@Z @ 0x1800267C4 (-GetQuery@RenderDevice@Engine@Spectre@@QEAA-AVRenderDeviceQuery@23@W4QueryType@GpuQuery@23@@Z.c)
 *     ??1RenderDeviceQuery@Engine@Spectre@@QEAA@XZ @ 0x1800A1BD8 (--1RenderDeviceQuery@Engine@Spectre@@QEAA@XZ.c)
 *     ??4RenderDeviceQuery@Engine@Spectre@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800A1C34 (--4RenderDeviceQuery@Engine@Spectre@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??BRenderDeviceQuery@Engine@Spectre@@QEBA_NXZ @ 0x1800A1D74 (--BRenderDeviceQuery@Engine@Spectre@@QEBA_NXZ.c)
 *     ?End@RenderDeviceQuery@Engine@Spectre@@QEAAXV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@0@Z @ 0x1800A1E04 (-End@RenderDeviceQuery@Engine@Spectre@@QEAAXV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@0@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::GpuProfilerFrame::End(Spectre::Engine::GpuProfilerFrame *this)
{
  __int64 *Query; // rax
  _QWORD *v3; // rdx
  _QWORD *v4; // rax
  _QWORD *v5; // r8
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  _QWORD *v8; // r8
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v11; // r8
  _QWORD v12[2]; // [rsp+28h] [rbp-79h] BYREF
  _QWORD v13[2]; // [rsp+38h] [rbp-69h] BYREF
  std::_Ref_count_base *v14[22]; // [rsp+48h] [rbp-59h] BYREF

  Query = (__int64 *)Spectre::Engine::RenderDevice::GetQuery(*((_QWORD *)this + 114), (__int64)v14, 1u);
  Spectre::Engine::RenderDeviceQuery::operator=((__int64)this + 528, Query);
  Spectre::Engine::RenderDeviceQuery::~RenderDeviceQuery(v14);
  if ( Spectre::Engine::RenderDeviceQuery::operator bool() )
  {
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
      v12,
      (_QWORD *)this + 112);
    v4 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
           v13,
           v3);
    Spectre::Engine::RenderDeviceQuery::End((__int64)this + 528, v4, v5);
  }
  if ( Spectre::Engine::RenderDeviceQuery::operator bool() )
  {
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
      v13,
      (_QWORD *)this + 112);
    v7 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
           v12,
           v6);
    Spectre::Engine::RenderDeviceQuery::End((__int64)this + 704, v7, v8);
  }
  if ( Spectre::Engine::RenderDeviceQuery::operator bool() )
  {
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
      v13,
      (_QWORD *)this + 112);
    v10 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
            v12,
            v9);
    Spectre::Engine::RenderDeviceQuery::End((__int64)this, v10, v11);
  }
  *((_DWORD *)this + 230) = 2;
}
