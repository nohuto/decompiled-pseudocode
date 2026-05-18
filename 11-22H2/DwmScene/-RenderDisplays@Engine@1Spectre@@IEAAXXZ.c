/*
 * XREFs of ?RenderDisplays@Engine@1Spectre@@IEAAXXZ @ 0x18003633C
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
 *     ??0CpuProfilerScope@Engine@Spectre@@QEAA@AEBV?$weak_ptr@VCpuProfiler@Engine@Spectre@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z @ 0x180030F54 (--0CpuProfilerScope@Engine@Spectre@@QEAA@AEBV-$weak_ptr@VCpuProfiler@Engine@Spectre@@@std@@AEBV-.c)
 *     ??1CpuProfilerScope@Engine@Spectre@@QEAA@XZ @ 0x180031C70 (--1CpuProfilerScope@Engine@Spectre@@QEAA@XZ.c)
 *     ?GetCpuProfiler@Engine@1Spectre@@QEBA?AV?$shared_ptr@VCpuProfiler@Engine@Spectre@@@std@@XZ @ 0x18003405C (-GetCpuProfiler@Engine@1Spectre@@QEBA-AV-$shared_ptr@VCpuProfiler@Engine@Spectre@@@std@@XZ.c)
 *     ?LogInstanceCounts@Engine@1Spectre@@AEBAXXZ @ 0x180034F18 (-LogInstanceCounts@Engine@1Spectre@@AEBAXXZ.c)
 *     ?GetRefreshPolicy@Display@Engine@Spectre@@QEBA?AW4RefreshPolicy@123@XZ @ 0x180057978 (-GetRefreshPolicy@Display@Engine@Spectre@@QEBA-AW4RefreshPolicy@123@XZ.c)
 *     ?Render@Display@Engine@Spectre@@QEAAXXZ @ 0x180057B28 (-Render@Display@Engine@Spectre@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall Spectre::Engine::Engine::RenderDisplays(Spectre::Engine::Engine *this)
{
  _QWORD *v2; // rax
  _QWORD *CpuProfiler; // rax
  __int64 ***v4; // rdi
  __int64 **i; // rbx
  __int64 v6; // [rsp+48h] [rbp-59h] BYREF
  std::_Ref_count_base *v7; // [rsp+50h] [rbp-51h]
  __int64 v8; // [rsp+58h] [rbp-49h] BYREF
  std::_Ref_count_base *v9; // [rsp+60h] [rbp-41h]
  __int64 v10[4]; // [rsp+68h] [rbp-39h] BYREF
  _QWORD v11[8]; // [rsp+88h] [rbp-19h] BYREF
  _QWORD v12[4]; // [rsp+C8h] [rbp+27h] BYREF

  v2 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         &v6,
         (_QWORD *)this + 58);
  Spectre::Utils::PerformanceScope::PerformanceScope(
    v11,
    v2,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    898,
    (__int64)"RenderDisplays",
    (__int64)"RenderDisplays");
  std::string::string(v12, (__int64)"RenderDisplays");
  CpuProfiler = Spectre::Engine::Engine::GetCpuProfiler((__int64)this, &v8);
  std::weak_ptr<Spectre::Engine::Scene>::weak_ptr<Spectre::Engine::Scene>(&v6, CpuProfiler);
  Spectre::Engine::CpuProfilerScope::CpuProfilerScope(v10, (__int64)&v6);
  if ( v7 )
    std::_Ref_count_base::_Decwref(v7);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  std::string::_Tidy_deallocate((__int64)v12);
  v4 = (__int64 ***)*((_QWORD *)this + 21);
  for ( i = *v4; i != (__int64 **)v4; i = (__int64 **)*i )
  {
    if ( (unsigned int)Spectre::Engine::Display::GetRefreshPolicy(i[2]) == 1 )
      Spectre::Engine::Display::Render((Spectre::Engine::Display *)i[2]);
  }
  Spectre::Engine::Engine::LogInstanceCounts(this);
  Spectre::Engine::CpuProfilerScope::~CpuProfilerScope((Spectre::Engine::CpuProfilerScope *)v10);
  Spectre::Utils::PerformanceScope::~PerformanceScope((Spectre::Utils::PerformanceScope *)v11);
}
