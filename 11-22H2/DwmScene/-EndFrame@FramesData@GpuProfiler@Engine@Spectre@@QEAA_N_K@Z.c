/*
 * XREFs of ?EndFrame@FramesData@GpuProfiler@Engine@Spectre@@QEAA_N_K@Z @ 0x1800A11C8
 * Callers:
 *     ?EndFrame@GpuProfiler@Engine@Spectre@@QEAA_NXZ @ 0x1800A1254 (-EndFrame@GpuProfiler@Engine@Spectre@@QEAA_NXZ.c)
 * Callees:
 *     ?lock@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A4F0 (-lock@Mutex@Engine@Spectre@@QEAAXXZ.c)
 *     ?unlock@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A5AC (-unlock@Mutex@Engine@Spectre@@QEAAXXZ.c)
 *     ??$insert@$0A@$0A@@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@@std@@_N@1@AEB_K@Z @ 0x1800A093C (--$insert@$0A@$0A@@-$_Tree@V-$_Tset_traits@_KU-$less@_K@std@@V-$allocator@_K@2@$0A@@std@@@std@@Q.c)
 *     ?GetSlotForFrame@FramesData@GpuProfiler@Engine@Spectre@@AEAA?AU?$pair@_N_K@std@@_K@Z @ 0x1800A13E4 (-GetSlotForFrame@FramesData@GpuProfiler@Engine@Spectre@@AEAA-AU-$pair@_N_K@std@@_K@Z.c)
 *     ?End@GpuProfilerFrame@Engine@Spectre@@QEAAXXZ @ 0x1800A2D20 (-End@GpuProfilerFrame@Engine@Spectre@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall Spectre::Engine::GpuProfiler::FramesData::EndFrame(
        Spectre::Engine::GpuProfiler::FramesData *this,
        __int64 a2)
{
  _BYTE v5[8]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v6; // [rsp+28h] [rbp-10h]
  unsigned __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  Spectre::Engine::GpuProfiler::FramesData *v8; // [rsp+50h] [rbp+18h]

  v8 = this;
  Spectre::Engine::Mutex::lock(this);
  Spectre::Engine::GpuProfiler::FramesData::GetSlotForFrame(this, v5, a2);
  if ( v5[0] )
  {
    v7 = v6;
    std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::insert<0,0>(
      (__int64 *)this + 6,
      (__int64)v5,
      &v7);
    Spectre::Engine::GpuProfilerFrame::End(*((Spectre::Engine::GpuProfilerFrame **)this + 2 * v7 + 8));
    Spectre::Engine::Mutex::unlock(this);
    return 1;
  }
  else
  {
    Spectre::Engine::Mutex::unlock(this);
    return 0;
  }
}
