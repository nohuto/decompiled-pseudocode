/*
 * XREFs of ??$construct@UResult@GpuProfilerFrame@Engine@Spectre@@U1234@@?$_Default_allocator_traits@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@SAXAEAV?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@1@QEAUResult@GpuProfilerFrame@Engine@Spectre@@$$QEAU3456@@Z @ 0x18002B044
 * Callers:
 *     ??$_Emplace_reallocate@UResult@GpuProfilerFrame@Engine@Spectre@@@?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@QEAAPEAUResult@GpuProfilerFrame@Engine@Spectre@@QEAU2345@$$QEAU2345@@Z @ 0x18002ACA8 (--$_Emplace_reallocate@UResult@GpuProfilerFrame@Engine@Spectre@@@-$vector@UResult@GpuProfilerFra.c)
 *     ??$_Uninitialized_move@PEAUResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@YAPEAUResult@GpuProfilerFrame@Engine@Spectre@@QEAU1234@0PEAU1234@AEAV?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@0@@Z @ 0x18002AFD0 (--$_Uninitialized_move@PEAUResult@GpuProfilerFrame@Engine@Spectre@@V-$allocator@UResult@GpuProfi.c)
 *     ?GetGpuProfilerResults@RenderOutput@Engine@Spectre@@IEAA?AV?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@XZ @ 0x18002C040 (-GetGpuProfilerResults@RenderOutput@Engine@Spectre@@IEAA-AV-$vector@UResult@GpuProfilerFrame@Eng.c)
 * Callees:
 *     ??$_Buyheadnode@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@SAPEAU01@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@@1@@Z @ 0x18002A864 (--$_Buyheadnode@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@DU-$char_traits@D@std@@V-.c)
 */

__int64 __fastcall std::_Default_allocator_traits<std::allocator<Spectre::Engine::GpuProfilerFrame::Result>>::construct<Spectre::Engine::GpuProfilerFrame::Result,Spectre::Engine::GpuProfilerFrame::Result>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 result; // rax

  *(_QWORD *)a2 = *(_QWORD *)a3;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a3 + 8);
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a3 + 24);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(a3 + 32);
  *(_OWORD *)(a2 + 48) = *(_OWORD *)(a3 + 48);
  *(_OWORD *)(a2 + 64) = *(_OWORD *)(a3 + 64);
  *(_OWORD *)(a2 + 80) = *(_OWORD *)(a3 + 80);
  *(_OWORD *)(a2 + 96) = *(_OWORD *)(a3 + 96);
  *(_QWORD *)(a2 + 112) = *(_QWORD *)(a3 + 112);
  *(_BYTE *)(a2 + 120) = *(_BYTE *)(a3 + 120);
  *(_QWORD *)(a2 + 128) = *(_QWORD *)(a3 + 128);
  *(_QWORD *)(a2 + 136) = 0LL;
  *(_QWORD *)(a2 + 144) = 0LL;
  v5 = std::_Tree_node<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>,void *>::_Buyheadnode<std::allocator<std::_Tree_node<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>,void *>>>();
  *(_QWORD *)(a2 + 136) = v5;
  *(_QWORD *)(a2 + 136) = *(_QWORD *)(a3 + 136);
  *(_QWORD *)(a3 + 136) = v5;
  v6 = *(_QWORD *)(a2 + 144);
  result = *(_QWORD *)(a3 + 144);
  *(_QWORD *)(a2 + 144) = result;
  *(_QWORD *)(a3 + 144) = v6;
  return result;
}
