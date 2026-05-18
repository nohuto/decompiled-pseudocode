/*
 * XREFs of _Spectre::Engine::GpuProfilerFrame::MarkerQueryData::MarkerQueryData_::_1_::dtor$5 @ 0x1800EB48F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::GpuProfilerFrame::MarkerQueryData::MarkerQueryData_::_1_::dtor_5(
        __int64 a1,
        __int64 a2)
{
  std::lock_guard<Spectre::Engine::Mutex>::~lock_guard<Spectre::Engine::Mutex>((Spectre::Engine::Mutex **)(a2 + 96));
}
