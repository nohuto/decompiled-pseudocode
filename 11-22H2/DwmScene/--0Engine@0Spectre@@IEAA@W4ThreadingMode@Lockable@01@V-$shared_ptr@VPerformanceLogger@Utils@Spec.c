/*
 * XREFs of ??0Engine@0Spectre@@IEAA@W4ThreadingMode@Lockable@01@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@V?$shared_ptr@VITelemetryManager@Utils@Spectre@@@5@V?$shared_ptr@VITelemetryTraceLogger@Utils@Spectre@@@5@@Z @ 0x180030FC8
 * Callers:
 *     ??0ViewerEngine@Engine@Spectre@@IEAA@W4ThreadingMode@Lockable@12@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@V?$shared_ptr@VITelemetryManager@Utils@Spectre@@@6@V?$shared_ptr@VITelemetryTraceLogger@Utils@Spectre@@@6@@Z @ 0x180063D48 (--0ViewerEngine@Engine@Spectre@@IEAA@W4ThreadingMode@Lockable@12@V-$shared_ptr@VPerformanceLogge.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x180011CA0 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??0Lockable@Engine@Spectre@@QEAA@W4ThreadingMode@012@@Z @ 0x180029EDC (--0Lockable@Engine@Spectre@@QEAA@W4ThreadingMode@012@@Z.c)
 *     ??$?0$$V@?$_Ref_count_obj2@VCpuProfiler@Engine@Spectre@@@std@@QEAA@XZ @ 0x18002D564 (--$-0$$V@-$_Ref_count_obj2@VCpuProfiler@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ??$make_shared@VShaderManager@Engine@Spectre@@PEAV223@@std@@YA?AV?$shared_ptr@VShaderManager@Engine@Spectre@@@0@$$QEAPEAVEngine@2Spectre@@@Z @ 0x18003056C (--$make_shared@VShaderManager@Engine@Spectre@@PEAV223@@std@@YA-AV-$shared_ptr@VShaderManager@Eng.c)
 *     ??$make_unique@VCpuProfileStatsRenderer@Engine@Spectre@@$$V$0A@@std@@YA?AV?$unique_ptr@VCpuProfileStatsRenderer@Engine@Spectre@@U?$default_delete@VCpuProfileStatsRenderer@Engine@Spectre@@@std@@@0@XZ @ 0x180030900 (--$make_unique@VCpuProfileStatsRenderer@Engine@Spectre@@$$V$0A@@std@@YA-AV-$unique_ptr@VCpuProfi.c)
 *     ??0EngineDescription@Engine@Spectre@@QEAA@XZ @ 0x18003145C (--0EngineDescription@Engine@Spectre@@QEAA@XZ.c)
 *     ??0GpuProfileData@TelemetryTraceLogger@Utils@Spectre@@QEAA@XZ @ 0x1800314DC (--0GpuProfileData@TelemetryTraceLogger@Utils@Spectre@@QEAA@XZ.c)
 *     ??0Input@Engine@Spectre@@QEAA@XZ @ 0x18003152C (--0Input@Engine@Spectre@@QEAA@XZ.c)
 *     ??0ProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@QEAA@XZ @ 0x18003158C (--0ProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@QEAA@XZ.c)
 *     ?CreateConfiguration@Engine@1Spectre@@QEAAHH@Z @ 0x180032B8C (-CreateConfiguration@Engine@1Spectre@@QEAAHH@Z.c)
 *     ?Startup@ShaderManager@Engine@Spectre@@QEAAXXZ @ 0x1800509E8 (-Startup@ShaderManager@Engine@Spectre@@QEAAXXZ.c)
 *     ??0FrameData@Engine@Spectre@@QEAA@XZ @ 0x180074370 (--0FrameData@Engine@Spectre@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=33
Spectre::Engine::Engine *__fastcall Spectre::Engine::Engine::Engine(
        Spectre::Engine::Engine *this,
        int a2,
        struct Spectre::Engine::Engine *a3,
        struct Spectre::Engine::Engine *a4,
        struct Spectre::Engine::Engine *a5)
{
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // r8
  _QWORD *v12; // rax
  void *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  int v16; // edx
  __int64 *v17; // rax
  HANDLE CurrentProcess; // rax
  std::_Ref_count_base *v19; // rcx
  std::_Ref_count_base *v20; // rcx
  std::_Ref_count_base *v21; // rcx
  struct Spectre::Engine::Engine *v23[5]; // [rsp+20h] [rbp-81h] BYREF
  __int64 v24; // [rsp+48h] [rbp-59h] BYREF
  std::_Ref_count_base *v25; // [rsp+50h] [rbp-51h]
  PROCESS_MEMORY_COUNTERS ppsmemCounters; // [rsp+60h] [rbp-41h] BYREF

  v23[1] = this;
  v23[2] = a3;
  v23[3] = a4;
  v23[4] = a5;
  Spectre::Engine::Lockable::Lockable((__int64)this + 8, a2);
  *(_QWORD *)this = &Spectre::Engine::Engine::`vftable';
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  Spectre::Engine::Lockable::Lockable((__int64)this + 112, a2);
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *v9 = v9;
  v9[1] = v9;
  *((_QWORD *)this + 21) = v9;
  v23[0] = (Spectre::Engine::Engine *)((char *)this + 184);
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x40uLL);
  *v10 = v10;
  v10[1] = v10;
  v10[2] = v10;
  *((_WORD *)v10 + 12) = 257;
  *((_QWORD *)this + 23) = v10;
  Spectre::Engine::Input::Input((Spectre::Engine::Engine *)((char *)this + 200));
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  Spectre::Engine::Lockable::Lockable((__int64)this + 312, a2);
  Spectre::Engine::FrameData::FrameData((Spectre::Engine::Engine *)((char *)this + 368));
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 58) = *(_QWORD *)a3;
  *((_QWORD *)this + 59) = *((_QWORD *)a3 + 1);
  *(_QWORD *)a3 = 0LL;
  *((_QWORD *)a3 + 1) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 60) = *(_QWORD *)a4;
  *((_QWORD *)this + 61) = *((_QWORD *)a4 + 1);
  *(_QWORD *)a4 = 0LL;
  *((_QWORD *)a4 + 1) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 62) = *(_QWORD *)a5;
  *((_QWORD *)this + 63) = *((_QWORD *)a5 + 1);
  *(_QWORD *)a5 = 0LL;
  *((_QWORD *)a5 + 1) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  Spectre::Engine::EngineDescription::EngineDescription((Spectre::Engine::Engine *)((char *)this + 528));
  *((_DWORD *)this + 174) = v11;
  *((_QWORD *)this + 88) = v11;
  *((_QWORD *)this + 89) = v11;
  *((_QWORD *)this + 90) = v11;
  v23[0] = (Spectre::Engine::Engine *)((char *)this + 728);
  *((_QWORD *)this + 91) = v11;
  *((_QWORD *)this + 92) = v11;
  v12 = operator new((unsigned int)(v11 + 72));
  *v12 = v12;
  v12[1] = v12;
  v12[2] = v12;
  *((_WORD *)v12 + 12) = 257;
  *((_QWORD *)this + 91) = v12;
  *((_BYTE *)this + 744) = 1;
  *(_OWORD *)((char *)this + 748) = 0LL;
  *(_OWORD *)((char *)this + 764) = 0LL;
  *(_OWORD *)((char *)this + 780) = 0LL;
  *(_QWORD *)((char *)this + 796) = 0LL;
  *((_DWORD *)this + 201) = 0;
  Spectre::Engine::Lockable::Lockable((__int64)this + 808, a2);
  *((_QWORD *)this + 108) = 0LL;
  *((_QWORD *)this + 109) = 0LL;
  *((_QWORD *)this + 110) = 0LL;
  *((_QWORD *)this + 111) = 0LL;
  *((_QWORD *)this + 112) = 0LL;
  *((_QWORD *)this + 113) = 0LL;
  *((_QWORD *)this + 114) = 0LL;
  *((_QWORD *)this + 115) = 0LL;
  *((_QWORD *)this + 116) = 0x8000000000000000uLL;
  *((_DWORD *)this + 234) = 0;
  *((_QWORD *)this + 118) = 1LL;
  *((_DWORD *)this + 238) = 2139095039;
  *(_QWORD *)((char *)this + 956) = 1023960469LL;
  v13 = operator new(0x138uLL);
  if ( v13 )
    v14 = std::_Ref_count_obj2<Spectre::Engine::CpuProfiler>::_Ref_count_obj2<Spectre::Engine::CpuProfiler>((__int64)v13);
  else
    v14 = 0LL;
  *((_QWORD *)this + 121) = v14 + 16;
  *((_QWORD *)this + 122) = v14;
  std::make_unique<Spectre::Engine::CpuProfileStatsRenderer,,0>((__int64 *)this + 123);
  *((_QWORD *)this + 134) = 0LL;
  *((_QWORD *)this + 135) = 0LL;
  *((_QWORD *)this + 136) = 0LL;
  v15 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v15 = v15;
  v15[1] = v15;
  v15[2] = v15;
  *((_WORD *)v15 + 12) = 257;
  *((_QWORD *)this + 135) = v15;
  *((_DWORD *)this + 274) = 1;
  Spectre::Engine::Lockable::Lockable((__int64)this + 1104, a2);
  *((_BYTE *)this + 1160) = 0;
  *((_QWORD *)this + 147) = 0LL;
  *((_OWORD *)this + 74) = 0LL;
  *((_DWORD *)this + 300) = 60;
  _Cnd_init_in_situ((Spectre::Engine::Engine *)((char *)this + 1208));
  _Mtx_init_in_situ((Spectre::Engine::Engine *)((char *)this + 1280), 2);
  Spectre::Utils::TelemetryTraceLogger::ProfileDataBase::ProfileDataBase((Spectre::Engine::Engine *)((char *)this + 1368));
  Spectre::Utils::TelemetryTraceLogger::GpuProfileData::GpuProfileData((Spectre::Engine::Engine *)((char *)this + 1424));
  Spectre::Engine::Engine::CreateConfiguration(this, v16);
  v23[0] = this;
  v17 = std::make_shared<Spectre::Engine::ShaderManager,Spectre::Engine::Engine *>(&v24, v23);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 64, v17);
  if ( v25 )
    std::_Ref_count_base::_Decref(v25);
  Spectre::Engine::ShaderManager::Startup(*((Spectre::Engine::ShaderManager **)this + 64));
  *((_QWORD *)this + 147) = *std::chrono::steady_clock::now(v23);
  CurrentProcess = GetCurrentProcess();
  K32GetProcessMemoryInfo(CurrentProcess, &ppsmemCounters, 0x48u);
  *((_QWORD *)this + 146) = ppsmemCounters.PeakWorkingSetSize;
  v19 = (std::_Ref_count_base *)*((_QWORD *)a3 + 1);
  if ( v19 )
    std::_Ref_count_base::_Decref(v19);
  v20 = (std::_Ref_count_base *)*((_QWORD *)a4 + 1);
  if ( v20 )
    std::_Ref_count_base::_Decref(v20);
  v21 = (std::_Ref_count_base *)*((_QWORD *)a5 + 1);
  if ( v21 )
    std::_Ref_count_base::_Decref(v21);
  return this;
}
