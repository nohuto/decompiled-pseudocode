/*
 * XREFs of ?CheckResult@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@AEAAXXZ @ 0x1800A2CE8
 * Callers:
 *     ?GetResult@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA?AUMarkerResult@234@N@Z @ 0x1800A36E4 (-GetResult@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA-AUMarkerResult@234@N@Z.c)
 *     ?IsResultAvailable@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA_NXZ @ 0x1800A37C0 (-IsResultAvailable@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA_NXZ.c)
 * Callees:
 *     ?CheckQuery@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@AEAAXAEAVRenderDeviceQuery@34@AEA_K@Z @ 0x1800A2C50 (-CheckQuery@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@AEAAXAEAVRenderDeviceQuery@34@AEA_K.c)
 */

void __fastcall Spectre::Engine::GpuProfilerFrame::MarkerQueryData::CheckResult(
        Spectre::Engine::GpuProfilerFrame::MarkerQueryData *this)
{
  Spectre::Engine::GpuProfilerFrame::MarkerQueryData *v2; // rcx

  Spectre::Engine::GpuProfilerFrame::MarkerQueryData::CheckQuery(
    this,
    (Spectre::Engine::GpuProfilerFrame::MarkerQueryData *)((char *)this + 32),
    (unsigned __int64 *)this + 26);
  Spectre::Engine::GpuProfilerFrame::MarkerQueryData::CheckQuery(
    v2,
    (Spectre::Engine::GpuProfilerFrame::MarkerQueryData *)((char *)this + 216),
    (unsigned __int64 *)this + 49);
}
