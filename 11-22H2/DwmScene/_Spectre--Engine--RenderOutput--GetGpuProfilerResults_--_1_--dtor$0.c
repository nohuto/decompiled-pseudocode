/*
 * XREFs of _Spectre::Engine::RenderOutput::GetGpuProfilerResults_::_1_::dtor$0 @ 0x1800E511B
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x18002B8B8 (--1-$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V-$allocator@UResult@GpuProfilerFrame@Engin.c)
 */

__int64 __fastcall Spectre::Engine::RenderOutput::GetGpuProfilerResults_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return std::vector<Spectre::Engine::GpuProfilerFrame::Result>::~vector<Spectre::Engine::GpuProfilerFrame::Result>();
  }
  return result;
}
