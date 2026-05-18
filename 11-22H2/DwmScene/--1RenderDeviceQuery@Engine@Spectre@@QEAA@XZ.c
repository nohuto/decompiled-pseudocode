/*
 * XREFs of ??1RenderDeviceQuery@Engine@Spectre@@QEAA@XZ @ 0x1800A1BD8
 * Callers:
 *     ??1GpuProfilerFrame@Engine@Spectre@@QEAA@XZ @ 0x1800A0D08 (--1GpuProfilerFrame@Engine@Spectre@@QEAA@XZ.c)
 *     ??1MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA@XZ @ 0x1800A0D94 (--1MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA@XZ.c)
 *     ?Begin@GpuProfilerFrame@Engine@Spectre@@QEAAX_KV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@Z @ 0x1800A2948 (-Begin@GpuProfilerFrame@Engine@Spectre@@QEAAX_KV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@.c)
 *     ?CheckQuery@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@AEAAXAEAVRenderDeviceQuery@34@AEA_K@Z @ 0x1800A2C50 (-CheckQuery@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@AEAAXAEAVRenderDeviceQuery@34@AEA_K.c)
 *     ?End@GpuProfilerFrame@Engine@Spectre@@QEAAXXZ @ 0x1800A2D20 (-End@GpuProfilerFrame@Engine@Spectre@@QEAAXXZ.c)
 *     ?EndTimeSpan@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@UEAAXXZ @ 0x1800A2E40 (-EndTimeSpan@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@UEAAXXZ.c)
 *     ?GetResult@GpuProfilerFrame@Engine@Spectre@@QEAA?AW4Status@123@AEAUResult@123@_N@Z @ 0x1800A2FDC (-GetResult@GpuProfilerFrame@Engine@Spectre@@QEAA-AW4Status@123@AEAUResult@123@_N@Z.c)
 *     ?Present@GpuProfilerFrame@Engine@Spectre@@QEAAXXZ @ 0x1800A3834 (-Present@GpuProfilerFrame@Engine@Spectre@@QEAAXXZ.c)
 *     _Spectre::Engine::GpuProfilerFrame::GpuProfilerFrame_::_1_::dtor$0 @ 0x1800EB37E (_Spectre--Engine--GpuProfilerFrame--GpuProfilerFrame_--_1_--dtor$0.c)
 *     _Spectre::Engine::GpuProfilerFrame::GpuProfilerFrame_::_1_::dtor$1 @ 0x1800EB390 (_Spectre--Engine--GpuProfilerFrame--GpuProfilerFrame_--_1_--dtor$1.c)
 *     _Spectre::Engine::GpuProfilerFrame::GpuProfilerFrame_::_1_::dtor$2 @ 0x1800EB3A9 (_Spectre--Engine--GpuProfilerFrame--GpuProfilerFrame_--_1_--dtor$2.c)
 *     _Spectre::Engine::GpuProfilerFrame::GpuProfilerFrame_::_1_::dtor$3 @ 0x1800EB3C2 (_Spectre--Engine--GpuProfilerFrame--GpuProfilerFrame_--_1_--dtor$3.c)
 *     _Spectre::Engine::GpuProfilerFrame::GpuProfilerFrame_::_1_::dtor$4 @ 0x1800EB3DB (_Spectre--Engine--GpuProfilerFrame--GpuProfilerFrame_--_1_--dtor$4.c)
 *     _Spectre::Engine::GpuProfilerFrame::MarkerQueryData::MarkerQueryData_::_1_::dtor$2 @ 0x1800EB44E (_Spectre--Engine--GpuProfilerFrame--MarkerQueryData--MarkerQueryData_--_1_--dtor$2.c)
 *     _Spectre::Engine::GpuProfilerFrame::MarkerQueryData::MarkerQueryData_::_1_::dtor$3 @ 0x1800EB464 (_Spectre--Engine--GpuProfilerFrame--MarkerQueryData--MarkerQueryData_--_1_--dtor$3.c)
 *     _Spectre::Engine::GpuProfilerFrame::MarkerQueryData::MarkerQueryData_::_1_::dtor$4_0 @ 0x1800EB4C9 (_Spectre--Engine--GpuProfilerFrame--MarkerQueryData--MarkerQueryData_--_1_--dtor$4_0.c)
 *     _Spectre::Engine::GpuProfilerFrame::MarkerQueryData::MarkerQueryData_::_1_::dtor$5_0 @ 0x1800EB4DF (_Spectre--Engine--GpuProfilerFrame--MarkerQueryData--MarkerQueryData_--_1_--dtor$5_0.c)
 *     _Spectre::Engine::GpuProfilerFrame::Begin_::_1_::dtor$7 @ 0x1800EB50A (_Spectre--Engine--GpuProfilerFrame--Begin_--_1_--dtor$7.c)
 *     _Spectre::Engine::GpuProfilerFrame::MarkerQueryData::CheckQuery_::_1_::dtor$1 @ 0x1800EB552 (_Spectre--Engine--GpuProfilerFrame--MarkerQueryData--CheckQuery_--_1_--dtor$1.c)
 *     _Spectre::Engine::GpuProfilerFrame::Present_::_1_::dtor$0 @ 0x1800EB564 (_Spectre--Engine--GpuProfilerFrame--Present_--_1_--dtor$0.c)
 *     _Spectre::Engine::GpuProfilerFrame::MarkerQueryData::EndTimeSpan_::_1_::dtor$7 @ 0x1800EB576 (_Spectre--Engine--GpuProfilerFrame--MarkerQueryData--EndTimeSpan_--_1_--dtor$7.c)
 *     _Spectre::Engine::GpuProfilerFrame::GetResult_::_1_::dtor$7 @ 0x1800EB588 (_Spectre--Engine--GpuProfilerFrame--GetResult_--_1_--dtor$7.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?ReleaseQuery@RenderDeviceQuery@Engine@Spectre@@AEAAXXZ @ 0x1800A210C (-ReleaseQuery@RenderDeviceQuery@Engine@Spectre@@AEAAXXZ.c)
 */

void __fastcall Spectre::Engine::RenderDeviceQuery::~RenderDeviceQuery(std::_Ref_count_base **this)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx
  std::_Ref_count_base *v5; // rcx

  Spectre::Engine::RenderDeviceQuery::ReleaseQuery((Spectre::Engine::RenderDeviceQuery *)this);
  v2 = this[21];
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = this[19];
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  v4 = this[3];
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  v5 = this[1];
  if ( v5 )
    std::_Ref_count_base::_Decwref(v5);
}
