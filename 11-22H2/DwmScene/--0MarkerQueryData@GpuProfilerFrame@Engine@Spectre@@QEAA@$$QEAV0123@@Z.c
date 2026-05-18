/*
 * XREFs of ??0MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA@$$QEAV0123@@Z @ 0x1800A2640
 * Callers:
 *     ??$_Emplace@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VMarkerQueryData@GpuProfilerFrame@Engine@Spectre@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VMarkerQueryData@GpuProfilerFrame@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VMarkerQueryData@GpuProfilerFrame@Engine@Spectre@@@std@@@2@$00@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VMarkerQueryData@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@_N@1@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@$$QEAVMarkerQueryData@GpuProfilerFrame@Engine@Spectre@@@Z @ 0x1800A2374 (--$_Emplace@AEAV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@VMarkerQueryData@Gp.c)
 * Callees:
 *     ?lock@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A4F0 (-lock@Mutex@Engine@Spectre@@QEAAXXZ.c)
 *     ?unlock@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A5AC (-unlock@Mutex@Engine@Spectre@@QEAAXXZ.c)
 *     ??0RenderDeviceQuery@Engine@Spectre@@QEAA@XZ @ 0x1800A1B5C (--0RenderDeviceQuery@Engine@Spectre@@QEAA@XZ.c)
 *     ??4RenderDeviceQuery@Engine@Spectre@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800A1C34 (--4RenderDeviceQuery@Engine@Spectre@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??0SharedMutex@Utils@Spectre@@QEAA@XZ @ 0x1800E0CE0 (--0SharedMutex@Utils@Spectre@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall Spectre::Engine::GpuProfilerFrame::MarkerQueryData::MarkerQueryData(__int64 a1, __int64 a2)
{
  Spectre::Engine::Mutex *v4; // rdi

  *(_QWORD *)a1 = &Spectre::Engine::GpuProfilerFrame::MarkerQueryData::`vftable';
  v4 = (Spectre::Engine::Mutex *)(a1 + 8);
  Spectre::Utils::SharedMutex::SharedMutex((Spectre::Utils::SharedMutex *)(a1 + 8));
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  Spectre::Engine::RenderDeviceQuery::RenderDeviceQuery((Spectre::Engine::RenderDeviceQuery *)(a1 + 32));
  Spectre::Engine::RenderDeviceQuery::RenderDeviceQuery((Spectre::Engine::RenderDeviceQuery *)(a1 + 216));
  Spectre::Engine::Mutex::lock(v4);
  Spectre::Engine::Mutex::lock((Spectre::Engine::Mutex *)(a2 + 8));
  Spectre::Engine::RenderDeviceQuery::operator=(a1 + 32, (__int64 *)(a2 + 32));
  Spectre::Engine::RenderDeviceQuery::operator=(a1 + 216, (__int64 *)(a2 + 216));
  Spectre::Engine::Mutex::unlock((Spectre::Utils::SharedMutex *)(a2 + 8));
  Spectre::Engine::Mutex::unlock(v4);
  return a1;
}
