/*
 * XREFs of ??BRenderDeviceQuery@Engine@Spectre@@QEBA_NXZ @ 0x1800A1D74
 * Callers:
 *     ??0MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA@W4MarkerType@123@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@1AEAVRenderDevice@23@@Z @ 0x1800A2708 (--0MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA@W4MarkerType@123@V-$shared_ptr@VCommand.c)
 *     ?Begin@GpuProfilerFrame@Engine@Spectre@@QEAAX_KV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@Z @ 0x1800A2948 (-Begin@GpuProfilerFrame@Engine@Spectre@@QEAAX_KV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@.c)
 *     ?CheckQuery@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@AEAAXAEAVRenderDeviceQuery@34@AEA_K@Z @ 0x1800A2C50 (-CheckQuery@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@AEAAXAEAVRenderDeviceQuery@34@AEA_K.c)
 *     ?End@GpuProfilerFrame@Engine@Spectre@@QEAAXXZ @ 0x1800A2D20 (-End@GpuProfilerFrame@Engine@Spectre@@QEAAXXZ.c)
 *     ?EndTimeSpan@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@UEAAXXZ @ 0x1800A2E40 (-EndTimeSpan@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@UEAAXXZ.c)
 *     ?GetResult@GpuProfilerFrame@Engine@Spectre@@QEAA?AW4Status@123@AEAUResult@123@_N@Z @ 0x1800A2FDC (-GetResult@GpuProfilerFrame@Engine@Spectre@@QEAA-AW4Status@123@AEAUResult@123@_N@Z.c)
 *     ?IsResultAvailable@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA_NXZ @ 0x1800A37C0 (-IsResultAvailable@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA_NXZ.c)
 *     ?Present@GpuProfilerFrame@Engine@Spectre@@QEAAXXZ @ 0x1800A3834 (-Present@GpuProfilerFrame@Engine@Spectre@@QEAAXXZ.c)
 * Callees:
 *     ?GetStatus@RenderDeviceQuery@Engine@Spectre@@QEBA?AW4QueryStatus@GpuQuery@23@XZ @ 0x1800A20D0 (-GetStatus@RenderDeviceQuery@Engine@Spectre@@QEBA-AW4QueryStatus@GpuQuery@23@XZ.c)
 */

bool Spectre::Engine::RenderDeviceQuery::operator bool()
{
  return (unsigned int)Spectre::Engine::RenderDeviceQuery::GetStatus() != 4;
}
