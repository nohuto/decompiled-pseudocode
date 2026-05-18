/*
 * XREFs of ?RemoveInvalidDevices@Engine@1Spectre@@IEAAXXZ @ 0x180035CAC
 * Callers:
 *     ?FrameTick@Engine@1Spectre@@UEAAXAEAV?$unique_lock@VMutex@Engine@Spectre@@@std@@@Z @ 0x180033C20 (-FrameTick@Engine@1Spectre@@UEAAXAEAV-$unique_lock@VMutex@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy@?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@std@@AEAAXXZ @ 0x180013300 (-_Tidy@-$vector@V-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VLigh.c)
 *     ??$?0VScene@Engine@Spectre@@$0A@@?$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VScene@Engine@Spectre@@@1@@Z @ 0x180015604 (--$-0VScene@Engine@Spectre@@$0A@@-$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV-$shared_ptr@V.c)
 *     ?Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ @ 0x18001DAE8 (-Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ.c)
 *     ??0PerformanceScope@Utils@Spectre@@QEAA@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@PEBDH11_N@Z @ 0x18001FD1C (--0PerformanceScope@Utils@Spectre@@QEAA@V-$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@PE.c)
 *     ??1PerformanceScope@Utils@Spectre@@QEAA@XZ @ 0x18001FE24 (--1PerformanceScope@Utils@Spectre@@QEAA@XZ.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     ??0?$vector@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x180030F18 (--0-$vector@V-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VRender.c)
 *     ??0CpuProfilerScope@Engine@Spectre@@QEAA@AEBV?$weak_ptr@VCpuProfiler@Engine@Spectre@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z @ 0x180030F54 (--0CpuProfilerScope@Engine@Spectre@@QEAA@AEBV-$weak_ptr@VCpuProfiler@Engine@Spectre@@@std@@AEBV-.c)
 *     ??1CpuProfilerScope@Engine@Spectre@@QEAA@XZ @ 0x180031C70 (--1CpuProfilerScope@Engine@Spectre@@QEAA@XZ.c)
 *     ?DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180033380 (-DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 *     ?GetCpuProfiler@Engine@1Spectre@@QEBA?AV?$shared_ptr@VCpuProfiler@Engine@Spectre@@@std@@XZ @ 0x18003405C (-GetCpuProfiler@Engine@1Spectre@@QEBA-AV-$shared_ptr@VCpuProfiler@Engine@Spectre@@@std@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall Spectre::Engine::Engine::RemoveInvalidDevices(Spectre::Engine::Engine *this)
{
  _QWORD *v2; // rax
  _QWORD *CpuProfiler; // rax
  Spectre::Engine::RenderDevice **v4; // rbx
  Spectre::Engine::RenderDevice **v5; // rdi
  __int64 v6; // [rsp+48h] [rbp-C0h] BYREF
  std::_Ref_count_base *v7; // [rsp+50h] [rbp-B8h]
  __int64 v8; // [rsp+58h] [rbp-B0h] BYREF
  std::_Ref_count_base *v9; // [rsp+60h] [rbp-A8h]
  _QWORD v10[3]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v11[16]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v12[3]; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v13[8]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v14[4]; // [rsp+E8h] [rbp-20h] BYREF

  v2 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         &v6,
         (_QWORD *)this + 58);
  Spectre::Utils::PerformanceScope::PerformanceScope(
    v13,
    v2,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    1719,
    (__int64)"RemoveInvalidDevices",
    (__int64)"RemoveInvalidDevices");
  std::string::string(v14, (__int64)"RemoveInvalidDevices");
  CpuProfiler = Spectre::Engine::Engine::GetCpuProfiler((__int64)this, &v8);
  std::weak_ptr<Spectre::Engine::Scene>::weak_ptr<Spectre::Engine::Scene>(&v6, CpuProfiler);
  Spectre::Engine::CpuProfilerScope::CpuProfilerScope(v12, (__int64)&v6);
  if ( v7 )
    std::_Ref_count_base::_Decwref(v7);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  std::string::_Tidy_deallocate((__int64)v14);
  Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((Spectre::Engine::Engine *)((char *)this + 112), (__int64)v11);
  std::vector<std::shared_ptr<Spectre::Engine::RenderDevice>>::vector<std::shared_ptr<Spectre::Engine::RenderDevice>>(
    v10,
    (__int64)this + 88);
  v4 = (Spectre::Engine::RenderDevice **)v10[0];
  v5 = (Spectre::Engine::RenderDevice **)v10[1];
  while ( v4 != v5 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(Spectre::Engine::RenderDevice *))(*(_QWORD *)*v4 + 16LL))(*v4) )
    {
      Trace::LevelSettingsWrapper::Output(&gTraceLevelsNativeRenderer_Engine, 3, "==============================");
      Trace::LevelSettingsWrapper::Output(&gTraceLevelsNativeRenderer_Engine, 3, "INVALID RENDER DEVICE DETECTED");
      Spectre::Engine::Lockable::GetExclusiveLockIfNecessary(
        (Spectre::Engine::RenderDevice *)((char *)*v4 + 24),
        (__int64)&v8);
      Spectre::Engine::Engine::DeleteDevice(this, v4);
      Trace::LevelSettingsWrapper::Output(&gTraceLevelsNativeRenderer_Engine, 3, "==============================");
      std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)&v8);
    }
    v4 += 2;
  }
  std::vector<std::shared_ptr<Spectre::Engine::LightProbe>>::_Tidy((__int64)v10);
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v11);
  Spectre::Engine::CpuProfilerScope::~CpuProfilerScope((Spectre::Engine::CpuProfilerScope *)v12);
  Spectre::Utils::PerformanceScope::~PerformanceScope((Spectre::Utils::PerformanceScope *)v13);
}
