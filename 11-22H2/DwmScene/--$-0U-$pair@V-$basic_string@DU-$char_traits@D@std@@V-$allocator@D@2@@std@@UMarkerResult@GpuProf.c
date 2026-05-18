/*
 * XREFs of ??$?0U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@1@$$QEAU?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@1@@Z @ 0x1800A22B4
 * Callers:
 *     ??$_Emplace@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@@2@$00@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@_N@1@$$QEAU?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@1@@Z @ 0x1800A2490 (--$_Emplace@U-$pair@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UMarkerResult@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v7; // rax
  __int64 i; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x58uLL);
  a1[1] = v7;
  v7[4] = 0LL;
  v7[6] = 0LL;
  v7[7] = 0LL;
  *((_OWORD *)v7 + 2) = *(_OWORD *)a4;
  *((_OWORD *)v7 + 3) = *(_OWORD *)(a4 + 16);
  *(_QWORD *)(a4 + 16) = 0LL;
  *(_QWORD *)(a4 + 24) = 15LL;
  *(_BYTE *)a4 = 0;
  *((_OWORD *)v7 + 4) = *(_OWORD *)(a4 + 32);
  v7[10] = *(_QWORD *)(a4 + 48);
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(a1[1] + i + 24) = 0;
  return a1;
}
