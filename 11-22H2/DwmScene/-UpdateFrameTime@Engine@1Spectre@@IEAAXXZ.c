/*
 * XREFs of ?UpdateFrameTime@Engine@1Spectre@@IEAAXXZ @ 0x180036FD0
 * Callers:
 *     ?FrameTick@Engine@1Spectre@@UEAAXAEAV?$unique_lock@VMutex@Engine@Spectre@@@std@@@Z @ 0x180033C20 (-FrameTick@Engine@1Spectre@@UEAAXAEAV-$unique_lock@VMutex@Engine@Spectre@@@std@@@Z.c)
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
 *     ??$GetDurationMilliseconds@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Engine@Spectre@@YAMV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z @ 0x180024B40 (--$GetDurationMilliseconds@V-$duration@_JU-$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Engine@Spect.c)
 *     ??$GetDurationSeconds@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Engine@Spectre@@YAMV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z @ 0x18002E000 (--$GetDurationSeconds@V-$duration@_JU-$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Engine@Spectre@@Y.c)
 *     ??0CpuProfilerScope@Engine@Spectre@@QEAA@AEBV?$weak_ptr@VCpuProfiler@Engine@Spectre@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z @ 0x180030F54 (--0CpuProfilerScope@Engine@Spectre@@QEAA@AEBV-$weak_ptr@VCpuProfiler@Engine@Spectre@@@std@@AEBV-.c)
 *     ??1CpuProfilerScope@Engine@Spectre@@QEAA@XZ @ 0x180031C70 (--1CpuProfilerScope@Engine@Spectre@@QEAA@XZ.c)
 *     ?GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z @ 0x180034014 (-GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z.c)
 *     ?GetCpuProfiler@Engine@1Spectre@@QEBA?AV?$shared_ptr@VCpuProfiler@Engine@Spectre@@@std@@XZ @ 0x18003405C (-GetCpuProfiler@Engine@1Spectre@@QEBA-AV-$shared_ptr@VCpuProfiler@Engine@Spectre@@@std@@XZ.c)
 *     _anonymous_namespace_::GetFirstRenderOutput @ 0x18003431C (_anonymous_namespace_--GetFirstRenderOutput.c)
 *     ?GetSymbolManager@Engine@1Spectre@@QEAAAEAVISymbolManager@12@XZ @ 0x180034800 (-GetSymbolManager@Engine@1Spectre@@QEAAAEAVISymbolManager@12@XZ.c)
 *     ?SetTimeStep@FrameData@Engine@Spectre@@QEAAXM@Z @ 0x180074440 (-SetTimeStep@FrameData@Engine@Spectre@@QEAAXM@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall Spectre::Engine::Engine::UpdateFrameTime(Spectre::Engine::Engine *this)
{
  _QWORD *v2; // rax
  _QWORD *CpuProfiler; // rax
  unsigned __int64 v4; // rsi
  __int64 v5; // rax
  int v6; // ebx
  int v7; // ecx
  float v8; // xmm0_4
  float v9; // xmm1_4
  struct Spectre::Utils::IConfigurationManager *Configuration; // r14
  unsigned int v11; // eax
  __int64 v12; // [rsp+40h] [rbp-79h] BYREF
  std::_Ref_count_base *v13; // [rsp+48h] [rbp-71h]
  __int64 v14; // [rsp+50h] [rbp-69h] BYREF
  std::_Ref_count_base *v15; // [rsp+58h] [rbp-61h]
  __int64 v16; // [rsp+60h] [rbp-59h] BYREF
  std::_Ref_count_base *v17; // [rsp+68h] [rbp-51h]
  __int64 v18[4]; // [rsp+70h] [rbp-49h] BYREF
  _QWORD v19[8]; // [rsp+90h] [rbp-29h] BYREF
  _QWORD v20[4]; // [rsp+D0h] [rbp+17h] BYREF

  v2 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         &v14,
         (_QWORD *)this + 58);
  Spectre::Utils::PerformanceScope::PerformanceScope(
    v19,
    v2,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    640,
    (__int64)"UpdateFrameTime",
    (__int64)"UpdateFrameTime");
  std::string::string(v20, (__int64)"UpdateFrameTime");
  CpuProfiler = Spectre::Engine::Engine::GetCpuProfiler((__int64)this, &v16);
  std::weak_ptr<Spectre::Engine::Scene>::weak_ptr<Spectre::Engine::Scene>(&v12, CpuProfiler);
  Spectre::Engine::CpuProfilerScope::CpuProfilerScope(v18, (__int64)&v12);
  if ( v13 )
    std::_Ref_count_base::_Decwref(v13);
  if ( v17 )
    std::_Ref_count_base::_Decref(v17);
  std::string::_Tidy_deallocate((__int64)v20);
  anonymous_namespace_::GetFirstRenderOutput((__int64)&v14, (__int64)this);
  if ( v14 )
    v4 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 328LL))(v14, &v12);
  else
    v4 = 0x8000000000000000uLL;
  v5 = *((_QWORD *)this + 116);
  if ( v5 == 0x8000000000000000uLL || v4 == 0x8000000000000000uLL )
    v6 = 0;
  else
    v6 = v4 - v5;
  v7 = *((_DWORD *)this + 240);
  if ( v7 )
  {
    if ( v7 == 1 )
      *((_DWORD *)this + 234) = *((_DWORD *)this + 239);
  }
  else
  {
    v8 = Spectre::Engine::GetDurationSeconds<std::chrono::duration<__int64,std::ratio<1,1000000000>>>(v6);
    *((float *)this + 234) = v8;
    v9 = *((float *)this + 238);
    if ( v8 > v9 )
      *((float *)this + 234) = v9;
  }
  Configuration = Spectre::Engine::Engine::GetConfiguration(this, 1);
  if ( (*(unsigned __int8 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
         Configuration,
         &Spectre::Engine::ConfigurationProperties::kCpuProfiling_DisplayFrameTimings,
         0LL)
    || (*(unsigned __int8 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
         Configuration,
         &Spectre::Engine::ConfigurationProperties::kGpuProfiling_DisplayFrameTimings,
         0LL) )
  {
    *((float *)this + *((unsigned int *)this + 268) + 248) = Spectre::Engine::GetDurationMilliseconds<std::chrono::duration<__int64,std::ratio<1,1000000000>>>(v6);
    *((_DWORD *)this + 268) = (*((_DWORD *)this + 268) + 1) % 0x14u;
    v11 = *((_DWORD *)this + 269) + 1;
    if ( v11 > 0x14 )
      v11 = 20;
    *((_DWORD *)this + 269) = v11;
    Spectre::Engine::Engine::GetSymbolManager((Spectre::Engine::Engine *)0x14);
  }
  *((_QWORD *)this + 116) = v4;
  Spectre::Engine::FrameData::SetTimeStep((Spectre::Engine::Engine *)((char *)this + 368), *((float *)this + 234));
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
  Spectre::Engine::CpuProfilerScope::~CpuProfilerScope((Spectre::Engine::CpuProfilerScope *)v18);
  Spectre::Utils::PerformanceScope::~PerformanceScope((Spectre::Utils::PerformanceScope *)v19);
}
