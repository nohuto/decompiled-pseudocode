/*
 * XREFs of ?BeginFrame@CpuProfiler@Engine@Spectre@@QEAAX_K@Z @ 0x1800A01D4
 * Callers:
 *     ?BeginCpuProfilerFrame@Engine@1Spectre@@IEAAXXZ @ 0x1800329B4 (-BeginCpuProfilerFrame@Engine@1Spectre@@IEAAXXZ.c)
 * Callees:
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x180011CA0 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ?lock@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A4F0 (-lock@Mutex@Engine@Spectre@@QEAAXXZ.c)
 *     ?unlock@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A5AC (-unlock@Mutex@Engine@Spectre@@QEAAXXZ.c)
 *     ?clear@?$vector@UMarker@CpuProfiler@Engine@Spectre@@V?$allocator@UMarker@CpuProfiler@Engine@Spectre@@@std@@@std@@QEAAXXZ @ 0x1800A05C8 (-clear@-$vector@UMarker@CpuProfiler@Engine@Spectre@@V-$allocator@UMarker@CpuProfiler@Engine@Spec.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::CpuProfiler::BeginFrame(Spectre::Engine::CpuProfiler *this, __int64 a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  Spectre::Engine::Mutex::lock(this);
  *((_QWORD *)this + 2) = a2;
  std::vector<Spectre::Engine::CpuProfiler::Marker>::clear((char *)this + 32);
  *((_QWORD *)this + 3) = *std::chrono::steady_clock::now(&v4);
  Spectre::Engine::Mutex::unlock(this);
}
