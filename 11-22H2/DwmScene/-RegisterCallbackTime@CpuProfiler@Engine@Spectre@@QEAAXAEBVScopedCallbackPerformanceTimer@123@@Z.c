/*
 * XREFs of ?RegisterCallbackTime@CpuProfiler@Engine@Spectre@@QEAAXAEBVScopedCallbackPerformanceTimer@123@@Z @ 0x1800A03D0
 * Callers:
 *     ?PostRenderScene@Engine@1Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@4@@Z @ 0x180035470 (-PostRenderScene@Engine@1Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV-$share.c)
 *     ?PresentFrame@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@4@AEAV?$unique_lock@VMutex@Engine@Spectre@@@4@22@Z @ 0x18003565C (-PresentFrame@Engine@1Spectre@@IEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV-$s.c)
 *     ?RenderContent@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@4@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@4@@Z @ 0x180035E98 (-RenderContent@Engine@1Spectre@@IEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV-$vector@.c)
 *     ?UpdateScene@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x1800375F8 (-UpdateScene@Engine@1Spectre@@IEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@@Z.c)
 *     ?UpdateScenes@Engine@1Spectre@@MEAAXXZ @ 0x180037A80 (-UpdateScenes@Engine@1Spectre@@MEAAXXZ.c)
 * Callees:
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x180011CA0 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ??$GetDurationMilliseconds@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Engine@Spectre@@YAMV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z @ 0x180024B40 (--$GetDurationMilliseconds@V-$duration@_JU-$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Engine@Spect.c)
 *     ??$emplace_back@AEBM@?$vector@MV?$allocator@M@std@@@std@@QEAA?A_TAEBM@Z @ 0x1800A0158 (--$emplace_back@AEBM@-$vector@MV-$allocator@M@std@@@std@@QEAA-A_TAEBM@Z.c)
 */

void __fastcall Spectre::Engine::CpuProfiler::RegisterCallbackTime(
        Spectre::Engine::CpuProfiler *this,
        const struct Spectre::Engine::CpuProfiler::ScopedCallbackPerformanceTimer *a2)
{
  _QWORD *v4; // rax
  float v5; // xmm0_4
  __int64 v6; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = std::chrono::steady_clock::now(&v7);
  v5 = Spectre::Engine::GetDurationMilliseconds<std::chrono::duration<__int64,std::ratio<1,1000000000>>>(*(_DWORD *)v4 - *((_DWORD *)a2 + 4));
  v6 = *((int *)a2 + 2);
  *(float *)&v7 = v5;
  std::vector<float>::emplace_back<float const &>((__int64)this + 16 * v6 + 8 * v6 + 56, &v7);
  if ( (((*((_QWORD *)this + 35) - *((_QWORD *)this + 34)) ^ (*((_QWORD *)this + 3 * *((int *)a2 + 2) + 8)
                                                            - *((_QWORD *)this + 3 * *((int *)a2 + 2) + 7))) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    std::vector<float>::emplace_back<float const &>((__int64)this + 272, &v7);
  else
    *(float *)(*((_QWORD *)this + 35) - 4LL) = *(float *)&v7 + *(float *)(*((_QWORD *)this + 35) - 4LL);
}
