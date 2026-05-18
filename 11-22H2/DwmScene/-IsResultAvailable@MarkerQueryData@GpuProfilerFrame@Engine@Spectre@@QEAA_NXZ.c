/*
 * XREFs of ?IsResultAvailable@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA_NXZ @ 0x1800A37C0
 * Callers:
 *     ?GetResult@GpuProfilerFrame@Engine@Spectre@@QEAA?AW4Status@123@AEAUResult@123@_N@Z @ 0x1800A2FDC (-GetResult@GpuProfilerFrame@Engine@Spectre@@QEAA-AW4Status@123@AEAUResult@123@_N@Z.c)
 * Callees:
 *     ?lock@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A4F0 (-lock@Mutex@Engine@Spectre@@QEAAXXZ.c)
 *     ?unlock@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A5AC (-unlock@Mutex@Engine@Spectre@@QEAAXXZ.c)
 *     ??BRenderDeviceQuery@Engine@Spectre@@QEBA_NXZ @ 0x1800A1D74 (--BRenderDeviceQuery@Engine@Spectre@@QEBA_NXZ.c)
 *     ?CheckResult@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@AEAAXXZ @ 0x1800A2CE8 (-CheckResult@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall Spectre::Engine::GpuProfilerFrame::MarkerQueryData::IsResultAvailable(
        Spectre::Engine::GpuProfilerFrame::MarkerQueryData *this)
{
  Spectre::Utils::SharedMutex *v2; // rbx
  bool v3; // di

  v2 = (Spectre::Engine::GpuProfilerFrame::MarkerQueryData *)((char *)this + 8);
  Spectre::Engine::Mutex::lock((Spectre::Engine::GpuProfilerFrame::MarkerQueryData *)((char *)this + 8));
  Spectre::Engine::GpuProfilerFrame::MarkerQueryData::CheckResult(this);
  v3 = 0;
  if ( !Spectre::Engine::RenderDeviceQuery::operator bool() )
    v3 = !Spectre::Engine::RenderDeviceQuery::operator bool();
  Spectre::Engine::Mutex::unlock(v2);
  return v3;
}
