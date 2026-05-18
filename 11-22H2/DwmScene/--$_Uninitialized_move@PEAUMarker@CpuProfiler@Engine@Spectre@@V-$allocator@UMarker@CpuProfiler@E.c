/*
 * XREFs of ??$_Uninitialized_move@PEAUMarker@CpuProfiler@Engine@Spectre@@V?$allocator@UMarker@CpuProfiler@Engine@Spectre@@@std@@@std@@YAPEAUMarker@CpuProfiler@Engine@Spectre@@QEAU1234@0PEAU1234@AEAV?$allocator@UMarker@CpuProfiler@Engine@Spectre@@@0@@Z @ 0x1800A0074
 * Callers:
 *     ??$_Emplace_reallocate@W4Type@Marker@CpuProfiler@Engine@Spectre@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@7@V897@@?$vector@UMarker@CpuProfiler@Engine@Spectre@@V?$allocator@UMarker@CpuProfiler@Engine@Spectre@@@std@@@std@@QEAAPEAUMarker@CpuProfiler@Engine@Spectre@@QEAU2345@$$QEAW4Type@2345@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@$$QEAV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@1@3@Z @ 0x18009FF38 (--$_Emplace_reallocate@W4Type@Marker@CpuProfiler@Engine@Spectre@@AEBV-$basic_string@DU-$char_tra.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UMarker@CpuProfiler@Engine@Spectre@@@std@@@std@@YAXPEAUMarker@CpuProfiler@Engine@Spectre@@QEAU1234@AEAV?$allocator@UMarker@CpuProfiler@Engine@Spectre@@@0@@Z @ 0x18002E230 (--$_Destroy_range@V-$allocator@UMarker@CpuProfiler@Engine@Spectre@@@std@@@std@@YAXPEAUMarker@Cpu.c)
 */

_DWORD *__fastcall std::_Uninitialized_move<Spectre::Engine::CpuProfiler::Marker *>(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v4; // r8
  char *v5; // r9

  if ( a1 != a2 )
  {
    v4 = a1 + 8;
    v5 = (char *)a3 - a1;
    do
    {
      *a3 = *(_DWORD *)(v4 - 8);
      a3 += 14;
      *(_QWORD *)&v5[v4] = 0LL;
      *(_QWORD *)&v5[v4 + 16] = 0LL;
      *(_QWORD *)&v5[v4 + 24] = 0LL;
      *(_OWORD *)&v5[v4] = *(_OWORD *)v4;
      *(_OWORD *)&v5[v4 + 16] = *(_OWORD *)(v4 + 16);
      *(_QWORD *)(v4 + 16) = 0LL;
      *(_QWORD *)(v4 + 24) = 15LL;
      *(_BYTE *)v4 = 0;
      *(_QWORD *)&v5[v4 + 32] = *(_QWORD *)(v4 + 32);
      *(_QWORD *)&v5[v4 + 40] = *(_QWORD *)(v4 + 40);
      v4 += 56LL;
    }
    while ( v4 - 8 != a2 );
  }
  std::_Destroy_range<std::allocator<Spectre::Engine::CpuProfiler::Marker>>((__int64)a3, (__int64)a3);
  return a3;
}
