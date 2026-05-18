/*
 * XREFs of ?FrameTick@Engine@1Spectre@@UEAAXAEAV?$unique_lock@VMutex@Engine@Spectre@@@std@@@Z @ 0x180033C20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$?0VScene@Engine@Spectre@@$0A@@?$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VScene@Engine@Spectre@@@1@@Z @ 0x180015604 (--$-0VScene@Engine@Spectre@@$0A@@-$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV-$shared_ptr@V.c)
 *     ??0PerformanceScope@Utils@Spectre@@QEAA@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@PEBDH11_N@Z @ 0x18001FD1C (--0PerformanceScope@Utils@Spectre@@QEAA@V-$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@PE.c)
 *     ??1PerformanceScope@Utils@Spectre@@QEAA@XZ @ 0x18001FE24 (--1PerformanceScope@Utils@Spectre@@QEAA@XZ.c)
 *     ?VerifyExclusiveLock@Lockable@Engine@Spectre@@QEBAXXZ @ 0x18002A2F0 (-VerifyExclusiveLock@Lockable@Engine@Spectre@@QEBAXXZ.c)
 *     ??0CpuProfilerScope@Engine@Spectre@@QEAA@AEBV?$weak_ptr@VCpuProfiler@Engine@Spectre@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z @ 0x180030F54 (--0CpuProfilerScope@Engine@Spectre@@QEAA@AEBV-$weak_ptr@VCpuProfiler@Engine@Spectre@@@std@@AEBV-.c)
 *     ??1CpuProfilerScope@Engine@Spectre@@QEAA@XZ @ 0x180031C70 (--1CpuProfilerScope@Engine@Spectre@@QEAA@XZ.c)
 *     ?BeginCpuProfilerFrame@Engine@1Spectre@@IEAAXXZ @ 0x1800329B4 (-BeginCpuProfilerFrame@Engine@1Spectre@@IEAAXXZ.c)
 *     ?GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z @ 0x180034014 (-GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z.c)
 *     ?GetCpuProfiler@Engine@1Spectre@@QEBA?AV?$shared_ptr@VCpuProfiler@Engine@Spectre@@@std@@XZ @ 0x18003405C (-GetCpuProfiler@Engine@1Spectre@@QEBA-AV-$shared_ptr@VCpuProfiler@Engine@Spectre@@@std@@XZ.c)
 *     ?GetDevice@Engine@1Spectre@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@I@Z @ 0x180034148 (-GetDevice@Engine@1Spectre@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@I@Z.c)
 *     ?GetDeviceCount@Engine@1Spectre@@QEBAIXZ @ 0x1800341E4 (-GetDeviceCount@Engine@1Spectre@@QEBAIXZ.c)
 *     ?ProcessNewResources@Engine@1Spectre@@IEAAXXZ @ 0x180035AA8 (-ProcessNewResources@Engine@1Spectre@@IEAAXXZ.c)
 *     ?RemoveInvalidDevices@Engine@1Spectre@@IEAAXXZ @ 0x180035CAC (-RemoveInvalidDevices@Engine@1Spectre@@IEAAXXZ.c)
 *     ?RenderDisplays@Engine@1Spectre@@IEAAXXZ @ 0x18003633C (-RenderDisplays@Engine@1Spectre@@IEAAXXZ.c)
 *     ?RenderPerformanceStats@Engine@1Spectre@@IEAAXXZ @ 0x180036478 (-RenderPerformanceStats@Engine@1Spectre@@IEAAXXZ.c)
 *     ?UpdateFrameTime@Engine@1Spectre@@IEAAXXZ @ 0x180036FD0 (-UpdateFrameTime@Engine@1Spectre@@IEAAXXZ.c)
 *     ?UpdatePerformanceStats@Engine@1Spectre@@IEAAXXZ @ 0x1800374F8 (-UpdatePerformanceStats@Engine@1Spectre@@IEAAXXZ.c)
 *     ?UpdateStatistics@Engine@1Spectre@@IEAAXXZ @ 0x180037D40 (-UpdateStatistics@Engine@1Spectre@@IEAAXXZ.c)
 *     ?WaitForAsyncDisplayPresents@Engine@1Spectre@@IEAAXXZ @ 0x180037E8C (-WaitForAsyncDisplayPresents@Engine@1Spectre@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall Spectre::Engine::Engine::FrameTick(Spectre::Engine::Engine *this)
{
  _QWORD *v2; // rax
  _QWORD *CpuProfiler; // rax
  __int64 v4; // rdi
  struct Spectre::Utils::IConfigurationManager *Configuration; // rax
  unsigned int v6; // eax
  __int64 v7; // [rsp+40h] [rbp-59h] BYREF
  std::_Ref_count_base *v8; // [rsp+48h] [rbp-51h]
  _BYTE v9[8]; // [rsp+50h] [rbp-49h] BYREF
  std::_Ref_count_base *v10; // [rsp+58h] [rbp-41h]
  __int64 v11[4]; // [rsp+60h] [rbp-39h] BYREF
  _QWORD v12[8]; // [rsp+80h] [rbp-19h] BYREF
  _QWORD v13[4]; // [rsp+C0h] [rbp+27h] BYREF

  Spectre::Engine::Lockable::VerifyExclusiveLock((Spectre::Engine::Engine *)((char *)this + 8));
  Spectre::Engine::Engine::WaitForAsyncDisplayPresents(this);
  Spectre::Engine::Engine::BeginCpuProfilerFrame(this);
  v2 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         &v7,
         (_QWORD *)this + 58);
  Spectre::Utils::PerformanceScope::PerformanceScope(
    v12,
    v2,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    819,
    (__int64)"FrameTick",
    (__int64)"FrameTick");
  std::string::string(v13, (__int64)"FrameTick");
  CpuProfiler = (_QWORD *)Spectre::Engine::Engine::GetCpuProfiler(this, v9);
  std::weak_ptr<Spectre::Engine::Scene>::weak_ptr<Spectre::Engine::Scene>(&v7, CpuProfiler);
  Spectre::Engine::CpuProfilerScope::CpuProfilerScope(v11, (__int64)&v7);
  if ( v8 )
    std::_Ref_count_base::_Decwref(v8);
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  std::string::_Tidy_deallocate((__int64)v13);
  Spectre::Engine::Engine::ProcessNewResources(this);
  if ( Spectre::Engine::Engine::GetDeviceCount(this) > 1 )
  {
    Spectre::Engine::Engine::GetDevice(this);
    v4 = v7;
    if ( v7 )
    {
      Configuration = Spectre::Engine::Engine::GetConfiguration(this, 1);
      v6 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64))(*(_QWORD *)Configuration + 72LL))(
             Configuration,
             &Spectre::Engine::ConfigurationProperties::kRenderer_FrameLatencyMaximum,
             1LL);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 224LL))(v4, v6);
    }
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
    Spectre::Engine::Engine::UpdateStatistics(this);
    Spectre::Engine::Engine::UpdateFrameTime(this);
    (*(void (__fastcall **)(Spectre::Engine::Engine *))(*(_QWORD *)this + 72LL))(this);
    Spectre::Engine::Engine::RenderPerformanceStats(this);
    Spectre::Engine::Engine::RenderDisplays(this);
    Spectre::Engine::Engine::RemoveInvalidDevices(this);
    Spectre::Engine::CpuProfilerScope::~CpuProfilerScope((Spectre::Engine::CpuProfilerScope *)v11);
    Spectre::Utils::PerformanceScope::~PerformanceScope((Spectre::Utils::PerformanceScope *)v12);
    Spectre::Engine::Engine::UpdatePerformanceStats(this);
  }
  else
  {
    Spectre::Engine::CpuProfilerScope::~CpuProfilerScope((Spectre::Engine::CpuProfilerScope *)v11);
    Spectre::Utils::PerformanceScope::~PerformanceScope((Spectre::Utils::PerformanceScope *)v12);
  }
}
