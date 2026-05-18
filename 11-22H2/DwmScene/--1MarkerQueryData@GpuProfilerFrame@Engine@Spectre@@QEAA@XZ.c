/*
 * XREFs of ??1MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA@XZ @ 0x1800A0D94
 * Callers:
 *     ??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VMarkerQueryData@GpuProfilerFrame@Engine@Spectre@@@std@@QEAA@XZ @ 0x1800A0C68 (--1-$pair@$$CBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@VMarkerQueryData@Gpu.c)
 *     ?BeginTimeSpanMarker@GpuProfilerFrame@Engine@Spectre@@QEAAAEAVITimeSpanMarker@123@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VCommandList@Engine@Spectre@@@6@@Z @ 0x1800A2B30 (-BeginTimeSpanMarker@GpuProfilerFrame@Engine@Spectre@@QEAAAEAVITimeSpanMarker@123@V-$basic_strin.c)
 *     ?Stamp@GpuProfilerFrame@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VCommandList@Engine@Spectre@@@5@@Z @ 0x1800A38C8 (-Stamp@GpuProfilerFrame@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$allocator.c)
 *     _Spectre::Engine::GpuProfilerFrame::Stamp_::_1_::dtor$4 @ 0x1800EB540 (_Spectre--Engine--GpuProfilerFrame--Stamp_--_1_--dtor$4.c)
 * Callees:
 *     ??1RenderDeviceQuery@Engine@Spectre@@QEAA@XZ @ 0x1800A1BD8 (--1RenderDeviceQuery@Engine@Spectre@@QEAA@XZ.c)
 *     ??1SharedMutex@Utils@Spectre@@QEAA@XZ @ 0x1800E0D30 (--1SharedMutex@Utils@Spectre@@QEAA@XZ.c)
 */

void __fastcall Spectre::Engine::GpuProfilerFrame::MarkerQueryData::~MarkerQueryData(
        Spectre::Engine::GpuProfilerFrame::MarkerQueryData *this)
{
  Spectre::Engine::RenderDeviceQuery::~RenderDeviceQuery((Spectre::Engine::GpuProfilerFrame::MarkerQueryData *)((char *)this + 216));
  Spectre::Engine::RenderDeviceQuery::~RenderDeviceQuery((Spectre::Engine::GpuProfilerFrame::MarkerQueryData *)((char *)this + 32));
  Spectre::Utils::SharedMutex::~SharedMutex((Spectre::Engine::GpuProfilerFrame::MarkerQueryData *)((char *)this + 8));
  *(_QWORD *)this = &Spectre::Engine::GpuProfilerFrame::ITimeSpanMarker::`vftable';
}
