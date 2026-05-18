/*
 * XREFs of ??$_Emplace_reallocate@W4Type@Marker@CpuProfiler@Engine@Spectre@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@7@V897@@?$vector@UMarker@CpuProfiler@Engine@Spectre@@V?$allocator@UMarker@CpuProfiler@Engine@Spectre@@@std@@@std@@QEAAPEAUMarker@CpuProfiler@Engine@Spectre@@QEAU2345@$$QEAW4Type@2345@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@$$QEAV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@1@3@Z @ 0x18009FF38
 * Callers:
 *     ??$emplace_back@W4Type@Marker@CpuProfiler@Engine@Spectre@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@7@V897@@?$vector@UMarker@CpuProfiler@Engine@Spectre@@V?$allocator@UMarker@CpuProfiler@Engine@Spectre@@@std@@@std@@QEAA?A_T$$QEAW4Type@Marker@CpuProfiler@Engine@Spectre@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@$$QEAV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@1@2@Z @ 0x1800A0184 (--$emplace_back@W4Type@Marker@CpuProfiler@Engine@Spectre@@AEBV-$basic_string@DU-$char_traits@D@s.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0DI@@std@@YA_K_K@Z @ 0x180027BD4 (--$_Get_size_of_n@$0DI@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUMarker@CpuProfiler@Engine@Spectre@@V?$allocator@UMarker@CpuProfiler@Engine@Spectre@@@std@@@std@@YAPEAUMarker@CpuProfiler@Engine@Spectre@@QEAU1234@0PEAU1234@AEAV?$allocator@UMarker@CpuProfiler@Engine@Spectre@@@0@@Z @ 0x1800A0074 (--$_Uninitialized_move@PEAUMarker@CpuProfiler@Engine@Spectre@@V-$allocator@UMarker@CpuProfiler@E.c)
 *     ??$construct@UMarker@CpuProfiler@Engine@Spectre@@W4Type@1234@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@7@V897@@?$_Default_allocator_traits@V?$allocator@UMarker@CpuProfiler@Engine@Spectre@@@std@@@std@@SAXAEAV?$allocator@UMarker@CpuProfiler@Engine@Spectre@@@1@QEAUMarker@CpuProfiler@Engine@Spectre@@$$QEAW4Type@3456@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@$$QEAV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@1@4@Z @ 0x1800A0104 (--$construct@UMarker@CpuProfiler@Engine@Spectre@@W4Type@1234@AEBV-$basic_string@DU-$char_traits@.c)
 *     ?_Calculate_growth@?$vector@UMarker@CpuProfiler@Engine@Spectre@@V?$allocator@UMarker@CpuProfiler@Engine@Spectre@@@std@@@std@@AEBA_K_K@Z @ 0x1800A048C (-_Calculate_growth@-$vector@UMarker@CpuProfiler@Engine@Spectre@@V-$allocator@UMarker@CpuProfiler.c)
 *     ?_Change_array@?$vector@UMarker@CpuProfiler@Engine@Spectre@@V?$allocator@UMarker@CpuProfiler@Engine@Spectre@@@std@@@std@@AEAAXQEAUMarker@CpuProfiler@Engine@Spectre@@_K1@Z @ 0x1800A053C (-_Change_array@-$vector@UMarker@CpuProfiler@Engine@Spectre@@V-$allocator@UMarker@CpuProfiler@Eng.c)
 */

char *__fastcall std::vector<Spectre::Engine::CpuProfiler::Marker>::_Emplace_reallocate<enum Spectre::Engine::CpuProfiler::Marker::Type,std::string const &,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>(
        __int64 *a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rbp
  __int64 v10; // rax
  __int64 v12; // r14
  unsigned __int64 v13; // r15
  unsigned __int64 size_of; // rax
  char *v15; // rdi
  char *v16; // rbp
  __int64 v17; // rdx
  char *v18; // r8
  __int64 v19; // rcx

  v6 = *a1;
  v10 = 0x6DB6DB6DB6DB6DB7LL * ((a1[1] - *a1) >> 3);
  if ( v10 == 0x492492492492492LL )
    std::_Xlength_error("vector too long");
  v12 = v10 + 1;
  v13 = std::vector<Spectre::Engine::CpuProfiler::Marker>::_Calculate_growth(a1, v10 + 1);
  size_of = std::_Get_size_of_n<56>(v13);
  v15 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v16 = &v15[56 * ((a2 - v6) / 56)];
  std::_Default_allocator_traits<std::allocator<Spectre::Engine::CpuProfiler::Marker>>::construct<Spectre::Engine::CpuProfiler::Marker,enum Spectre::Engine::CpuProfiler::Marker::Type,std::string const &,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>(
    a6,
    (_DWORD)v16,
    a3,
    a4,
    a5,
    a6);
  v17 = a1[1];
  v18 = v15;
  v19 = *a1;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<Spectre::Engine::CpuProfiler::Marker *>(v19, a2, v15);
    v17 = a1[1];
    v18 = v16 + 56;
    v19 = a2;
  }
  std::_Uninitialized_move<Spectre::Engine::CpuProfiler::Marker *>(v19, v17, v18);
  std::vector<Spectre::Engine::CpuProfiler::Marker>::_Change_array(a1, v15, v12, v13);
  return v16;
}
