/*
 * XREFs of ??$_Resize@U_Value_init_tag@std@@@?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180073E58
 * Callers:
 *     ??0GpuProfilingGrapher@Engine@Spectre@@QEAA@XZ @ 0x180074010 (--0GpuProfilingGrapher@Engine@Spectre@@QEAA@XZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@YAXPEAUResult@GpuProfilerFrame@Engine@Spectre@@QEAU1234@AEAV?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@0@@Z @ 0x18002AA18 (--$_Destroy_range@V-$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@YAXPEAUResul.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180073EEC (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@YAPEAUResult@GpuProfilerFrame@Engine@Spectre@@PEAU1234@_KAEAV?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@0@@Z @ 0x180073FA0 (--$_Uninitialized_value_construct_n@V-$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@.c)
 */

void __fastcall std::vector<Spectre::Engine::GpuProfilerFrame::Result>::_Resize<std::_Value_init_tag>(__int64 *a1)
{
  __int64 v1; // r8
  unsigned __int64 v3; // rcx
  __int64 v4; // rbx

  v1 = *a1;
  v3 = 0x86BCA1AF286BCA1BuLL * ((a1[1] - *a1) >> 3);
  if ( v3 <= 0xF0 )
  {
    if ( v3 < 0xF0 )
    {
      if ( 0x86BCA1AF286BCA1BuLL * ((a1[2] - v1) >> 3) >= 0xF0 )
        a1[1] = std::_Uninitialized_value_construct_n<std::allocator<Spectre::Engine::GpuProfilerFrame::Result>>((Spectre::Engine::GpuProfilerFrame::Result *)a1[1]);
      else
        std::vector<Spectre::Engine::GpuProfilerFrame::Result>::_Resize_reallocate<std::_Value_init_tag>(a1);
    }
  }
  else
  {
    v4 = v1 + 36480;
    std::_Destroy_range<std::allocator<Spectre::Engine::GpuProfilerFrame::Result>>(v1 + 36480, a1[1]);
    a1[1] = v4;
  }
}
