/*
 * XREFs of ?WaitPendingFrames@FramesData@GpuProfiler@Engine@Spectre@@QEAAXI@Z @ 0x1800A16E8
 * Callers:
 *     ?WaitPendingFrames@GpuProfiler@Engine@Spectre@@QEAAXI@Z @ 0x1800A1870 (-WaitPendingFrames@GpuProfiler@Engine@Spectre@@QEAAXI@Z.c)
 * Callees:
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x180011CA0 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ?Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ @ 0x18001DAE8 (-Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ.c)
 *     ?lock@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A4F0 (-lock@Mutex@Engine@Spectre@@QEAAXXZ.c)
 *     ?unlock@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A5AC (-unlock@Mutex@Engine@Spectre@@QEAAXXZ.c)
 *     ??$_Erase_head@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMarkerResult@GpuProfilerFrame@Engine@Spectre@@@std@@PEAX@std@@@1@@Z @ 0x18002ADCC (--$_Erase_head@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@DU-$char_traits@D@std@@V-$.c)
 *     ??0Result@GpuProfilerFrame@Engine@Spectre@@QEAA@XZ @ 0x18002B740 (--0Result@GpuProfilerFrame@Engine@Spectre@@QEAA@XZ.c)
 *     ??$_Emplace_back_internal@AEB_K@?$deque@_KV?$allocator@_K@std@@@std@@AEAAXAEB_K@Z @ 0x1800A0728 (--$_Emplace_back_internal@AEB_K@-$deque@_KV-$allocator@_K@std@@@std@@AEAAXAEB_K@Z.c)
 *     ?erase@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@@2@V32@@Z @ 0x1800A19E8 (-erase@-$_Tree@V-$_Tset_traits@_KU-$less@_K@std@@V-$allocator@_K@2@$0A@@std@@@std@@QEAA-AV-$_Tre.c)
 *     ?GetResult@GpuProfilerFrame@Engine@Spectre@@QEAA?AW4Status@123@AEAUResult@123@_N@Z @ 0x1800A2FDC (-GetResult@GpuProfilerFrame@Engine@Spectre@@QEAA-AW4Status@123@AEAUResult@123@_N@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::GpuProfiler::FramesData::WaitPendingFrames(
        Spectre::Engine::GpuProfiler::FramesData *this)
{
  char v2; // bp
  int v3; // r15d
  __int64 v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // r8
  _QWORD *v7; // rax
  _BYTE v8[16]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v9[136]; // [rsp+40h] [rbp-C8h] BYREF
  void *v10[8]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v11; // [rsp+110h] [rbp+8h] BYREF
  Spectre::Engine::GpuProfiler::FramesData *v12; // [rsp+120h] [rbp+18h]
  __int64 v13; // [rsp+128h] [rbp+20h] BYREF

  v12 = this;
  Spectre::Engine::Mutex::lock(this);
  std::chrono::steady_clock::now(&v11);
  Spectre::Engine::GpuProfilerFrame::Result::Result((Spectre::Engine::GpuProfilerFrame::Result *)v9);
  v2 = 0;
  v3 = *((_DWORD *)this + 14);
  v4 = **((_QWORD **)this + 6);
LABEL_2:
  while ( v4 != *((_QWORD *)this + 6) && !v2 )
  {
    while ( 1 )
    {
      v5 = std::chrono::steady_clock::now(&v13);
      if ( *v5 - v11 >= 500000000 )
        break;
      LOBYTE(v6) = 1;
      if ( (unsigned int)Spectre::Engine::GpuProfilerFrame::GetResult(
                           *((_QWORD *)this + 2 * *(_QWORD *)(v4 + 32) + 8),
                           v9,
                           v6) == 3 )
      {
        std::deque<unsigned __int64>::_Emplace_back_internal<unsigned __int64 const &>(
          (__int64)this + 8,
          (__int64 *)(v4 + 32));
        v4 = *(_QWORD *)std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::erase(
                          (char *)this + 48,
                          v8,
                          v4);
        goto LABEL_2;
      }
      _Thrd_yield();
    }
    Trace::LevelSettingsWrapper::Output(
      &gTraceLevelsNativeRenderer_GpuProfiler,
      4,
      "GpuProfiler::FramesData::WaitPendingFrames() -- wait for flush abandoned (limit is %lld ms)",
      500LL);
    v2 = 1;
  }
  v7 = std::chrono::steady_clock::now(&v13);
  Trace::LevelSettingsWrapper::Output(
    &gTraceLevelsNativeRenderer_GpuProfiler,
    2,
    "GpuProfiler::FramesData::WaitPendingFrames() -- waited %lld ms for flush (pending frames: %d)",
    (*v7 - v11) / 1000000,
    v3);
  std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>>>::_Erase_head<std::allocator<std::_Tree_node<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>,void *>>>(
    v10,
    (__int64)v10);
  Spectre::Engine::Mutex::unlock(this);
}
