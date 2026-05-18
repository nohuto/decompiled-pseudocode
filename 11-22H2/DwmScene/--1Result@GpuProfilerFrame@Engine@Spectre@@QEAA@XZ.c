/*
 * XREFs of ??1Result@GpuProfilerFrame@Engine@Spectre@@QEAA@XZ @ 0x18002BA34
 * Callers:
 *     _Spectre::Engine::RenderOutput::GetGpuProfilerResults_::_1_::dtor$1 @ 0x1800E514B (_Spectre--Engine--RenderOutput--GetGpuProfilerResults_--_1_--dtor$1.c)
 *     _Spectre::Engine::RenderOutput::GetGpuProfilerResults_::_1_::dtor$2 @ 0x1800E515D (_Spectre--Engine--RenderOutput--GetGpuProfilerResults_--_1_--dtor$2.c)
 *     _Spectre::Engine::GpuProfiler::FramesData::Update_::_1_::dtor$1 @ 0x1800EB2C6 (_Spectre--Engine--GpuProfiler--FramesData--Update_--_1_--dtor$1.c)
 *     _Spectre::Engine::GpuProfiler::FramesData::WaitPendingFrames_::_1_::dtor$1 @ 0x1800EB2EA (_Spectre--Engine--GpuProfiler--FramesData--WaitPendingFrames_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::GpuProfilerFrame::Result::~Result(void **this)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>>>::_Erase_head<std::allocator<std::_Tree_node<std::pair<std::string const,Spectre::Engine::GpuProfilerFrame::MarkerResult>,void *>>>(
    this + 17,
    (__int64)(this + 17));
}
