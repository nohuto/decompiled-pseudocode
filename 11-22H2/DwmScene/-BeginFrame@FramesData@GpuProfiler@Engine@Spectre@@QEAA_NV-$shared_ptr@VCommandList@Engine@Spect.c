/*
 * XREFs of ?BeginFrame@FramesData@GpuProfiler@Engine@Spectre@@QEAA_NV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K@Z @ 0x1800A0E14
 * Callers:
 *     ?BeginFrame@GpuProfiler@Engine@Spectre@@QEAA_NV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K@Z @ 0x1800A0F1C (-BeginFrame@GpuProfiler@Engine@Spectre@@QEAA_NV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@_.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A4F0 (-lock@Mutex@Engine@Spectre@@QEAAXXZ.c)
 *     ?unlock@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A5AC (-unlock@Mutex@Engine@Spectre@@QEAAXXZ.c)
 *     ?GetSlotForFrame@FramesData@GpuProfiler@Engine@Spectre@@AEAA?AU?$pair@_N_K@std@@_K@Z @ 0x1800A13E4 (-GetSlotForFrame@FramesData@GpuProfiler@Engine@Spectre@@AEAA-AU-$pair@_N_K@std@@_K@Z.c)
 *     ?Begin@GpuProfilerFrame@Engine@Spectre@@QEAAX_KV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@Z @ 0x1800A2948 (-Begin@GpuProfilerFrame@Engine@Spectre@@QEAAX_KV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall Spectre::Engine::GpuProfiler::FramesData::BeginFrame(
        Spectre::Engine::Mutex *this,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rcx
  std::_Ref_count_base *v9; // rcx
  std::_Ref_count_base *v11; // rcx
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  Spectre::Engine::Mutex::lock(this);
  Spectre::Engine::GpuProfiler::FramesData::GetSlotForFrame(this, v12, a3);
  if ( LOBYTE(v12[0]) || (v6 = *((_QWORD *)this + 5)) == 0 )
  {
    Spectre::Engine::Mutex::unlock(this);
    v11 = (std::_Ref_count_base *)a2[1];
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
    return 0;
  }
  else
  {
    v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                               + 8 * ((*((_QWORD *)this + 4) >> 1) & (*((_QWORD *)this + 3) - 1LL)))
                   + 8 * (*((_QWORD *)this + 4) & 1LL));
    *((_QWORD *)this + 5) = v6 - 1;
    if ( v6 == 1 )
      *((_QWORD *)this + 4) = 0LL;
    else
      ++*((_QWORD *)this + 4);
    *((_QWORD *)this + v7 + 18) = a3;
    v8 = *((_QWORD *)this + 2 * v7 + 8);
    v12[0] = *a2;
    v12[1] = a2[1];
    *a2 = 0LL;
    a2[1] = 0LL;
    Spectre::Engine::GpuProfilerFrame::Begin(v8, a3, v12);
    Spectre::Engine::Mutex::unlock(this);
    v9 = (std::_Ref_count_base *)a2[1];
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
    return 1;
  }
}
