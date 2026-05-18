/*
 * XREFs of ??0RenderDeviceQuery@Engine@Spectre@@QEAA@XZ @ 0x1800A1B5C
 * Callers:
 *     ??0GpuProfilerFrame@Engine@Spectre@@QEAA@AEAVRenderDevice@12@@Z @ 0x1800A2574 (--0GpuProfilerFrame@Engine@Spectre@@QEAA@AEAVRenderDevice@12@@Z.c)
 *     ??0MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA@$$QEAV0123@@Z @ 0x1800A2640 (--0MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA@$$QEAV0123@@Z.c)
 *     ??0MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA@W4MarkerType@123@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@1AEAVRenderDevice@23@@Z @ 0x1800A2708 (--0MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA@W4MarkerType@123@V-$shared_ptr@VCommand.c)
 *     ?CheckQuery@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@AEAAXAEAVRenderDeviceQuery@34@AEA_K@Z @ 0x1800A2C50 (-CheckQuery@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@AEAAXAEAVRenderDeviceQuery@34@AEA_K.c)
 *     ?EndTimeSpan@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@UEAAXXZ @ 0x1800A2E40 (-EndTimeSpan@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@UEAAXXZ.c)
 *     ?GetResult@GpuProfilerFrame@Engine@Spectre@@QEAA?AW4Status@123@AEAUResult@123@_N@Z @ 0x1800A2FDC (-GetResult@GpuProfilerFrame@Engine@Spectre@@QEAA-AW4Status@123@AEAUResult@123@_N@Z.c)
 * Callees:
 *     <none>
 */

Spectre::Engine::RenderDeviceQuery *__fastcall Spectre::Engine::RenderDeviceQuery::RenderDeviceQuery(
        Spectre::Engine::RenderDeviceQuery *this)
{
  Spectre::Engine::RenderDeviceQuery *result; // rax

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 4;
  *((_DWORD *)this + 9) = 4;
  result = this;
  *((_QWORD *)this + 5) = 0LL;
  *((_BYTE *)this + 48) = 1;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  return result;
}
