/*
 * XREFs of ??1?$lock_guard@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180025A50
 * Callers:
 *     _Spectre::Engine::RenderDevice::QueryPool::GetQuery_::_1_::dtor$0 @ 0x1800E4D74 (_Spectre--Engine--RenderDevice--QueryPool--GetQuery_--_1_--dtor$0.c)
 *     _Spectre::Engine::RenderDevice::QueryPool::ReleaseQuery_::_1_::dtor$0 @ 0x1800E4D98 (_Spectre--Engine--RenderDevice--QueryPool--ReleaseQuery_--_1_--dtor$0.c)
 *     _Spectre::Engine::CpuProfiler::BeginTimeSpanMarker_::_1_::dtor$0 @ 0x1800EB1BB (_Spectre--Engine--CpuProfiler--BeginTimeSpanMarker_--_1_--dtor$0.c)
 *     _Spectre::Engine::GpuProfilerFrame::MarkerQueryData::IsResultAvailable_::_1_::dtor$0 @ 0x1800EB1CD (_Spectre--Engine--GpuProfilerFrame--MarkerQueryData--IsResultAvailable_--_1_--dtor$0.c)
 *     _Spectre::Engine::GpuProfiler::FramesData::EndFrame_::_1_::dtor$0 @ 0x1800EB26C (_Spectre--Engine--GpuProfiler--FramesData--EndFrame_--_1_--dtor$0.c)
 *     _Spectre::Engine::GpuProfiler::FramesData::BeginTimeSpanMarker_::_1_::dtor$0 @ 0x1800EB27E (_Spectre--Engine--GpuProfiler--FramesData--BeginTimeSpanMarker_--_1_--dtor$0.c)
 *     _Spectre::Engine::GpuProfilerFrame::MarkerQueryData::GetResult_::_1_::dtor$0 @ 0x1800EB290 (_Spectre--Engine--GpuProfilerFrame--MarkerQueryData--GetResult_--_1_--dtor$0.c)
 *     _Spectre::Engine::GpuProfiler::FramesData::StampMarker_::_1_::dtor$0 @ 0x1800EB2A2 (_Spectre--Engine--GpuProfiler--FramesData--StampMarker_--_1_--dtor$0.c)
 *     _Spectre::Engine::GpuProfiler::FramesData::Update_::_1_::dtor$0 @ 0x1800EB2B4 (_Spectre--Engine--GpuProfiler--FramesData--Update_--_1_--dtor$0.c)
 *     _Spectre::Engine::GpuProfiler::FramesData::WaitPendingFrames_::_1_::dtor$0 @ 0x1800EB2D8 (_Spectre--Engine--GpuProfiler--FramesData--WaitPendingFrames_--_1_--dtor$0.c)
 *     _Spectre::Engine::GpuProfilerFrame::MarkerQueryData::MarkerQueryData_::_1_::dtor$4 @ 0x1800EB47D (_Spectre--Engine--GpuProfilerFrame--MarkerQueryData--MarkerQueryData_--_1_--dtor$4.c)
 *     _Spectre::Engine::GpuProfilerFrame::MarkerQueryData::MarkerQueryData_::_1_::dtor$5 @ 0x1800EB48F (_Spectre--Engine--GpuProfilerFrame--MarkerQueryData--MarkerQueryData_--_1_--dtor$5.c)
 * Callees:
 *     ?unlock@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A5AC (-unlock@Mutex@Engine@Spectre@@QEAAXXZ.c)
 */

void __fastcall std::lock_guard<Spectre::Engine::Mutex>::~lock_guard<Spectre::Engine::Mutex>(
        Spectre::Engine::Mutex **a1)
{
  Spectre::Engine::Mutex::unlock(*a1);
}
