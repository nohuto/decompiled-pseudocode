/*
 * XREFs of ?BeginGpuProfilerFrame@RenderOutput@Engine@Spectre@@UEAAXH@Z @ 0x18002BC20
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetCommandList@RenderDevice@Engine@Spectre@@QEBAAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@XZ @ 0x180026500 (-GetCommandList@RenderDevice@Engine@Spectre@@QEBAAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@.c)
 *     ?GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ @ 0x180026598 (-GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     ?GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z @ 0x180034014 (-GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z.c)
 *     ?Render@GpuProfilingGrapher@Engine@Spectre@@UEAAXPEAVRenderDevice@23@W4GraphingOptions@IGpuProfilingGrapher@23@@Z @ 0x180074270 (-Render@GpuProfilingGrapher@Engine@Spectre@@UEAAXPEAVRenderDevice@23@W4GraphingOptions@IGpuProfi.c)
 *     ?BeginFrame@GpuProfiler@Engine@Spectre@@QEAA_NV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K@Z @ 0x1800A0F1C (-BeginFrame@GpuProfiler@Engine@Spectre@@QEAA_NV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::RenderOutput::BeginGpuProfilerFrame(Spectre::Engine::RenderOutput *this, int a2)
{
  __int64 v4; // rax
  Spectre::Engine::Engine *Engine; // rax
  struct Spectre::Utils::IConfigurationManager *Configuration; // rdi
  char v7; // bl
  char v8; // r14
  char v9; // r15
  char v10; // r12
  char v11; // r13
  char v12; // al
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rbx
  _QWORD *CommandList; // rax
  _QWORD *v17; // rax
  Spectre::Engine::RenderDevice *v18; // [rsp+20h] [rbp-58h] BYREF
  std::_Ref_count_base *v19; // [rsp+28h] [rbp-50h]
  _BYTE v20[8]; // [rsp+30h] [rbp-48h] BYREF
  std::_Ref_count_base *v21; // [rsp+38h] [rbp-40h]
  __int64 v22; // [rsp+40h] [rbp-38h] BYREF
  char v23; // [rsp+80h] [rbp+8h]
  char v24; // [rsp+90h] [rbp+18h]

  v4 = (*(__int64 (__fastcall **)(Spectre::Engine::RenderOutput *, _BYTE *))(*(_QWORD *)this + 376LL))(this, v20);
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock(v4, &v18);
  if ( v21 )
    std::_Ref_count_base::_Decwref(v21);
  if ( v18 )
  {
    Engine = Spectre::Engine::RenderDevice::GetEngine(v18);
    Configuration = Spectre::Engine::Engine::GetConfiguration(Engine, a2);
    v7 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
           Configuration,
           &Spectre::Engine::ConfigurationProperties::kGpuProfiling_DisplayFrameTimings,
           0LL);
    v8 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
           Configuration,
           &Spectre::Engine::ConfigurationProperties::kGpuProfiling_DisplayDetailFrameTimings,
           0LL);
    v9 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
           Configuration,
           &Spectre::Engine::ConfigurationProperties::kGpuProfiling_DisplaySubmittedVertices,
           0LL);
    v10 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kGpuProfiling_DisplaySubmittedPrimitives,
            0LL);
    v11 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kGpuProfiling_DisplayVertexShaderInvocations,
            0LL);
    v23 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kGpuProfiling_DisplayPixelShaderInvocations,
            0LL);
    v24 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kGpuProfiling_DisplayClippingPrimitivesInvoked,
            0LL);
    v12 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kGpuProfiling_DisplayClippingPrimitivesEmitted,
            0LL);
    v13 = v7 && !v8;
    if ( v9 )
      v13 = (unsigned int)v13 | 2;
    if ( v10 )
      v13 = (unsigned int)v13 | 4;
    if ( v11 )
      v13 = (unsigned int)v13 | 8;
    if ( v23 )
      v13 = (unsigned int)v13 | 0x40;
    if ( v24 )
      v13 = (unsigned int)v13 | 0x10;
    if ( v12 )
      v13 = (unsigned int)v13 | 0x20;
    Spectre::Engine::GpuProfilingGrapher::Render(*((_QWORD *)this + 57), v18, v13);
    v14 = *((_QWORD *)this + 55);
    v15 = *((_QWORD *)this + 60);
    CommandList = (_QWORD *)Spectre::Engine::RenderDevice::GetCommandList((__int64)v18);
    v17 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
            &v22,
            CommandList);
    Spectre::Engine::GpuProfiler::BeginFrame(v14, v17, v15);
  }
  if ( v19 )
    std::_Ref_count_base::_Decref(v19);
}
