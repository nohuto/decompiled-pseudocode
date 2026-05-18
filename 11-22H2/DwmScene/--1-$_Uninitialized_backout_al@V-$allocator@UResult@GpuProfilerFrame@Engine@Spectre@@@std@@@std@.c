/*
 * XREFs of ??1?$_Uninitialized_backout_al@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x18002B840
 * Callers:
 *     _std::_Uninitialized_value_construct_n_std::allocator_Spectre::Engine::GpuProfilerFrame::Result____::_1_::dtor$0 @ 0x1800E4F5E (_std--_Uninitialized_value_construct_n_std--allocator_Spectre--Engine--GpuProfilerFrame--Result_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Uninitialized_backout_al<std::allocator<Spectre::Engine::GpuProfilerFrame::Result>>::~_Uninitialized_backout_al<std::allocator<Spectre::Engine::GpuProfilerFrame::Result>>(
        __int64 *a1)
{
  return std::_Destroy_range<std::allocator<Spectre::Engine::GpuProfilerFrame::Result>>(*a1, a1[1]);
}
