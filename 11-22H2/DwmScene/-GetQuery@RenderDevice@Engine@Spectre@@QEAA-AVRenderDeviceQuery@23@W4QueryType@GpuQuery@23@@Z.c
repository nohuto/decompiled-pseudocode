/*
 * XREFs of ?GetQuery@RenderDevice@Engine@Spectre@@QEAA?AVRenderDeviceQuery@23@W4QueryType@GpuQuery@23@@Z @ 0x1800267C4
 * Callers:
 *     ??0MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA@W4MarkerType@123@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@1AEAVRenderDevice@23@@Z @ 0x1800A2708 (--0MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA@W4MarkerType@123@V-$shared_ptr@VCommand.c)
 *     ?Begin@GpuProfilerFrame@Engine@Spectre@@QEAAX_KV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@Z @ 0x1800A2948 (-Begin@GpuProfilerFrame@Engine@Spectre@@QEAAX_KV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@.c)
 *     ?End@GpuProfilerFrame@Engine@Spectre@@QEAAXXZ @ 0x1800A2D20 (-End@GpuProfilerFrame@Engine@Spectre@@QEAAXXZ.c)
 *     ?EndTimeSpan@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@UEAAXXZ @ 0x1800A2E40 (-EndTimeSpan@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@UEAAXXZ.c)
 *     ?Present@GpuProfilerFrame@Engine@Spectre@@QEAAXXZ @ 0x1800A3834 (-Present@GpuProfilerFrame@Engine@Spectre@@QEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?shared_from_this@?$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VScene@Engine@Spectre@@@2@XZ @ 0x180011D4C (-shared_from_this@-$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr@VSc.c)
 *     ??0RenderDeviceQuery@Engine@Spectre@@QEAA@V?$shared_ptr@VIGpuQueryPool@Engine@Spectre@@@std@@W4QueryType@GpuQuery@12@@Z @ 0x1800A1A38 (--0RenderDeviceQuery@Engine@Spectre@@QEAA@V-$shared_ptr@VIGpuQueryPool@Engine@Spectre@@@std@@W4Q.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Spectre::Engine::RenderDevice::GetQuery(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v6; // rax
  __int64 v8; // [rsp+28h] [rbp-30h] BYREF
  __int64 v9; // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+38h] [rbp-20h] BYREF
  std::_Ref_count_base *v11; // [rsp+40h] [rbp-18h]

  v6 = (_QWORD *)std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this(a1 + 8, &v10);
  v9 = 0LL;
  v8 = a1 + 4096;
  v9 = v6[1];
  *v6 = 0LL;
  v6[1] = 0LL;
  Spectre::Engine::RenderDeviceQuery::RenderDeviceQuery(a2, &v8, a3);
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  return a2;
}
