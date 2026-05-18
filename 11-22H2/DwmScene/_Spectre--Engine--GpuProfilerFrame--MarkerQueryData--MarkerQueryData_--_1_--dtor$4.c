/*
 * XREFs of _Spectre::Engine::GpuProfilerFrame::MarkerQueryData::MarkerQueryData_::_1_::dtor$4 @ 0x1800EB47D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::GpuProfilerFrame::MarkerQueryData::MarkerQueryData_::_1_::dtor_4(
        __int64 a1,
        __int64 a2)
{
  std::lock_guard<Spectre::Engine::Mutex>::~lock_guard<Spectre::Engine::Mutex>((Spectre::Engine::Mutex **)(a2 + 88));
}
