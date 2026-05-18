/*
 * XREFs of ??4?$multimap@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800A286C
 * Callers:
 *     ??4Result@GpuProfilerFrame@Engine@Spectre@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800A28B8 (--4Result@GpuProfilerFrame@Engine@Spectre@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 * Callees:
 *     ?clear@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@@2@$00@std@@@std@@QEAAXXZ @ 0x180074298 (-clear@-$_Tree@V-$_Tmap_traits@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UMa.c)
 */

__int64 *__fastcall std::multimap<std::string,Spectre::Engine::GpuProfilerFrame::MarkerResult>::operator=(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v4; // r8
  __int64 v5; // r8

  if ( a1 != a2 )
  {
    std::_Tree<std::_Tmap_traits<std::string,Spectre::Engine::GpuProfilerFrame::MarkerResult,std::less<std::string>,std::allocator<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>>,1>>::clear(a1);
    v4 = *a1;
    *a1 = *a2;
    *a2 = v4;
    v5 = a1[1];
    a1[1] = a2[1];
    a2[1] = v5;
  }
  return a1;
}
