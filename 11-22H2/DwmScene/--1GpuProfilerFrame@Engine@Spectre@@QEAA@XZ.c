/*
 * XREFs of ??1GpuProfilerFrame@Engine@Spectre@@QEAA@XZ @ 0x1800A0D08
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VGpuProfilerFrame@Engine@Spectre@@@std@@EEAAXXZ @ 0x1800A18B0 (-_Destroy@-$_Ref_count_obj2@VGpuProfilerFrame@Engine@Spectre@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Erase_head@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@@1@@Z @ 0x18002ADCC (--$_Erase_head@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@DU-$char_traits@D@std@@V-$.c)
 *     ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VMarkerQueryData@GpuProfilerFrame@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VMarkerQueryData@GpuProfilerFrame@Engine@Spectre@@@std@@@2@$00@std@@@std@@QEAA@XZ @ 0x1800A0B74 (--1-$_Tree@V-$_Tmap_traits@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@VMarker.c)
 *     ??1RenderDeviceQuery@Engine@Spectre@@QEAA@XZ @ 0x1800A1BD8 (--1RenderDeviceQuery@Engine@Spectre@@QEAA@XZ.c)
 */

void __fastcall Spectre::Engine::GpuProfilerFrame::~GpuProfilerFrame(void **this)
{
  std::_Ref_count_base *v2; // rcx

  std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>>>::_Erase_head<std::allocator<std::_Tree_node<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>,void *>>>(
    this + 133,
    (__int64)(this + 133));
  v2 = (std::_Ref_count_base *)this[113];
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  std::_Tree<std::_Tmap_traits<std::string,Spectre::Engine::GpuProfilerFrame::MarkerQueryData,std::less<std::string>,std::allocator<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerQueryData>>,1>>::~_Tree<std::_Tmap_traits<std::string,Spectre::Engine::GpuProfilerFrame::MarkerQueryData,std::less<std::string>,std::allocator<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerQueryData>>,1>>(this + 110);
  Spectre::Engine::RenderDeviceQuery::~RenderDeviceQuery((Spectre::Engine::RenderDeviceQuery *)(this + 88));
  Spectre::Engine::RenderDeviceQuery::~RenderDeviceQuery((Spectre::Engine::RenderDeviceQuery *)(this + 66));
  Spectre::Engine::RenderDeviceQuery::~RenderDeviceQuery((Spectre::Engine::RenderDeviceQuery *)(this + 44));
  Spectre::Engine::RenderDeviceQuery::~RenderDeviceQuery((Spectre::Engine::RenderDeviceQuery *)(this + 22));
  Spectre::Engine::RenderDeviceQuery::~RenderDeviceQuery((Spectre::Engine::RenderDeviceQuery *)this);
}
