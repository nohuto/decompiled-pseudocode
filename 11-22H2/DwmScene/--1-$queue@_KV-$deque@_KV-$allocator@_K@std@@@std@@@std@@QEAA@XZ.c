/*
 * XREFs of ??1?$queue@_KV?$deque@_KV?$allocator@_K@std@@@std@@@std@@QEAA@XZ @ 0x1800A0C90
 * Callers:
 *     _Spectre::Engine::GpuProfiler::FramesData::FramesData_::_1_::dtor$1 @ 0x1800EB203 (_Spectre--Engine--GpuProfiler--FramesData--FramesData_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::queue<unsigned __int64>::~queue<unsigned __int64,std::deque<unsigned __int64>>(__int64 a1)
{
  std::deque<unsigned __int64>::~deque<unsigned __int64>(a1);
}
