/*
 * XREFs of _Spectre::Engine::GpuProfiler::FramesData::WaitPendingFrames_::_1_::dtor$0 @ 0x1800EB2D8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::GpuProfiler::FramesData::WaitPendingFrames_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  std::lock_guard<Spectre::Engine::Mutex>::~lock_guard<Spectre::Engine::Mutex>((Spectre::Engine::Mutex **)(a2 + 288));
}
