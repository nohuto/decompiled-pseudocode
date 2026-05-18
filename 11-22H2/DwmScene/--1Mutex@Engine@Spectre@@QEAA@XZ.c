/*
 * XREFs of ??1Mutex@Engine@Spectre@@QEAA@XZ @ 0x180025B60
 * Callers:
 *     _Spectre::Engine::RenderDevice::QueryPool::QueryPool_::_1_::dtor$1 @ 0x1800E4B8F (_Spectre--Engine--RenderDevice--QueryPool--QueryPool_--_1_--dtor$1.c)
 *     _Spectre::Engine::Scene::Scene_::_1_::dtor$5 @ 0x1800E6650 (_Spectre--Engine--Scene--Scene_--_1_--dtor$5.c)
 *     _Spectre::Engine::ShaderFamily::ShaderFamily_::_1_::dtor$14 @ 0x1800E7C9F (_Spectre--Engine--ShaderFamily--ShaderFamily_--_1_--dtor$14.c)
 *     _Spectre::Engine::GpuProfiler::FramesData::FramesData_::_1_::dtor$0 @ 0x1800EB1F1 (_Spectre--Engine--GpuProfiler--FramesData--FramesData_--_1_--dtor$0.c)
 *     _Spectre::Engine::GpuProfilerFrame::MarkerQueryData::MarkerQueryData_::_1_::dtor$1_0 @ 0x1800EB438 (_Spectre--Engine--GpuProfilerFrame--MarkerQueryData--MarkerQueryData_--_1_--dtor$1_0.c)
 *     _Spectre::Engine::GpuProfilerFrame::MarkerQueryData::MarkerQueryData_::_1_::dtor$3_0 @ 0x1800EB4B3 (_Spectre--Engine--GpuProfilerFrame--MarkerQueryData--MarkerQueryData_--_1_--dtor$3_0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall Spectre::Engine::Mutex::~Mutex(Spectre::Engine::Mutex *this)
{
  Spectre::Utils::SharedMutex::~SharedMutex(this);
}
