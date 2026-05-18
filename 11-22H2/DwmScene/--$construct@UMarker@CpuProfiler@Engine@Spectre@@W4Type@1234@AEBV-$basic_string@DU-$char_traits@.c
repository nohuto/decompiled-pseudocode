/*
 * XREFs of ??$construct@UMarker@CpuProfiler@Engine@Spectre@@W4Type@1234@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@7@V897@@?$_Default_allocator_traits@V?$allocator@UMarker@CpuProfiler@Engine@Spectre@@@std@@@std@@SAXAEAV?$allocator@UMarker@CpuProfiler@Engine@Spectre@@@1@QEAUMarker@CpuProfiler@Engine@Spectre@@$$QEAW4Type@3456@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@$$QEAV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@1@4@Z @ 0x1800A0104
 * Callers:
 *     ??$_Emplace_reallocate@W4Type@Marker@CpuProfiler@Engine@Spectre@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@7@V897@@?$vector@UMarker@CpuProfiler@Engine@Spectre@@V?$allocator@UMarker@CpuProfiler@Engine@Spectre@@@std@@@std@@QEAAPEAUMarker@CpuProfiler@Engine@Spectre@@QEAU2345@$$QEAW4Type@2345@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@$$QEAV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@1@3@Z @ 0x18009FF38 (--$_Emplace_reallocate@W4Type@Marker@CpuProfiler@Engine@Spectre@@AEBV-$basic_string@DU-$char_tra.c)
 *     ??$emplace_back@W4Type@Marker@CpuProfiler@Engine@Spectre@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@7@V897@@?$vector@UMarker@CpuProfiler@Engine@Spectre@@V?$allocator@UMarker@CpuProfiler@Engine@Spectre@@@std@@@std@@QEAA?A_T$$QEAW4Type@Marker@CpuProfiler@Engine@Spectre@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@$$QEAV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@1@2@Z @ 0x1800A0184 (--$emplace_back@W4Type@Marker@CpuProfiler@Engine@Spectre@@AEBV-$basic_string@DU-$char_traits@D@s.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 */

_QWORD *__fastcall std::_Default_allocator_traits<std::allocator<Spectre::Engine::CpuProfiler::Marker>>::construct<Spectre::Engine::CpuProfiler::Marker,enum Spectre::Engine::CpuProfiler::Marker::Type,std::string const &,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        __int64 *a5,
        __int64 *a6)
{
  __int64 v7; // rdi
  __int64 v8; // rbx
  _QWORD *result; // rax

  v7 = *a6;
  v8 = *a5;
  *(_DWORD *)a2 = *a3;
  result = std::string::string((_QWORD *)(a2 + 8), a4);
  *(_QWORD *)(a2 + 40) = v8;
  *(_QWORD *)(a2 + 48) = v7;
  return result;
}
