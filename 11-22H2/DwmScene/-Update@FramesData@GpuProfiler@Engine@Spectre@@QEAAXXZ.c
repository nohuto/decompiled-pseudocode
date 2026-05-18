/*
 * XREFs of ?Update@FramesData@GpuProfiler@Engine@Spectre@@QEAAXXZ @ 0x1800A1604
 * Callers:
 *     ?Update@GpuProfiler@Engine@Spectre@@QEAAXXZ @ 0x1800A16DC (-Update@GpuProfiler@Engine@Spectre@@QEAAXXZ.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001D378 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDevic.c)
 *     ?lock@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A4F0 (-lock@Mutex@Engine@Spectre@@QEAAXXZ.c)
 *     ?unlock@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A5AC (-unlock@Mutex@Engine@Spectre@@QEAAXXZ.c)
 *     ??$_Erase_head@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@@1@@Z @ 0x18002ADCC (--$_Erase_head@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@DU-$char_traits@D@std@@V-$.c)
 *     ??0Result@GpuProfilerFrame@Engine@Spectre@@QEAA@XZ @ 0x18002B740 (--0Result@GpuProfilerFrame@Engine@Spectre@@QEAA@XZ.c)
 *     ??$_Emplace_back_internal@AEB_K@?$deque@_KV?$allocator@_K@std@@@std@@AEAAXAEB_K@Z @ 0x1800A0728 (--$_Emplace_back_internal@AEB_K@-$deque@_KV-$allocator@_K@std@@@std@@AEAAXAEB_K@Z.c)
 *     ?erase@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@@2@V32@@Z @ 0x1800A19E8 (-erase@-$_Tree@V-$_Tset_traits@_KU-$less@_K@std@@V-$allocator@_K@2@$0A@@std@@@std@@QEAA-AV-$_Tre.c)
 *     ?GetResult@GpuProfilerFrame@Engine@Spectre@@QEAA?AW4Status@123@AEAUResult@123@_N@Z @ 0x1800A2FDC (-GetResult@GpuProfilerFrame@Engine@Spectre@@QEAA-AW4Status@123@AEAUResult@123@_N@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::GpuProfiler::FramesData::Update(__int64 **this)
{
  __int64 v2; // rbx
  _BYTE v3[136]; // [rsp+20h] [rbp-B8h] BYREF
  void *v4[6]; // [rsp+A8h] [rbp-30h] BYREF
  __int64 v5; // [rsp+E0h] [rbp+8h] BYREF
  Spectre::Engine::GpuProfiler::FramesData *v6; // [rsp+E8h] [rbp+10h]
  char v7; // [rsp+F0h] [rbp+18h] BYREF

  v6 = (Spectre::Engine::GpuProfiler::FramesData *)this;
  Spectre::Engine::Mutex::lock((Spectre::Engine::Mutex *)this);
  Spectre::Engine::GpuProfilerFrame::Result::Result((Spectre::Engine::GpuProfilerFrame::Result *)v3);
  v2 = *this[6];
LABEL_2:
  v5 = v2;
  while ( (__int64 *)v2 != this[6] )
  {
    if ( (unsigned int)Spectre::Engine::GpuProfilerFrame::GetResult(this[2 * *(_QWORD *)(v2 + 32) + 8], v3, 0LL) == 3 )
    {
      std::deque<unsigned __int64>::_Emplace_back_internal<unsigned __int64 const &>(
        (__int64)(this + 1),
        (__int64 *)(v2 + 32));
      v2 = *(_QWORD *)std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::erase(
                        this + 6,
                        &v7,
                        v2);
      goto LABEL_2;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>>>>,std::_Iterator_base0>::operator++(&v5);
    v2 = v5;
  }
  std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>>>::_Erase_head<std::allocator<std::_Tree_node<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>,void *>>>(
    v4,
    (__int64)v4);
  Spectre::Engine::Mutex::unlock((Spectre::Utils::SharedMutex *)this);
}
