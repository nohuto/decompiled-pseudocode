/*
 * XREFs of ??$emplace_back@W4Type@Marker@CpuProfiler@Engine@Spectre@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@7@V897@@?$vector@UMarker@CpuProfiler@Engine@Spectre@@V?$allocator@UMarker@CpuProfiler@Engine@Spectre@@@std@@@std@@QEAA?A_T$$QEAW4Type@Marker@CpuProfiler@Engine@Spectre@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@$$QEAV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@1@2@Z @ 0x1800A0184
 * Callers:
 *     ?BeginTimeSpanMarker@CpuProfiler@Engine@Spectre@@QEAA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800A0224 (-BeginTimeSpanMarker@CpuProfiler@Engine@Spectre@@QEAA_KAEBV-$basic_string@DU-$char_traits@D@std@.c)
 * Callees:
 *     ??$_Emplace_reallocate@W4Type@Marker@CpuProfiler@Engine@Spectre@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@7@V897@@?$vector@UMarker@CpuProfiler@Engine@Spectre@@V?$allocator@UMarker@CpuProfiler@Engine@Spectre@@@std@@@std@@QEAAPEAUMarker@CpuProfiler@Engine@Spectre@@QEAU2345@$$QEAW4Type@2345@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@$$QEAV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@1@3@Z @ 0x18009FF38 (--$_Emplace_reallocate@W4Type@Marker@CpuProfiler@Engine@Spectre@@AEBV-$basic_string@DU-$char_tra.c)
 *     ??$construct@UMarker@CpuProfiler@Engine@Spectre@@W4Type@1234@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@7@V897@@?$_Default_allocator_traits@V?$allocator@UMarker@CpuProfiler@Engine@Spectre@@@std@@@std@@SAXAEAV?$allocator@UMarker@CpuProfiler@Engine@Spectre@@@1@QEAUMarker@CpuProfiler@Engine@Spectre@@$$QEAW4Type@3456@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@$$QEAV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@1@4@Z @ 0x1800A0104 (--$construct@UMarker@CpuProfiler@Engine@Spectre@@W4Type@1234@AEBV-$basic_string@DU-$char_traits@.c)
 */

char *__fastcall std::vector<Spectre::Engine::CpuProfiler::Marker>::emplace_back<enum Spectre::Engine::CpuProfiler::Marker::Type,std::string const &,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>(
        __int64 *a1,
        _DWORD *a2,
        __int64 a3,
        __int64 *a4,
        __int64 *a5)
{
  __int64 v6; // rdx
  char *result; // rax

  v6 = a1[1];
  if ( v6 == a1[2] )
    return std::vector<Spectre::Engine::CpuProfiler::Marker>::_Emplace_reallocate<enum Spectre::Engine::CpuProfiler::Marker::Type,std::string const &,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>(
             a1,
             v6,
             (int)a2,
             a3,
             (__int64)a4,
             (__int64)a5);
  std::_Default_allocator_traits<std::allocator<Spectre::Engine::CpuProfiler::Marker>>::construct<Spectre::Engine::CpuProfiler::Marker,enum Spectre::Engine::CpuProfiler::Marker::Type,std::string const &,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>(
    (__int64)a1,
    v6,
    a2,
    a3,
    a4,
    a5);
  result = (char *)a1[1];
  a1[1] = (__int64)(result + 56);
  return result;
}
