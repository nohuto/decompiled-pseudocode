/*
 * XREFs of ?UpdateGpuProfiler@RenderOutput@Engine@Spectre@@UEAAXH@Z @ 0x18002CDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ?HasSubscriber@PerformanceLogger@Utils@Spectre@@QEBA_NXZ @ 0x18002034C (-HasSubscriber@PerformanceLogger@Utils@Spectre@@QEBA_NXZ.c)
 *     ?GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ @ 0x180026598 (-GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     ??4?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18002BA4C (--4-$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V-$allocator@UResult@GpuProfilerFrame@Engin.c)
 *     ?GetGpuProfilerResults@RenderOutput@Engine@Spectre@@IEAA?AV?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@XZ @ 0x18002C040 (-GetGpuProfilerResults@RenderOutput@Engine@Spectre@@IEAA-AV-$vector@UResult@GpuProfilerFrame@Eng.c)
 *     ?LogGpuProfilingData@RenderOutput@Engine@Spectre@@AEAAXXZ @ 0x18002C56C (-LogGpuProfilingData@RenderOutput@Engine@Spectre@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@AEAAXXZ @ 0x18002D504 (-_Tidy@-$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V-$allocator@UResult@GpuProfilerFrame@E.c)
 *     ?GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z @ 0x180034014 (-GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z.c)
 *     ?GetSymbolManager@Engine@1Spectre@@QEAAAEAVISymbolManager@12@XZ @ 0x180034800 (-GetSymbolManager@Engine@1Spectre@@QEAAAEAVISymbolManager@12@XZ.c)
 *     ?FrameTick@GpuProfilingGrapher@Engine@Spectre@@UEAAXAEBV?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@@Z @ 0x1800741A0 (-FrameTick@GpuProfilingGrapher@Engine@Spectre@@UEAAXAEBV-$vector@UResult@GpuProfilerFrame@Engine.c)
 *     ?SetEnabled@GpuProfiler@Engine@Spectre@@QEAAX_N@Z @ 0x1800A14D8 (-SetEnabled@GpuProfiler@Engine@Spectre@@QEAAX_N@Z.c)
 *     ?SetLowFidelityEnabled@GpuProfiler@Engine@Spectre@@QEAAX_N@Z @ 0x1800A14EC (-SetLowFidelityEnabled@GpuProfiler@Engine@Spectre@@QEAAX_N@Z.c)
 *     ?Update@GpuProfiler@Engine@Spectre@@QEAAXXZ @ 0x1800A16DC (-Update@GpuProfiler@Engine@Spectre@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::RenderOutput::UpdateGpuProfiler(Spectre::Engine::RenderOutput *this, int a2)
{
  __int64 v4; // rax
  Spectre::Engine::RenderDevice *v5; // rbx
  Spectre::Engine::Engine *Engine; // rax
  struct Spectre::Utils::IConfigurationManager *Configuration; // r14
  Spectre::Engine::GpuProfiler **v8; // r15
  Spectre::Utils::PerformanceLogger *v9; // rcx
  bool v10; // bl
  bool v11; // si
  char v12; // bp
  char v13; // r10
  char v14; // bl
  char v15; // r14
  _QWORD *GpuProfilerResults; // rax
  Spectre::Engine::Engine *v17; // rcx
  Spectre::Engine::RenderDevice *v18; // [rsp+20h] [rbp-58h] BYREF
  std::_Ref_count_base *v19; // [rsp+28h] [rbp-50h]
  __int64 v20; // [rsp+30h] [rbp-48h] BYREF
  std::_Ref_count_base *v21; // [rsp+38h] [rbp-40h]
  _BYTE v22[32]; // [rsp+40h] [rbp-38h] BYREF

  v4 = (*(__int64 (__fastcall **)(Spectre::Engine::RenderOutput *, __int64 *))(*(_QWORD *)this + 376LL))(this, &v20);
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock(v4, &v18);
  if ( v21 )
    std::_Ref_count_base::_Decwref(v21);
  v5 = v18;
  if ( v18 )
  {
    Engine = Spectre::Engine::RenderDevice::GetEngine(v18);
    Configuration = Spectre::Engine::Engine::GetConfiguration(Engine, a2);
    v8 = (Spectre::Engine::GpuProfiler **)(*(__int64 (__fastcall **)(Spectre::Engine::RenderOutput *))(*(_QWORD *)this + 184LL))(this);
    if ( (*(unsigned __int8 (__fastcall **)(Spectre::Engine::RenderDevice *, __int64))(*(_QWORD *)v5 + 96LL))(v5, 5LL) )
    {
      v9 = (Spectre::Utils::PerformanceLogger *)*((_QWORD *)this + 48);
      v10 = 1;
      v11 = v9 && (unsigned __int8)Spectre::Utils::PerformanceLogger::HasSubscriber(v9);
      v12 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
              Configuration,
              &Spectre::Engine::ConfigurationProperties::kGpuProfiling_Enabled,
              0LL);
      (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration
                                                                                             + 64LL))(
        Configuration,
        &Spectre::Engine::ConfigurationProperties::kGpuProfiling_EnabledHighFidelity,
        0LL);
      Spectre::Engine::GpuProfiler::SetEnabled(*v8, v12);
      if ( v13 || v11 || *((_BYTE *)this + 400) )
        v10 = 0;
      Spectre::Engine::GpuProfiler::SetLowFidelityEnabled(*v8, v10);
      if ( v12 )
      {
        Spectre::Engine::GpuProfiler::Update(*v8);
        v14 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
                Configuration,
                &Spectre::Engine::ConfigurationProperties::kGpuProfiling_DisplayFrameTimings,
                0LL);
        v15 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
                Configuration,
                &Spectre::Engine::ConfigurationProperties::kGpuProfiling_DisplayDetailFrameTimings,
                0LL);
        GpuProfilerResults = (_QWORD *)Spectre::Engine::RenderOutput::GetGpuProfilerResults(this, (__int64)v22);
        std::vector<Spectre::Engine::GpuProfilerFrame::Result>::operator=((_QWORD *)this + 52, GpuProfilerResults);
        std::vector<Spectre::Engine::GpuProfilerFrame::Result>::_Tidy(v22);
        if ( v14 )
        {
          if ( v15 )
          {
            if ( *((_QWORD *)this + 53) != *((_QWORD *)this + 52) )
              Spectre::Engine::Engine::GetSymbolManager(v17);
          }
          else
          {
            Spectre::Engine::GpuProfilingGrapher::FrameTick(*((_QWORD *)this + 57), (char *)this + 416);
          }
        }
        if ( v11 )
          Spectre::Engine::RenderOutput::LogGpuProfilingData(this);
      }
    }
  }
  if ( v19 )
    std::_Ref_count_base::_Decref(v19);
}
