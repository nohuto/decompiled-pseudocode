/*
 * XREFs of ?PresentFrame@FramesData@GpuProfiler@Engine@Spectre@@QEAA_N_K@Z @ 0x1800A1430
 * Callers:
 *     ?PresentFrame@GpuProfiler@Engine@Spectre@@QEAA_NXZ @ 0x1800A14A0 (-PresentFrame@GpuProfiler@Engine@Spectre@@QEAA_NXZ.c)
 * Callees:
 *     ?lock@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A4F0 (-lock@Mutex@Engine@Spectre@@QEAAXXZ.c)
 *     ?unlock@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A5AC (-unlock@Mutex@Engine@Spectre@@QEAAXXZ.c)
 *     ?GetSlotForFrame@FramesData@GpuProfiler@Engine@Spectre@@AEAA?AU?$pair@_N_K@std@@_K@Z @ 0x1800A13E4 (-GetSlotForFrame@FramesData@GpuProfiler@Engine@Spectre@@AEAA-AU-$pair@_N_K@std@@_K@Z.c)
 *     ?Present@GpuProfilerFrame@Engine@Spectre@@QEAAXXZ @ 0x1800A3834 (-Present@GpuProfilerFrame@Engine@Spectre@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall Spectre::Engine::GpuProfiler::FramesData::PresentFrame(
        Spectre::Engine::GpuProfiler::FramesData *this,
        __int64 a2)
{
  _BYTE v5[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  Spectre::Engine::Mutex::lock(this);
  Spectre::Engine::GpuProfiler::FramesData::GetSlotForFrame((__int64)this, (__int64)v5, a2);
  if ( v5[0] )
  {
    Spectre::Engine::GpuProfilerFrame::Present(*((Spectre::Engine::GpuProfilerFrame **)this + 2 * v6 + 8));
    Spectre::Engine::Mutex::unlock(this);
    return 1;
  }
  else
  {
    Spectre::Engine::Mutex::unlock(this);
    return 0;
  }
}
