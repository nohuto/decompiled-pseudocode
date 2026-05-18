/*
 * XREFs of ??$_Uninitialized_value_construct_n@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@YAPEAUResult@GpuProfilerFrame@Engine@Spectre@@PEAU1234@_KAEAV?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@0@@Z @ 0x180073FA0
 * Callers:
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180073E58 (--$_Resize@U_Value_init_tag@std@@@-$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V-$allocator.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180073EEC (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V.c)
 * Callees:
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     ??$_Destroy_range@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@YAXPEAUResult@GpuProfilerFrame@Engine@Spectre@@QEAU1234@AEAV?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@0@@Z @ 0x18002AA18 (--$_Destroy_range@V-$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@YAXPEAUResul.c)
 *     ??0Result@GpuProfilerFrame@Engine@Spectre@@QEAA@XZ @ 0x18002B740 (--0Result@GpuProfilerFrame@Engine@Spectre@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
Spectre::Engine::GpuProfilerFrame::Result *__fastcall std::_Uninitialized_value_construct_n<std::allocator<Spectre::Engine::GpuProfilerFrame::Result>>(
        Spectre::Engine::GpuProfilerFrame::Result *this,
        __int64 a2)
{
  __int64 i; // rdi

  for ( i = a2; i; --i )
  {
    memset_0(this, 0, 0x98uLL);
    Spectre::Engine::GpuProfilerFrame::Result::Result(this);
    this = (Spectre::Engine::GpuProfilerFrame::Result *)((char *)this + 152);
  }
  std::_Destroy_range<std::allocator<Spectre::Engine::GpuProfilerFrame::Result>>((__int64)this, (__int64)this);
  return this;
}
