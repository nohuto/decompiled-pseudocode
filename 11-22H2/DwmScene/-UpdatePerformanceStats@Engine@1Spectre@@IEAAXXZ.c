/*
 * XREFs of ?UpdatePerformanceStats@Engine@1Spectre@@IEAAXXZ @ 0x1800374F8
 * Callers:
 *     ?FrameTick@Engine@1Spectre@@UEAAXAEAV?$unique_lock@VMutex@Engine@Spectre@@@std@@@Z @ 0x180033C20 (-FrameTick@Engine@1Spectre@@UEAAXAEAV-$unique_lock@VMutex@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x180011CA0 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ?_Tidy_deallocate@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXXZ @ 0x180013348 (-_Tidy_deallocate@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001E33C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     ??$GetDurationMilliseconds@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Engine@Spectre@@YAMV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z @ 0x180024B40 (--$GetDurationMilliseconds@V-$duration@_JU-$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Engine@Spect.c)
 *     ??4?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800320AC (--4-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?AddDataPoint@ProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@QEAAXM@Z @ 0x180032820 (-AddDataPoint@ProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@QEAAXM@Z.c)
 *     ?GetCpuProfiler@Engine@1Spectre@@QEBA?AV?$shared_ptr@VCpuProfiler@Engine@Spectre@@@std@@XZ @ 0x18003405C (-GetCpuProfiler@Engine@1Spectre@@QEBA-AV-$shared_ptr@VCpuProfiler@Engine@Spectre@@@std@@XZ.c)
 *     ?GetFrameStartTime@CpuProfiler@Engine@Spectre@@QEBA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@XZ @ 0x1800A03BC (-GetFrameStartTime@CpuProfiler@Engine@Spectre@@QEBA-AV-$time_point@Usteady_clock@chrono@std@@V-$.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::Engine::UpdatePerformanceStats(Spectre::Engine::Engine *this)
{
  __int64 v2; // rdi
  _DWORD *FrameStartTime; // rbx
  _QWORD *v4; // rax
  float v5; // xmm0_4
  __int64 v6; // rax
  float v7; // xmm1_4
  __int64 v8; // [rsp+20h] [rbp-68h] BYREF
  std::_Ref_count_base *v9; // [rsp+28h] [rbp-60h]
  _BYTE v10[8]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v11; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v12[4]; // [rsp+40h] [rbp-48h] BYREF

  Spectre::Engine::Engine::GetCpuProfiler((__int64)this, &v8);
  v2 = v8;
  FrameStartTime = (_DWORD *)Spectre::Engine::CpuProfiler::GetFrameStartTime(v8, v10);
  v4 = std::chrono::steady_clock::now(&v11);
  v5 = Spectre::Engine::GetDurationMilliseconds<std::chrono::duration<__int64,std::ratio<1,1000000000>>>(*(_DWORD *)v4 - *FrameStartTime);
  v6 = *(_QWORD *)(v2 + 280);
  if ( *(_QWORD *)(v2 + 272) == v6 )
    v7 = FLOAT_N3_4028235e38;
  else
    v7 = *(float *)(v6 - 4);
  std::wstring::wstring(v12, (__int64)L"CPU");
  std::wstring::operator=((char *)this + 1392, (char *)v12);
  std::wstring::_Tidy_deallocate((__int64)v12);
  Spectre::Utils::TelemetryTraceLogger::ProfileDataBase::AddDataPoint(
    (Spectre::Engine::Engine *)((char *)this + 1368),
    v5 - v7);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
}
