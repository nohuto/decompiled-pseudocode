/*
 * XREFs of ?BeginTimeSpanMarker@CpuProfiler@Engine@Spectre@@QEAA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800A0224
 * Callers:
 *     ??0CpuProfilerScope@Engine@Spectre@@QEAA@AEBV?$weak_ptr@VCpuProfiler@Engine@Spectre@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z @ 0x180030F54 (--0CpuProfilerScope@Engine@Spectre@@QEAA@AEBV-$weak_ptr@VCpuProfiler@Engine@Spectre@@@std@@AEBV-.c)
 * Callees:
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x180011CA0 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ?lock@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A4F0 (-lock@Mutex@Engine@Spectre@@QEAAXXZ.c)
 *     ?unlock@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A5AC (-unlock@Mutex@Engine@Spectre@@QEAAXXZ.c)
 *     ??B?$atomic@_N@std@@QEBA_NXZ @ 0x1800573E0 (--B-$atomic@_N@std@@QEBA_NXZ.c)
 *     ??$emplace_back@W4Type@Marker@CpuProfiler@Engine@Spectre@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@7@V897@@?$vector@UMarker@CpuProfiler@Engine@Spectre@@V?$allocator@UMarker@CpuProfiler@Engine@Spectre@@@std@@@std@@QEAA?A_T$$QEAW4Type@Marker@CpuProfiler@Engine@Spectre@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@$$QEAV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@1@2@Z @ 0x1800A0184 (--$emplace_back@W4Type@Marker@CpuProfiler@Engine@Spectre@@AEBV-$basic_string@DU-$char_traits@D@s.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Spectre::Engine::CpuProfiler::BeginTimeSpanMarker(Spectre::Engine::Mutex *this, __int64 a2)
{
  __int64 *v4; // rax
  __int64 v5; // rbx
  _QWORD v7[5]; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+60h] [rbp+8h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF
  Spectre::Engine::Mutex *v10; // [rsp+78h] [rbp+20h]

  if ( !std::atomic<bool>::operator bool((__int64)this + 8) )
    return 0LL;
  v10 = this;
  Spectre::Engine::Mutex::lock(this);
  v9 = 0LL;
  v4 = std::chrono::steady_clock::now(v7);
  v8 = 1;
  std::vector<Spectre::Engine::CpuProfiler::Marker>::emplace_back<enum Spectre::Engine::CpuProfiler::Marker::Type,std::string const &,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>(
    (__int64 *)this + 4,
    &v8,
    a2,
    v4,
    &v9);
  v5 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*((_QWORD *)this + 5) - *((_QWORD *)this + 4)) >> 3);
  Spectre::Engine::Mutex::unlock(this);
  return v5 - 1;
}
